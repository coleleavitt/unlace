/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140024640
// Address: 0x0000000140024640

//----- (0000000140024640) ----------------------------------------------------
char __fastcall sub_140024640(char *a1, char *a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  char v8; // r14
  _DWORD *v9; // rbx
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  void *v14; // rax
  int v15; // edx
  void *v16; // rax
  char v17; // r15
  int v18; // r13d
  size_t v19; // r13
  void *v20; // rax
  char v21; // bl
  __int64 v22; // rax
  bool v23; // cf
  size_t v24; // rax
  _QWORD *v25; // rax
  char *v26; // rsi
  int v27; // eax
  int v28; // ebx
  char v29[8]; // [rsp+40h] [rbp-C0h] BYREF
  void *v30[2]; // [rsp+48h] [rbp-B8h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h]
  _QWORD *v34; // [rsp+78h] [rbp-88h]
  _BYTE v35[208]; // [rsp+80h] [rbp-80h] BYREF

  v8 = 0;
  v9 = nullptr;
  if ( !a2 || (v9 = (_DWORD *)sub_14002EAB0(a2)) != nullptr )
  {
    v30[1] = nullptr;
    v31 = 0;
    v30[0] = nullptr;
    v29[0] = 5;
    v14 = operator new(0x18u);
    if ( v14 )
    {
      v15 = 0;
      if ( v9 )
        v15 = v9[5];
      v16 = (void *)sub_14002BC20((__int64)v14, v15);
    }
    else
    {
      v16 = nullptr;
    }
    v30[0] = v16;
    v17 = 1;
    v18 = -1;
    if ( !v9 )
      goto LABEL_21;
    *(_OWORD *)Block = 0;
    v33 = 0;
    v8 = 1;
    if ( a2 )
    {
      v19 = strlen(a2);
      v20 = nullptr;
      if ( v19 != -1 )
      {
        v20 = sub_14005ABE0((__int64)Block, nullptr, v19 + 1, 1u);
        Block[0] = v20;
      }
      Block[1] = (void *)(v19 + 1);
      memcpy(v20, a2, v19);
      *((_BYTE *)Block[0] + v19) = 0;
      v17 = 1;
    }
    v18 = sub_140025060(v9, (__int64)Block);
    if ( v18 == -1 )
LABEL_21:
      v21 = 0;
    else
      v21 = 1;
    if ( (v8 & 1) != 0 && Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
    if ( v21 )
    {
      v22 = 32 * (a4 + 1);
      if ( !is_mul_ok(a4 + 1, 0x20u) )
        v22 = -1;
      v23 = __CFADD__(v22, 8);
      v24 = v22 + 8;
      if ( v23 )
        v24 = -1;
      v25 = operator new(v24);
      v34 = v25;
      if ( v25 )
      {
        *v25 = a4 + 1;
        v26 = (char *)(v25 + 1);
        `eh vector constructor iterator'(
          v25 + 1,
          0x20u,
          a4 + 1,
          (void (*)(void *))sub_140021780,
          (void (*)(void *))sub_140020450);
      }
      else
      {
        v26 = nullptr;
      }
      sub_140028E70(v26, v29);
      v27 = 0;
      if ( a4 )
      {
        do
        {
          v28 = v27 + 1;
          sub_140028E70(&v26[32 * v27 + 32], (char *)(a3 + 32LL * v27));
          v27 = v28;
        }
        while ( v28 < a4 );
      }
      sub_1400210A0((__int64)v35, 0, 0);
      v17 = sub_1400288C0((__int64)v35, nullptr, v18, (int)a4 + 1, v26, a1, a5);
      if ( v26 )
      {
        `eh vector destructor iterator'(v26, 0x20u, *((_QWORD *)v26 - 1), (void (*)(void *))sub_140020450);
        j_j_j_free(v26 - 8);
      }
      sub_140021420((__int64)v35);
    }
    else
    {
      sub_14002A460(a1, v29);
    }
    if ( v29[0] == 5 )
    {
      sub_140024A20((_DWORD *)v30[0], v29);
    }
    else if ( v29[0] == 7 && v30[0] )
    {
      v30[1] = nullptr;
      j_free(v30[0]);
    }
    return v17;
  }
  else
  {
    sub_140063F70(0, a2);
    sub_1400640B0(0x600u);
    sub_140021BB0((__int64)a1);
    if ( a5 )
    {
      v10 = sub_140064D10(-1);
      v11 = v10;
      if ( v10 )
      {
        v12 = strlen(v10);
        if ( v12 )
        {
          sub_140001810(a5, v11, v12);
          return 0;
        }
      }
      *(_QWORD *)(a5 + 8) = 0;
    }
    return 0;
  }
}
