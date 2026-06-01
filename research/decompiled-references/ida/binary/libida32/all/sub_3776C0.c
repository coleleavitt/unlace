__int64 __fastcall sub_3776C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // al
  int v4; // r15d
  int v5; // r8d
  int v6; // r9d
  const char *v7; // r8
  size_t v8; // r15
  unsigned int v9; // eax
  size_t v11; // rax
  size_t v12; // r15
  const char *v13; // rsi
  const char *v14; // [rsp+0h] [rbp-138h]
  const char *src; // [rsp+8h] [rbp-130h]
  void *srca; // [rsp+8h] [rbp-130h]
  __int64 v17; // [rsp+18h] [rbp-120h] BYREF
  __int128 v18; // [rsp+20h] [rbp-118h] BYREF
  void *v19; // [rsp+30h] [rbp-108h] BYREF
  __int128 v20; // [rsp+38h] [rbp-100h]
  void *v21; // [rsp+48h] [rbp-F0h]
  __int128 v22; // [rsp+50h] [rbp-E8h]
  __int64 v23[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+80h] [rbp-B8h]
  int v25; // [rsp+88h] [rbp-B0h]
  __int64 v26; // [rsp+90h] [rbp-A8h]
  char v27; // [rsp+98h] [rbp-A0h]
  __int64 v28; // [rsp+A0h] [rbp-98h] BYREF
  void *ptr; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-88h]
  char v31[8]; // [rsp+C0h] [rbp-78h] BYREF
  int v32; // [rsp+C8h] [rbp-70h]
  __int128 v33; // [rsp+CCh] [rbp-6Ch]
  int v34; // [rsp+DCh] [rbp-5Ch]
  _BYTE v35[10]; // [rsp+EEh] [rbp-4Ah] BYREF
  unsigned __int64 v36; // [rsp+F8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v17 = 0;
  v2 = sub_36C270((__int64)&v17, (char *)a1, 0);
  if ( v2 )
    goto LABEL_19;
  v3 = *(_BYTE *)(a1 + 32);
  v19 = nullptr;
  v21 = nullptr;
  v24 = 1;
  v25 = -1;
  v26 = 0;
  v27 = 0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  *(_OWORD *)v23 = 0;
  if ( v3 == 7 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v14 = *(const char **)(a1 + 40);
        v11 = strlen(v14);
        v12 = v11;
        if ( v11 )
        {
          srca = (void *)(v11 + 1);
          v19 = (void *)qvector_reserve(&v19, 0, v11 + 1, 1);
          *(_QWORD *)&v20 = srca;
          memmove(v19, v14, v12);
          *((_BYTE *)v19 + v12) = 0;
        }
      }
    }
    v4 = -2147483645;
  }
  else
  {
    if ( v3 != 2 )
    {
      v9 = set_qerrno(1531, a1);
      goto LABEL_14;
    }
    v4 = 2;
    *(_QWORD *)&v18 = 8LL * *(unsigned int *)(a1 + 40);
  }
  if ( (int)find_tinfo_udt_member((int)&v18) >= 0 && (v4 != 2 || (_QWORD)v18 == 8LL * *(unsigned int *)(a1 + 40)) )
  {
    sub_36ACE0(a2, v23);
    v7 = haystack;
    if ( (_QWORD)v20 )
      v7 = (const char *)v19;
    v28 = 7;
    ptr = nullptr;
    v30 = 0;
    if ( v7 )
    {
      src = v7;
      v8 = strlen(v7);
      ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
      *(_QWORD *)&v30 = v8 + 1;
      memmove(ptr, src, v8);
      *((_BYTE *)ptr + v8) = 0;
    }
    v31[0] = 2;
    v33 = 0;
    v32 = (unsigned __int64)v18 >> 3;
    v34 = 0;
    set_idcv_attr();
    set_idcv_attr();
    free_idcv(v31);
    free_idcv(&v28);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 32) == 7 )
  {
    v13 = haystack;
    if ( *(_QWORD *)(a1 + 48) )
      v13 = *(const char **)(a1 + 40);
  }
  else
  {
    qsnprintf((int)v35, 10, (int)"%u", *(_DWORD *)(a1 + 40), v5, v6, (char)v14);
    v13 = v35;
  }
  set_error_string();
  v9 = set_qerrno(1538, v13);
LABEL_14:
  v2 = v9;
LABEL_15:
  clear_tinfo_t(v23);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
LABEL_19:
  clear_tinfo_t(&v17);
  return v2;
}

