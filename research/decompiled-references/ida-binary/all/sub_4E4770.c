__int64 __fastcall sub_4E4770(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebp
  __int64 v7; // rax
  QT::QCoreApplication *v8; // rdi
  __int64 v9; // rax
  __m128i v10; // xmm1
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v21; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+18h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+20h] [rbp-98h]
  char v24; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall **v25)(); // [rsp+40h] [rbp-78h] BYREF
  __int64 v26; // [rsp+48h] [rbp-70h]
  __m128i v27; // [rsp+50h] [rbp-68h]
  __int64 v28; // [rsp+60h] [rbp-58h] BYREF
  __int128 v29; // [rsp+68h] [rbp-50h]
  char v30; // [rsp+78h] [rbp-40h]
  int v31; // [rsp+80h] [rbp-38h]
  unsigned __int64 v32; // [rsp+88h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v3 = a1[420];
  if ( (v3 & 0x100) != 0 )
  {
    return 0;
  }
  else
  {
    if ( (v3 & 1) != 0 )
      return 1;
    if ( !a1 )
      goto LABEL_32;
    v7 = qword_8D1E60;
    a3 = qword_8D1E60 + 16 * xmmword_8D1E68;
    if ( qword_8D1E60 == a3 )
      goto LABEL_32;
    while ( a1 != *(_DWORD **)(v7 + 8) )
    {
      v7 += 16;
      if ( a3 == v7 )
        goto LABEL_32;
    }
    if ( v7 )
      v8 = *(QT::QCoreApplication **)v7;
    else
LABEL_32:
      v8 = nullptr;
    QT::QCoreApplication::sendPostedEvents(v8, (QT::QObject *)((char *)&stru_7C0.st_size + 1), a3);
    if ( (a1[420] & 1) != 0 )
    {
      return 1;
    }
    else
    {
      v9 = *(_QWORD *)a1;
      v24 = 0;
      v21 = 0;
      v20 = 0;
      v22 = 0;
      v23 = 0;
      (*(void (__fastcall **)(_DWORD *, __int64 *, __int64))(v9 + 208))(a1, &v20, 7);
      v10 = _mm_loadu_si128(&v21);
      v28 = 0;
      v30 = 0;
      v25 = &filtered_widget_mixin_update_strategy_t___vtable;
      v26 = v20;
      v20 = 0;
      v29 = 0;
      v27 = v10;
      v21 = 0;
      sub_4DE2E0(&v28, &v22);
      v31 = 7;
      v11 = sub_4E0CB0(a1, (__int64)&v25);
      v25 = &filtered_widget_mixin_update_strategy_t___vtable;
      v4 = v11;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v12 = v26;
      if ( v26 )
      {
        v13 = v27.m128i_i64[0];
        if ( v27.m128i_i64[0] )
        {
          v14 = 0;
          do
          {
            v15 = *(_QWORD *)(v12 + 32 * v14);
            if ( v15 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
              v12 = v26;
            }
            ++v14;
          }
          while ( v13 != v14 );
        }
        v27.m128i_i64[0] = 0;
        qfree(v12, (const char *)&v25);
      }
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      v16 = v20;
      if ( v20 )
      {
        v17 = v21.m128i_i64[0];
        if ( v21.m128i_i64[0] )
        {
          v18 = 0;
          do
          {
            v19 = *(_QWORD *)(v16 + 32 * v18);
            if ( v19 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
              v16 = v20;
            }
            ++v18;
          }
          while ( v17 != v18 );
        }
        v21.m128i_i64[0] = 0;
        qfree(v16, (const char *)&v25);
      }
    }
  }
  return v4;
}
