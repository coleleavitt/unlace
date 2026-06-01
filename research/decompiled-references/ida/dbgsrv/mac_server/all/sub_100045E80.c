/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045E80
// Address: 0x0000000100045E80

//----- (0000000100045E80) ----------------------------------------------------
__int64 __fastcall sub_100045E80(__int64 a1, const char *a2, _BYTE *a3, unsigned int a4, unsigned __int8 a5, bool *a6)
{
  unsigned int v7; // r12d
  void *v8; // r14
  __int64 v9; // r14
  size_t v10; // rax
  size_t v11; // rbx
  char *v12; // r12
  size_t v14; // r15
  unsigned __int8 *v15; // r13
  bool v16; // r15
  size_t v17; // rax
  size_t v18; // rbx
  unsigned __int64 v19; // r14
  void *v20; // rax
  bool *v21; // [rsp+8h] [rbp-78h]
  __int64 v22; // [rsp+10h] [rbp-70h]
  unsigned __int8 v25; // [rsp+24h] [rbp-5Ch]
  _QWORD __dst[2]; // [rsp+28h] [rbp-58h] BYREF
  void *__p; // [rsp+38h] [rbp-48h]
  _QWORD *v28; // [rsp+48h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 568) == 1 )
  {
    v7 = a4;
    *(_BYTE *)(a1 + 568) = 0;
    v8 = operator new(0x28u);
    sub_10004DEB0((__int64)v8, *(_QWORD *)(a1 + 520));
    *(_QWORD *)(a1 + 520) = v8;
    a4 = v7;
  }
  if ( !a2 || a4 > 0x7F || !*a2 )
    return set_qerrno();
  v25 = a4;
  v9 = *(_QWORD *)(a1 + 520);
  v10 = strlen(a2);
  if ( v10 >= 0xFFFFFFFFFFFFFFF8LL )
    sub_10004CF00();
  v11 = v10;
  v22 = *(_QWORD *)(v9 + 24);
  v21 = a6;
  if ( v10 >= 0x17 )
  {
    v14 = 26;
    if ( (v10 | 7) != 0x17 )
      v14 = (v10 | 7) + 1;
    v12 = (char *)operator new(v14);
    __p = v12;
    __dst[0] = v14 + 1;
    __dst[1] = v11;
  }
  else
  {
    LOBYTE(__dst[0]) = 2 * v10;
    v12 = (char *)__dst + 1;
    if ( !v10 )
      goto LABEL_15;
  }
  memcpy(v12, a2, v11);
LABEL_15:
  v12[v11] = 0;
  v28 = __dst;
  v15 = sub_10004EAA0(v9, (unsigned __int8 *)__dst, (__int64)&byte_10009086F, (__int64 *)&v28);
  if ( (__dst[0] & 1) != 0 )
    operator delete(__p);
  v16 = *(_QWORD *)(v9 + 24) != v22;
  if ( a3 && *a3 && (v17 = strlen(a3)) != 0 )
  {
    v18 = v17;
    v19 = v17 + 1;
    v20 = *((void **)v15 + 5);
    if ( *((_QWORD *)v15 + 7) < v19 )
    {
      v20 = qvector_reserve((__int64)(v15 + 40), *((void **)v15 + 5), v19, 1u);
      *((_QWORD *)v15 + 5) = v20;
    }
    *((_QWORD *)v15 + 6) = v19;
    memmove(v20, a3, v18);
    *(_BYTE *)(*((_QWORD *)v15 + 5) + v18) = 0;
  }
  else
  {
    *((_QWORD *)v15 + 6) = 0;
  }
  v15[64] = v25;
  v15[65] = a5;
  if ( v21 )
    *v21 = v16;
  return 0;
}
// 10009086F: using guessed type char byte_10009086F;
