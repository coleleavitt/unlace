__int64 __fastcall sub_384030(__int64 *a1, _QWORD *a2, __int64 **a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // r13
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  const char *v17; // rdi
  __int64 v18; // rax
  size_t v19; // r14
  void *v20; // rbx
  __int64 *v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // rbp
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  void *v31; // rax
  const void *v32; // rsi
  __int64 v33; // [rsp+0h] [rbp-108h]
  __int64 v34; // [rsp+8h] [rbp-100h]
  int v35; // [rsp+10h] [rbp-F8h]
  __int64 v36; // [rsp+18h] [rbp-F0h]
  __int64 v37; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+38h] [rbp-D0h]
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+70h] [rbp-98h] BYREF
  __int128 v43; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall **v44)(); // [rsp+90h] [rbp-78h]
  __int64 v45; // [rsp+98h] [rbp-70h]
  __int128 v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( a3[1] )
  {
    v5 = a2[1];
    v39 = 0;
    v37 = v5;
    v9 = *a1;
    v38 = 0;
    (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *, __int64 **, __int64, _QWORD))(v9 + 24))(
      a1,
      &v38,
      &v37,
      a3,
      a4,
      a5);
    v10 = a2[1];
    if ( (unsigned __int64)v39 <= 1 )
    {
      sub_69660((__int64)"STROFF: wrong selection, could not build the path with offset %a\n", 0.0);
      v23 = 0;
    }
    else
    {
      v11 = (const char *)(v38 + 1);
      v12 = **a3;
      v41 = 0;
      v40 = 0;
      v33 = v12 + 48;
      v35 = sub_3303D0(&v40, (_QWORD *)(v12 + 48), v10, 0, 0);
      v13 = &v42;
      v42 = 0;
      v34 = v41;
      v43 = 0;
      if ( (_QWORD)v41 )
      {
        v14 = v40 + ((_QWORD)v41 << 6);
        v36 = v40;
        if ( v14 == v40 )
        {
          v16 = -1;
        }
        else
        {
          v15 = v40;
          LODWORD(v16) = -1;
          do
          {
            LODWORD(v16) = v16 + 1;
            v17 = s1;
            if ( *(_QWORD *)(v15 + 16) )
              v17 = *(const char **)(v15 + 8);
            if ( !strcmp(v17, v11) )
              break;
            v15 += 64;
          }
          while ( v15 != v14 );
          v16 = (int)v16;
        }
        if ( v34 == v16 )
          v16 = v35;
        v13 = (__int64 *)(v36 + (v16 << 6) + 32);
      }
      v18 = a2[1];
      v19 = a2[3];
      v20 = nullptr;
      v46 = 0;
      v45 = v18;
      v44 = &off_4D3CA8;
      if ( v19 )
      {
        v31 = (void *)qalloc_or_throw(v19);
        v32 = (const void *)a2[2];
        v20 = v31;
        *((_QWORD *)&v46 + 1) = v19;
        memcpy(v31, v32, v19);
        *(_QWORD *)&v46 = v19;
      }
      v21 = (__int64 *)a1[3];
      v22 = *v21;
      v47 = a2[5];
      v23 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *, __int64, const char *))(v22 + 16))(
              v21,
              v47,
              v13,
              v33,
              v11);
      if ( v20 )
        qfree(v20);
      if ( v42 )
      {
        *(_QWORD *)&v43 = 0;
        qfree(v42);
      }
      v24 = v40;
      if ( v40 )
      {
        v25 = v41;
        if ( (_QWORD)v41 )
        {
          v26 = 0;
          do
          {
            v27 = (_QWORD *)(v24 + (v26 << 6));
            clear_tinfo_t(v27 + 7);
            v28 = v27[4];
            if ( v28 )
            {
              v27[5] = 0;
              qfree(v28);
            }
            v29 = v27[1];
            if ( v29 )
            {
              v27[2] = 0;
              qfree(v29);
            }
            ++v26;
            v24 = v40;
          }
          while ( v25 != v26 );
        }
        *(_QWORD *)&v41 = 0;
        qfree(v24);
      }
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38);
    }
  }
  else
  {
    return 0;
  }
  return v23;
}
