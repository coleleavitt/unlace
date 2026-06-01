__int64 __fastcall sub_8DA4A0(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  void *v10; // r8
  void *v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 (*v14)(); // rax
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(_QWORD *, unsigned __int8, __int64); // rax
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  unsigned int v19; // [rsp+8h] [rbp-E0h]
  unsigned int v21; // [rsp+18h] [rbp-D0h]
  void *v22; // [rsp+18h] [rbp-D0h]
  __int64 v23; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-C0h] BYREF
  void *ptr; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+38h] [rbp-B0h]
  _BYTE v27[88]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v28; // [rsp+A8h] [rbp-40h]

  v7 = *a1;
  v28 = __readfsqword(0x28u);
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(v7 + 32))(a1, &v23, a3, 1);
  if ( v8 )
    return v8;
  memset(v27, 0, sizeof(v27));
  MD5Init(v27);
  ptr = nullptr;
  v26 = 0;
  if ( byte_2CAD3D1 )
  {
    v10 = elf_gnu_hash_bucket + 1368;
    goto LABEL_22;
  }
  v10 = off_2C581D8;
  v11 = nullptr;
  if ( off_2C581D8 )
  {
LABEL_22:
    v22 = v10;
    ptr = (void *)qvector_reserve(&ptr, 0, v10, 1);
    v10 = v22;
    v11 = ptr;
  }
  *(_QWORD *)&v26 = v10;
  v12 = 0;
  while ( 1 )
  {
    v24 = (__int64)v10;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, void *))(*(_QWORD *)v23 + 16LL))(v23, &v24, v11);
    if ( v15 || !v24 )
      break;
    MD5Update();
    v16 = v24;
    if ( !a5 )
      goto LABEL_8;
    v17 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*a1 + 200LL);
    if ( v17 != sub_8A88C0 )
    {
      v17(a1, 1u, v24);
LABEL_14:
      v16 = v24;
      goto LABEL_8;
    }
    v13 = a1[3];
    if ( v13 )
    {
      v14 = *(__int64 (**)())(*(_QWORD *)v13 + 8LL);
      if ( v14 != sub_8A46A0 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64))v14)(v13, 1, v24);
        goto LABEL_14;
      }
    }
LABEL_8:
    v12 += v16;
    v10 = (void *)v26;
    v11 = ptr;
  }
  v21 = v15;
  MD5Final(a2, v27);
  if ( a4 )
    *a4 = v12;
  v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 48LL);
  if ( v21 )
  {
    v18(v23, 0);
    v8 = v21;
  }
  else
  {
    v8 = v18(v23, 1);
  }
  if ( ptr )
  {
    v19 = v8;
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
    return v19;
  }
  return v8;
}

