__int64 __fastcall sub_3C33E0(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  const char *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // r12
  size_t v11; // rax
  size_t v12; // r13
  __int64 v13; // r12
  const char **v14; // r12
  const char **v15; // r14
  const char *v16; // rdi
  const char *v17; // r12
  size_t v18; // r8
  char *v19; // rdi
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r12
  char *v23; // rbp
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  size_t v27; // r14
  __int64 v28; // rax
  const char *v29; // r15
  char *s2; // [rsp+0h] [rbp-158h]
  _BYTE *v31; // [rsp+8h] [rbp-150h]
  unsigned __int64 v32; // [rsp+18h] [rbp-140h] BYREF
  void *v33; // [rsp+20h] [rbp-138h] BYREF
  __int128 v34; // [rsp+28h] [rbp-130h]
  void *idati; // [rsp+40h] [rbp-118h] BYREF
  __int128 v36; // [rsp+48h] [rbp-110h]
  void *ptr; // [rsp+58h] [rbp-100h]
  __int128 v38; // [rsp+60h] [rbp-F8h]
  int v39; // [rsp+70h] [rbp-E8h]
  char v40; // [rsp+74h] [rbp-E4h]
  __int128 v41; // [rsp+80h] [rbp-D8h] BYREF
  void *v42; // [rsp+90h] [rbp-C8h]
  __int128 v43; // [rsp+98h] [rbp-C0h]
  void *v44; // [rsp+A8h] [rbp-B0h]
  __int128 v45; // [rsp+B0h] [rbp-A8h]
  __int128 v46[3]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-68h]
  int v48; // [rsp+F8h] [rbp-60h]
  __int64 v49; // [rsp+100h] [rbp-58h]
  char v50; // [rsp+108h] [rbp-50h]
  unsigned __int64 v51; // [rsp+118h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_3FD360(a1, a3) || rangeset_t_find_range(a1 + 130, a3) )
    return sub_3C3260(a1, (__int64)a2, nullptr, a3, 1u);
  v33 = nullptr;
  v34 = 0;
  if ( (unsigned __int8)sub_6B9E00(a1, &v33, a3) )
  {
    v42 = nullptr;
    v5 = haystack;
    v44 = nullptr;
    v47 = 1;
    v48 = -1;
    v49 = 0;
    v50 = 0;
    v41 = 0;
    v43 = 0;
    v45 = 0;
    v46[0] = 0;
    if ( (_QWORD)v34 )
      v5 = (const char *)v33;
    if ( sub_6BDD30(a1, &v41, v5, 0) == -1 )
    {
      v8 = haystack;
      v32 = 0;
      if ( (_QWORD)v34 )
        v8 = (const char *)v33;
      if ( v8
        && (*(_QWORD *)&v36 = v8,
            WORD4(v36) = 256,
            idati = (void *)get_idati(),
            (unsigned __int8)create_tinfo(&v32, 61, 61, &idati)) )
      {
        if ( v32 > 0xFF )
          get_tinfo_pdata(a2, v32, 6);
      }
      else
      {
        idati = nullptr;
        ptr = nullptr;
        v39 = 0;
        v40 = 0x80;
        v36 = 0;
        v38 = 0;
        if ( (unsigned __int8)sub_6BB9B0(a1, &idati, v33) )
        {
          s2 = (char *)haystack;
          if ( (_QWORD)v34 )
            s2 = (char *)v33;
          if ( (_QWORD)v36 )
          {
            v13 = -56;
            v31 = idati;
            if ( (_QWORD)v36 != -1 )
              v13 = 56 * v36;
            v14 = (const char **)((char *)idati + v13);
            if ( idati != v14 )
            {
              v15 = (const char **)idati;
              while ( 1 )
              {
                v16 = haystack;
                if ( v15[1] )
                  v16 = *v15;
                if ( !strcmp(v16, s2) )
                  break;
                v15 += 7;
                if ( v14 == v15 )
                  goto LABEL_44;
              }
              if ( (char *)v15 - v31 != -56 && a2 != (__int64 *)(v15 + 3) )
              {
                v17 = v15[4];
                if ( v17 && (v18 = (size_t)(v17 - 1), v17 != (_BYTE *)&dword_0 + 1) )
                {
                  v29 = v15[3];
                  if ( a2[2] < (unsigned __int64)v17 )
                  {
                    *a2 = qvector_reserve(a2, *a2, v15[4], 1);
                    v18 = (size_t)(v17 - 1);
                  }
                  a2[1] = (__int64)v17;
                  memmove((void *)*a2, v29, v18);
                  v17[*a2 - 1] = 0;
                }
                else
                {
                  a2[1] = 0;
                }
              }
            }
          }
        }
LABEL_44:
        if ( ptr )
        {
          *(_QWORD *)&v38 = 0;
          qfree(ptr);
        }
        v19 = (char *)idati;
        if ( idati )
        {
          v20 = v36;
          if ( (_QWORD)v36 )
          {
            v21 = 0;
            v22 = 0;
            do
            {
              v23 = &v19[v21];
              v24 = *(void **)&v19[v21 + 24];
              if ( v24 )
              {
                *((_QWORD *)v23 + 4) = 0;
                qfree(v24);
              }
              v25 = *(void **)v23;
              if ( *(_QWORD *)v23 )
              {
                *((_QWORD *)v23 + 1) = 0;
                qfree(v25);
              }
              ++v22;
              v19 = (char *)idati;
              v21 += 56;
            }
            while ( v20 != v22 );
          }
          *(_QWORD *)&v36 = 0;
          qfree(v19);
        }
      }
      clear_tinfo_t(&v32);
    }
    else if ( (v49 & 0x80000000000LL) == 0 )
    {
      v9 = (const char *)sub_537210(&v41);
      v10 = v9;
      if ( v9 && (v11 = strlen(v9), (v12 = v11) != 0) )
      {
        v26 = (void *)*a2;
        v27 = v11 + 1;
        if ( a2[2] < v11 + 1 )
        {
          v28 = qvector_reserve(a2, *a2, v11 + 1, 1);
          *a2 = v28;
          v26 = (void *)v28;
        }
        a2[1] = v27;
        memmove(v26, v10, v12);
        *(_BYTE *)(*a2 + v12) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    clear_tinfo_t(v46);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
  }
  v6 = a2[1];
  if ( v6 <= 1 )
  {
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    return -1;
  }
  else
  {
    v7 = v6 - 1;
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
  }
  return v7;
}
