unsigned __int64 __fastcall sub_283C90(__int64 a1, char a2)
{
  __m128 v3; // xmm0
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __m128 v12; // xmm1
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-88h] BYREF
  int v14; // [rsp+8h] [rbp-80h]
  __int64 v15; // [rsp+10h] [rbp-78h]
  __int128 v16; // [rsp+18h] [rbp-70h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int128 v18; // [rsp+30h] [rbp-58h]
  __m128 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-38h]
  unsigned __int64 v21; // [rsp+58h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( a2 )
  {
    v12 = _mm_loadh_ps((const double *)(a1 + 216));
    v14 = 2;
    v15 = 0;
    v17 = 0;
    v20 = 0;
    v13 = (__int64 (__fastcall **)())&off_4E0878;
    v16 = 0;
    v18 = 0;
    v19 = v12;
    sub_256390((__int64)&v13, a1 + 16, 0);
    v13 = off_4DBCF8;
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
  }
  v14 = 2;
  v16 = 0;
  v18 = 0;
  v15 = 0;
  v3 = _mm_loadh_ps((const double *)(a1 + 216));
  v17 = 0;
  v20 = 0;
  v13 = (__int64 (__fastcall **)())&off_4E08B8;
  v19 = v3;
  do
  {
    sub_2583C0(a1);
    LODWORD(v20) = 0;
    v4 = sub_255A80((__int64 *)&v13, a1 + 16, 0);
    v5 = HIDWORD(v20);
    if ( HIDWORD(v20) )
    {
      HIDWORD(v20) = 0;
      v4 += v5;
      sub_2585C0(a1);
    }
    v6 = *(_QWORD *)(a1 + 8);
    LODWORD(v20) = v4 + v20;
    sub_138440(v6);
  }
  while ( (_DWORD)v20 );
  if ( a2 )
    sub_23FD50(a1, 2, v7, v8, v9, v10);
  sub_3252D0(a1, 0, 0);
  v13 = off_4DBCF8;
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v21 - __readfsqword(0x28u);
}
