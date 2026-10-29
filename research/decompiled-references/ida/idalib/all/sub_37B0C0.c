__int64 __fastcall sub_37B0C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // al
  int v4; // r15d
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r9
  const char *v8; // r8
  size_t v9; // r15
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  size_t v14; // rax
  size_t v15; // r15
  const char *v16; // rsi
  const char *v17; // [rsp+0h] [rbp-148h]
  const char *src; // [rsp+8h] [rbp-140h]
  void *srca; // [rsp+8h] [rbp-140h]
  __int64 v20; // [rsp+18h] [rbp-130h] BYREF
  __int128 v21; // [rsp+20h] [rbp-128h] BYREF
  void *v22; // [rsp+30h] [rbp-118h] BYREF
  __int128 v23; // [rsp+38h] [rbp-110h]
  void *v24; // [rsp+48h] [rbp-100h]
  __int128 v25; // [rsp+50h] [rbp-F8h]
  __int64 v26[6]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+90h] [rbp-B8h]
  int v28; // [rsp+98h] [rbp-B0h]
  __int64 v29; // [rsp+A0h] [rbp-A8h]
  char v30; // [rsp+A8h] [rbp-A0h]
  __int64 v31; // [rsp+B0h] [rbp-98h] BYREF
  void *ptr; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-88h]
  char v34[8]; // [rsp+D0h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+D8h] [rbp-70h]
  __int128 v36; // [rsp+E0h] [rbp-68h]
  _BYTE v37[10]; // [rsp+FEh] [rbp-4Ah] BYREF
  unsigned __int64 v38; // [rsp+108h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v20 = 0;
  v2 = sub_36FA50((__int64)&v20, (char *)a1, 0);
  if ( v2 )
    goto LABEL_19;
  v3 = *(_BYTE *)(a1 + 32);
  v22 = nullptr;
  v24 = nullptr;
  v27 = 1;
  v28 = -1;
  v29 = 0;
  v30 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  *(_OWORD *)v26 = 0;
  if ( v3 == 7 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v17 = *(const char **)(a1 + 40);
        v14 = strlen(v17);
        v15 = v14;
        if ( v14 )
        {
          srca = (void *)(v14 + 1);
          v22 = (void *)qvector_reserve(&v22, 0, v14 + 1, 1);
          *(_QWORD *)&v23 = srca;
          memmove(v22, v17, v15);
          *((_BYTE *)v22 + v15) = 0;
        }
      }
    }
    v4 = -2147483645;
  }
  else
  {
    if ( v3 != 2 )
    {
      v12 = set_qerrno(1531);
      goto LABEL_14;
    }
    v4 = 2;
    *(_QWORD *)&v21 = 8LL * *(_QWORD *)(a1 + 40);
  }
  if ( (int)find_tinfo_udt_member((int)&v21) >= 0 && (v4 != 2 || (_QWORD)v21 == 8LL * *(_QWORD *)(a1 + 40)) )
  {
    sub_36E470(a2, v26);
    v8 = haystack;
    if ( (_QWORD)v23 )
      v8 = (const char *)v22;
    v31 = 7;
    ptr = nullptr;
    v33 = 0;
    if ( v8 )
    {
      src = v8;
      v9 = strlen(v8);
      ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
      *(_QWORD *)&v33 = v9 + 1;
      memmove(ptr, src, v9);
      *((_BYTE *)ptr + v9) = 0;
    }
    v34[0] = 2;
    v36 = 0;
    v35 = (unsigned __int64)v21 >> 3;
    set_idcv_attr(a2, "name", &v31, 0, v8, v7);
    set_idcv_attr(a2, "offset", v34, 0, v10, v11);
    free_idcv(v34);
    free_idcv(&v31);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 32) == 7 )
  {
    v16 = haystack;
    if ( *(_QWORD *)(a1 + 48) )
      v16 = *(const char **)(a1 + 40);
  }
  else
  {
    qsnprintf((unsigned int)v37, 10, (unsigned int)"%llu", *(_QWORD *)(a1 + 40), v5, v6);
    v16 = v37;
  }
  set_error_string(0, v16);
  v12 = set_qerrno(1538);
LABEL_14:
  v2 = v12;
LABEL_15:
  clear_tinfo_t(v26);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
LABEL_19:
  clear_tinfo_t(&v20);
  return v2;
}
