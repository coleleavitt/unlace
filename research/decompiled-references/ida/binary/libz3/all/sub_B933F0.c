__int64 __fastcall sub_B933F0(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rdx
  __int64 v6; // rdx
  int v7; // edx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rbp
  __int64 v12; // r12

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 176LL);
  if ( (char *)v5 == (char *)sub_B79E20 )
  {
    v6 = *(_QWORD *)(a1 + 1368);
    if ( v6 )
      v7 = *(_DWORD *)(v6 - 4);
    else
      v7 = 0;
    if ( *(_DWORD *)(a1 + 1376) != v7 )
      goto LABEL_5;
  }
  else if ( v5() )
  {
    v4 = *(_QWORD *)a1;
LABEL_5:
    (*(void (__fastcall **)(__int64))(v4 + 184))(a1);
    return 1;
  }
  if ( !(unsigned __int8)sub_B8C320(a1, a2) )
    return 1;
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 - 4);
    if ( v10 > 0 )
    {
      v11 = 0;
      v12 = 8LL * (unsigned int)(v10 - 1);
      while ( !(unsigned __int8)sub_966310(a1, *(__int64 **)(v9 + v11)) )
      {
        if ( v12 == v11 )
          return 2 * (unsigned int)*(unsigned __int8 *)(a1 + 1426);
        v9 = *(_QWORD *)(a1 + 32);
        v11 += 8;
      }
      sub_B92DF0(a1, a2, a3, a4);
      if ( (unsigned __int8)sub_B85320(a1, a1 + 1624) )
        return 1;
    }
  }
  return 2 * (unsigned int)*(unsigned __int8 *)(a1 + 1426);
}

