/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83A50
// Address: 0x0000000000083A50

//----- (0000000000083A50) ----------------------------------------------------
__int64 __fastcall sub_83A50(__int64 a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // rbx
  char *v5; // r15
  size_t v6; // rbp
  _QWORD *v7; // r15
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx
  const char *v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rbp
  void *v19; // rdi
  __int64 v20; // rbx
  __int128 dest; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  dest = 0;
  ptr = nullptr;
  v3 = strlen(a2);
  if ( v3 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_8BF30();
  v4 = v3;
  if ( v3 >= 0x17 )
  {
    v6 = (v3 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v5 = (char *)operator new(v6);
    ptr = v5;
    *(_QWORD *)&dest = v6 | 1;
    *((_QWORD *)&dest + 1) = v4;
  }
  else
  {
    LOBYTE(dest) = 2 * v3;
    v5 = (char *)&dest + 1;
    if ( !v3 )
      goto LABEL_7;
  }
  memcpy(v5, a2, v4);
LABEL_7:
  v5[v4] = 0;
  v7 = (_QWORD *)(a1 + 464);
  v8 = sub_8D460((_QWORD *)(a1 + 464), (unsigned __int8 *)&dest);
  if ( (dest & 1) != 0 )
    operator delete(ptr);
  if ( !v8 )
    return (unsigned int)set_qerrno(0x5E5u);
  v9 = v8[5];
  v10 = 32 * (v8[6] - 1);
  v11 = *(_QWORD *)(v9 + v10 + 8);
  v12 = *(unsigned __int8 *)(v9 + v10 + 24);
  if ( v11 > 1 )
    goto LABEL_14;
  if ( !(_BYTE)v12 && !*(_BYTE *)(v9 + v10 + 25) )
  {
    lex_undefine_macro_0(a1, a2);
    v14 = 0;
    goto LABEL_16;
  }
  if ( v11 )
LABEL_14:
    v13 = *(const char **)(v9 + v10);
  else
    v13 = s1;
  v14 = sub_829B0(a1, a2, v13, v12, *(_BYTE *)(v9 + v10 + 25), nullptr);
LABEL_16:
  v15 = v8[6];
  if ( !v15 )
    goto LABEL_20;
  v16 = v8[5];
  v17 = v15 - 1;
  v8[6] = v17;
  v18 = 32 * v17;
  v19 = *(void **)(v16 + 32 * v17);
  if ( v19 )
  {
    *(_QWORD *)(v16 + v18 + 8) = 0;
    qfree(v19);
    *(_QWORD *)(v16 + v18) = 0;
    *(_QWORD *)(v16 + v18 + 16) = 0;
    v17 = v8[6];
  }
  if ( !v17 )
  {
LABEL_20:
    sub_8D600((__int64)&dest, v7, v8);
    v20 = dest;
    *(_QWORD *)&dest = 0;
    if ( v20 )
    {
      if ( (_BYTE)ptr )
      {
        sub_8BE80((char **)(v20 + 40));
        if ( (*(_BYTE *)(v20 + 16) & 1) != 0 )
          operator delete(*(void **)(v20 + 32));
      }
      operator delete((void *)v20);
    }
  }
  return v14;
}
