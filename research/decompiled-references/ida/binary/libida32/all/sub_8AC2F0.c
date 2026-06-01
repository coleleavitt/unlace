void __fastcall __noreturn sub_8AC2F0(char *a1)
{
  const char *v1; // rbp
  bool v2; // zf
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  const char *v8; // rax
  const char *v9; // rbp
  size_t v10; // rax
  size_t v11; // r12
  void *v12; // rdi
  size_t v13; // r13
  __int64 v14; // rax
  int v15; // [rsp+Ch] [rbp-105Ch] BYREF
  _QWORD v16[4]; // [rsp+10h] [rbp-1058h] BYREF
  _BYTE v17[4104]; // [rsp+30h] [rbp-1038h] BYREF
  unsigned __int64 v18; // [rsp+1038h] [rbp-30h]

  v1 = haystack;
  v2 = *((_QWORD *)a1 + 7) == 0;
  v18 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = *((const char **)a1 + 6);
  set_file_ext(v17, 4096, v1, "idb_ok");
  check_process_exit(*((_QWORD *)a1 + 22), &v15, 0xFFFFFFFFLL);
  if ( v15 == -1 )
  {
    v8 = (const char *)qstrerror(0xFFFFFFFFLL, &v15, v4, v5);
    v9 = v8;
    if ( v8 && (v10 = strlen(v8), (v11 = v10) != 0) )
    {
      v12 = *((void **)a1 + 25);
      v13 = v10 + 1;
      if ( *((_QWORD *)a1 + 27) < v10 + 1 )
      {
        v14 = qvector_reserve(a1 + 200, *((_QWORD *)a1 + 25), v13, 1);
        *((_QWORD *)a1 + 25) = v14;
        v12 = (void *)v14;
      }
      *((_QWORD *)a1 + 26) = v13;
      memmove(v12, v9, v11);
      *(_BYTE *)(*((_QWORD *)a1 + 25) + v11) = 0;
    }
    else
    {
      *((_QWORD *)a1 + 26) = 0;
    }
  }
  else
  {
    if ( v15 )
    {
      qunlink(v17);
      sub_3573A0((char **)a1 + 25);
      goto LABEL_7;
    }
    if ( !(unsigned __int8)qfileexist(v17, &v15) )
    {
      sub_3573A0((char **)a1 + 25);
LABEL_7:
      set_error_string();
      goto LABEL_8;
    }
    qunlink(v17);
    *((_DWORD *)a1 + 48) = 0;
  }
LABEL_8:
  v16[3] = a1;
  v16[0] = off_2B140A0;
  v16[1] = 0;
  v16[2] = 0;
  callui(86, (int)v16, 0, (int)&callui, v6, v7);
}

