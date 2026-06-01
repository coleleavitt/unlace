unsigned __int64 __fastcall sub_3E7CB0(
        QT::QAbstractItemView *this,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  __m128i si128; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 *v21; // r13
  double v22; // xmm0_8
  bool v23; // zf
  const char *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // rbx
  _QWORD *v28; // rcx
  void (__fastcall ***v29)(_QWORD); // rdx
  _QWORD *v30; // [rsp+8h] [rbp-B0h]
  __int64 v31; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+20h] [rbp-98h] BYREF
  __int128 v33; // [rsp+28h] [rbp-90h]
  _QWORD v34[2]; // [rsp+40h] [rbp-78h] BYREF
  char v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h] BYREF
  __int128 v37; // [rsp+60h] [rbp-58h]
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( dword_8CC5F0 <= 0 )
  {
    v34[0] = deferred_wait_dialog_t___vtable;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v10 = qvector_reserve(&v36, 0, 41, 1);
    v36 = v10;
    *(_QWORD *)&v37 = 41;
    *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_5DD7D0);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD7E0);
    *(_QWORD *)(v10 + 32) = 0x7365686374617720LL;
    *(__m128i *)(v10 + 16) = si128;
    *(_BYTE *)(v36 + 40) = 0;
    v34[1] = get_nsec_stamp(&v36, 0x7365686374617720LL) + 500000000;
    sub_541BF0(v34);
    ++dword_8D1258;
    *((_BYTE *)this + 1112) = 0;
    if ( (debug & 0x40000) != 0 )
      sub_3E25E0((__int64)"watch_view_t@%p: update_toplevel()\n", (__int64)this, v12, v13, v14, v15);
    v18 = *(_QWORD *)(QT::QAbstractItemView::model(this) + 32LL);
    v30 = (_QWORD *)(v18 + 16);
    if ( *((_QWORD *)this + 141) <= 1u )
      v21 = nullptr;
    else
      v21 = (__int64 *)sub_233670(*((char **)this + 140));
    v22 = 0.0;
    v23 = *((_DWORD *)this + 279) == -1;
    v32 = 0;
    v33 = 0;
    if ( (v23 || *(_QWORD *)(v18 + 24))
      && (v31 = -1,
          sub_254C60(
            v21,
            (const char *)qword_8BA5A8,
            (__int64)&v31,
            (__int64)&v32,
            v16,
            v17,
            (__m128)0LL,
            a3,
            a4,
            a5,
            v19,
            v20,
            a8,
            a9),
          *((_DWORD *)this + 279) == -1) )
    {
      v24 = (const char *)v18;
      sub_3E56B0(
        this,
        v18,
        v30,
        (__int64)&v32,
        0.0,
        a3,
        a4,
        a5,
        *(double *)v19.m128_u64,
        *(double *)v20.m128_u64,
        a8,
        a9);
    }
    else
    {
      v24 = (const char *)v21;
      sub_3E7C00(
        0.0,
        a3,
        a4,
        a5,
        *(double *)v19.m128_u64,
        *(double *)v20.m128_u64,
        a8,
        a9,
        (__int64)this,
        v21,
        v30,
        (__int64)&v32);
    }
    sub_3E0A90((__int64)this);
    v25 = v32;
    if ( v32 )
    {
      v26 = v33;
      if ( (_QWORD)v33 )
      {
        v27 = 0;
        do
        {
          v28 = (_QWORD *)(v25 + 8 * v27);
          v29 = (void (__fastcall ***)(_QWORD))*v28;
          if ( *v28 )
          {
            v23 = (*((_DWORD *)v29 + 2))-- == 1;
            if ( v23 )
            {
              (**(void (__fastcall ***)(_QWORD))*v28)(*v28);
              v25 = v32;
            }
          }
          ++v27;
        }
        while ( v26 != v27 );
      }
      *(_QWORD *)&v33 = 0;
      v22 = qfree(v25, v24);
    }
    --dword_8D1258;
    v34[0] = deferred_wait_dialog_t___vtable;
    if ( v35 )
      sub_1C78D0();
    else
      sub_541C50(v34);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36, v24, v22);
    }
  }
  return v38 - __readfsqword(0x28u);
}
