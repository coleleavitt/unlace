__int64 __fastcall sub_192AA0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // r15d
  int v7; // eax
  _BYTE *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  _BYTE **v15; // rax
  __int64 v16; // rdx
  int udm_by_tid; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v26; // [rsp+8h] [rbp-F0h]
  int v27; // [rsp+18h] [rbp-E0h]
  int v28; // [rsp+1Ch] [rbp-DCh]
  int v29; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-D0h]
  __int64 v31; // [rsp+30h] [rbp-C8h]
  int v32; // [rsp+38h] [rbp-C0h]
  __int64 v33; // [rsp+40h] [rbp-B8h]
  __int128 v34; // [rsp+48h] [rbp-B0h]
  __m128i si128; // [rsp+58h] [rbp-A0h] BYREF
  int v36; // [rsp+68h] [rbp-90h]
  int v37; // [rsp+70h] [rbp-88h]
  __int64 v38; // [rsp+78h] [rbp-80h]
  int v39; // [rsp+80h] [rbp-78h]
  __int64 v40; // [rsp+88h] [rbp-70h]
  __int128 v41; // [rsp+90h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-58h]
  int v43; // [rsp+A8h] [rbp-50h]
  __int64 v44; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( !(unsigned int)get_tid_ordinal(a2) )
  {
    v7 = a4 & 0xC;
    if ( v7 == 4 )
    {
      v8 = (_BYTE *)unk_8CD7E8;
      if ( unk_8CD7E8 )
      {
LABEL_6:
        v27 = a3;
        v25 = 0;
        v28 = -1;
        v26 = 0;
        v9 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 1104LL))(v8, a2, a4, &v25);
        LOBYTE(v4) = v9 == 1;
        if ( v9 == -2 )
        {
          if ( v8[741] )
          {
            if ( !under_debugger )
              interr(40539, a2, v10, v11, 0.0);
            BUG();
          }
          v4 = sub_192AA0(
                 a1,
                 a2,
                 a3,
                 a4 | 5,
                 v12,
                 v13,
                 v25,
                 v26,
                 DWORD2(v26),
                 v27,
                 v29,
                 v30,
                 v31,
                 v32,
                 v33,
                 v34,
                 DWORD2(v34),
                 si128.m128i_i32[0],
                 si128.m128i_i32[2],
                 v36,
                 v37,
                 v38,
                 v39,
                 v40,
                 v41,
                 DWORD2(v41),
                 v42,
                 v43,
                 v44);
        }
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v25, a2, v10, v11, v12);
        }
        return v4;
      }
    }
    else
    {
      if ( v7 == 8 )
        v8 = (_BYTE *)sub_2E1080(0, 0);
      else
        v8 = (_BYTE *)qword_8CC7C0;
      if ( v8 )
        goto LABEL_6;
    }
    v15 = (_BYTE **)&unk_8CD320;
    while ( 1 )
    {
      v8 = *v15;
      if ( *v15 )
        goto LABEL_6;
      if ( &unk_8CD3F0 == (_UNKNOWN *)++v15 )
      {
        v8 = (_BYTE *)sub_2E1080(0, 0);
        if ( v8 )
          goto LABEL_6;
        return 0;
      }
    }
  }
  v25 = 0;
  udm_by_tid = get_udm_by_tid(&v25, 0, a2);
  if ( udm_by_tid < 0 )
    udm_by_tid = get_edm_by_tid(&v25, 0, a2);
  v30 = 0;
  v34 = 0;
  v31 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v32 = -1;
  v33 = 0;
  v36 = -1;
  LOBYTE(v37) = 0;
  v38 = -1;
  v39 = -2;
  v40 = -1;
  v42 = 0xFFFFFFFFLL;
  LOBYTE(v43) = 0;
  v41 = 0;
  if ( udm_by_tid < 0 )
  {
    v24 = v25;
    v29 = 2;
    v25 = 0;
    si128.m128i_i64[1] = v24;
  }
  else
  {
    v29 = 3;
    copy_tinfo_t(&si128.m128i_u64[1], &v25, v16);
    v36 = udm_by_tid;
    *(_QWORD *)&v34 = 0;
  }
  v4 = sub_192EC0(&v29, a1) & 1;
  if ( v39 >= -1 && v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, a1, v18, v19, v20);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, a1, v21, v22, v23);
  }
  clear_tinfo_t(&v25);
  return v4;
}
