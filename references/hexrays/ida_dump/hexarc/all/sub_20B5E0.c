__int64 __fastcall sub_20B5E0(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  char v8; // al
  const void *v10; // r14
  size_t v11; // rax
  size_t v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rbp
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  void *v24; // rdi
  size_t v25; // r15
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rbp
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-B8h] BYREF
  int v37; // [rsp+28h] [rbp-B0h]
  __int16 v38; // [rsp+2Ch] [rbp-ACh]
  __int64 v39; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+38h] [rbp-A0h]
  __int64 v41; // [rsp+48h] [rbp-90h]
  __int64 v42; // [rsp+50h] [rbp-88h] BYREF
  __int64 v43; // [rsp+58h] [rbp-80h] BYREF
  __int128 v44; // [rsp+60h] [rbp-78h]
  __int64 v45; // [rsp+70h] [rbp-68h]
  __int128 v46; // [rsp+78h] [rbp-60h]
  char v47; // [rsp+88h] [rbp-50h]
  unsigned __int64 v48; // [rsp+98h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 72);
  if ( *(_QWORD *)(v4 + 32) <= 1u )
    return 0;
  v6 = *(_QWORD *)(v4 + 24);
  v8 = *(_BYTE *)(v6 + 80);
  if ( v8 == 3 )
  {
    v10 = *(const void **)(v6 + 88);
    if ( !v10 || (v11 = strlen(*(const char **)(v6 + 88)), (v12 = v11) == 0) )
    {
      a2[1] = 0;
      return 0;
    }
    v24 = (void *)*a2;
    v25 = v11 + 1;
    if ( a2[2] < v11 + 1 )
    {
      v32 = qvector_reserve(a2, *a2, v11 + 1, 1);
      *a2 = v32;
      v24 = (void *)v32;
    }
    a2[1] = v25;
    memmove(v24, v10, v12);
    *(_BYTE *)(*a2 + v12) = 0;
  }
  else if ( v8 == 10 )
  {
    v13 = *(_QWORD *)(v6 + 88);
    if ( *(_BYTE *)v13 == 6 )
      sub_25A870(*(_QWORD *)(a1[1] + 1504LL), a2, *(_QWORD *)(v13 + 8), 0, 0, 5);
  }
  if ( (unsigned __int64)a2[1] > 1 )
  {
    if ( !(unsigned __int8)sub_3236F0(a3, *a2) )
      return 1;
    v14 = *a3;
    v39 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v45 = 0;
    v47 = 16;
    v40 = 0;
    v44 = 0;
    v46 = 0;
    if ( (unsigned __int8)get_tinfo_details(v14, 12, &v39) )
    {
      if ( (v41 & 2) != 0 )
      {
        sub_11D380((__int64)&v35, (unsigned __int8 *)(a1[4] + 64LL));
        v15 = a1[7];
        v16 = a1[6];
        if ( a1[8] < (unsigned __int64)(v15 + 1) )
        {
          v23 = qvector_reserve(a1 + 6, v16, v15 + 1, 16);
          a1[6] = v23;
          v16 = v23;
          v15 = a1[7];
        }
        sub_11D380(v16 + 16 * v15, (unsigned __int8 *)&v35);
        ++a1[7];
        sub_1166E0((__int64)&v35);
      }
      v33 = 0;
      v35 = 0;
      v34 = 0;
      copy_tinfo_t((char *)&v35 + 8, &v34);
      v36 = 0;
      copy_tinfo_t(&v36, &v33);
      v37 = 0;
      v38 = 0;
      clear_tinfo_t(&v34);
      clear_tinfo_t(&v33);
      copy_tinfo_t(&v35, a3);
      create_tinfo(a3, 10, 10, &v35);
      clear_tinfo_t(&v36);
      clear_tinfo_t((char *)&v35 + 8);
      clear_tinfo_t(&v35);
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
      cleanup_argloc(&v43);
      clear_tinfo_t(&v42);
      v17 = v39;
      if ( v39 )
      {
        v18 = v40;
        if ( (_QWORD)v40 )
        {
          v19 = 0;
          do
          {
            v20 = (_QWORD *)(v17 + 80 * v19);
            clear_tinfo_t(v20 + 8);
            v21 = v20[5];
            if ( v21 )
            {
              v20[6] = 0;
              qfree(v21);
            }
            v22 = v20[2];
            if ( v22 )
            {
              v20[3] = 0;
              qfree(v22);
            }
            ++v19;
            cleanup_argloc(v20);
            v17 = v39;
          }
          while ( v18 != v19 );
        }
        *(_QWORD *)&v40 = 0;
        qfree(v17);
      }
      return 1;
    }
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    cleanup_argloc(&v43);
    clear_tinfo_t(&v42);
    v26 = v39;
    if ( v39 )
    {
      v27 = v40;
      if ( (_QWORD)v40 )
      {
        v28 = 0;
        do
        {
          v29 = (_QWORD *)(v26 + 80 * v28);
          clear_tinfo_t(v29 + 8);
          v30 = v29[5];
          if ( v30 )
          {
            v29[6] = 0;
            qfree(v30);
          }
          v31 = v29[2];
          if ( v31 )
          {
            v29[3] = 0;
            qfree(v31);
          }
          ++v28;
          cleanup_argloc(v29);
          v26 = v39;
        }
        while ( v27 != v28 );
      }
      *(_QWORD *)&v40 = 0;
      qfree(v26);
    }
  }
  return 0;
}
