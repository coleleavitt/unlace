__int64 __fastcall sub_3881B0(__int64 *a1, _QWORD *a2, __int64 **a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r15
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rbx
  const char *v20; // rdi
  __int64 v21; // rax
  size_t v22; // r14
  __int64 v23; // rbx
  __int64 *v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // rbp
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdi
  void *v34; // rax
  const void *v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-108h]
  __int64 v37; // [rsp+8h] [rbp-100h]
  int v38; // [rsp+10h] [rbp-F8h]
  __int64 v39; // [rsp+18h] [rbp-F0h]
  __int64 v40; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v42; // [rsp+38h] [rbp-D0h]
  __int64 v43; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  __int128 v46; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall **v47)(); // [rsp+90h] [rbp-78h]
  __int64 v48; // [rsp+98h] [rbp-70h]
  __int128 v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v51; // [rsp+C8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( a3[1] )
  {
    v5 = a2[1];
    v42 = 0;
    v40 = v5;
    v9 = *a1;
    v41 = 0;
    (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *, __int64 **, __int64, _QWORD))(v9 + 24))(
      a1,
      &v41,
      &v40,
      a3,
      a4,
      a5);
    v10 = a2[1];
    if ( (unsigned __int64)v42 <= 1 )
    {
      sub_6D0A0((__int64)"STROFF: wrong selection, could not build the path with offset %a\n", 0.0);
      v26 = 0;
    }
    else
    {
      v11 = (const char *)(v41 + 1);
      v12 = **a3;
      v44 = 0;
      v43 = 0;
      v13 = v12 + 48;
      v36 = v12 + 48;
      v38 = sub_3349B0((__int64)&v43, (const void *)(v12 + 48), v10, nullptr, 0);
      v16 = &v45;
      v45 = 0;
      v37 = v44;
      v46 = 0;
      if ( (_QWORD)v44 )
      {
        v15 = v43;
        v17 = v43 + ((_QWORD)v44 << 6);
        v39 = v43;
        if ( v17 == v43 )
        {
          v19 = -1;
        }
        else
        {
          v18 = v43;
          LODWORD(v19) = -1;
          do
          {
            LODWORD(v19) = v19 + 1;
            v20 = s1;
            if ( *(_QWORD *)(v18 + 16) )
              v20 = *(const char **)(v18 + 8);
            v13 = (__int64)v11;
            if ( !strcmp(v20, v11) )
              break;
            v18 += 64;
          }
          while ( v18 != v17 );
          v19 = (int)v19;
        }
        if ( v37 == v19 )
          v19 = v38;
        v16 = (__int64 *)(v39 + (v19 << 6) + 32);
      }
      v21 = a2[1];
      v22 = a2[3];
      v23 = 0;
      v49 = 0;
      v48 = v21;
      v47 = &off_4E6BA8;
      if ( v22 )
      {
        v34 = (void *)qalloc_or_throw(v22, v13, v14, v15);
        v35 = (const void *)a2[2];
        v23 = (__int64)v34;
        *((_QWORD *)&v49 + 1) = v22;
        memcpy(v34, v35, v22);
        *(_QWORD *)&v49 = v22;
      }
      v24 = (__int64 *)a1[3];
      v25 = *v24;
      v50 = a2[5];
      v26 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *, __int64, const char *))(v25 + 16))(
              v24,
              v50,
              v16,
              v36,
              v11);
      if ( v23 )
        qfree(v23);
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
      v27 = v43;
      if ( v43 )
      {
        v28 = v44;
        if ( (_QWORD)v44 )
        {
          v29 = 0;
          do
          {
            v30 = (_QWORD *)(v27 + (v29 << 6));
            clear_tinfo_t();
            v31 = v30[4];
            if ( v31 )
            {
              v30[5] = 0;
              qfree(v31);
            }
            v32 = v30[1];
            if ( v32 )
            {
              v30[2] = 0;
              qfree(v32);
            }
            ++v29;
            v27 = v43;
          }
          while ( v28 != v29 );
        }
        *(_QWORD *)&v44 = 0;
        qfree(v27);
      }
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
  }
  else
  {
    return 0;
  }
  return v26;
}
