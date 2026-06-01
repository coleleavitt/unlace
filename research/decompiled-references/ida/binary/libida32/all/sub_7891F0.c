__int64 __fastcall sub_7891F0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  __m128i v4; // xmm1
  unsigned int qerrno; // r12d
  char *v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rbx
  void *v10; // rdi
  _QWORD v12[2]; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v13; // [rsp+10h] [rbp-B8h]
  char v14; // [rsp+20h] [rbp-A8h]
  void *v15; // [rsp+28h] [rbp-A0h]
  __int128 v16; // [rsp+30h] [rbp-98h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  __int64 v18; // [rsp+48h] [rbp-80h]
  __int128 v19; // [rsp+50h] [rbp-78h]
  void *ptr; // [rsp+60h] [rbp-68h]
  __m128i v21; // [rsp+68h] [rbp-60h]
  __int64 v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  __int64 v24; // [rsp+88h] [rbp-40h]
  unsigned __int64 v25; // [rsp+98h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v14 = 0;
  v12[1] = 0;
  v15 = nullptr;
  v17 = 0;
  v18 = 0;
  ptr = nullptr;
  v12[0] = sub_788500;
  v22 = a2;
  v19 = 0;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B10650), (__m128i)(unsigned __int64)&off_2B105E0);
  v23 = -1;
  v16 = 0;
  v21 = 0;
  if ( a3 )
  {
    v3 = *(void **)a3;
    v4 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    *(_QWORD *)a3 = 0;
    *(_OWORD *)(a3 + 8) = 0;
    ptr = v3;
    v21 = v4;
  }
  v24 = a1;
  qerrno = 0;
  if ( !(unsigned __int8)basic_parser_parse_0((__int64)v12, 0) )
    qerrno = get_qerrno(v12);
  v6 = (char *)ptr;
  if ( ptr )
  {
    v7 = v21.m128i_i64[0];
    if ( v21.m128i_i64[0] )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = *(void **)&v6[v8];
        if ( v10 )
        {
          *(_QWORD *)&v6[v8 + 8] = 0;
          qfree(v10);
          v6 = (char *)ptr;
        }
        ++v9;
        v8 += 56;
      }
      while ( v7 != v9 );
    }
    v21.m128i_i64[0] = 0;
    qfree(v6);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return qerrno;
}

