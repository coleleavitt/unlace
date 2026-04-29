__int64 __fastcall sub_2C4F10(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  unsigned int v7; // r13d
  __int64 v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r12
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r12
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdi
  __m128i v33; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v34; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+28h] [rbp-B0h]
  __int64 v36; // [rsp+40h] [rbp-98h] BYREF
  __int128 v37; // [rsp+48h] [rbp-90h]
  __int64 v38; // [rsp+60h] [rbp-78h] BYREF
  __int128 v39; // [rsp+68h] [rbp-70h]
  __int64 v40; // [rsp+80h] [rbp-58h] BYREF
  __int128 v41; // [rsp+88h] [rbp-50h]
  unsigned __int64 v42; // [rsp+98h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( a5 == 4 )
  {
    v22 = *a4;
    v7 = 1;
    v23 = sub_2B6570(a1, a2, 0);
    v40 = v22;
    netnode_supset(v23, a3, &v40, 8, 103);
    return v7;
  }
  v7 = 0;
  v8 = a3 & 0x3F;
  if ( (a3 & 0x3F) == 0 )
  {
    v34 = 0;
    v35 = 0;
    v10 = sub_2B6570(a1, a2, 0);
    if ( netnode_qgetblob(v10, &v34, 1, (int)a3, 103) > 0 )
    {
      v11 = *(_QWORD *)(a1 + 112);
      v36 = 0;
      v37 = 0;
      v39 = 0;
      v38 = 0;
      v33 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)(v34 + (unsigned __int64)v35));
      v7 = sub_2C4CA0(v11, &v36, (__int64)&v33, &v38);
      if ( (_BYTE)v7 )
      {
        if ( (_QWORD)v39 != (_QWORD)v37 )
        {
          if ( !under_debugger )
            sub_3835A0(52687);
          BUG();
        }
        v40 = 0;
        v41 = 0;
        sub_2BD000(&v40, &v36, &v38);
        v12 = sub_2B6570(a1, a2, 1);
        netnode_setblob(v12, v40, ((_QWORD)v41 == 0) + (_QWORD)v41 - 1LL, (int)a3, 103);
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v40);
        }
        v13 = v38;
        if ( v38 )
        {
          v14 = v39;
          if ( (_QWORD)v39 )
          {
            v15 = 0;
            do
            {
              v16 = 3 * v15++;
              sub_2B70F0((__int64 *)(16 * v16 + v13));
              v13 = v38;
            }
            while ( v14 != v15 );
          }
          *(_QWORD *)&v39 = 0;
          qfree(v13);
        }
        v17 = v36;
        if ( v36 )
        {
          v18 = v37;
          if ( (_QWORD)v37 )
          {
            do
            {
              v19 = (_QWORD *)(v17 + 80 * v8);
              clear_tinfo_t(v19 + 8);
              v20 = v19[5];
              if ( v20 )
              {
                v19[6] = 0;
                qfree(v20);
              }
              v21 = v19[2];
              if ( v21 )
              {
                v19[3] = 0;
                qfree(v21);
              }
              ++v8;
              cleanup_argloc(v19);
              v17 = v36;
            }
            while ( v18 != v8 );
          }
          *(_QWORD *)&v37 = 0;
          qfree(v17);
        }
        goto LABEL_6;
      }
      v24 = v38;
      if ( v38 )
      {
        v25 = v39;
        if ( (_QWORD)v39 )
        {
          v26 = 0;
          do
          {
            v27 = 3 * v26++;
            sub_2B70F0((__int64 *)(16 * v27 + v24));
            v24 = v38;
          }
          while ( v25 != v26 );
        }
        *(_QWORD *)&v39 = 0;
        qfree(v24);
      }
      v28 = v36;
      if ( v36 )
      {
        v29 = v37;
        if ( (_QWORD)v37 )
        {
          do
          {
            v30 = (_QWORD *)(v28 + 80 * v8);
            clear_tinfo_t(v30 + 8);
            v31 = v30[5];
            if ( v31 )
            {
              v30[6] = 0;
              qfree(v31);
            }
            v32 = v30[2];
            if ( v32 )
            {
              v30[3] = 0;
              qfree(v32);
            }
            ++v8;
            cleanup_argloc(v30);
            v28 = v36;
          }
          while ( v29 != v8 );
        }
        *(_QWORD *)&v37 = 0;
        qfree(v28);
      }
    }
    v7 = 0;
LABEL_6:
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
  }
  return v7;
}
