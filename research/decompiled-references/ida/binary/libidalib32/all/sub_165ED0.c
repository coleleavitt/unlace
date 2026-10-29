unsigned __int64 __fastcall sub_165ED0(__int64 a1)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 i; // rbp
  _QWORD *v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 (__fastcall *v10)(_QWORD *); // rax
  char *v11; // rdx
  _QWORD *v12; // rax
  void (__fastcall *v13)(__int64, _QWORD); // rax
  __int64 *v14; // rdi
  unsigned __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rax

  sub_163FD0();
  v3 = *(_QWORD *)(a1 + 600);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 592);
    if ( v4 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v4 + 72 * i);
        if ( v6[4] )
        {
          v6[5] = 0;
          qfree();
        }
        if ( v6[1] )
        {
          v6[2] = 0;
          qfree();
        }
        v4 = *(_QWORD *)(a1 + 592);
      }
      *(_QWORD *)(a1 + 600) = 0;
      qfree();
      *(_QWORD *)(a1 + 592) = 0;
      *(_QWORD *)(a1 + 608) = 0;
    }
    v7 = *(_QWORD **)(a1 + 632);
    while ( (_QWORD *)(a1 + 632) != v7 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      v9 = (_QWORD *)v8[2];
      v10 = *(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL);
      if ( v10 == sub_157D60 )
      {
        v11 = (char *)v9[2];
        v12 = (_QWORD *)(v9[1] + v9[3]);
        if ( ((unsigned __int8)v11 & 1) != 0 )
          v11 = *(char **)&v11[*v12 - 1];
        ((void (__fastcall *)(_QWORD *, __int64))v11)(v12, a1);
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, __int64))v10)(v9, a1);
      }
    }
  }
  qfree();
  qfree();
  v13 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 376);
  if ( v13 )
    v13(a1, *(_QWORD *)(a1 + 432));
  sub_163B70(a1);
  v14 = (__int64 *)qword_2532F8;
  if ( !qword_2532F8 )
  {
    v17 = operator new(0x18u);
    *(_QWORD *)v17 = 0;
    v14 = (__int64 *)v17;
    qword_2532F8 = v17;
    *(_OWORD *)(v17 + 8) = 0;
  }
  result = sub_165E00(v14, a1);
  v16 = *(_QWORD *)(a1 + 848);
  if ( v16 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  *(_QWORD *)(a1 + 864) = 0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 976) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 848) = 0;
  *(_OWORD *)(a1 + 960) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  return result;
}

