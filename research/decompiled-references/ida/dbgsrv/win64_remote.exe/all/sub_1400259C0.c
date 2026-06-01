/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400259C0
// Address: 0x00000001400259C0

//----- (00000001400259C0) ----------------------------------------------------
__int64 __fastcall sub_1400259C0(__int64 a1, _DWORD *a2, char **a3)
{
  char **v3; // r12
  __int64 v5; // rax
  int *v6; // r15
  _DWORD *v7; // rax
  int v8; // eax
  char *v9; // rsi
  unsigned __int8 v10; // bl
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  char *v13; // r14
  __int64 v14; // r13
  __int64 *v15; // r12
  const char *v16; // rdx
  const char *v17; // rcx
  unsigned int v18; // eax
  __int64 *v19; // rcx
  const char *v20; // rdx
  const char *v21; // rcx
  char *v22; // rbx
  __int64 v23; // rdi
  void *v24; // rax
  unsigned __int64 v25; // rdx
  size_t v26; // rbx
  size_t v27; // rcx
  size_t v28; // rbx
  size_t v29; // rbx
  size_t v30; // rdi
  void *v31; // rax
  void *Block; // [rsp+20h] [rbp-30h] BYREF
  size_t v34; // [rsp+28h] [rbp-28h]
  unsigned __int64 v35; // [rsp+30h] [rbp-20h]
  void *Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v37; // [rsp+40h] [rbp-10h]
  __int64 v38; // [rsp+48h] [rbp-8h]

  v3 = a3;
  *a2 = -1;
  Src = nullptr;
  v37 = 0;
  v38 = 0;
  v5 = sub_140025910(a1, (__int64 *)&Src);
  v6 = (int *)v5;
  if ( v5 )
  {
    v7 = (_DWORD *)sub_14002D950(*(int *)(v5 + 20));
    v8 = sub_140025060(v7, (__int64)&Src);
    v9 = (char *)Src;
    if ( v8 != -1 )
    {
      *a2 = v8;
      v10 = 1;
      goto LABEL_48;
    }
    v11 = *(__int64 **)(*(_QWORD *)v6 + 8LL);
    v12 = *(__int64 **)v6;
    v13 = (char *)Str1;
    v14 = v37;
    if ( !*((_BYTE *)v11 + 25) )
    {
      do
      {
        v15 = v12;
        v16 = Str1;
        if ( v14 )
          v16 = v9;
        v17 = Str1;
        if ( v11[5] )
          v17 = (const char *)v11[4];
        v18 = (unsigned int)strcmp(v17, v16) >> 31;
        v12 = v11;
        if ( (_BYTE)v18 )
          v12 = v15;
        v19 = v11 + 2;
        if ( !(_BYTE)v18 )
          v19 = v11;
        v11 = (__int64 *)*v19;
      }
      while ( !*(_BYTE *)(*v19 + 25) );
      v3 = a3;
    }
    if ( !*((_BYTE *)v12 + 25) )
    {
      v20 = Str1;
      if ( v12[5] )
        v20 = (const char *)v12[4];
      v21 = Str1;
      if ( v14 )
        v21 = v9;
      if ( strcmp(v21, v20) >= 0 && v12 != *(__int64 **)v6 )
      {
        v22 = (char *)(v12 + 7);
        sub_140028E70(*v3, v22);
        *v3 = v22;
        v10 = 1;
        goto LABEL_48;
      }
    }
    if ( sub_140025490(a1, (unsigned __int64)v6, (const char **)&Src, v3) )
    {
      v9 = (char *)Src;
      v10 = 1;
      goto LABEL_48;
    }
    sub_1400640B0(0x58u);
    v23 = sub_14002D950(v6[5]);
    v24 = nullptr;
    Block = nullptr;
    v34 = 0;
    v25 = 0;
    v35 = 0;
    v26 = *(_QWORD *)(v23 + 32);
    v27 = 0;
    if ( v26 )
    {
      Block = sub_14005AAA0(*(_QWORD *)(v23 + 32));
      v35 = v26;
      memcpy(Block, *(const void **)(v23 + 24), v26);
      v34 = v26;
      v27 = v26;
      v25 = v26;
      v24 = Block;
    }
    v28 = v27 - 1;
    if ( !v27 )
      v28 = 0;
    if ( v28 + 2 > v25 )
    {
      v24 = sub_14005ABE0((__int64)&Block, v24, v28 + 2, 1u);
      Block = v24;
    }
    v34 = v28 + 2;
    *((_BYTE *)v24 + v28) = 46;
    *((_BYTE *)Block + v28 + 1) = 0;
    v29 = v37 - 1;
    if ( !v37 )
      v29 = 0;
    v9 = (char *)Src;
    if ( v29 )
    {
      if ( v34 )
        v30 = v34 - 1;
      else
        v30 = 0;
      if ( v30 + v29 + 1 <= v35 )
      {
        v31 = Block;
      }
      else
      {
        v31 = sub_14005ABE0((__int64)&Block, Block, v30 + v29 + 1, 1u);
        Block = v31;
      }
      v34 = v30 + v29 + 1;
      *((_BYTE *)v31 + v30 + v29) = 0;
      memcpy((char *)Block + v30, v9, v29);
    }
    if ( v34 )
      v13 = (char *)Block;
    sub_140063F70(0, v13);
    if ( Block )
    {
      v34 = 0;
      j_free(Block);
    }
  }
  else
  {
    v9 = (char *)Src;
  }
  v10 = 0;
LABEL_48:
  if ( v9 )
    j_free(v9);
  return v10;
}
