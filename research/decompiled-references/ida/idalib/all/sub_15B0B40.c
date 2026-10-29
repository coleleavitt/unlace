unsigned __int64 __fastcall sub_15B0B40(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, int a5)
{
  int v5; // eax
  unsigned __int64 result; // rax
  __int64 v8; // r15
  int v10; // eax
  _QWORD *v11; // rbx
  __int64 v12; // r13
  __int64 i; // r15
  int v14; // eax
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  unsigned __int64 *v18; // rax

  v5 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 108) = a5;
  *(_DWORD *)(a1 + 92) = a5;
  result = a4 & 0x7FFFFFFF | v5 & 0x80000000;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 120) = result;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = a2;
  *(_DWORD *)(a1 + 84) = a5;
  if ( !a4 )
    return result;
  v8 = 112 * a4;
  v10 = *(unsigned __int8 *)(a1 + 721);
  if ( (v10 & 1) == 0 && a4 <= 0x10 )
  {
    v11 = (_QWORD *)(a1 + 856);
    result = v10 | 1u;
    *(_BYTE *)(a1 + 123) &= ~0x80u;
    *(_QWORD *)(a1 + 112) = a1 + 856;
    *(_BYTE *)(a1 + 721) = result;
    goto LABEL_10;
  }
  v12 = a4 - 1;
  if ( a4 <= 0x124924924924924LL )
  {
    v18 = (unsigned __int64 *)operator new[](v8 + 8);
    *v18 = a4;
    v11 = v18 + 1;
LABEL_7:
    result = (unsigned __int64)v11;
    do
    {
      *(_DWORD *)(result + 8) = 0;
      result += 112LL;
      *(_BYTE *)(result - 16) = 0;
      *(_DWORD *)(result - 8) = 0;
      --v12;
    }
    while ( v12 >= 0 );
    goto LABEL_9;
  }
  result = operator new[](0xFFFFFFFFFFFFFFFFLL);
  *(_QWORD *)result = a4;
  v11 = (_QWORD *)(result + 8);
  if ( v12 >= 0 )
    goto LABEL_7;
LABEL_9:
  *(_BYTE *)(a1 + 123) |= 0x80u;
  *(_QWORD *)(a1 + 112) = v11;
LABEL_10:
  for ( i = a3 + v8; i != a3; *((_DWORD *)v11 - 2) = result )
  {
    *v11 = *(_QWORD *)a3;
    v14 = *(_DWORD *)(a3 + 8);
    *((_BYTE *)v11 + 96) = 0;
    *((_DWORD *)v11 + 2) = v14;
    if ( *(_BYTE *)(a3 + 96) )
    {
      v15 = *(_QWORD *)(a3 + 16);
      *((_DWORD *)v11 + 8) = 0;
      *((_DWORD *)v11 + 9) = 2;
      v11[2] = v15;
      v16 = *(_DWORD *)(a3 + 32);
      v11[3] = v11 + 5;
      if ( v16 )
        sub_147FF00((char ***)v11 + 3, (char ***)(a3 + 24));
      v17 = *(_QWORD *)(a3 + 56);
      *((_DWORD *)v11 + 18) = 0;
      *((_DWORD *)v11 + 19) = 2;
      v11[7] = v17;
      v11[8] = v11 + 10;
      if ( *(_DWORD *)(a3 + 72) )
        sub_147FF00((char ***)v11 + 8, (char ***)(a3 + 64));
      *((_BYTE *)v11 + 96) = 1;
    }
    result = *(unsigned int *)(a3 + 104);
    a3 += 112;
    v11 += 14;
  }
  return result;
}
