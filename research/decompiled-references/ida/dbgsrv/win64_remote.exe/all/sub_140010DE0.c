/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140010DE0
// Address: 0x0000000140010DE0

//----- (0000000140010DE0) ----------------------------------------------------
__int64 __fastcall sub_140010DE0(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        _BYTE *a5,
        char a6,
        char *Str,
        unsigned int a8)
{
  size_t v12; // rax
  unsigned int v13; // esi
  size_t v14; // r13
  void *v15; // rax
  char *v16; // r14
  __int64 v17; // r12
  void *v18; // rax
  __int64 v19; // r14
  void *v20; // rax
  __int64 v21; // r14
  void *v22; // rax
  size_t v23; // r13
  void *v24; // rax
  char *v25; // r15
  __int64 v26; // r14
  void *v27; // rax
  size_t v28; // rax
  void *Block; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v31; // [rsp+50h] [rbp-B0h]
  void *Src[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h]
  _BYTE *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  _QWORD v36[2]; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+90h] [rbp-70h]
  __int8 v38[272]; // [rsp+A0h] [rbp-60h] BYREF

  v35 = a4;
  v34 = a5;
  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( *Str && !sub_14005EF30(Str) )
  {
    sub_140012440(a1, (struct __crt_locale_pointers *)"AUTOHIDE NONE\nInput file is missing: %s", Str);
    return 4294967293LL;
  }
  v12 = strlen(Str);
  if ( v12 )
    sub_140001810(a1 + 448, Str, v12);
  else
    *(_QWORD *)(a1 + 456) = 0;
  *(_BYTE *)(a1 + 693) = a6 & 1;
  if ( !sub_14005EF30(a2) )
  {
    if ( sub_14005DC40((unsigned __int8 *)a2) || !sub_14005EC80(v38, 260, a2, 0) )
    {
      sub_140012440(a1, (struct __crt_locale_pointers *)"AUTOHIDE NONE\nCannot find application file '%s'", a2);
      return 4294967294LL;
    }
    a2 = v38;
  }
  v13 = 2 - ((*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a8) != 0);
  *(_BYTE *)(a1 + 1193) = 0;
  Block = nullptr;
  v30 = 0;
  v31 = 0;
  if ( a3 && *a3 )
  {
    Block = sub_14005ABE0((__int64)&Block, nullptr, 2u, 1u);
    v30 = 2;
    *(_BYTE *)Block = 34;
    *((_BYTE *)Block + 1) = 0;
    *(_OWORD *)Src = 0;
    v33 = 0;
    if ( a2 )
    {
      v14 = strlen(a2);
      v15 = nullptr;
      if ( v14 != -1 )
      {
        v15 = sub_14005ABE0((__int64)Src, nullptr, v14 + 1, 1u);
        Src[0] = v15;
      }
      Src[1] = (void *)(v14 + 1);
      memcpy(v15, a2, v14);
      *((_BYTE *)Src[0] + v14) = 0;
    }
    v16 = (char *)Src[1] - 1;
    if ( !Src[1] )
      v16 = nullptr;
    if ( v16 )
    {
      v17 = v30 - 1;
      if ( !v30 )
        v17 = 0;
      if ( (unsigned __int64)&v16[v17 + 1] <= v31 )
      {
        v18 = Block;
      }
      else
      {
        v18 = sub_14005ABE0((__int64)&Block, Block, (unsigned __int64)&v16[v17 + 1], 1u);
        Block = v18;
      }
      v30 = (__int64)&v16[v17 + 1];
      v16[(_QWORD)v18 + v17] = 0;
      memcpy((char *)Block + v17, Src[0], (size_t)v16);
    }
    if ( Src[0] )
    {
      Src[1] = nullptr;
      j_free(Src[0]);
    }
    v19 = v30 - 1;
    if ( !v30 )
      v19 = 0;
    if ( v19 + 2 <= v31 )
    {
      v20 = Block;
    }
    else
    {
      v20 = sub_14005ABE0((__int64)&Block, Block, v19 + 2, 1u);
      Block = v20;
    }
    v30 = v19 + 2;
    *((_BYTE *)v20 + v19) = 34;
    *((_BYTE *)Block + v19 + 1) = 0;
    v21 = v30 - 1;
    if ( !v30 )
      v21 = 0;
    if ( v21 + 2 <= v31 )
    {
      v22 = Block;
    }
    else
    {
      v22 = sub_14005ABE0((__int64)&Block, Block, v21 + 2, 1u);
      Block = v22;
    }
    v30 = v21 + 2;
    *((_BYTE *)v22 + v21) = 32;
    *((_BYTE *)Block + v21 + 1) = 0;
    *(_OWORD *)Src = 0;
    v33 = 0;
    v23 = strlen(a3);
    v24 = nullptr;
    if ( v23 != -1 )
    {
      v24 = sub_14005ABE0((__int64)Src, nullptr, v23 + 1, 1u);
      Src[0] = v24;
    }
    Src[1] = (void *)(v23 + 1);
    memcpy(v24, a3, v23);
    *((_BYTE *)Src[0] + v23) = 0;
    v25 = (char *)Src[1] - 1;
    if ( !Src[1] )
      v25 = nullptr;
    if ( v25 )
    {
      v26 = v30 - 1;
      if ( !v30 )
        v26 = 0;
      if ( (unsigned __int64)&v25[v26 + 1] <= v31 )
      {
        v27 = Block;
      }
      else
      {
        v27 = sub_14005ABE0((__int64)&Block, Block, (unsigned __int64)&v25[v26 + 1], 1u);
        Block = v27;
      }
      v30 = (__int64)&v25[v26 + 1];
      v25[(_QWORD)v27 + v26] = 0;
      memcpy((char *)Block + v26, Src[0], (size_t)v25);
    }
    if ( Src[0] )
    {
      Src[1] = nullptr;
      j_free(Src[0]);
    }
    a3 = (char *)Str1;
    if ( v30 )
      a3 = (char *)Block;
  }
  if ( (unsigned __int8)sub_14000EAC0(
                          a1,
                          (struct _exception *)a2,
                          a3,
                          v35,
                          v34,
                          (a6 & 2) != 0,
                          (a6 & 0x20) != 0,
                          (__int64)v36) )
  {
    *(_DWORD *)(a1 + 488) = v37;
    *(_QWORD *)(a1 + 792) = v36[0];
    *(_QWORD *)(a1 + 880) = v36[1];
    if ( a2 && (v28 = strlen(a2)) != 0 )
      sub_140001810(a1 + 856, a2, v28);
    else
      *(_QWORD *)(a1 + 864) = 0;
    if ( !sub_14001E640(a1) )
      v13 = -2;
  }
  else
  {
    v13 = -1;
  }
  if ( Block )
  {
    v30 = 0;
    j_free(Block);
  }
  return v13;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
