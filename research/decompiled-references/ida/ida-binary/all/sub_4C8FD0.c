void __fastcall sub_4C8FD0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v7; // r12
  __int64 *v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  _BOOL4 v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  __m128i v19; // xmm0
  const QT::QWidget *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64, const QT::QWidget *); // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __m128i si128; // [rsp+0h] [rbp-88h] BYREF
  char v27; // [rsp+17h] [rbp-71h]
  __int64 v28; // [rsp+18h] [rbp-70h]
  QT::QStackedWidget **v29; // [rsp+20h] [rbp-68h]
  void (__fastcall *v30)(QT::QStackedWidget **, _QWORD); // [rsp+28h] [rbp-60h]
  void *src[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v7 = nullptr;
  v8 = nullptr;
  v27 = a3;
  v33 = __readfsqword(0x28u);
  v9 = 0;
  si128.m128i_i64[0] = (__int64)src;
  do
  {
    v10 = (unsigned __int64)v7 + 31;
    v11 = v9 != 0;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *v7 > 1 )
        {
          if ( v9 )
            goto LABEL_9;
          goto LABEL_23;
        }
        v17 = v10 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v9 )
          break;
        if ( *((_QWORD *)v7 + 1) != (__int64)((__int64)v8 - v17) >> 3 )
        {
          *v8 = a2;
          a2 = sub_4CE740(a2);
          if ( !a2 )
          {
LABEL_50:
            v9 = 1;
            goto LABEL_28;
          }
          goto LABEL_48;
        }
        if ( (__int64 *)v17 == v8 )
        {
LABEL_23:
          if ( *v7 > 1 )
            goto LABEL_24;
          v25 = (__int64)((__int64)v8 - (v10 & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
          if ( *((_QWORD *)v7 + 1) - v25 <= 0 )
          {
            if ( (__int64)((__int64)v8 - (v10 & 0xFFFFFFFFFFFFFFF0LL)) <= 0 || 2LL * *((_QWORD *)v7 + 1) <= 0 )
            {
LABEL_24:
              v9 = 0;
              v11 = 0;
              goto LABEL_2;
            }
            v9 = 0;
            v8 -= v25;
            goto LABEL_5;
          }
          *v8 = a2;
          a2 = sub_4CE740(a2);
          if ( !a2 )
            goto LABEL_50;
LABEL_48:
          v9 = 1;
        }
        else
        {
LABEL_27:
          *--v8 = a2;
          ++v9;
          a2 = sub_4CE740(a2);
          if ( !a2 )
            goto LABEL_28;
        }
      }
      if ( (__int64 *)v17 == v8 )
      {
LABEL_9:
        v11 = 1;
        if ( *v7 > 1 )
          goto LABEL_2;
        v12 = (__int64)v8 - (((unsigned __int64)v7 + 31) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v12 <= 0 )
        {
          v13 = v12 >> 3;
          if ( *((_QWORD *)v7 + 1) - v9 - v13 <= 0 || 3 * v9 >= *((_QWORD *)v7 + 1) )
            goto LABEL_2;
          v14 = (*((_QWORD *)v7 + 1) - v9 - 1) / 2;
          if ( v14 < 0 )
            v14 = 0;
          v15 = v14 - v13;
          v16 = &v8[v15 + 1];
          if ( v16 != v8 && v8 && &v8[v15] != (__int64 *)-8LL )
            v16 = (__int64 *)memmove(&v8[v15 + 1], v8, 8 * v9);
          v8 = v16;
        }
LABEL_20:
        --v8;
        goto LABEL_5;
      }
      goto LABEL_27;
    }
LABEL_2:
    src[0] = v7;
    src[1] = v8;
    v32 = v9;
    sub_4C8BF0(si128.m128i_i64[0], v11, 1, 0, a5, a6);
    v7 = (int *)src[0];
    v8 = (__int64 *)src[1];
    v9 = v32;
    if ( v11 )
      goto LABEL_20;
    if ( v32 > 0 )
      memmove((char *)src[1] + 8, src[1], 8 * v32);
LABEL_5:
    *v8 = a2;
    ++v9;
    a2 = sub_4CE740(a2);
  }
  while ( a2 );
LABEL_28:
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v8);
  if ( (int)v9 > 0 )
  {
    v18 = 0;
    v28 = 8LL * (unsigned int)(v9 - 1) + 8;
    do
    {
      while ( 1 )
      {
        if ( !si128.m128i_i64[0] || *(int *)si128.m128i_i64[0] > 1 )
        {
          v19 = _mm_load_si128(&si128);
          v32 = v9;
          *(__m128i *)src = v19;
          sub_4C8BF0((__int64)src, 0, 0, 0, a5, a6);
          v7 = (int *)src[0];
          v9 = v32;
          si128 = _mm_load_si128((const __m128i *)src);
        }
        v20 = *(const QT::QWidget **)(si128.m128i_i64[1] + v18);
        v21 = *(_QWORD *)v20;
        *((_BYTE *)v20 + 44) = 0;
        (*(void (__fastcall **)(const QT::QWidget *, __int64))(v21 + 104))(v20, 1);
        if ( v27 )
        {
          v22 = sub_4CE740(v20);
          if ( v22 )
          {
            if ( *(_DWORD *)(v22 + 40) == 2 )
              break;
          }
        }
        v18 += 8;
        if ( v18 == v28 )
          goto LABEL_40;
      }
      v29 = (QT::QStackedWidget **)v22;
      sub_4CFFD0(v22);
      v23 = *((__int64 (__fastcall **)(__int64, const QT::QWidget *))*v29 + 56);
      v30 = *((void (__fastcall **)(QT::QStackedWidget **, _QWORD))*v29 + 60);
      if ( v23 == sub_4C4730 )
        v24 = QT::QStackedWidget::indexOf(v29[9], v20);
      else
        v24 = v23((__int64)v29, v20);
      v30(v29, v24);
      v18 += 8;
    }
    while ( v18 != v28 );
  }
LABEL_40:
  if ( v7 )
  {
    if ( !_InterlockedSub(v7, 1u) )
      free(v7);
  }
}
