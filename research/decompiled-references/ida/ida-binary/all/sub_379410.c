__int64 __fastcall sub_379410(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 (__fastcall *v8)(__int64, __int64, int); // rax
  _QWORD *v10; // rax
  unsigned __int8 (__fastcall **v11)(_QWORD, __int64, __int64, _QWORD, _QWORD); // rbp
  __int64 v12; // rcx
  __int64 *v13; // rbx
  const char *v14; // rsi
  void **v15; // rbx
  char *v16; // rbp
  __int64 v17; // rsi
  char *v18; // r14
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  __int64 v36; // rdi
  void *v37; // r14
  void *v38; // rax
  void *v39; // rax
  unsigned __int8 v40; // [rsp+1Fh] [rbp-B9h] BYREF
  void *src; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+28h] [rbp-B0h]
  __int64 v43; // [rsp+40h] [rbp-98h] BYREF
  __int128 v44; // [rsp+48h] [rbp-90h]
  __int64 v45; // [rsp+60h] [rbp-78h] BYREF
  __int128 v46; // [rsp+68h] [rbp-70h]
  __int64 v47; // [rsp+80h] [rbp-58h] BYREF
  __int128 v48; // [rsp+88h] [rbp-50h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v6 = *a1;
  v49 = __readfsqword(0x28u);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, int))(v6 + 640);
  if ( v8 == sub_374FA0 )
  {
    if ( (unsigned __int64)(int)a4 < *(_QWORD *)(a3 + 280) )
      return sub_2A9510(a1, a2, a3, a4);
  }
  else if ( (v8((__int64)a1, a3, a4) & 0x100) == 0 )
  {
    return sub_2A9510(a1, a2, a3, a4);
  }
  src = nullptr;
  v42 = 0;
  v10 = (_QWORD *)sub_2B70C0((__int64)a1);
  v43 = 0;
  v11 = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(v10 + 34);
  v45 = 0;
  v44 = 0;
  v46 = 0;
  v13 = (__int64 *)sub_3741F0(v10, (char *)&v40, a4, v12, 0.0);
  sub_371F60(v13, v11, v40, &v43, &v45);
  v14 = (const char *)*v13;
  if ( get_nice_colored_name(&src, *v13, 0) && (unsigned __int64)v44 | (unsigned __int64)v46 )
  {
    v48 = 0;
    v47 = 0;
    v47 = qvector_reserve(&v47, 0, 1, 24);
    v15 = (void **)(v47 + 24 * v48);
    *v15 = nullptr;
    *(_OWORD *)(v15 + 1) = 0;
    *(_QWORD *)&v48 = v48 + 1;
    v16 = (char *)v42;
    if ( v15 == &src )
    {
      if ( !(_QWORD)v42 )
      {
        v17 = (__int64)src;
        v18 = nullptr;
        v19 = 2;
        goto LABEL_10;
      }
      v39 = nullptr;
    }
    else
    {
      if ( (unsigned __int64)v42 <= 1 )
      {
        v15[1] = nullptr;
        v17 = (__int64)*v15;
        v18 = nullptr;
        v19 = 2;
LABEL_10:
        v20 = qvector_reserve(v15, v17, v19, 1);
        *v15 = (void *)v20;
        v17 = v20;
LABEL_11:
        v15[1] = (void *)v19;
        v18[v17] = 58;
        v18[(_QWORD)*v15 + 1] = 0;
        v21 = v48;
        v22 = v47;
        if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
        {
          v47 = qvector_reserve(&v47, v47, v48 + 1, 24);
          v21 = v48;
          v22 = v47;
        }
        v23 = v22 + 24 * v21;
        *(_QWORD *)v23 = 0;
        *(_OWORD *)(v23 + 8) = 0;
        v24 = v48;
        v25 = v48 + 1;
        *(_QWORD *)&v48 = v48 + 1;
        if ( (_QWORD)v44 )
        {
          v34 = v47;
          v35 = v24 + 2;
          if ( *((_QWORD *)&v48 + 1) < v35 )
          {
            v47 = qvector_reserve(&v47, v47, v35, 24);
            v25 = v48;
            v34 = v47;
          }
          v36 = v34 + 24 * v25;
          *(_QWORD *)v36 = 0;
          *(_OWORD *)(v36 + 8) = 0;
          *(_QWORD *)&v48 = v48 + 1;
          sub_169A50((__int64 *)v36, (__int64)"%zu hidden function(s)", (size_t)v44);
        }
        if ( (_QWORD)v46 )
        {
          v26 = v48;
          v27 = v47;
          if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
          {
            v47 = qvector_reserve(&v47, v47, v48 + 1, 24);
            v26 = v48;
            v27 = v47;
          }
          v28 = v27 + 24 * v26;
          *(_QWORD *)v28 = 0;
          *(_OWORD *)(v28 + 8) = 0;
          *(_QWORD *)&v48 = v48 + 1;
          sub_169A50((__int64 *)v28, (__int64)"%zu hidden data references(s)", (size_t)v46);
        }
        v14 = (const char *)&v47;
        sub_2D1580(a2, (__int64)&v47, nullptr, nullptr);
        v29 = v47;
        if ( v47 )
        {
          v30 = v48;
          if ( (_QWORD)v48 )
          {
            v31 = 0;
            do
            {
              v32 = (__int64 *)(v29 + 24 * v31);
              v33 = *v32;
              if ( *v32 )
              {
                v32[1] = 0;
                qfree(v33, (const char *)&v47);
                v29 = v47;
              }
              ++v31;
            }
            while ( v30 != v31 );
          }
          *(_QWORD *)&v48 = 0;
          qfree(v29, (const char *)&v47);
        }
        goto LABEL_25;
      }
      v37 = src;
      v38 = (void *)qvector_reserve(v15, *v15, v42, 1);
      v15[1] = v16;
      *v15 = v38;
      memmove(v38, v37, (size_t)(v16 - 1));
      v16[(_QWORD)*v15 - 1] = 0;
      v16 = (char *)v15[1];
      v39 = v15[2];
      if ( !v16 )
      {
        v18 = nullptr;
        v19 = 2;
LABEL_37:
        v17 = (__int64)*v15;
        if ( (unsigned __int64)v39 >= v19 )
          goto LABEL_11;
        goto LABEL_10;
      }
    }
    v18 = v16 - 1;
    v19 = (unsigned __int64)(v16 + 1);
    goto LABEL_37;
  }
LABEL_25:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v14);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, v14);
  }
  if ( src )
  {
    *(_QWORD *)&v42 = 0;
    qfree(src, v14);
  }
  return v49 - __readfsqword(0x28u);
}
