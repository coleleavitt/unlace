__int64 __fastcall vcred_do_load_password(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // al
  char *v5; // rdi
  char *v6; // rbx
  const char *v7; // rdx
  char *v8; // rbp
  const char *v9; // r14
  char *v10; // rax
  size_t v11; // r14
  __int64 v12; // r9
  void *v13; // r11
  unsigned __int64 v14; // r10
  char *v15; // rsi
  __int64 v16; // rax
  const char *v17; // rdx
  const char *v18; // rsi
  const char *v19; // rsi
  char *v20; // rbp
  __int64 v21; // r15
  __int64 v22; // r14
  char *v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // rbx
  char *v28; // rdx
  char *v29; // rax
  void *v30; // rdi
  char *v31; // rbp
  __int64 v32; // r14
  __int64 v33; // r15
  char *v34; // rax
  void *v35; // rdi
  char *v36; // [rsp+0h] [rbp-178h]
  __int64 v37; // [rsp+10h] [rbp-168h]
  unsigned __int64 v41; // [rsp+30h] [rbp-148h]
  void *srca; // [rsp+48h] [rbp-130h]
  void *src; // [rsp+48h] [rbp-130h]
  __int64 v44; // [rsp+50h] [rbp-128h]
  void *v45; // [rsp+50h] [rbp-128h]
  __int64 v46; // [rsp+58h] [rbp-120h]
  char *s1; // [rsp+60h] [rbp-118h] BYREF
  __int128 v48; // [rsp+68h] [rbp-110h]
  void *v49; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v50; // [rsp+88h] [rbp-F0h]
  void *v51; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-D0h]
  void *v53; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-B0h]
  void *v55; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v56; // [rsp+E8h] [rbp-90h]
  void *ptr; // [rsp+100h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+108h] [rbp-70h]
  void *v59; // [rsp+120h] [rbp-58h] BYREF
  __int128 v60; // [rsp+128h] [rbp-50h]
  unsigned __int64 v61; // [rsp+138h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  result = sub_7C9900(a1, a2, a3, (__int64)"hexvault");
  if ( !(_BYTE)result )
  {
    s1 = nullptr;
    v48 = 0;
    sub_851530(&s1);
    if ( (_QWORD)v48 && (v31 = s1, !strcmp(s1, "hvui")) )
    {
      if ( v31 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v31);
        s1 = nullptr;
        *((_QWORD *)&v48 + 1) = 0;
      }
    }
    else
    {
      set_registry_name("hvui");
    }
    v37 = sub_7C1590();
    v49 = nullptr;
    v51 = nullptr;
    v53 = nullptr;
    v50 = 0;
    v52 = 0;
    v54 = 0;
    v4 = reg_subkey_children((int)&v53);
    v5 = (char *)v53;
    if ( v4 )
    {
      v36 = (char *)v53 + 24 * v54;
      if ( v36 != v53 )
      {
        v6 = (char *)v53;
        while ( 1 )
        {
          v55 = nullptr;
          v56 = 0;
          sub_35A790((char **)&v55);
          v7 = haystack;
          ptr = nullptr;
          *(_OWORD *)n = 0;
          if ( (_QWORD)v56 )
            v7 = (const char *)v55;
          if ( (unsigned __int8)reg_str_get(&ptr, "Password", v7) )
          {
            v60 = 0;
            v59 = nullptr;
            sub_456FB0(v6, (__int64 *)&v59, "@", 0);
            v8 = (char *)v59;
            if ( (_QWORD)v60 == 2 )
            {
              if ( *((_QWORD *)v59 + 4) )
              {
                v9 = *((const char **)v59 + 3);
                v10 = strrchr(v9, 95);
                if ( v10 )
                {
                  if ( v10 - v9 != -1 )
                    *v10 = 58;
                }
              }
              if ( v51 )
              {
                *(_QWORD *)&v52 = 0;
                qfree(v51);
                v51 = nullptr;
                *((_QWORD *)&v52 + 1) = 0;
              }
              v11 = n[0];
              if ( n[0] )
              {
                v12 = v52;
                v13 = ptr;
                v14 = v52 + n[0];
                if ( !__CFADD__((_QWORD)v52, n[0]) )
                  goto LABEL_19;
                if ( (unsigned __int64)v52 <= 0x7FFFFFFFFFFFFFFELL )
                {
                  v14 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_19:
                  v15 = (char *)v51;
                  v16 = v52;
                  if ( *((_QWORD *)&v52 + 1) < v14 )
                  {
                    v46 = v52;
                    v45 = ptr;
                    src = (void *)v14;
                    v51 = (void *)qvector_reserve(&v51, v51, v14, 1);
                    v15 = (char *)v51;
                    v12 = v46;
                    v16 = v52;
                    v13 = v45;
                    v14 = (unsigned __int64)src;
                  }
                  v44 = v12;
                  srca = v13;
                  v41 = v14;
                  memset(&v15[v16], 0, v14 - v16);
                  v13 = srca;
                  v12 = v44;
                  *(_QWORD *)&v52 = v41;
                }
                else if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
                {
                  *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
                }
                memcpy((char *)v51 + v12, v13, v11);
              }
              v17 = haystack;
              if ( *((_QWORD *)v8 + 4) )
                v17 = *((const char **)v8 + 3);
              v18 = haystack;
              if ( *((_QWORD *)v8 + 1) )
                v18 = *(const char **)v8;
              if ( (*(unsigned __int8 (__fastcall **)(__int64, const char *, const char *, const char *, void **, void **))(*(_QWORD *)v37 + 24LL))(
                     v37,
                     v18,
                     v17,
                     "hexvault",
                     &v51,
                     &v49) )
              {
                v19 = haystack;
                if ( (_QWORD)v56 )
                  v19 = (const char *)v55;
                reg_delete("Password", v19);
              }
              v20 = (char *)v59;
              if ( v59 )
              {
                v21 = v60;
                if ( (_QWORD)v60 )
                {
                  v22 = 0;
                  do
                  {
                    v23 = &v20[24 * v22];
                    v24 = *(void **)v23;
                    if ( *(_QWORD *)v23 )
                    {
                      *((_QWORD *)v23 + 1) = 0;
                      qfree(v24);
                      v20 = (char *)v59;
                    }
                    ++v22;
                  }
                  while ( v21 != v22 );
                }
                *(_QWORD *)&v60 = 0;
                qfree(v20);
              }
              if ( ptr )
              {
                n[0] = 0;
                qfree(ptr);
              }
              v25 = v55;
              if ( !v55 )
                goto LABEL_42;
              goto LABEL_41;
            }
            if ( v59 )
            {
              if ( (_QWORD)v60 )
              {
                v32 = 0;
                v33 = v60;
                do
                {
                  v34 = &v8[24 * v32];
                  v35 = *(void **)v34;
                  if ( *(_QWORD *)v34 )
                  {
                    *((_QWORD *)v34 + 1) = 0;
                    qfree(v35);
                    v8 = (char *)v59;
                  }
                  ++v32;
                }
                while ( v33 != v32 );
              }
              *(_QWORD *)&v60 = 0;
              qfree(v8);
            }
          }
          if ( ptr )
          {
            n[0] = 0;
            qfree(ptr);
          }
          v25 = v55;
          if ( !v55 )
            goto LABEL_42;
LABEL_41:
          *(_QWORD *)&v56 = 0;
          qfree(v25);
LABEL_42:
          v6 += 24;
          if ( v36 == v6 )
          {
            v5 = (char *)v53;
            break;
          }
        }
      }
    }
    if ( v5 )
    {
      v26 = v54;
      if ( (_QWORD)v54 )
      {
        v27 = 0;
        v28 = v5;
        do
        {
          v29 = &v28[24 * v27];
          v30 = *(void **)v29;
          if ( *(_QWORD *)v29 )
          {
            *((_QWORD *)v29 + 1) = 0;
            qfree(v30);
            v28 = (char *)v53;
          }
          ++v27;
        }
        while ( v26 != v27 );
        v5 = v28;
      }
      *(_QWORD *)&v54 = 0;
      qfree(v5);
    }
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    if ( (unsigned __int64)v48 > 1 )
      set_registry_name(s1);
    if ( s1 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(s1);
    }
    return sub_7C9900(a1, a2, a3, (__int64)"hexvault");
  }
  return result;
}
