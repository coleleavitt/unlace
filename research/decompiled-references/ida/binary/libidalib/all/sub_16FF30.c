__int64 sub_16FF30()
{
  __int64 v0; // rdx
  TView *v1; // rbx
  TView *v2; // rbp
  __m128i v3; // rax
  __m128i v5; // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+10h] [rbp-58h] BYREF
  __int128 v7; // [rsp+18h] [rbp-50h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+40h] [rbp-28h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v10 = 4194308;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v5.m128i_i64[0] = TView::getExtent(TProgram::deskTop);
  v5.m128i_i64[1] = v0;
  v1 = (TView *)sub_16FAA0(&v5);
  if ( v1 )
  {
    v2 = (TView *)operator new(0xB8u);
    v3.m128i_i64[0] = TView::getExtent(v1);
    v5 = v3;
    sub_154770(v2, (__int64)&v5, (TView ***)v1);
    if ( v2 )
      (*(void (__fastcall **)(__int64, TView *, __int64 *))(*(_QWORD *)(TProgram::application + 136LL) + 120LL))(
        TProgram::application + 136LL,
        v2,
        &v6);
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return 1;
}

