__int64 __fastcall sub_1936E0(const QT::QObject **a1)
{
  const QT::QObject *v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 tinfo_tid; // rax
  unsigned int v21; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+10h] [rbp-A8h]
  int v24; // [rsp+18h] [rbp-A0h]
  __int64 v25; // [rsp+20h] [rbp-98h]
  __int128 v26; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h] BYREF
  int v28; // [rsp+48h] [rbp-70h]
  char v29; // [rsp+50h] [rbp-68h]
  __int64 v30; // [rsp+58h] [rbp-60h]
  int v31; // [rsp+60h] [rbp-58h]
  __int64 v32; // [rsp+68h] [rbp-50h]
  __int128 v33; // [rsp+70h] [rbp-48h]
  __int64 v34; // [rsp+80h] [rbp-38h]
  char v35; // [rsp+88h] [rbp-30h]
  unsigned __int64 v36; // [rsp+98h] [rbp-20h]

  v1 = *a1;
  v36 = __readfsqword(0x28u);
  v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v1);
  if ( !v3 )
    return 0;
  v7 = &v21;
  v26 = 0;
  v21 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v22 = 0;
  v23 = -1;
  v24 = -1;
  v25 = 0;
  v28 = -1;
  v29 = 0;
  v30 = -1;
  v31 = -2;
  v32 = -1;
  v34 = 0xFFFFFFFFLL;
  v35 = 0;
  v33 = 0;
  v8 = sub_1ED900(v3, &v21, 2, v4, v5, v6);
  v11 = (unsigned int)(v8 - 1);
  v12 = 0;
  if ( ((unsigned int)v11 <= 2 || v8 == 5) && (unsigned __int64)v26 > 1 )
  {
    if ( v21 > 3 )
    {
      if ( v21 != 5 )
        goto LABEL_5;
      v18 = si128.m128i_i64[0];
    }
    else
    {
      if ( v21 <= 1 )
      {
        if ( v21 != 1 )
          goto LABEL_5;
        v7 = (_DWORD *)&byte_4;
        v17 = sub_3ED8F0(v22, v23);
        v11 = (get_flags_ex(v17, 4) & 0xF00000) != 11534336;
        if ( v17 != -1 )
          goto LABEL_16;
        goto LABEL_21;
      }
      if ( v28 == -1 )
      {
        tinfo_tid = get_tinfo_tid(&si128.m128i_u64[1], 0);
        goto LABEL_25;
      }
      if ( (get_tinfo_property(si128.m128i_i64[1], 2) & 0x3F) == 0x2D )
      {
        tinfo_tid = get_tinfo_property4(si128.m128i_i64[1], 299, v28, 0, 0, 0);
LABEL_25:
        v18 = tinfo_tid;
        goto LABEL_19;
      }
      if ( (get_tinfo_property(si128.m128i_i64[1], 2) & 0x2F) == 0xD )
      {
        tinfo_tid = get_tinfo_property4(si128.m128i_i64[1], 297, v28, 0, 0, 0);
        goto LABEL_25;
      }
      v18 = -1;
    }
LABEL_19:
    v7 = (unsigned int *)(&dword_0 + 3);
    v19 = sub_3ED590(v18, 3);
    v17 = v19;
    if ( v19 != -1 )
    {
      v11 = (unsigned int)sub_192880(v19);
LABEL_16:
      v7 = (unsigned int *)a1;
      v12 = sub_3AEEE0(v17, a1, v11);
      goto LABEL_5;
    }
LABEL_21:
    v12 = 1;
  }
LABEL_5:
  if ( v31 >= -1 && v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v7, v11, v9, v10);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v7, v13, v14, v15);
  }
  return v12;
}
