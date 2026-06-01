void __fastcall __noreturn sub_8D0030(char *a1)
{
  const char *v1; // rbp
  bool v2; // zf
  const char *v4; // rsi
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rax
  const char *v8; // rbp
  size_t v9; // rax
  size_t v10; // r12
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax
  int v14; // [rsp+Ch] [rbp-105Ch] BYREF
  _QWORD v15[4]; // [rsp+10h] [rbp-1058h] BYREF
  _BYTE v16[4104]; // [rsp+30h] [rbp-1038h] BYREF
  unsigned __int64 v17; // [rsp+1038h] [rbp-30h]

  v1 = haystack;
  v2 = *((_QWORD *)a1 + 7) == 0;
  v17 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = *((const char **)a1 + 6);
  set_file_ext(v16, 4096, v1, "idb_ok");
  check_process_exit(*((_QWORD *)a1 + 22), &v14, 0xFFFFFFFFLL);
  if ( v14 == -1 )
  {
    v7 = (const char *)qstrerror(0xFFFFFFFFLL);
    v8 = v7;
    if ( v7 && (v9 = strlen(v7), (v10 = v9) != 0) )
    {
      v11 = *((void **)a1 + 25);
      v12 = v9 + 1;
      if ( *((_QWORD *)a1 + 27) < v9 + 1 )
      {
        v13 = qvector_reserve(a1 + 200, *((_QWORD *)a1 + 25), v12, 1);
        *((_QWORD *)a1 + 25) = v13;
        v11 = (void *)v13;
      }
      *((_QWORD *)a1 + 26) = v12;
      memmove(v11, v8, v10);
      *(_BYTE *)(*((_QWORD *)a1 + 25) + v10) = 0;
    }
    else
    {
      *((_QWORD *)a1 + 26) = 0;
    }
  }
  else
  {
    if ( v14 )
    {
      qunlink(v16);
      sub_35A790((char **)a1 + 25);
      v4 = haystack;
      if ( !*((_QWORD *)a1 + 26) )
        goto LABEL_7;
      goto LABEL_10;
    }
    if ( !(unsigned __int8)qfileexist(v16, &v14) )
    {
      sub_35A790((char **)a1 + 25);
      v4 = haystack;
      if ( !*((_QWORD *)a1 + 26) )
      {
LABEL_7:
        set_error_string(0, v4);
        goto LABEL_8;
      }
LABEL_10:
      v4 = *((const char **)a1 + 25);
      goto LABEL_7;
    }
    qunlink(v16);
    *((_DWORD *)a1 + 48) = 0;
  }
LABEL_8:
  v15[3] = a1;
  v15[0] = off_2B3E040;
  v15[1] = 0;
  v15[2] = 0;
  callui(86, (int)v15, 0, (int)&callui, v5, v6);
}
