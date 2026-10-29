__int64 __fastcall sub_2CD240(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r13
  unsigned __int8 v11; // al
  __int64 v12; // rbx
  unsigned __int8 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 wide_byte; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rdx
  char *v24; // rbp
  int v25; // eax
  int v26; // eax
  __int64 v27; // rbx
  __m128 v28; // xmm0
  size_t v29; // r13
  const void *v30; // r12
  const char *v31; // rsi
  void *v32; // [rsp+0h] [rbp-48h] BYREF
  __int128 v33; // [rsp+8h] [rbp-40h]
  unsigned __int64 v34; // [rsp+18h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 1080) )
    return v34 - __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 1082) || (a2 = 0, (unsigned __int8)sub_2CCB20(a1, nullptr)) )
  {
    v10 = a1 + 1096;
    v11 = enable_auto(0);
    v12 = *(_QWORD *)(a1 + 1112);
    v13 = v11;
    if ( v12 == a1 + 1096 )
    {
LABEL_10:
      enable_auto(v13);
      sub_1F9CB0();
      nullsub_70();
      return sub_2C9B00((__int64 *)a1);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v12 + 32);
        if ( (unsigned __int8)is_loaded(v14) )
          break;
        a2 = *(_QWORD *)(v12 + 40);
LABEL_6:
        patch_byte(v14, a2);
        a2 = 1;
        sub_31AFE0(v14, 1);
        v12 = std::_Rb_tree_increment(v12);
        if ( v12 == v10 )
          goto LABEL_10;
      }
      wide_byte = get_wide_byte(v14, a2, v15);
      a2 = *(_QWORD *)(v12 + 40);
      if ( a2 != wide_byte )
        goto LABEL_6;
      v12 = std::_Rb_tree_increment(v12);
      if ( v12 == v10 )
        goto LABEL_10;
    }
  }
  v23 = *(_QWORD *)(a1 + 728);
  v24 = "float";
  v25 = *(_DWORD *)(v23 + 36);
  if ( v25 )
  {
    v24 = nullptr;
    if ( v25 == 1 )
    {
      v26 = *(_DWORD *)(v23 + 40);
      v24 = "signed integer";
      if ( v26 != 1 )
      {
        v24 = "unsigned integer";
        if ( v26 != 2 )
        {
          v24 = "hexadecimal integer";
          if ( v26 )
            v24 = nullptr;
        }
      }
    }
  }
  v27 = *(_QWORD *)(a1 + 1048);
  if ( !v27 )
  {
    v32 = nullptr;
    v28 = 0;
    v33 = 0;
    goto LABEL_27;
  }
  v28 = 0;
  v29 = v27 - 1;
  v30 = *(const void **)(a1 + 1040);
  v32 = nullptr;
  v33 = 0;
  if ( (unsigned __int64)(v27 - 1) <= 0x1D )
  {
    if ( v27 == 1 )
      goto LABEL_27;
  }
  else
  {
    v27 = 31;
    v29 = 30;
  }
  v32 = (void *)qvector_reserve(&v32, 0, v27, 1);
  *(_QWORD *)&v33 = v27;
  memmove(v32, v30, v29);
  *((_BYTE *)v32 + v29) = 0;
  v31 = (const char *)v32;
  if ( !(_QWORD)v33 )
LABEL_27:
    v31 = &s1;
  sub_169700(
    (int)"String \"%s\" cannot be converted to %s\n",
    (__int64)v31,
    (__int64)v24,
    v18,
    v19,
    v20,
    v28,
    a4,
    a5,
    a6,
    v21,
    v22,
    a9,
    a10,
    (char)v32);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v31);
  }
  return sub_1C7D20(nullptr);
}
