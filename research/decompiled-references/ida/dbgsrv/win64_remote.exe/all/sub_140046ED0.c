/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046ED0
// Address: 0x0000000140046ED0

//----- (0000000140046ED0) ----------------------------------------------------
__int64 __fastcall sub_140046ED0(__int64 a1, char *a2, __int64 a3, const char *a4, char *Str, int a6, char *a7)
{
  char **v10; // rbx
  __int64 v11; // rdi
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  const char *i; // rdi
  size_t v16; // r14
  void *v17; // rax
  char *v18; // rdx
  bool v19; // al
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  void *v22; // rdi
  void *v23; // rsi
  const char *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rcx
  void *Block[2]; // [rsp+20h] [rbp-E0h] BYREF
  const char *v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C8h]
  const char *v31[6]; // [rsp+40h] [rbp-C0h] BYREF
  char v32[272]; // [rsp+70h] [rbp-90h] BYREF

  v31[1] = (const char *)a1;
  *(_QWORD *)a1 = &off_1400974C0;
  v10 = (char **)(a1 + 1032);
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1040) = 0;
  *(_QWORD *)(a1 + 1048) = 0;
  v11 = a1 + 1056;
  v30 = a1 + 1056;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  *(_QWORD *)(a1 + 1072) = 0;
  if ( a4 )
  {
    v12 = strlen(a4);
    sub_140001810(v11, a4, v12);
  }
  v30 = a1 + 1080;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_QWORD *)(a1 + 1088) = 0;
  *(_QWORD *)(a1 + 1096) = 0;
  if ( Str )
  {
    v13 = strlen(Str);
    sub_140001810(a1 + 1080, Str, v13);
  }
  v30 = a1 + 1104;
  *(_QWORD *)(a1 + 1104) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  if ( a7 )
  {
    v14 = strlen(a7);
    sub_140001810(a1 + 1104, a7, v14);
  }
  *(_DWORD *)(a1 + 1128) = a6;
  *(_BYTE *)(a1 + 8) = 0;
  sub_1400621E0(v32, a2, 260);
  for ( i = sub_140062340(v32, ";", v31); i; i = sub_140062340(nullptr, ";", v31) )
  {
    *(_OWORD *)Block = 0;
    v29 = nullptr;
    v16 = strlen(i);
    v17 = nullptr;
    if ( v16 != -1 )
    {
      v17 = sub_14005ABE0((__int64)Block, nullptr, v16 + 1, 1u);
      Block[0] = v17;
    }
    Block[1] = (void *)(v16 + 1);
    memcpy(v17, i, v16);
    *((_BYTE *)Block[0] + v16) = 0;
    v18 = *v10;
    v19 = Block >= (void **)*v10 && Block < (void **)&v18[24 * (_QWORD)v10[2]];
    v20 = (unsigned __int64)v10[2];
    v21 = (unsigned __int64)(v10[1] + 1);
    if ( v19 )
    {
      v22 = Block[0];
      v31[2] = (const char *)Block[0];
      Block[0] = nullptr;
      v23 = Block[1];
      v31[3] = (const char *)Block[1];
      Block[1] = nullptr;
      v24 = v29;
      v31[4] = v29;
      v29 = nullptr;
      if ( v21 > v20 )
      {
        v18 = (char *)sub_14005ABE0((__int64)v10, v18, v21, 0x18u);
        *v10 = v18;
      }
      v25 = 3LL * (_QWORD)v10[1];
      *(_QWORD *)&v18[8 * v25] = v22;
      *(_QWORD *)&v18[8 * v25 + 8] = v23;
      *(_QWORD *)&v18[8 * v25 + 16] = v24;
    }
    else
    {
      if ( v21 > v20 )
      {
        v18 = (char *)sub_14005ABE0((__int64)v10, v18, v21, 0x18u);
        *v10 = v18;
      }
      v26 = 3LL * (_QWORD)v10[1];
      *(void **)&v18[8 * v26] = Block[0];
      Block[0] = nullptr;
      *(void **)&v18[8 * v26 + 8] = Block[1];
      *(_QWORD *)&v18[8 * v26 + 16] = v29;
      v29 = nullptr;
    }
    ++v10[1];
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
  }
  return a1;
}
// 1400974C0: using guessed type __int64 (__fastcall *off_1400974C0)();
