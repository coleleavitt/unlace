__int64 __fastcall sub_2C4B50(__int64 a1, __int64 a2, char a3, unsigned int *a4, __int64 a5)
{
  unsigned int v6; // r13d
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r12
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __m128i v29; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-B8h]
  __int128 v31; // [rsp+28h] [rbp-B0h]
  __int64 v32; // [rsp+40h] [rbp-98h] BYREF
  __int128 v33; // [rsp+48h] [rbp-90h]
  __int64 v34; // [rsp+60h] [rbp-78h] BYREF
  __int128 v35; // [rsp+68h] [rbp-70h]
  __int64 v36; // [rsp+80h] [rbp-58h] BYREF
  __int128 v37; // [rsp+88h] [rbp-50h]
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( a5 == 4 )
  {
    v19 = *a4;
    v6 = 1;
    sub_2B61B0(a1, a2, 0);
    v36 = v19;
    netnode_supset();
    return v6;
  }
  v6 = 0;
  v7 = a3 & 0x3F;
  if ( (a3 & 0x3F) == 0 )
  {
    v30 = 0;
    v31 = 0;
    sub_2B61B0(a1, a2, 0);
    if ( netnode_qgetblob() > 0 )
    {
      v9 = *(_QWORD *)(a1 + 112);
      v32 = 0;
      v33 = 0;
      v35 = 0;
      v34 = 0;
      v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)(v30 + v31));
      v6 = sub_2C48E0(v9, &v32, (__int64)&v29, &v34);
      if ( (_BYTE)v6 )
      {
        if ( (_QWORD)v35 != (_QWORD)v33 )
        {
          if ( !under_debugger )
            sub_383060(52687);
          BUG();
        }
        v36 = 0;
        v37 = 0;
        sub_2BCC40(&v36, (__int64)&v32, &v34);
        sub_2B61B0(a1, a2, 1);
        netnode_setblob();
        if ( v36 )
        {
          *(_QWORD *)&v37 = 0;
          qfree(v36);
        }
        v10 = v34;
        if ( v34 )
        {
          v11 = v35;
          if ( (_QWORD)v35 )
          {
            v12 = 0;
            do
            {
              v13 = 3 * v12++;
              sub_2B6D30((__int64 *)(16 * v13 + v10));
              v10 = v34;
            }
            while ( v11 != v12 );
          }
          *(_QWORD *)&v35 = 0;
          qfree(v10);
        }
        v14 = v32;
        if ( v32 )
        {
          v15 = v33;
          if ( (_QWORD)v33 )
          {
            do
            {
              v16 = (_QWORD *)(v14 + 80 * v7);
              clear_tinfo_t();
              v17 = v16[5];
              if ( v17 )
              {
                v16[6] = 0;
                qfree(v17);
              }
              v18 = v16[2];
              if ( v18 )
              {
                v16[3] = 0;
                qfree(v18);
              }
              ++v7;
              cleanup_argloc();
              v14 = v32;
            }
            while ( v15 != v7 );
          }
          *(_QWORD *)&v33 = 0;
          qfree(v14);
        }
        goto LABEL_6;
      }
      v20 = v34;
      if ( v34 )
      {
        v21 = v35;
        if ( (_QWORD)v35 )
        {
          v22 = 0;
          do
          {
            v23 = 3 * v22++;
            sub_2B6D30((__int64 *)(16 * v23 + v20));
            v20 = v34;
          }
          while ( v21 != v22 );
        }
        *(_QWORD *)&v35 = 0;
        qfree(v20);
      }
      v24 = v32;
      if ( v32 )
      {
        v25 = v33;
        if ( (_QWORD)v33 )
        {
          do
          {
            v26 = (_QWORD *)(v24 + 80 * v7);
            clear_tinfo_t();
            v27 = v26[5];
            if ( v27 )
            {
              v26[6] = 0;
              qfree(v27);
            }
            v28 = v26[2];
            if ( v28 )
            {
              v26[3] = 0;
              qfree(v28);
            }
            ++v7;
            cleanup_argloc();
            v24 = v32;
          }
          while ( v25 != v7 );
        }
        *(_QWORD *)&v33 = 0;
        qfree(v24);
      }
    }
    v6 = 0;
LABEL_6:
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
  }
  return v6;
}
