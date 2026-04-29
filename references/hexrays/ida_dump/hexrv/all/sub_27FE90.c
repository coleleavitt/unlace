unsigned __int64 __fastcall sub_27FE90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // r8d
  int v4; // r9d
  __m128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-E8h] BYREF
  int v12; // [rsp+8h] [rbp-E0h]
  __int64 v13; // [rsp+10h] [rbp-D8h]
  __int128 v14; // [rsp+18h] [rbp-D0h]
  __int64 v15; // [rsp+28h] [rbp-C0h]
  __int128 v16; // [rsp+30h] [rbp-B8h]
  __m128 v17; // [rsp+40h] [rbp-A8h]
  __int64 v18; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall **v19)(); // [rsp+60h] [rbp-88h] BYREF
  int v20; // [rsp+68h] [rbp-80h]
  __int64 v21; // [rsp+70h] [rbp-78h]
  __int128 v22; // [rsp+78h] [rbp-70h]
  __int64 v23; // [rsp+88h] [rbp-60h]
  __int128 v24; // [rsp+90h] [rbp-58h]
  __m128 v25; // [rsp+A0h] [rbp-48h]
  __int64 v26; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v27; // [rsp+B8h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v14 = 0;
  v16 = 0;
  v12 = 2;
  v13 = 0;
  v15 = 0;
  v18 = 0;
  v11 = (__int64 (__fastcall **)())&off_4B3338;
  v17 = _mm_loadh_ps((const double *)(a1 + 216));
  if ( (unsigned int)sub_251790((__int64)&v11, a1 + 16, 0) )
  {
    if ( !under_debugger )
      sub_37DDE0(50613);
    BUG();
  }
  sub_23B150(a1, 3, v1, v2, v3, v4);
  sub_3201D0(a1, 0, 0);
  v20 = 2;
  v22 = 0;
  v24 = 0;
  v5 = _mm_loadh_ps((const double *)(a1 + 216));
  v21 = 0;
  v23 = 0;
  v26 = 0;
  v19 = (__int64 (__fastcall **)())&off_4B3378;
  v25 = v5;
  while ( 1 )
  {
    if ( (int)sub_250E80((__int64 *)&v19, a1 + 16, 0) > 0 )
    {
      if ( SHIDWORD(v26) <= 0 )
        goto LABEL_4;
      goto LABEL_7;
    }
    if ( SHIDWORD(v26) <= 0 )
      break;
LABEL_7:
    HIDWORD(v26) = 0;
    sub_2539C0(a1);
LABEL_4:
    sub_133F80(*(_QWORD *)(a1 + 8));
  }
  sub_3201D0(a1, 0, 1);
  sub_23B150(a1, 4, v6, v7, v8, v9);
  v19 = off_4AE778;
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  v11 = off_4AE778;
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v27 - __readfsqword(0x28u);
}
