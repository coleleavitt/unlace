__int64 __fastcall sub_36830(char *a1)
{
  const char *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // r13
  const char *v6; // rbp
  unsigned int v7; // ebp
  void (__fastcall *v8)(char *); // rax
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __int64 v17; // rsi
  char v18; // dl
  char *v19; // r10
  bool v20; // zf
  const char *v21; // rax
  char *v22; // rax
  const char *v23; // rax
  char *v24; // rcx
  const char *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  const char *v28; // rcx
  void (*v29)(char *, const char *, ...); // rax
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  const char *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  void (__fastcall *v41)(_QWORD *); // rax
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  const char *v49; // [rsp+0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+8h] [rbp-60h]
  int v51; // [rsp+10h] [rbp-58h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v53; // [rsp+28h] [rbp-40h]
  unsigned __int64 v54; // [rsp+38h] [rbp-30h]

  v54 = __readfsqword(0x28u);
  switch ( *((_DWORD *)a1 + 42) )
  {
    case 1:
      v17 = 1;
      v18 = 1;
      v19 = "VAULT_AUTO_MERGE";
      goto LABEL_30;
    case 2:
      v17 = 1;
      v18 = 1;
      v19 = "VAULT_LMERGE";
      goto LABEL_30;
    case 3:
      v17 = 1;
      v18 = 1;
      v19 = "VAULT_RMERGE";
      goto LABEL_30;
    case 4:
      v17 = 0;
      v18 = 0;
      v19 = "VAULT_MANUAL_MERGE";
LABEL_30:
      v20 = *((_QWORD *)a1 + 7) == 0;
      LOBYTE(v51) = 0;
      v21 = haystack;
      v50 = 0;
      *(_QWORD *)&v53 = 0;
      BYTE8(v53) = 0;
      if ( !v20 )
        v21 = *((const char **)a1 + 6);
      v20 = *((_QWORD *)a1 + 10) == 0;
      v49 = v21;
      v22 = (char *)haystack;
      if ( !v20 )
        v22 = *((char **)a1 + 9);
      v20 = *((_QWORD *)a1 + 13) == 0;
      ptr = v22;
      v23 = haystack;
      if ( !v20 )
        v23 = *((const char **)a1 + 12);
      v24 = (char *)haystack;
      if ( *((_QWORD *)a1 + 19) )
        v24 = *((char **)a1 + 18);
      v25 = "ida";
      if ( v18 )
        v25 = "idat";
      v26 = sub_35F20((__int64)v25, v17, v19, v24, (__int64 *)&v49, (__int64)&ptr, v23);
      *((_QWORD *)a1 + 22) = v26;
      if ( v26 )
      {
        if ( !*((_QWORD *)a1 + 23) )
          return (unsigned int)sub_364B0(a1);
        v7 = 0;
        if ( sub_98360((void *(*)(void *))sub_36820, a1) )
          return v7;
        v27 = sub_978C0(0xFFFFFFFFLL);
        sub_8F890(0, v27);
      }
      else
      {
        sub_36010((__int64)a1);
        if ( a1 )
        {
          v41 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)a1 + 16LL);
          if ( v41 == sub_348D0 )
          {
            v42 = *((void **)a1 + 25);
            *(_QWORD *)a1 = &off_161378;
            if ( v42 )
            {
              *((_QWORD *)a1 + 26) = 0;
              j__free(v42);
            }
            v43 = *((void **)a1 + 18);
            if ( v43 )
            {
              *((_QWORD *)a1 + 19) = 0;
              j__free(v43);
            }
            v44 = *((void **)a1 + 15);
            if ( v44 )
            {
              *((_QWORD *)a1 + 16) = 0;
              j__free(v44);
            }
            v45 = *((void **)a1 + 12);
            if ( v45 )
            {
              *((_QWORD *)a1 + 13) = 0;
              j__free(v45);
            }
            v46 = *((void **)a1 + 9);
            if ( v46 )
            {
              *((_QWORD *)a1 + 10) = 0;
              j__free(v46);
            }
            v47 = *((void **)a1 + 6);
            if ( v47 )
            {
              *((_QWORD *)a1 + 7) = 0;
              j__free(v47);
            }
            v48 = *((void **)a1 + 3);
            if ( v48 )
            {
              *((_QWORD *)a1 + 4) = 0;
              j__free(v48);
            }
            operator delete(a1, 0xE0u);
          }
          else
          {
            ((void (__fastcall *)(char *, __int64, void (__fastcall *)(_QWORD *), __int64, __int64, __int64, const char *, __int64, int))v41)(
              a1,
              v17,
              sub_348D0,
              v38,
              v39,
              v40,
              v49,
              v50,
              v51);
          }
        }
      }
      return 33;
    case 5:
      v2 = haystack;
      if ( *((_QWORD *)a1 + 16) )
        v2 = *((const char **)a1 + 15);
      if ( (unsigned __int8)sub_955B0(v2) )
        goto LABEL_11;
      v3 = *((_QWORD *)a1 + 7);
      v4 = *((_QWORD *)a1 + 16);
      if ( !v3 )
      {
        v6 = haystack;
        v5 = haystack;
        if ( !v4 )
          goto LABEL_52;
        goto LABEL_51;
      }
      v5 = *((const char **)a1 + 6);
      if ( (unsigned __int64)(v3 - 1) <= 3 || strncmp(&v5[v3 - 5], ".idb", 4u) )
      {
        v6 = haystack;
        if ( !v4 )
          goto LABEL_52;
LABEL_51:
        v6 = *((const char **)a1 + 15);
        goto LABEL_52;
      }
      if ( v4 )
      {
        v6 = *((const char **)a1 + 15);
        if ( (unsigned __int64)(v4 - 1) > 3 && !strncmp(&v6[v4 - 5], ".i64", 4u) )
        {
LABEL_11:
          *((_DWORD *)a1 + 48) = 0;
          sub_36010((__int64)a1);
          v7 = *((_DWORD *)a1 + 48);
          if ( a1 )
          {
            v8 = *(void (__fastcall **)(char *))(*(_QWORD *)a1 + 16LL);
            if ( (char *)v8 == (char *)sub_348D0 )
            {
              v9 = *((void **)a1 + 25);
              *(_QWORD *)a1 = &off_161378;
              if ( v9 )
              {
                *((_QWORD *)a1 + 26) = 0;
                j__free(v9);
              }
              v10 = *((void **)a1 + 18);
              if ( v10 )
              {
                *((_QWORD *)a1 + 19) = 0;
                j__free(v10);
              }
              v11 = *((void **)a1 + 15);
              if ( v11 )
              {
                *((_QWORD *)a1 + 16) = 0;
                j__free(v11);
              }
              v12 = *((void **)a1 + 12);
              if ( v12 )
              {
                *((_QWORD *)a1 + 13) = 0;
                j__free(v12);
              }
              v13 = *((void **)a1 + 9);
              if ( v13 )
              {
                *((_QWORD *)a1 + 10) = 0;
                j__free(v13);
              }
              v14 = *((void **)a1 + 6);
              if ( v14 )
              {
                *((_QWORD *)a1 + 7) = 0;
                j__free(v14);
              }
              v15 = *((void **)a1 + 3);
              if ( v15 )
              {
                *((_QWORD *)a1 + 4) = 0;
                j__free(v15);
              }
              operator delete(a1, 0xE0u);
            }
            else
            {
              v8(a1);
            }
          }
          return v7;
        }
      }
      else
      {
        v6 = haystack;
      }
LABEL_52:
      if ( (int)sub_95A70(v5, v6, 1, 0, 0, 0) >= 0 )
        goto LABEL_11;
      ptr = nullptr;
      v53 = 0;
      sub_17D80((char **)&ptr);
      if ( a1 )
      {
        v29 = *(void (**)(char *, const char *, ...))(*(_QWORD *)a1 + 16LL);
        if ( (char *)v29 == (char *)sub_348D0 )
        {
          v30 = *((void **)a1 + 25);
          *(_QWORD *)a1 = &off_161378;
          if ( v30 )
          {
            *((_QWORD *)a1 + 26) = 0;
            j__free(v30);
          }
          v31 = *((void **)a1 + 18);
          if ( v31 )
          {
            *((_QWORD *)a1 + 19) = 0;
            j__free(v31);
          }
          v32 = *((void **)a1 + 15);
          if ( v32 )
          {
            *((_QWORD *)a1 + 16) = 0;
            j__free(v32);
          }
          v33 = *((void **)a1 + 12);
          if ( v33 )
          {
            *((_QWORD *)a1 + 13) = 0;
            j__free(v33);
          }
          v34 = *((void **)a1 + 9);
          if ( v34 )
          {
            *((_QWORD *)a1 + 10) = 0;
            j__free(v34);
          }
          v35 = *((void **)a1 + 6);
          if ( v35 )
          {
            *((_QWORD *)a1 + 7) = 0;
            j__free(v35);
          }
          v36 = *((void **)a1 + 3);
          if ( v36 )
          {
            *((_QWORD *)a1 + 4) = 0;
            j__free(v36);
          }
          operator delete(a1, 0xE0u);
        }
        else
        {
          v29(a1, "failed to copy %s -> %s", (const char *)sub_348D0, v28);
        }
      }
      v37 = haystack;
      if ( (_QWORD)v53 )
        v37 = (const char *)ptr;
      sub_8F890(0, v37);
      if ( ptr )
      {
        *(_QWORD *)&v53 = 0;
        j__free(ptr);
      }
      return 33;
    case 6:
      goto LABEL_11;
    default:
      if ( !byte_1671A1 )
        sub_96F80(2608);
      BUG();
  }
}

