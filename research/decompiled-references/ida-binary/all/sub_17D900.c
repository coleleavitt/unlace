__int64 __fastcall sub_17D900(__int64 a1, const QT::QObject **a2)
{
  const QT::QObject *v2; // rsi
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-B0h]
  __int64 v15; // [rsp+10h] [rbp-A8h]
  int v16; // [rsp+18h] [rbp-A0h]
  __int64 v17; // [rsp+20h] [rbp-98h]
  __int128 v18; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h] BYREF
  int v20; // [rsp+48h] [rbp-70h]
  char v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  int v23; // [rsp+60h] [rbp-58h]
  __int64 v24; // [rsp+68h] [rbp-50h]
  __int128 v25; // [rsp+70h] [rbp-48h]
  __int64 v26; // [rsp+80h] [rbp-38h]
  char v27; // [rsp+88h] [rbp-30h]
  unsigned __int64 v28; // [rsp+98h] [rbp-20h]

  v2 = *a2;
  v28 = __readfsqword(0x28u);
  v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v2);
  if ( !v3 )
    return 7;
  v18 = 0;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v14 = 0;
  v15 = -1;
  v16 = -1;
  v17 = 0;
  v20 = -1;
  v21 = 0;
  v22 = -1;
  v23 = -2;
  v24 = -1;
  v26 = 0xFFFFFFFFLL;
  v27 = 0;
  v25 = 0;
  v4 = ((__int64 (__fastcall *)(__int64, int *, __int64))sub_1ED900)(v3, &v13, 2);
  v7 = (unsigned int)(v4 - 1);
  if ( ((unsigned int)v7 <= 2 || (v8 = 7, v4 == 5)) && (v8 = 3, (unsigned __int64)v18 <= 1) )
  {
    v8 = 7;
    if ( v23 >= -1 )
    {
LABEL_6:
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24, &v13, v7, v5, v6);
      }
    }
  }
  else if ( v23 >= -1 )
  {
    goto LABEL_6;
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17, &v13, v9, v10, v11);
  }
  return v8;
}
