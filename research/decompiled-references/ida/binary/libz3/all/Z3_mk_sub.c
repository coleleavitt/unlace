__int64 __fastcall Z3_mk_sub(__int64 a1, int a2, __int64 *a3)
{
  char v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rdi
  const double *v9; // [rsp+8h] [rbp-48h]
  int v10[4]; // [rsp+10h] [rbp-40h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_296010();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, nullptr);
      sub_2BB620(0);
      v6 = 0;
      goto LABEL_13;
    }
    v6 = *a3;
    if ( a2 == 1 )
    {
      sub_251FD0(a1, *a3);
LABEL_12:
      sub_2BB620(v6);
LABEL_13:
      byte_1C7EBA0 = 1;
      return v6;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, nullptr);
      return 0;
    }
    v6 = *a3;
    if ( a2 == 1 )
    {
      sub_251FD0(a1, *a3);
      return v6;
    }
  }
  v9 = (const double *)(a3 + 1);
  do
  {
    v7 = *(_QWORD *)(a1 + 232);
    *(__m128 *)v10 = _mm_loadh_ps(v9);
    v6 = sub_15DCAD0(v7, (int)v10, 0);
    sub_24FE40(a1, v6);
    ++v9;
  }
  while ( v9 != (const double *)&a3[(unsigned int)(a2 - 2) + 2] );
  sub_251FD0(a1, v6);
  if ( v5 )
    goto LABEL_12;
  return v6;
}

