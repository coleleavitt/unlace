__int64 __fastcall lsite_launch_ida_for_cvt64_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  const char *file_ext; // rax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const char *v11; // rax
  const char *v12; // rbx
  size_t v13; // rax
  size_t v14; // rbp
  void *v15; // rdi
  size_t v16; // r12
  unsigned int v17; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v18[2]; // [rsp+10h] [rbp-58h] BYREF
  char v19; // [rsp+20h] [rbp-48h]
  void *dest; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+38h] [rbp-30h]
  unsigned __int64 v22; // [rsp+48h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  file_ext = (const char *)get_file_ext(a3);
  if ( file_ext && !strcasecmp(file_ext, "idb") )
  {
    if ( (unsigned __int8)qfileexist(a2, "idb") )
    {
      set_error_string();
      return 2;
    }
    else
    {
      v19 = 0;
      v18[1] = 0;
      v18[0] = a3;
      v7 = sub_8ABC50((__int64)"idat", 1u, "VAULT_CVT64", a4, v18, 0, 0);
      if ( !v7 )
        return 33;
      check_process_exit(v7, &v17, 0xFFFFFFFFLL);
      v9 = v17;
      if ( v17 )
      {
        dest = nullptr;
        v21 = 0;
        if ( v17 != -1 )
        {
LABEL_7:
          sub_3573A0((char **)&dest);
LABEL_8:
          set_error_string();
          if ( dest )
          {
            *(_QWORD *)&v21 = 0;
            qfree(dest);
          }
          return 33;
        }
LABEL_17:
        v11 = (const char *)qstrerror(0xFFFFFFFFLL, &v17, v8, v9);
        v12 = v11;
        if ( v11 && (v13 = strlen(v11), (v14 = v13) != 0) )
        {
          v15 = dest;
          v16 = v13 + 1;
          if ( *((_QWORD *)&v21 + 1) < v13 + 1 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v16, 1);
            v15 = dest;
          }
          *(_QWORD *)&v21 = v16;
          memmove(v15, v12, v14);
          *((_BYTE *)dest + v14) = 0;
        }
        else
        {
          *(_QWORD *)&v21 = 0;
        }
        goto LABEL_8;
      }
      if ( !(unsigned __int8)qfileexist(a2, &v17) )
      {
        v9 = v17;
        dest = nullptr;
        v21 = 0;
        if ( v17 != -1 )
          goto LABEL_7;
        goto LABEL_17;
      }
      return 0;
    }
  }
  else
  {
    set_error_string();
    return 54;
  }
}

