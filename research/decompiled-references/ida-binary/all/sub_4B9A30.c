unsigned __int64 __fastcall sub_4B9A30(__int64 a1, const char *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  __int128 v13; // [rsp+10h] [rbp-38h]
  char v14; // [rsp+20h] [rbp-28h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v14 = 1;
  v12 = 0;
  v13 = 0;
  v11 = &app_t::on_dock_close_event;
  sub_4CF2F0(&v11);
  v2 = v12;
  if ( (unsigned __int64)v13 > 1 || !v14 )
  {
    v3 = v12 + 24 * v13;
    if ( v3 != v12 )
    {
      v4 = v12;
      do
      {
        a2 = nullptr;
        v5 = sub_4B8020(v4, 0, nullptr);
        if ( v5 )
        {
          *(__m128i *)(v5 + 72) = _mm_load_si128((const __m128i *)&xmmword_5DC310);
          QT::QByteArray::clear((QT::QByteArray *)(v5 + 88));
        }
        v4 += 24;
      }
      while ( v3 != v4 );
      v2 = v12;
    }
  }
  v11 = &app_t::on_dock_close_event;
  if ( v2 )
  {
    v6 = v13;
    if ( (_QWORD)v13 )
    {
      v7 = 0;
      do
      {
        v8 = (__int64 *)(v2 + 24 * v7);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v2 = v12;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v2, a2);
  }
  return v15 - __readfsqword(0x28u);
}
