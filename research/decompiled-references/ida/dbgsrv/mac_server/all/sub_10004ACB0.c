/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004ACB0
// Address: 0x000000010004ACB0

//----- (000000010004ACB0) ----------------------------------------------------
__int64 __fastcall sub_10004ACB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 j; // r13
  int v5; // eax
  __int64 i; // r13
  int v7; // eax
  char v9[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+8h] [rbp-48h]
  char v11[8]; // [rsp+10h] [rbp-40h] BYREF
  __int64 v12; // [rsp+18h] [rbp-38h]

  sub_10004AB00(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v11[0] = 1;
      v12 = 0;
      LODWORD(v3) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
      if ( (_DWORD)v3 != 45 )
        break;
      sub_10004AB00(a1, (__int64)v11, 1);
      *(_QWORD *)(a2 + 8) -= v12;
    }
    if ( (_DWORD)v3 != 43 )
      break;
    sub_10004AB00(a1, (__int64)v11, 1);
    *(_QWORD *)(a2 + 8) += v12;
  }
  while ( 1 )
  {
    v9[0] = 1;
    v10 = 0;
    if ( (unsigned __int16)v3 != 15420 )
      break;
    sub_10004AB00(a1, (__int64)v9, 1);
    for ( i = v10; ; i += v12 )
    {
      while ( 1 )
      {
        v11[0] = 1;
        v12 = 0;
        v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
        if ( v7 != 45 )
          break;
        sub_10004AB00(a1, (__int64)v11, 1);
        i -= v12;
      }
      if ( v7 != 43 )
        break;
      sub_10004AB00(a1, (__int64)v11, 1);
    }
    v3 = *(_QWORD *)(a2 + 8) << i;
LABEL_8:
    *(_QWORD *)(a2 + 8) = v3;
    LOWORD(v3) = *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL);
  }
  if ( (unsigned __int16)v3 == 15934 )
  {
    sub_10004AB00(a1, (__int64)v9, 1);
    for ( j = v10; ; j += v12 )
    {
      while ( 1 )
      {
        v11[0] = 1;
        v12 = 0;
        v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
        if ( v5 != 45 )
          break;
        sub_10004AB00(a1, (__int64)v11, 1);
        j -= v12;
      }
      if ( v5 != 43 )
        break;
      sub_10004AB00(a1, (__int64)v11, 1);
    }
    v3 = *(_QWORD *)(a2 + 8) >> j;
    if ( !*(_BYTE *)a2 )
      v3 = *(__int64 *)(a2 + 8) >> j;
    goto LABEL_8;
  }
  return __stack_chk_guard;
}
