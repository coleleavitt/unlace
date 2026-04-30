unsigned __int64 __fastcall sub_2873B0(__int64 a1, __int64 a2)
{
  __int16 v4; // ax
  __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  _QWORD *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-138h] BYREF
  __int128 v14; // [rsp+8h] [rbp-130h]
  __int64 v15; // [rsp+30h] [rbp-108h]
  __int128 v16; // [rsp+38h] [rbp-100h]
  _BYTE v17[64]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v18[16]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v19[88]; // [rsp+A0h] [rbp-98h] BYREF
  __int16 v20; // [rsp+F8h] [rbp-40h]
  __int16 v21; // [rsp+100h] [rbp-38h]
  unsigned __int64 v22; // [rsp+118h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v13 = 0;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  *(_DWORD *)a2 = -1;
  linearray_t_ctr(&v13, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 728LL));
  linearray_t_set_place(&v13, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 928LL));
  sub_283F90((__int64)v17, a1);
  v4 = v20;
  if ( (_DWORD)v14 )
  {
    v12 = (_QWORD *)linearray_t_down(&v13);
    if ( v12[1] )
      v4 = tag_strlen(*v12);
    else
      v4 = tag_strlen(&s1);
  }
  *(_WORD *)(a2 + 4) = v4;
  v5 = v21 - 1;
  if ( (__int16)(v21 - 1) < 0 )
    v5 = 0;
  *(_WORD *)(a2 + 6) = v5;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v19);
  QT::QFont::~QFont((QT::QFont *)v18);
  linearray_t_dtr(&v13);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, (const char *)a1);
  }
  v6 = v13;
  if ( v13 )
  {
    v7 = v14;
    if ( (_QWORD)v14 )
    {
      v8 = 0;
      do
      {
        v9 = (__int64 *)(v6 + 24 * v8);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, (const char *)a1);
          v6 = v13;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v14 = 0;
    qfree(v6, (const char *)a1);
  }
  return v22 - __readfsqword(0x28u);
}
