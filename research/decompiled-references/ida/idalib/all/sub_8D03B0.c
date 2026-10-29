__int64 __fastcall sub_8D03B0(unsigned int *a1, __int64 a2)
{
  const char *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r12
  const char *v6; // r13
  const char *v7; // rbp
  unsigned int v8; // ebp
  void (__fastcall *v9)(unsigned int *); // rax
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v18; // rsi
  char v19; // dl
  char *v20; // r10
  bool v21; // zf
  const char *v22; // rax
  char *v23; // rax
  const char *v24; // rax
  const char *v25; // rcx
  char *v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  const char *v29; // rcx
  void (*v30)(unsigned int *, const char *, ...); // rax
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  const char *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  void (__fastcall *v42)(_QWORD *); // rax
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  const char *v50; // [rsp+0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+8h] [rbp-60h]
  int v52; // [rsp+10h] [rbp-58h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v54; // [rsp+28h] [rbp-40h]
  unsigned __int64 v55; // [rsp+38h] [rbp-30h]

  v55 = __readfsqword(0x28u);
  switch ( a1[42] )
  {
    case 1u:
      v18 = 1;
      v19 = 1;
      v20 = "VAULT_AUTO_MERGE";
      goto LABEL_30;
    case 2u:
      v18 = 1;
      v19 = 1;
      v20 = "VAULT_LMERGE";
      goto LABEL_30;
    case 3u:
      v18 = 1;
      v19 = 1;
      v20 = "VAULT_RMERGE";
      goto LABEL_30;
    case 4u:
      v18 = 0;
      v19 = 0;
      v20 = "VAULT_MANUAL_MERGE";
LABEL_30:
      v21 = *((_QWORD *)a1 + 7) == 0;
      LOBYTE(v52) = 0;
      v22 = haystack;
      v51 = 0;
      *(_QWORD *)&v54 = 0;
      BYTE8(v54) = 0;
      if ( !v21 )
        v22 = *((const char **)a1 + 6);
      v21 = *((_QWORD *)a1 + 10) == 0;
      v50 = v22;
      v23 = (char *)haystack;
      if ( !v21 )
        v23 = *((char **)a1 + 9);
      v21 = *((_QWORD *)a1 + 13) == 0;
      ptr = v23;
      v24 = haystack;
      if ( !v21 )
        v24 = *((const char **)a1 + 12);
      v25 = haystack;
      if ( *((_QWORD *)a1 + 19) )
        v25 = *((const char **)a1 + 18);
      v26 = "ida";
      if ( v19 )
        v26 = "idat";
      v27 = sub_8CF990((__int64)v26, v18, v20, v25, (__int64 *)&v50, (__int64)&ptr, v24);
      *((_QWORD *)a1 + 22) = v27;
      if ( !v27 )
      {
        sub_8CFA80((__int64)a1);
        if ( a1 )
        {
          v42 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)a1 + 16LL);
          if ( v42 == sub_8CE340 )
          {
            v43 = *((void **)a1 + 25);
            *(_QWORD *)a1 = &off_2B3E068;
            if ( v43 )
            {
              *((_QWORD *)a1 + 26) = 0;
              qfree(v43);
            }
            v44 = *((void **)a1 + 18);
            if ( v44 )
            {
              *((_QWORD *)a1 + 19) = 0;
              qfree(v44);
            }
            v45 = *((void **)a1 + 15);
            if ( v45 )
            {
              *((_QWORD *)a1 + 16) = 0;
              qfree(v45);
            }
            v46 = *((void **)a1 + 12);
            if ( v46 )
            {
              *((_QWORD *)a1 + 13) = 0;
              qfree(v46);
            }
            v47 = *((void **)a1 + 9);
            if ( v47 )
            {
              *((_QWORD *)a1 + 10) = 0;
              qfree(v47);
            }
            v48 = *((void **)a1 + 6);
            if ( v48 )
            {
              *((_QWORD *)a1 + 7) = 0;
              qfree(v48);
            }
            v49 = *((void **)a1 + 3);
            if ( v49 )
            {
              *((_QWORD *)a1 + 4) = 0;
              qfree(v49);
            }
            operator delete(a1, 0xE0u);
          }
          else
          {
            ((void (__fastcall *)(unsigned int *, __int64, void (__fastcall *)(_QWORD *), __int64, __int64, __int64, const char *, __int64, int))v42)(
              a1,
              v18,
              sub_8CE340,
              v39,
              v40,
              v41,
              v50,
              v51,
              v52);
          }
        }
        return 33;
      }
      if ( !*((_QWORD *)a1 + 23) )
        sub_8D0030((char *)a1);
      v8 = 0;
      if ( !qthread_create((void *(*)(void *))sub_8D03A0, a1) )
      {
        v28 = qstrerror(0xFFFFFFFFLL);
        set_error_string(0, v28);
        return 33;
      }
      return v8;
    case 5u:
      v3 = haystack;
      if ( *((_QWORD *)a1 + 16) )
        v3 = *((const char **)a1 + 15);
      if ( (unsigned __int8)qfileexist(v3, a2) )
        goto LABEL_11;
      v4 = *((_QWORD *)a1 + 7);
      v5 = *((_QWORD *)a1 + 16);
      if ( !v4 )
      {
        v7 = haystack;
        v6 = haystack;
        if ( !v5 )
          goto LABEL_52;
        goto LABEL_51;
      }
      v6 = *((const char **)a1 + 6);
      if ( (unsigned __int64)(v4 - 1) <= 3 || strncmp(&v6[v4 - 5], ".idb", 4u) )
      {
        v7 = haystack;
        if ( !v5 )
          goto LABEL_52;
LABEL_51:
        v7 = *((const char **)a1 + 15);
        goto LABEL_52;
      }
      if ( v5 )
      {
        v7 = *((const char **)a1 + 15);
        if ( (unsigned __int64)(v5 - 1) > 3 && !strncmp(&v7[v5 - 5], ".i64", 4u) )
        {
LABEL_11:
          a1[48] = 0;
          sub_8CFA80((__int64)a1);
          v8 = a1[48];
          if ( a1 )
          {
            v9 = *(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL);
            if ( (char *)v9 == (char *)sub_8CE340 )
            {
              v10 = *((void **)a1 + 25);
              *(_QWORD *)a1 = &off_2B3E068;
              if ( v10 )
              {
                *((_QWORD *)a1 + 26) = 0;
                qfree(v10);
              }
              v11 = *((void **)a1 + 18);
              if ( v11 )
              {
                *((_QWORD *)a1 + 19) = 0;
                qfree(v11);
              }
              v12 = *((void **)a1 + 15);
              if ( v12 )
              {
                *((_QWORD *)a1 + 16) = 0;
                qfree(v12);
              }
              v13 = *((void **)a1 + 12);
              if ( v13 )
              {
                *((_QWORD *)a1 + 13) = 0;
                qfree(v13);
              }
              v14 = *((void **)a1 + 9);
              if ( v14 )
              {
                *((_QWORD *)a1 + 10) = 0;
                qfree(v14);
              }
              v15 = *((void **)a1 + 6);
              if ( v15 )
              {
                *((_QWORD *)a1 + 7) = 0;
                qfree(v15);
              }
              v16 = *((void **)a1 + 3);
              if ( v16 )
              {
                *((_QWORD *)a1 + 4) = 0;
                qfree(v16);
              }
              operator delete(a1, 0xE0u);
            }
            else
            {
              v9(a1);
            }
          }
          return v8;
        }
      }
      else
      {
        v7 = haystack;
      }
LABEL_52:
      if ( (int)qcopyfile(v6, v7, 1, 0, 0, 0) >= 0 )
        goto LABEL_11;
      ptr = nullptr;
      v54 = 0;
      sub_35A790((char **)&ptr);
      if ( a1 )
      {
        v30 = *(void (**)(unsigned int *, const char *, ...))(*(_QWORD *)a1 + 16LL);
        if ( (char *)v30 == (char *)sub_8CE340 )
        {
          v31 = *((void **)a1 + 25);
          *(_QWORD *)a1 = &off_2B3E068;
          if ( v31 )
          {
            *((_QWORD *)a1 + 26) = 0;
            qfree(v31);
          }
          v32 = *((void **)a1 + 18);
          if ( v32 )
          {
            *((_QWORD *)a1 + 19) = 0;
            qfree(v32);
          }
          v33 = *((void **)a1 + 15);
          if ( v33 )
          {
            *((_QWORD *)a1 + 16) = 0;
            qfree(v33);
          }
          v34 = *((void **)a1 + 12);
          if ( v34 )
          {
            *((_QWORD *)a1 + 13) = 0;
            qfree(v34);
          }
          v35 = *((void **)a1 + 9);
          if ( v35 )
          {
            *((_QWORD *)a1 + 10) = 0;
            qfree(v35);
          }
          v36 = *((void **)a1 + 6);
          if ( v36 )
          {
            *((_QWORD *)a1 + 7) = 0;
            qfree(v36);
          }
          v37 = *((void **)a1 + 3);
          if ( v37 )
          {
            *((_QWORD *)a1 + 4) = 0;
            qfree(v37);
          }
          operator delete(a1, 0xE0u);
        }
        else
        {
          v30(a1, "failed to copy %s -> %s", (const char *)sub_8CE340, v29);
        }
      }
      v38 = haystack;
      if ( (_QWORD)v54 )
        v38 = (const char *)ptr;
      set_error_string(0, v38);
      if ( ptr )
      {
        *(_QWORD *)&v54 = 0;
        qfree(ptr);
      }
      return 33;
    case 6u:
      goto LABEL_11;
    default:
      if ( !under_debugger )
        interr(2608);
      BUG();
  }
}
