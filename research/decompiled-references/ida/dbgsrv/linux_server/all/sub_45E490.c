/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E490
// Address: 0x000000000045E490

//----- (000000000045E490) ----------------------------------------------------
__int64 __fastcall sub_45E490(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r12d
  char *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rbp
  char *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  double v18; // xmm4_8
  double v19; // xmm5_8
  int v20; // r14d
  bool v21; // r15
  unsigned int *v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // rbx
  void *v25; // rsi
  char v26; // [rsp+Fh] [rbp-2F9h]
  void *src; // [rsp+10h] [rbp-2F8h] BYREF
  int v28[4]; // [rsp+18h] [rbp-2F0h]
  void *ptr; // [rsp+30h] [rbp-2D8h] BYREF
  int v30[4]; // [rsp+38h] [rbp-2D0h]
  _BYTE v31[32]; // [rsp+50h] [rbp-2B8h] BYREF
  void *v32; // [rsp+70h] [rbp-298h]
  __int64 v33; // [rsp+78h] [rbp-290h]
  __int64 v34[4]; // [rsp+A0h] [rbp-268h] BYREF
  void *v35; // [rsp+C0h] [rbp-248h]
  __int64 v36; // [rsp+C8h] [rbp-240h]
  void *v37; // [rsp+170h] [rbp-198h]
  __int64 v38; // [rsp+178h] [rbp-190h]
  void *v39; // [rsp+290h] [rbp-78h]
  __int64 v40; // [rsp+298h] [rbp-70h]
  __int64 v41; // [rsp+2A8h] [rbp-60h]
  char v42; // [rsp+2B8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+2C8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  sub_428130((__int64)v31, a2, 0);
  sub_424C30((__int64)v31, nullptr);
  if ( (unsigned __int8)sub_424C50((__int64)v31)
    && (unsigned __int8)sub_4251B0((__int64)v31)
    && (v10 = sub_4295E0((__int64)v31, a3, a4, a5, a6, v18, v19, a9, a10), (_BYTE)v10) )
  {
    v20 = sub_424510((__int64)v31);
    v26 = v42;
    src = nullptr;
    ptr = nullptr;
    *(_OWORD *)v28 = 0;
    *(_OWORD *)v30 = 0;
    if ( sub_428F60((__int64)v34, 1, ".debug_info") || sub_428F60((__int64)v34, 1879048222, ".debug_info") )
      v21 = v10;
    else
      v21 = sub_428F60((__int64)v34, 1, ".zdebug_info") != nullptr;
    v22 = sub_428F60((__int64)v34, 7, ".note.gnu.build-id");
    if ( (v22 || (v22 = sub_428F60((__int64)v34, 7, ".note.go.buildid")) != nullptr) && *((_QWORD *)v22 + 4) <= 0xFFFFu )
      sub_429EA0(v34, (__int64)&src, (__int64)v22);
    v23 = sub_428F60((__int64)v34, 1, ".gnu_debuglink");
    if ( v23 )
      sub_428C40((__int64)v31, &ptr, *((_QWORD *)v23 + 3));
    if ( *(_QWORD *)v30 > 1u )
      sub_4821A0((_BYTE *)(a1 + 1034), (char *)ptr, 4096);
    else
      *(_BYTE *)(a1 + 1034) = 0;
    v24 = *(_QWORD *)v28;
    v25 = src;
    *(_DWORD *)(a1 + 4) = v20;
    if ( (unsigned __int64)(int)v24 > 0x400 )
    {
      *(_WORD *)(a1 + 8) = 1024;
      memmove((void *)(a1 + 10), v25, 0x400u);
      *(_BYTE *)(a1 + 1) = v21;
      *(_BYTE *)a1 = v26;
    }
    else
    {
      *(_WORD *)(a1 + 8) = v24;
      memmove((void *)(a1 + 10), v25, (int)v24);
      *(_BYTE *)(a1 + 1) = v21;
      *(_BYTE *)a1 = v26;
      if ( !v24 && !v21 )
        LOBYTE(v10) = *(_QWORD *)v30 > 1u;
    }
    if ( ptr )
    {
      *(_QWORD *)v30 = 0;
      j__free(ptr);
    }
    if ( src )
    {
      *(_QWORD *)v28 = 0;
      j__free(src);
    }
  }
  else
  {
    v10 = 0;
  }
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
  if ( v39 )
  {
    v40 = 0;
    j__free(v39);
  }
  v11 = (char *)v37;
  if ( v37 )
  {
    v12 = v38;
    if ( v38 )
    {
      v13 = 0;
      do
      {
        v14 = &v11[96 * v13];
        v15 = *((void **)v14 + 3);
        if ( v15 )
        {
          *((_QWORD *)v14 + 4) = 0;
          j__free(v15);
        }
        v16 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *((_QWORD *)v14 + 1) = 0;
          j__free(v16);
        }
        ++v13;
        v11 = (char *)v37;
      }
      while ( v12 != v13 );
    }
    v38 = 0;
    j__free(v11);
  }
  if ( v35 )
  {
    v36 = 0;
    j__free(v35);
  }
  if ( v32 )
  {
    v33 = 0;
    j__free(v32);
  }
  return v10;
}
// 45E603: variable 'v18' is possibly undefined
// 45E603: variable 'v19' is possibly undefined
