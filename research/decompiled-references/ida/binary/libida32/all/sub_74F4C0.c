__int64 __fastcall sub_74F4C0(_DWORD *a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rsi
  int v11; // edi
  __int64 v12; // rdx

  v3 = dword_2CAA4F0;
  *a1 = 0;
  v4 = v3 - 1;
  dword_2CAA4F0 = v4;
  if ( v4 < 0 )
    __longjmp_chk();
  v5 = (unsigned int)v4;
  result = 0;
  v9 = 16 * (v5 + 125);
  v10 = &byte_2CA2EE0[v9];
  *(_QWORD *)v10 = a2;
  *((_WORD *)v10 + 4) = 0;
  *((_WORD *)v10 + 5) = a3;
  if ( a3 <= 8u )
  {
    v11 = a3 - 1;
    v12 = v11;
    for ( result = v11 - 1LL; ; --result )
    {
      v10[v12] = *(_BYTE *)(a2 + v12);
      v12 = result;
      if ( result == v11 - 1LL - (unsigned int)v11 )
        break;
    }
  }
  *(_WORD *)a1 = v9;
  return result;
}

