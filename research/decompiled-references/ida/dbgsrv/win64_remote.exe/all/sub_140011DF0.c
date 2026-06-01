/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140011DF0
// Address: 0x0000000140011DF0

//----- (0000000140011DF0) ----------------------------------------------------
__int64 __fastcall sub_140011DF0(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, __int64 a5, const char *a6)
{
  unsigned int v8; // edi
  __int64 v9; // r14
  size_t v10; // rsi
  void *v11; // rax
  __int64 v12; // rcx
  size_t v13; // rbx
  size_t v14; // rbx
  void *v15; // rax
  size_t v16; // rbx
  _QWORD *v17; // r13
  __int64 v18; // rbx
  size_t v19; // r14
  void *v20; // rax
  size_t v21; // rsi
  void *v22; // rbx
  void *v23; // rax
  void *v24; // rbx
  size_t Size[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  void *v31; // [rsp+68h] [rbp-98h] BYREF
  size_t v32[2]; // [rsp+70h] [rbp-90h]
  _BYTE v33[40]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v38; // [rsp+D0h] [rbp-30h]
  void *v39; // [rsp+D8h] [rbp-28h] BYREF
  size_t v40[2]; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int128 v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+20h] BYREF
  __int64 v45; // [rsp+128h] [rbp+28h]
  __int64 v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  void *Block[2]; // [rsp+140h] [rbp+40h]
  void *v49; // [rsp+150h] [rbp+50h]
  __int128 v50; // [rsp+158h] [rbp+58h]
  __int128 v51; // [rsp+168h] [rbp+68h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  _QWORD *v53; // [rsp+188h] [rbp+88h]
  const char *v54; // [rsp+190h] [rbp+90h]
  _BYTE v55[16]; // [rsp+198h] [rbp+98h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+1A8h] [rbp+A8h] BYREF
  struct __crt_locale_pointers Src[64]; // [rsp+1E0h] [rbp+E0h] BYREF

  v53 = a4;
  v35 = a2;
  v54 = a6;
  v8 = 1;
  v9 = (*(_QWORD *)(a1 + 24) & *(_QWORD *)(a5 + 8)) - (*(_QWORD *)(a1 + 24) & *(_QWORD *)(a5 + 16));
  sub_14005B0A0(Src, 1024, "%sStack[%08X]", a6, a2);
  *(_OWORD *)Size = 0;
  v27 = 0;
  v10 = strlen((const char *)Src);
  v11 = nullptr;
  if ( v10 != -1 )
  {
    v11 = sub_14005ABE0((__int64)Size, nullptr, v10 + 1, 1u);
    Size[0] = (size_t)v11;
  }
  Size[1] = v10 + 1;
  memcpy(v11, Src, v10);
  *(_BYTE *)(Size[0] + v10) = 0;
  v36 = a1;
  v12 = *(_QWORD *)(a5 + 16) & *(_QWORD *)(a1 + 24);
  v37 = v12;
  v38 = (unsigned int)v9;
  v39 = nullptr;
  *(_OWORD *)v40 = 0;
  v13 = Size[1];
  if ( Size[1] )
  {
    v39 = sub_14005AAA0(Size[1]);
    v40[1] = v13;
    memcpy(v39, (const void *)Size[0], v13);
    v40[0] = v13;
    v12 = v37;
  }
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( Size[0] )
  {
    Size[1] = 0;
    j_free((void *)Size[0]);
    Size[0] = 0;
    v27 = 0;
    v12 = v37;
  }
  v28 = v12;
  v29 = v36;
  v30 = v12;
  v31 = (void *)v38;
  *(_OWORD *)v32 = 0;
  *(_QWORD *)v33 = 0;
  v14 = v40[0];
  if ( v40[0] )
  {
    v32[0] = (size_t)sub_14005AAA0(v40[0]);
    *(_QWORD *)v33 = v14;
    memcpy((void *)v32[0], v39, v14);
    v32[1] = v14;
  }
  *(_OWORD *)&v33[8] = v41;
  *(_OWORD *)&v33[24] = v42;
  v34 = v43;
  sub_140009E20(a3, (__int64)v55, (__int64)&v28);
  if ( v32[0] )
    j_free((void *)v32[0]);
  if ( v40[1] >= 6 )
  {
    v15 = v39;
  }
  else
  {
    v15 = sub_14005ABE0((__int64)&v39, v39, 6u, 1u);
    v39 = v15;
  }
  v40[0] = 6;
  memcpy(v15, "STACK", 5u);
  *((_BYTE *)v39 + 5) = 0;
  v28 = v37;
  v29 = v36;
  v30 = v37;
  v31 = (void *)v38;
  *(_OWORD *)v32 = 0;
  *(_QWORD *)v33 = 0;
  v16 = v40[0];
  if ( v40[0] )
  {
    v32[0] = (size_t)sub_14005AAA0(v40[0]);
    *(_QWORD *)v33 = v16;
    memcpy((void *)v32[0], v39, v16);
    v32[1] = v16;
  }
  *(_OWORD *)&v33[8] = v41;
  *(_OWORD *)&v33[24] = v42;
  v34 = v43;
  v17 = v53;
  sub_140009E20(v53, (__int64)v55, (__int64)&v28);
  if ( v32[0] )
    j_free((void *)v32[0]);
  v18 = v37 - 4096;
  if ( VirtualQueryEx(*(HANDLE *)(a1 + 792), (LPCVOID)(v37 - 4096), &Buffer, 0x30u) && (Buffer.Protect & 0x100) != 0 )
  {
    sub_14005B0A0(Src, 1024, "%sStack_PAGE_GUARD[%08X]", v54, v35);
    *(_OWORD *)Size = 0;
    v27 = 0;
    v19 = strlen((const char *)Src);
    v20 = nullptr;
    if ( v19 != -1 )
    {
      v20 = sub_14005ABE0((__int64)Size, nullptr, v19 + 1, 1u);
      Size[0] = (size_t)v20;
    }
    Size[1] = v19 + 1;
    memcpy(v20, Src, v19);
    *(_BYTE *)(Size[0] + v19) = 0;
    v28 = a1;
    v29 = v18;
    v30 = 4096;
    v31 = nullptr;
    *(_OWORD *)v32 = 0;
    v21 = Size[1];
    if ( Size[1] )
    {
      v31 = sub_14005AAA0(Size[1]);
      v32[1] = v21;
      memcpy(v31, (const void *)Size[0], v21);
      v32[0] = v21;
      v18 = v29;
    }
    memset(v33, 0, sizeof(v33));
    if ( Size[0] )
    {
      Size[1] = 0;
      j_free((void *)Size[0]);
      Size[0] = 0;
      v27 = 0;
      v18 = v29;
    }
    v44 = v18;
    v45 = v28;
    v46 = v18;
    v47 = v30;
    *(_OWORD *)Block = 0;
    v49 = nullptr;
    v22 = (void *)v32[0];
    if ( v32[0] )
    {
      Block[0] = sub_14005AAA0(v32[0]);
      v49 = v22;
      memcpy(Block[0], v31, (size_t)v22);
      Block[1] = v22;
    }
    v50 = *(_OWORD *)v33;
    v51 = *(_OWORD *)&v33[16];
    v52 = *(_QWORD *)&v33[32];
    sub_140009E20(a3, (__int64)v55, (__int64)&v44);
    if ( Block[0] )
      j_free(Block[0]);
    if ( v32[1] >= 6 )
    {
      v23 = v31;
    }
    else
    {
      v23 = sub_14005ABE0((__int64)&v31, v31, 6u, 1u);
      v31 = v23;
    }
    v32[0] = 6;
    memcpy(v23, "STACK", 5u);
    *((_BYTE *)v31 + 5) = 0;
    v44 = v29;
    v45 = v28;
    v46 = v29;
    v47 = v30;
    *(_OWORD *)Block = 0;
    v49 = nullptr;
    v24 = (void *)v32[0];
    if ( v32[0] )
    {
      Block[0] = sub_14005AAA0(v32[0]);
      v49 = v24;
      memcpy(Block[0], v31, (size_t)v24);
      Block[1] = v24;
    }
    v50 = *(_OWORD *)v33;
    v51 = *(_OWORD *)&v33[16];
    v52 = *(_QWORD *)&v33[32];
    sub_140009E20(v17, (__int64)v55, (__int64)&v44);
    if ( Block[0] )
      j_free(Block[0]);
    v8 = 2;
    if ( v31 )
    {
      v32[0] = 0;
      j_free(v31);
    }
  }
  if ( v39 )
  {
    v40[0] = 0;
    j_free(v39);
  }
  return v8;
}
