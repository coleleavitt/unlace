__m128i *__fastcall sub_4C8470(__m128i *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __m128i v3; // xmm0
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 v7; // rbp
  void *v8; // r12
  __int64 v9; // r9
  signed __int64 v10; // rbp
  size_t v11; // r9
  void *v12; // rbp
  __int64 v13; // [rsp+0h] [rbp-128h]
  void *src; // [rsp+10h] [rbp-118h]
  void *v15; // [rsp+18h] [rbp-110h]
  __int64 v16; // [rsp+30h] [rbp-F8h]
  size_t n; // [rsp+40h] [rbp-E8h]
  size_t na; // [rsp+40h] [rbp-E8h]
  void *v19; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-B8h]
  void *v22; // [rsp+80h] [rbp-A8h] BYREF
  char *v23; // [rsp+88h] [rbp-A0h]
  __int64 v24; // [rsp+90h] [rbp-98h]
  _QWORD v25[4]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+C0h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+E8h] [rbp-40h]

  v2 = *(_QWORD **)(a2 + 40);
  v29 = __readfsqword(0x28u);
  v26 = &DockArea::orderedDocks;
  v28 = 0;
  *(_OWORD *)ptr = 0;
  if ( *v2 )
    sub_4CF2F0(&v26);
  if ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(*(_QWORD *)(a2 + 8) + 16LL)) )
  {
    sub_4C8370((__int64)v20, a2);
    v15 = (void *)v20[0];
    if ( (int)v21 <= 0 )
    {
LABEL_21:
      if ( v15 && !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
        free(v15);
      goto LABEL_4;
    }
    v5 = 0;
    v13 = 8LL * (unsigned int)(v21 - 1) + 8;
    while ( 1 )
    {
      sub_4C8470(&v22, *(_QWORD *)(v20[1] + v5));
      v7 = v24;
      v8 = v22;
      if ( v24 )
      {
        src = v23;
        if ( v22 )
        {
          if ( *(int *)v22 <= 1 )
          {
            sub_4C7D20((__int64 *)ptr, 0, v24, nullptr, nullptr, v6);
            v10 = 8 * v7;
            if ( v10 )
            {
              memcpy((char *)ptr[1] + 8 * v28, src, v10);
              v28 += v10 >> 3;
            }
LABEL_18:
            if ( !_InterlockedSub((volatile signed __int32 *)v8, 1u) )
              free(v8);
            goto LABEL_20;
          }
          v9 = 8 * v24;
          v19 = v23;
          if ( !(8 * v24) )
            goto LABEL_18;
        }
        else
        {
          v9 = 8 * v24;
          v19 = v23;
          if ( !(8 * v24) )
            goto LABEL_20;
        }
        v25[1] = 0;
        v25[2] = 0;
        v16 = v9 >> 3;
        if ( v23 >= ptr[1] && v23 < (char *)ptr[1] + 8 * v28 )
        {
          na = v9;
          v25[0] = 0;
          sub_4C7D20((__int64 *)ptr, 0, v9 >> 3, (unsigned __int64 *)&v19, (char *)v25, v9);
          v12 = (void *)v25[0];
          v11 = na;
        }
        else
        {
          n = v9;
          sub_4C7D20((__int64 *)ptr, 0, v16, nullptr, nullptr, v9);
          v11 = n;
          v12 = nullptr;
        }
        memcpy((char *)ptr[1] + 8 * v28, v19, v11);
        v28 += v16;
        if ( v12 && !_InterlockedSub((volatile signed __int32 *)v12, 1u) )
          free(v12);
      }
      if ( v8 )
        goto LABEL_18;
LABEL_20:
      v5 += 8;
      if ( v13 == v5 )
        goto LABEL_21;
    }
  }
LABEL_4:
  v3 = _mm_loadu_si128((const __m128i *)ptr);
  a1[1].m128i_i64[0] = v28;
  *a1 = v3;
  if ( v3.m128i_i64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)v3.m128i_i64[0], 1u);
    v26 = &DockArea::orderedDocks;
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return a1;
}
