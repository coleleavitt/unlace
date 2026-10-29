/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D380
// Address: 0x000000010005D380

//----- (000000010005D380) ----------------------------------------------------
__int64 __fastcall sub_10005D380(__int64 a1, __int64 a2, off_t a3, char a4)
{
  void *v6; // r15
  unsigned __int32 v7; // eax
  off_t v9; // r12
  unsigned __int64 v10; // rax
  void *v11; // rax
  size_t v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // [rsp+Ch] [rbp-34h] BYREF

  if ( a3 )
  {
    LODWORD(v6) = 0;
    if ( qlseek(a2, a3, 0) != a3 )
      return (unsigned int)v6;
  }
  if ( qlread(a2, &v15, 4) != 4 )
    goto LABEL_7;
  v7 = v15;
  if ( a4 )
  {
    v7 = _byteswap_ulong(v15);
    v15 = v7;
  }
  if ( v7 < 5 )
    goto LABEL_7;
  qlseek(a2, -4, 1);
  LODWORD(v6) = 0;
  v9 = qlseek(a2, 0, 1);
  v10 = qlsize(a2) - v9;
  if ( ((v10 | v9) & 0x8000000000000000LL) != 0LL )
    return (unsigned int)v6;
  if ( v10 < v15 || (v11 = qalloc(v15 + 1)) == nullptr )
  {
LABEL_7:
    LODWORD(v6) = 0;
    return (unsigned int)v6;
  }
  v6 = v11;
  v12 = qlread(a2, v11, v15);
  if ( v12 != v15 )
  {
    qfree(v6);
    goto LABEL_7;
  }
  *((_BYTE *)v6 + v12) = 0;
  v13 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v13);
  }
  v14 = v15 + 1;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 8) = v14;
  LOBYTE(v6) = 1;
  return (unsigned int)v6;
}
