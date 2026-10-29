/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052CB0
// Address: 0x0000000140052CB0

//----- (0000000140052CB0) ----------------------------------------------------
__int64 __fastcall sub_140052CB0(__int64 a1, unsigned int a2, void *a3, size_t a4, _QWORD *a5, _QWORD *a6)
{
  size_t v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  char *v13; // rcx
  __int64 v14; // rdx
  size_t v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  char *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  char *v23; // rcx
  unsigned int *v24; // rax
  void *v25; // rdi
  __int64 v26; // rdx
  unsigned int v27; // esi
  unsigned int v28; // eax
  __int64 v29; // rbx
  void *v30; // rax
  void *v31; // rdx
  void *Block; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+30h] [rbp-48h]
  void *v36; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+40h] [rbp-38h]
  void *v38; // [rsp+48h] [rbp-30h]
  _BYTE Src[5]; // [rsp+50h] [rbp-28h] BYREF
  char v40[3]; // [rsp+55h] [rbp-23h] BYREF
  _BYTE v41[5]; // [rsp+58h] [rbp-20h] BYREF
  char v42[3]; // [rsp+5Dh] [rbp-1Bh] BYREF

  v38 = a3;
  sub_140054B30((__int64 *)&Block, 39);
  v9 = sub_14005B4D0(Src, (unsigned __int64)v40, a2) - Src;
  if ( v9 )
  {
    v10 = v34;
    v11 = v34;
    v12 = v9 + v34;
    if ( v9 + v34 < v34 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v12 <= v34 )
    {
      if ( v12 != v34 )
      {
        if ( v12 < v34 )
          v10 = v12;
        v34 = v10;
      }
    }
    else
    {
      if ( v12 <= v35 )
      {
        v13 = (char *)Block;
      }
      else
      {
        v13 = (char *)sub_14005ABE0((__int64)&Block, Block, v12, 1u);
        Block = v13;
        v10 = v34;
      }
      memset(&v13[v10], 0, v12 - v10);
      v34 = v12;
    }
    memcpy((char *)Block + v11, Src, v9);
  }
  if ( a4 > 0xFFFFFFFF )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(5);
  }
  v15 = sub_14005B4D0(v41, (unsigned __int64)v42, a4) - v41;
  if ( v15 )
  {
    v16 = v34;
    v17 = v34;
    v18 = v15 + v34;
    if ( v15 + v34 < v34 )
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v18 <= v34 )
    {
      if ( v18 != v34 )
      {
        if ( v18 < v34 )
          v16 = v18;
        v34 = v16;
      }
    }
    else
    {
      if ( v18 <= v35 )
      {
        v19 = (char *)Block;
      }
      else
      {
        v19 = (char *)sub_14005ABE0((__int64)&Block, Block, v18, 1u);
        Block = v19;
        v16 = v34;
      }
      memset(&v19[v16], 0, v18 - v16);
      v34 = v18;
    }
    memcpy((char *)Block + v17, v41, v15);
  }
  if ( a4 )
  {
    v20 = v34;
    v21 = v34;
    v22 = a4 + v34;
    if ( a4 + v34 < v34 )
      v22 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v22 <= v34 )
    {
      if ( v22 != v34 )
      {
        if ( v22 < v34 )
          v20 = v22;
        v34 = v20;
      }
    }
    else
    {
      if ( v22 <= v35 )
      {
        v23 = (char *)Block;
      }
      else
      {
        v23 = (char *)sub_14005ABE0((__int64)&Block, Block, v22, 1u);
        Block = v23;
        v20 = v34;
      }
      memset(&v23[v20], 0, v22 - v20);
      v34 = v22;
    }
    memcpy((char *)Block + v21, v38, a4);
  }
  LOBYTE(v14) = 39;
  v24 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1 + 8LL))(a1, v14, &Block);
  v25 = v24;
  if ( !v24
    || (v26 = *v24,
        v36 = (char *)v24 + 5,
        v37 = (unsigned __int64)v24 + v26 + 5,
        v27 = sub_14005B690((unsigned __int64 *)&v36, v37),
        v28 = sub_14005B690((unsigned __int64 *)&v36, v37),
        (v29 = v28) != 0)
    && a5
    && (v30 = sub_14005AA50(v28), (*a5 = v30) != 0)
    && ((v31 = v36, (char *)v36 + v29 < v36)
     || (unsigned __int64)v36 + v29 > v37
     || (v36 = (char *)v36 + v29, !memcpy(v30, v31, (unsigned int)v29))) )
  {
    v27 = -1;
  }
  else
  {
    if ( a6 )
      *a6 = v29;
    j_free(v25);
  }
  if ( Block )
  {
    v34 = 0;
    j_free(Block);
  }
  return v27;
}
// 140052ED5: variable 'v14' is possibly undefined
// 1400CB61C: using guessed type char byte_1400CB61C;
