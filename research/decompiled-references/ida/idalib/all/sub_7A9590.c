__int64 __fastcall sub_7A9590(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  __m128i v4; // xmm1
  unsigned int qerrno; // ebp
  char *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbx
  char *v9; // rax
  void *v10; // rdi
  _QWORD v12[2]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v13; // [rsp+10h] [rbp-A8h]
  char v14; // [rsp+20h] [rbp-98h]
  void *v15; // [rsp+28h] [rbp-90h]
  __int128 v16; // [rsp+30h] [rbp-88h]
  __int16 v17; // [rsp+40h] [rbp-78h]
  __int64 v18; // [rsp+48h] [rbp-70h]
  char v19; // [rsp+50h] [rbp-68h]
  __int128 v20; // [rsp+58h] [rbp-60h]
  void *ptr; // [rsp+68h] [rbp-50h]
  __m128i v22; // [rsp+70h] [rbp-48h]
  __int64 v23; // [rsp+80h] [rbp-38h]
  __int64 v24; // [rsp+88h] [rbp-30h]
  __int64 v25; // [rsp+90h] [rbp-28h]
  unsigned __int64 v26; // [rsp+98h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v14 = 0;
  v12[1] = 0;
  v15 = nullptr;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v12[0] = sub_7A8840;
  ptr = nullptr;
  v23 = a2;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B3A5F0), (__m128i)(unsigned __int64)&off_2B3A580);
  v24 = -1;
  v16 = 0;
  v20 = 0;
  v22 = 0;
  if ( a3 )
  {
    v3 = *(void **)a3;
    v4 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    *(_QWORD *)a3 = 0;
    *(_OWORD *)(a3 + 8) = 0;
    ptr = v3;
    v22 = v4;
  }
  v25 = a1;
  qerrno = 0;
  if ( !(unsigned __int8)basic_parser_parse_0((__int64)v12, 0) )
    qerrno = get_qerrno(v12);
  v6 = (char *)ptr;
  if ( ptr )
  {
    v7 = v22.m128i_i64[0];
    if ( v22.m128i_i64[0] )
    {
      v8 = 0;
      do
      {
        v9 = &v6[64 * v8];
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
          v6 = (char *)ptr;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    v22.m128i_i64[0] = 0;
    qfree(v6);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return qerrno;
}
