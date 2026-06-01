__int64 __fastcall sub_1A0A80(QT::QGuiApplication *this, __int64 a2, __int64 a3, _QWORD *a4)
{
  bool v4; // zf
  _QWORD *v5; // rax
  __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __m128i v10; // [rsp+0h] [rbp-98h] BYREF
  __int128 v11; // [rsp+10h] [rbp-88h]
  __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+28h] [rbp-70h]
  __int64 v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+38h] [rbp-60h]
  __int64 v16; // [rsp+40h] [rbp-58h]
  __int64 v17; // [rsp+48h] [rbp-50h]
  unsigned __int64 v18; // [rsp+50h] [rbp-48h]
  __int64 v19; // [rsp+58h] [rbp-40h]
  unsigned __int64 v20; // [rsp+68h] [rbp-30h]

  v4 = a4[1] == 0;
  v20 = __readfsqword(0x28u);
  if ( v4 )
    return sub_2DBF70(this);
  v10 = (__m128i)0x60uLL;
  v14 = 0xFFFFFFFFLL;
  v12 = -1;
  v18 = 0xFFFFFFFF00000000LL;
  v5 = (_QWORD *)*a4;
  v13 = 0;
  v15 = -1;
  v16 = 4;
  v17 = 9;
  v19 = 0;
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(QT::QGuiApplication *, _QWORD))(*(_QWORD *)this + 1136LL))(this, *v5);
  if ( !(unsigned __int8)sub_19A7A0(v6, &v10) || HIDWORD(v13) != 3 )
  {
    if ( v10.m128i_i64[1] )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10.m128i_i64[1], v10.m128i_i8);
    }
    return sub_2DBF70(this);
  }
  v8 = v12;
  v9 = sub_19A9A0((unsigned int)v13, (__int64)&v10);
  sub_386140(v9, v8, 0, 1);
  if ( v10.m128i_i64[1] )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10.m128i_i64[1], (const char *)v8);
  }
  return 1;
}
