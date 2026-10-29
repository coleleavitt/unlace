/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004D630
// Address: 0x000000014004D630

//----- (000000014004D630) ----------------------------------------------------
void __fastcall sub_14004D630(__int64 a1, __int64 a2, unsigned int a3, char *a4, char *Str)
{
  __int64 v9; // rcx
  size_t v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  char *v14; // rcx
  size_t v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  char *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  void *v22; // rcx
  unsigned __int64 v23; // rbx
  const char *v24; // r14
  size_t v25; // rax
  __int64 v26; // rdx
  size_t v27; // rsi
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rdi
  char *v30; // rax
  char *v31; // rcx
  const char *v32; // rdx
  void *v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rbx
  char *v37; // rcx
  void *v38; // rax
  void *Block; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-50h]
  unsigned __int64 v41; // [rsp+30h] [rbp-48h]
  _BYTE v42[5]; // [rsp+38h] [rbp-40h] BYREF
  char v43[3]; // [rsp+3Dh] [rbp-3Bh] BYREF
  _BYTE Src[10]; // [rsp+40h] [rbp-38h] BYREF
  char v45[6]; // [rsp+4Ah] [rbp-2Eh] BYREF
  _BYTE v46[10]; // [rsp+50h] [rbp-28h] BYREF
  char v47[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a3 == 1 )
  {
    v9 = a1 + 248;
    if ( !a1 )
      v9 = 440;
    a4 = (char *)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)v9 + 400LL))(*(_QWORD *)v9);
  }
  sub_140054B30((__int64 *)&Block, 56);
  v10 = sub_14005B5A0(Src, (unsigned __int64)v45, a2 + 1) - Src;
  if ( v10 )
  {
    v11 = v40;
    v12 = v40;
    v13 = v10 + v40;
    if ( v10 + v40 < v40 )
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v13 <= v40 )
    {
      if ( v13 != v40 )
      {
        if ( v13 < v40 )
          v11 = v13;
        v40 = v11;
      }
    }
    else
    {
      if ( v13 <= v41 )
      {
        v14 = (char *)Block;
      }
      else
      {
        v14 = (char *)sub_14005ABE0((__int64)&Block, Block, v13, 1u);
        Block = v14;
        v11 = v40;
      }
      memset(&v14[v11], 0, v13 - v11);
      v40 = v13;
    }
    memcpy((char *)Block + v12, Src, v10);
  }
  v15 = sub_14005B4D0(v42, (unsigned __int64)v43, a3) - v42;
  if ( v15 )
  {
    v16 = v40;
    v17 = v40;
    v18 = v15 + v40;
    if ( v15 + v40 < v40 )
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v18 <= v40 )
    {
      if ( v18 != v40 )
      {
        if ( v18 < v40 )
          v16 = v18;
        v40 = v16;
      }
    }
    else
    {
      if ( v18 <= v41 )
      {
        v19 = (char *)Block;
      }
      else
      {
        v19 = (char *)sub_14005ABE0((__int64)&Block, Block, v18, 1u);
        Block = v19;
        v16 = v40;
      }
      memset(&v19[v16], 0, v18 - v16);
      v40 = v18;
    }
    memcpy((char *)Block + v17, v42, v15);
  }
  v20 = v40;
  v21 = v40 + 1;
  if ( a4 == Str )
  {
    if ( v21 <= v41 )
    {
      v22 = Block;
    }
    else
    {
      v22 = sub_14005ABE0((__int64)&Block, Block, v21, 1u);
      Block = v22;
      v20 = v40;
    }
    *((_BYTE *)v22 + v20) = 1;
    v23 = ++v40;
    v24 = pNodeName;
    if ( Str )
      v24 = Str;
    v25 = strlen(v24);
    v27 = v25 + 1;
    if ( v25 != -1 )
    {
      v28 = v23;
      v29 = v23 + v27;
      if ( v23 + v27 < v23 )
        v29 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v29 <= v23 )
      {
        if ( v29 != v23 )
        {
          if ( v29 < v23 )
            v23 = v29;
          v40 = v23;
        }
        v31 = (char *)Block + v28;
        v32 = v24;
      }
      else
      {
        if ( v29 <= v41 )
        {
          v30 = (char *)Block;
        }
        else
        {
          v30 = (char *)sub_14005ABE0((__int64)&Block, Block, v29, 1u);
          Block = v30;
          v23 = v40;
        }
        memset(&v30[v23], 0, v29 - v23);
        v40 = v29;
        v31 = (char *)Block + v28;
        v32 = v24;
      }
LABEL_66:
      memcpy(v31, v32, v27);
    }
  }
  else
  {
    if ( v21 <= v41 )
    {
      v33 = Block;
    }
    else
    {
      v33 = sub_14005ABE0((__int64)&Block, Block, v21, 1u);
      Block = v33;
      v20 = v40;
    }
    *((_BYTE *)v33 + v20) = 0;
    ++v40;
    v27 = sub_14005B5A0(v46, (unsigned __int64)v47, (__int64)(a4 + 1)) - v46;
    if ( v27 )
    {
      v34 = v40;
      v35 = v40;
      v36 = v27 + v40;
      if ( v27 + v40 < v40 )
        v36 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v36 <= v40 )
      {
        if ( v36 != v40 )
        {
          if ( v36 < v40 )
            v34 = v36;
          v40 = v34;
        }
      }
      else
      {
        if ( v36 <= v41 )
        {
          v37 = (char *)Block;
        }
        else
        {
          v37 = (char *)sub_14005ABE0((__int64)&Block, Block, v36, 1u);
          Block = v37;
          v34 = v40;
        }
        memset(&v37[v34], 0, v36 - v34);
        v40 = v36;
      }
      v31 = (char *)Block + v35;
      v32 = v46;
      goto LABEL_66;
    }
  }
  LOBYTE(v26) = 56;
  v38 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1 + 8LL))(a1, v26, &Block);
  j_free(v38);
  if ( Block )
  {
    v40 = 0;
    j_free(Block);
  }
}
// 14004D995: variable 'v26' is possibly undefined
