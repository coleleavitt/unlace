__int64 __fastcall sub_36C7A0(__int64 a1, __m128i *a2)
{
  unsigned int v2; // ebx
  int idcv_attr; // eax
  int v5; // edx
  int v6; // r8d
  const char *v7; // rax
  char v8; // al
  void *v9; // rdi
  __m128i v10; // xmm0
  const char *v11; // [rsp+0h] [rbp-C0h]
  __int64 v12; // [rsp+18h] [rbp-A8h] BYREF
  void *ptr; // [rsp+20h] [rbp-A0h] BYREF
  __m128i v14; // [rsp+28h] [rbp-98h] BYREF
  char v15[8]; // [rsp+40h] [rbp-80h] BYREF
  __int128 v16; // [rsp+48h] [rbp-78h]
  __int64 v17; // [rsp+58h] [rbp-68h]
  char v18[8]; // [rsp+60h] [rbp-60h] BYREF
  __int128 v19; // [rsp+68h] [rbp-58h]
  __int64 v20; // [rsp+78h] [rbp-48h]
  unsigned __int64 v21; // [rsp+88h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  v12 = 0;
  v2 = sub_36C270((__int64)&v12, (char *)a1, 0);
  if ( !v2 )
  {
    v15[0] = 2;
    v17 = 0;
    v16 = 0;
    v11 = nullptr;
    if ( !(unsigned int)get_idcv_attr() && v15[0] == 7 )
    {
      v11 = haystack;
      if ( *((_QWORD *)&v16 + 1) )
        v11 = (const char *)v16;
    }
    v18[0] = 2;
    v20 = 0;
    v19 = 0;
    idcv_attr = get_idcv_attr();
    v5 = a2->m128i_i32[2];
    v6 = idcv_attr;
    if ( idcv_attr || v18[0] != 7 )
    {
      if ( v5 <= 1 )
      {
        v6 = 0;
        v7 = nullptr;
        ptr = nullptr;
        v14 = 0;
LABEL_10:
        v8 = print_tinfo((int)&ptr, 0, 2, 40, v6, (int)&v12, (__int64)v11, (__int64)v7);
        v9 = ptr;
        if ( v8 )
        {
          v10 = _mm_loadu_si128(&v14);
          a2->m128i_i8[0] = 7;
          a2->m128i_i64[1] = (__int64)v9;
          a2[1] = v10;
        }
        else if ( ptr )
        {
          v14.m128i_i64[0] = 0;
          qfree(ptr);
        }
        goto LABEL_12;
      }
      if ( v5 == 2 )
      {
        v6 = *(_DWORD *)(a1 + 40);
        v14 = 0;
        v7 = nullptr;
        ptr = nullptr;
        goto LABEL_10;
      }
LABEL_13:
      set_error_string();
      v2 = set_qerrno(56, "typeinfo.print");
LABEL_12:
      free_idcv(v18);
      free_idcv(v15);
      goto LABEL_2;
    }
    v7 = haystack;
    if ( *((_QWORD *)&v19 + 1) )
      v7 = (const char *)v19;
    if ( v5 > 1 )
    {
      if ( v5 != 2 )
        goto LABEL_13;
      v6 = *(_DWORD *)(a1 + 40);
    }
    ptr = nullptr;
    v14 = 0;
    if ( v7 && !*v7 )
      v7 = nullptr;
    goto LABEL_10;
  }
LABEL_2:
  clear_tinfo_t(&v12);
  return v2;
}

