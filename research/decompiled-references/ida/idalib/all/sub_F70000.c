__int64 __fastcall sub_F70000(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8,
        __m128i a9,
        __int64 a10)
{
  __m128i v14; // xmm0
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int32 v17; // ebp
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned __int64 v26; // r8
  __int32 v27; // eax
  unsigned __int64 v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  bool v31; // bp
  void *v32; // rdi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rsi
  _DWORD *v39; // [rsp+0h] [rbp-98h]
  char v40; // [rsp+8h] [rbp-90h]
  __m128i v41; // [rsp+10h] [rbp-88h] BYREF
  __int64 v42; // [rsp+20h] [rbp-78h]
  void *v43; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-60h]
  char v45; // [rsp+3Ch] [rbp-5Ch]
  __m128i v46[5]; // [rsp+40h] [rbp-58h] BYREF

  sub_AB6BB0(&v41, a1, &a7);
  v14 = _mm_loadu_si128(&v41);
  a8 = v42;
  a7 = v14;
  sub_AB6BB0(&v41, a1, &a9);
  a9 = _mm_loadu_si128(&v41);
  a10 = v42;
  LOBYTE(v15) = sub_F1DBF0((__int64)&a7, (__int64)&a9);
  if ( (_BYTE)v15 )
    return 1;
  v16 = v15;
  v17 = a9.m128i_i32[0] & 0x7FFFFFFF;
  if ( (a9.m128i_i32[0] & 0x7FFFFFFF) != 8 )
    goto LABEL_21;
  v39 = (_DWORD *)a9.m128i_i64[1];
  v18 = sub_BFBAE0(a9.m128i_u64[1]);
  if ( (*(_WORD *)v18 & 0x1FF) == 0x47 )
  {
    v21 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v21 + 28) & 0x7F) == 0x2F )
    {
      if ( a4 == (*(_DWORD *)(v21 + 68) & 0xFFFFF) )
      {
        v36 = *(_WORD *)(v21 + 70) >> 4;
        if ( v36 < a3 )
        {
          LOBYTE(v37) = sub_F1DBF0(a2 + 24 * v36, (__int64)&a7);
          return v37;
        }
      }
      return v16;
    }
  }
  if ( (*v39 & 0x20000) != 0 )
    goto LABEL_21;
  v23 = sub_C3EA40((unsigned __int64)v39, (__int64)a1, nullptr, v19, (__int64)v39, v20);
  v26 = (unsigned __int64)v39;
  if ( !v23 )
  {
LABEL_20:
    v17 = a9.m128i_i32[0] & 0x7FFFFFFF;
LABEL_21:
    v27 = a7.m128i_i32[0] & 0x7FFFFFFF;
    goto LABEL_22;
  }
  v27 = a7.m128i_i32[0] & 0x7FFFFFFF;
  if ( (a7.m128i_i32[0] & 0x7FFFFFFF) == 4 )
  {
    v38 = a7.m128i_i32[1] & 0x7FFFFFFF;
    if ( (unsigned int)v38 > 0x40 )
    {
      v40 = (unsigned __int8)a7.m128i_i8[7] >> 7;
      sub_2205600(v46, v38, a7.m128i_i64[1], ((unsigned __int64)(unsigned int)v38 + 63) >> 6);
      v26 = (unsigned __int64)v39;
      v44 = v46[0].m128i_u32[2];
      v45 = v40;
      v43 = (void *)v46[0].m128i_i64[0];
    }
    else
    {
      v44 = a7.m128i_i32[1] & 0x7FFFFFFF;
      v45 = (unsigned __int8)a7.m128i_i8[7] >> 7;
      v43 = (void *)a7.m128i_i64[1];
    }
    sub_C3DC60((__int64)v46, v26, (__int64)a1, 0, v26, v25);
    v31 = (unsigned int)sub_98E2D0(v46[0].m128i_i64, (__int64 *)&v43) == 0;
    if ( v46[0].m128i_i32[2] > 0x40u && v46[0].m128i_i64[0] )
      operator delete[]((void *)v46[0].m128i_i64[0]);
    if ( v44 > 0x40 )
    {
      v32 = v43;
      if ( v43 )
LABEL_18:
        operator delete[](v32);
    }
LABEL_19:
    if ( !v31 )
      goto LABEL_20;
    return 1;
  }
  if ( v27 == 8 )
  {
    v28 = a7.m128i_u64[1];
    if ( (*(_DWORD *)a7.m128i_i64[1] & 0x20000) != 0 )
      return v16;
    if ( !(unsigned __int8)sub_C3EA40(a7.m128i_u64[1], (__int64)a1, nullptr, v24, (__int64)v39, v25) )
      goto LABEL_20;
    sub_C3DC60((__int64)v46, (unsigned __int64)v39, (__int64)a1, 0, (__int64)v39, (__int64)v46);
    sub_C3DC60((__int64)&v43, v28, (__int64)a1, 0, v29, v30);
    v31 = (unsigned int)sub_98E2D0((__int64 *)&v43, v46[0].m128i_i64) == 0;
    if ( v44 > 0x40 && v43 )
      operator delete[](v43);
    if ( v46[0].m128i_i32[2] > 0x40u )
    {
      v32 = (void *)v46[0].m128i_i64[0];
      if ( v46[0].m128i_i64[0] )
        goto LABEL_18;
    }
    goto LABEL_19;
  }
  v17 = a9.m128i_i32[0] & 0x7FFFFFFF;
LABEL_22:
  if ( v27 == v17 )
  {
    if ( v27 == 1 )
    {
      return (unsigned int)sub_F70430(a1, a7.m128i_i64[1], a9.m128i_i64[1], a2, a3, a4);
    }
    else if ( v27 == 6 )
    {
      sub_F22A90(v46, a9.m128i_i64[1]);
      v33 = sub_F22BD0(v46[0].m128i_i64, 0);
      if ( v33 )
      {
        if ( (*(_BYTE *)(v33 + 28) & 0x7F) == 0x44 && a4 == (*(_DWORD *)(v33 + 64) & 0xFFFFF) )
        {
          v34 = *(_WORD *)(v33 + 66) >> 4;
          if ( a3 > v34 )
          {
            sub_AB6BB0(v46, a1, (const __m128i *)(a2 + 24 * v34));
            LOBYTE(v35) = sub_F1DBF0((__int64)v46, (__int64)&a7);
            return v35;
          }
        }
      }
    }
  }
  return v16;
}
