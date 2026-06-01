__int64 __fastcall sub_68A960(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // r12
  char v6; // al
  unsigned int v8; // eax
  char *v10; // rax
  char *v11; // r15
  unsigned __int64 v12; // rdx
  __int64 idati; // rax
  __int64 v14; // [rsp+10h] [rbp-2C8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-2C0h] BYREF
  __int128 v16; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-2A8h] BYREF
  int v18; // [rsp+38h] [rbp-2A0h]
  __int16 v19; // [rsp+3Ch] [rbp-29Ch]
  __int64 v20; // [rsp+40h] [rbp-298h] BYREF
  const char *v21; // [rsp+48h] [rbp-290h]
  void *v22; // [rsp+50h] [rbp-288h] BYREF
  __int128 v23; // [rsp+58h] [rbp-280h]
  void *ptr; // [rsp+68h] [rbp-270h]
  __int128 v25; // [rsp+70h] [rbp-268h]
  __int64 v26; // [rsp+80h] [rbp-258h] BYREF
  int v27; // [rsp+88h] [rbp-250h]
  char v28[520]; // [rsp+90h] [rbp-248h] BYREF
  unsigned __int64 v29; // [rsp+298h] [rbp-40h]

  v4 = a2;
  v6 = *(_BYTE *)(a3 + 88);
  v29 = __readfsqword(0x28u);
  LOBYTE(v8) = v6 & 0xF0;
  if ( (_BYTE)v8 == 0xC0 )
  {
    v8 = *(_DWORD *)(a3 + 28);
    if ( v8 - 208 <= 0x2F )
      return 0;
  }
  else
  {
    v8 = (unsigned __int8)v8;
    if ( (unsigned int)(unsigned __int8)v8 - 208 <= 0x2F )
      return 0;
  }
  if ( v8 <= 0x10 )
    v8 = getinf(99);
  if ( v8 != 128 && (*(_BYTE *)(a3 + 24) & 0x10) != 0 )
    return 0;
  v10 = strstr(a4, "::");
  if ( !v10 )
    return 0;
  do
  {
    v11 = v10;
    v10 = strstr(v10 + 2, "::");
  }
  while ( v10 );
  v12 = v11 - a4 + 1;
  if ( v12 > 0x200 )
    v12 = 512;
  qstrncpy(v28, a4, v12);
  if ( (unsigned __int8)sub_68A840(a1, v28, 0xFFFFFFFFFFFFFFFFLL) )
    return 0;
  if ( !(unsigned int)sub_632230(a1, a2, v28, 1, nullptr, 0, 0, 0, 0, nullptr) )
  {
    *(_QWORD *)&v16 = 0;
    v21 = &byte_22CD811;
    idati = a2;
    LOWORD(v22) = 0;
    if ( !a2 )
      idati = get_idati(a1, 0);
    v20 = idati;
    create_tinfo(&v16, 13, 189, &v20);
    if ( (unsigned int)save_tinfo(&v16, a2, 0, v28, 1) )
    {
      clear_tinfo_t(&v16);
      return 0;
    }
    clear_tinfo_t(&v16);
  }
  v23 = 0;
  LODWORD(v20) = 0;
  v21 = nullptr;
  v22 = nullptr;
  ptr = nullptr;
  v26 = 0;
  v27 = 1;
  v25 = 0;
  v22 = (void *)qvector_reserve(&v22, 0, 5, 1);
  *(_QWORD *)&v23 = 5;
  strcpy((char *)v22, "this");
  LOWORD(v17) = 0;
  *((_QWORD *)&v16 + 1) = v28;
  if ( !a2 )
    v4 = get_idati(&v22, 0);
  *(_QWORD *)&v16 = v4;
  create_tinfo(&v26, 61, 61, &v16);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  copy_tinfo_t((char *)&v16 + 8);
  v17 = 0;
  copy_tinfo_t(&v17);
  v18 = 0;
  v19 = 0;
  clear_tinfo_t(&v15);
  clear_tinfo_t(&v14);
  copy_tinfo_t(&v16);
  create_tinfo(&v26, 10, 10, &v16);
  clear_tinfo_t(&v17);
  clear_tinfo_t((char *)&v16 + 8);
  clear_tinfo_t(&v16);
  sub_6888B0((__int64 *)a3, *(char **)a3, (__int64)&v20);
  *(_DWORD *)(a3 + 56) += get_tinfo_size(0, v26, 0);
  clear_tinfo_t(&v26);
  if ( ptr )
  {
    *(_QWORD *)&v25 = 0;
    qfree(ptr);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  cleanup_argloc(&v20);
  return 1;
}

