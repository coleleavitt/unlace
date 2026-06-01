__int64 __fastcall ClpPESimplex::updateCompatibleRows(ClpPESimplex *this, int a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 (__fastcall *v5)(ClpPackedMatrix *); // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  unsigned int v9; // edx
  bool v10; // sf
  __int64 v11; // rsi
  int *v12; // rdx
  unsigned __int64 v13; // rcx
  _BYTE *v14; // rsi

  result = *((unsigned int *)this + 31);
  if ( (int)result <= a2 )
  {
    v14 = (_BYTE *)(*((_QWORD *)this + 11) + a2 - (int)result);
    if ( *v14 )
    {
      *v14 = 0;
      --*((_DWORD *)this + 18);
    }
  }
  else
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 192LL);
    if ( !v3 )
      BUG();
    v5 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v3;
    if ( v5 == ClpPackedMatrix::getPackedMatrix )
      v6 = *(_QWORD **)(v3 + 88);
    else
      v6 = (_QWORD *)v5((ClpPackedMatrix *)v3);
    v7 = v6[5];
    v8 = *(_DWORD *)(v6[6] + 4LL * a2);
    v9 = v8 + *(_DWORD *)(v6[7] + 4LL * a2);
    v10 = -*(_DWORD *)(v6[7] + 4LL * a2) < 0;
    result = v9;
    if ( v10 != __OFSUB__(v8, v9) )
    {
      v11 = *((_QWORD *)this + 11);
      v12 = (int *)(v7 + 4LL * v8);
      v13 = v7 + 4 * (v8 + (unsigned __int64)(unsigned int)(result - v8 - 1)) + 4;
      do
      {
        result = v11 + *v12;
        if ( *(_BYTE *)result )
        {
          *(_BYTE *)result = 0;
          --*((_DWORD *)this + 18);
        }
        ++v12;
      }
      while ( (int *)v13 != v12 );
    }
  }
  return result;
}

