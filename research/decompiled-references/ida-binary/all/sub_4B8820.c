unsigned __int64 __fastcall sub_4B8820(__int64 *a1, __int64 a2, int a3)
{
  int v5; // r8d
  int v6; // r9d
  double v7; // xmm0_8
  const char *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  size_t v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  size_t v20; // r13
  void *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 *v24; // rbp
  __int64 v25; // rdi
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-88h]
  unsigned __int64 v29; // [rsp+8h] [rbp-80h]
  _QWORD v30[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __int128 v32; // [rsp+28h] [rbp-60h]
  _BOOL4 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  QT::QEvent::QEvent(v30, 2004);
  v30[0] = IGetWidgetConfigEvent___vtable;
  v32 = 0;
  v31 = 0;
  v33 = a3 != 0;
  v7 = callui(177, a2, (unsigned int)&v31, (unsigned int)&callui, v5, v6);
  v8 = (const char *)v30;
  sub_51B5E0(a2, v30);
  v9 = v31;
  if ( (_QWORD)v32 )
  {
    v10 = 40 * v32;
    v29 = 0xCCCCCCCCCCCCCCCDLL * ((40 * (__int64)v32) >> 3);
    if ( v29 )
    {
      v11 = a1[1];
      v12 = *a1;
      v13 = 5 * v11;
      v14 = 0xCCCCCCCCCCCCCCCDLL * ((40 * (__int64)v32) >> 3) + v11;
      v15 = 0;
      v16 = 8 * v13;
      if ( a1[2] < v14 )
      {
        v27 = qvector_reserve(a1, v12, v14, 40);
        *a1 = v27;
        v12 = v27;
        v15 = 40 * a1[1] - v16;
      }
      v17 = (_QWORD *)(v12 + v16);
      v8 = (const char *)v17;
      v28 = v9 + v10;
      memmove(&v17[(unsigned __int64)v10 / 8], v17, v15);
      if ( v9 + v10 != v9 )
      {
        do
        {
          *v17 = 0;
          *(_OWORD *)(v17 + 1) = 0;
          v20 = *(_QWORD *)(v9 + 8);
          if ( v20 )
          {
            v21 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
            *v17 = v21;
            v17[2] = v20;
            memcpy(v21, *(const void **)v9, v20);
            v17[1] = v20;
          }
          *((_DWORD *)v17 + 6) = 0;
          v8 = (const char *)(v9 + 24);
          jvalue_t_copy(v17 + 3, v9 + 24, v18, v19);
          v17 += 5;
          v9 += 40;
        }
        while ( v28 != v9 );
      }
      a1[1] += v29;
      v9 = v31;
    }
  }
  v30[0] = IGetWidgetConfigEvent___vtable;
  if ( v9 )
  {
    v22 = v32;
    if ( (_QWORD)v32 )
    {
      v23 = 0;
      do
      {
        v24 = (__int64 *)(v9 + 40 * v23);
        jvalue_t_clear(v24 + 3);
        v25 = *v24;
        if ( *v24 )
        {
          v24[1] = 0;
          v7 = qfree(v25, v8, v7);
        }
        ++v23;
        v9 = v31;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v9, v8, v7);
  }
  v30[0] = &IWidgetConfigEvent___vtable;
  QT::QEvent::~QEvent((QT::QEvent *)v30);
  return v34 - __readfsqword(0x28u);
}
