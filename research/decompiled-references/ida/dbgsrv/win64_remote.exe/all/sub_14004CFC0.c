/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004CFC0
// Address: 0x000000014004CFC0

//----- (000000014004CFC0) ----------------------------------------------------
void __fastcall sub_14004CFC0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  const char *v5; // r14
  size_t v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  char *v10; // rcx
  const char *v11; // r15
  size_t v12; // rax
  size_t v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  char *v17; // rcx
  size_t v18; // r14
  const void *v19; // r12
  size_t v20; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  char *v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  char *v28; // rcx
  __int64 v29; // rsi
  int v30; // eax
  void *Block; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-38h]
  unsigned __int64 v33; // [rsp+30h] [rbp-30h]
  __int64 v34; // [rsp+38h] [rbp-28h]
  _BYTE v35[5]; // [rsp+40h] [rbp-20h] BYREF
  char v36[3]; // [rsp+45h] [rbp-1Bh] BYREF
  _BYTE Src[10]; // [rsp+48h] [rbp-18h] BYREF
  char v38[6]; // [rsp+52h] [rbp-Eh] BYREF

  v34 = a1;
  v3 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 != *(_QWORD *)a2 + 56LL * *(_QWORD *)(a2 + 8) )
  {
    while ( 1 )
    {
      v4 = *v3;
      v5 = Str1;
      if ( v3[2] )
        v5 = (const char *)v3[1];
      sub_140054B30((__int64 *)&Block, 57);
      v6 = sub_14005B5A0(Src, (unsigned __int64)v38, v4 + 1) - Src;
      if ( v6 )
      {
        v7 = v32;
        v8 = v32;
        v9 = v6 + v32;
        if ( v6 + v32 < v32 )
          v9 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v9 <= v32 )
        {
          if ( v9 != v32 )
          {
            if ( v9 < v32 )
              v7 = v9;
            v32 = v7;
          }
        }
        else
        {
          if ( v9 <= v33 )
          {
            v10 = (char *)Block;
          }
          else
          {
            v10 = (char *)sub_14005ABE0((__int64)&Block, Block, v9, 1u);
            Block = v10;
            v7 = v32;
          }
          memset(&v10[v7], 0, v9 - v7);
          v32 = v9;
        }
        memcpy((char *)Block + v8, Src, v6);
      }
      v11 = pNodeName;
      if ( v5 )
        v11 = v5;
      v12 = strlen(v11);
      v13 = v12 + 1;
      if ( v12 != -1 )
      {
        v14 = v32;
        v15 = v32;
        v16 = v13 + v32;
        if ( v13 + v32 < v32 )
          v16 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v16 <= v32 )
        {
          if ( v16 != v32 )
          {
            if ( v16 < v32 )
              v14 = v16;
            v32 = v14;
          }
        }
        else
        {
          if ( v16 <= v33 )
          {
            v17 = (char *)Block;
          }
          else
          {
            v17 = (char *)sub_14005ABE0((__int64)&Block, Block, v16, 1u);
            Block = v17;
            v14 = v32;
          }
          memset(&v17[v14], 0, v16 - v14);
          v32 = v16;
        }
        memcpy((char *)Block + v15, v11, v13);
      }
      v18 = v3[5];
      v19 = (const void *)v3[4];
      if ( v18 > 0xFFFFFFFF )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(5);
      }
      v20 = sub_14005B4D0(v35, (unsigned __int64)v36, v18) - v35;
      if ( v20 )
      {
        v21 = v32;
        v22 = v32;
        v23 = v20 + v32;
        if ( v20 + v32 < v32 )
          v23 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v23 <= v32 )
        {
          if ( v23 != v32 )
          {
            if ( v23 < v32 )
              v21 = v23;
            v32 = v21;
          }
        }
        else
        {
          if ( v23 <= v33 )
          {
            v24 = (char *)Block;
          }
          else
          {
            v24 = (char *)sub_14005ABE0((__int64)&Block, Block, v23, 1u);
            Block = v24;
            v21 = v32;
          }
          memset(&v24[v21], 0, v23 - v21);
          v32 = v23;
        }
        memcpy((char *)Block + v22, v35, v20);
      }
      if ( v18 )
      {
        v25 = v32;
        v26 = v32;
        v27 = v32 + v18;
        if ( v32 + v18 < v32 )
          v27 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v27 <= v32 )
        {
          if ( v27 != v32 )
          {
            if ( v27 < v32 )
              v25 = v27;
            v32 = v25;
          }
        }
        else
        {
          if ( v27 <= v33 )
          {
            v28 = (char *)Block;
          }
          else
          {
            v28 = (char *)sub_14005ABE0((__int64)&Block, Block, v27, 1u);
            Block = v28;
            v25 = v32;
          }
          memset(&v28[v25], 0, v27 - v25);
          v32 = v27;
        }
        memcpy((char *)Block + v26, v19, v18);
      }
      v29 = v34;
      v30 = sub_140051AF0(v34 + 192, (__int64)&Block, 0xFFFFFFFF, 0);
      if ( v30 < 0 )
        break;
      if ( v30 )
        (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v29 + 440) + 560LL))(*(_QWORD *)(v29 + 440), v3);
      if ( Block )
      {
        v32 = 0;
        j_free(Block);
      }
      v3 += 7;
      if ( v3 == (__int64 *)(*(_QWORD *)a2 + 56LL * *(_QWORD *)(a2 + 8)) )
        return;
    }
    if ( Block )
    {
      v32 = 0;
      j_free(Block);
    }
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
