_QWORD *__fastcall sub_20C5940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  int v15; // ebx
  unsigned int v16; // ebp
  __int64 **v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  __int64 v22; // rax

  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(__int64 **)a1;
  v8 = *(_QWORD *)(a1 + 24);
  switch ( v6 )
  {
    case 0xBuLL:
      if ( *(_QWORD *)v8 == 0x6D492E7672697073LL && *(_WORD *)(v8 + 8) == 26465 && *(_BYTE *)(v8 + 10) == 101 )
        return (_QWORD *)sub_20C5480(*(__int64 **)a1, 0, a3, a4, a5, a6);
      goto LABEL_4;
    case 0x11uLL:
      a3 = *(_QWORD *)v8 ^ 0x69532E7672697073LL | *(_QWORD *)(v8 + 8) ^ 0x67616D4964656E67LL;
      if ( !a3 && *(_BYTE *)(v8 + 16) == 101 )
        return (_QWORD *)sub_20C5480(*(__int64 **)a1, 0, a3, a4, a5, a6);
      goto LABEL_4;
    case 0xAuLL:
      if ( *(_QWORD *)v8 == 0x79542E7672697073LL && *(_WORD *)(v8 + 8) == 25968 )
      {
        v14 = *(_QWORD *)(a1 + 40);
        v15 = *(_DWORD *)(v14 + 4);
        v16 = *(_DWORD *)(v14 + 8);
        if ( !v15 || !v16 )
          return (_QWORD *)(*v7 + 2128);
        v17 = (__int64 **)sub_20C3F60(*(__int64 **)a1, v16, a3, a4, a5, a6);
        return sub_20C3520(v17, 8 * v15 / v16, 8 * v15 % v16, v18, v19, v20);
      }
      goto LABEL_4;
    case 0x16uLL:
      a3 = *(_QWORD *)v8 ^ 0x6E492E7672697073LL | *(_QWORD *)(v8 + 8) ^ 0x6F436C6172676574LL;
      if ( !a3 && *(_DWORD *)(v8 + 16) == 1635021678 && *(_WORD *)(v8 + 20) == 29806 )
        return (_QWORD *)(*v7 + 1768);
LABEL_4:
      if ( *(_DWORD *)v8 == 1919512691 && *(_WORD *)(v8 + 4) == 11894 )
        return (_QWORD *)sub_20C5480(*(__int64 **)a1, 0, a3, a4, a5, a6);
      if ( v6 == 15 )
      {
        if ( *(_QWORD *)v8 == 0x2E34366863726161LL
          && *(_DWORD *)(v8 + 8) == 1868789363
          && *(_WORD *)(v8 + 12) == 28277
          && *(_BYTE *)(v8 + 14) == 116 )
        {
          return (_QWORD *)sub_20C4A10((__int64 **)(*v7 + 2056), 16, a3, a4, a5, a6);
        }
        goto LABEL_7;
      }
      goto LABEL_34;
    case 0xDuLL:
      if ( *(_QWORD *)v8 == 0x694C2E7672697073LL && *(_DWORD *)(v8 + 8) == 1634887028 && *(_BYTE *)(v8 + 12) == 108 )
        return (_QWORD *)(*v7 + 1768);
      goto LABEL_4;
  }
  if ( v6 > 5 )
    goto LABEL_4;
LABEL_34:
  if ( v6 != 18 )
  {
    if ( v6 <= 2 )
    {
      if ( v6 == j__strlen("amdgcn.named.barrier") )
      {
        if ( !v6 )
          return (_QWORD *)sub_20C4FC0((__int64 **)(*v7 + 2128), 4, v9, v10, v11, v12);
        goto LABEL_9;
      }
LABEL_53:
      if ( v6 != j__strlen("llvm.test.vectorelement") )
        return (_QWORD *)(*v7 + 1768);
      if ( !v6 )
        return (_QWORD *)(*v7 + 2128);
LABEL_11:
      if ( !memcmp((const void *)v8, "llvm.test.vectorelement", v6) )
        return (_QWORD *)(*v7 + 2128);
      return (_QWORD *)(*v7 + 1768);
    }
LABEL_7:
    if ( *(_WORD *)v8 == 30820 && *(_BYTE *)(v8 + 2) == 46 )
      return (_QWORD *)sub_20C5480(*(__int64 **)a1, 0, a3, a4, a5, a6);
    if ( v6 == j__strlen("amdgcn.named.barrier") )
    {
LABEL_9:
      if ( memcmp((const void *)v8, "amdgcn.named.barrier", v6) )
      {
        if ( v6 != j__strlen("llvm.test.vectorelement") )
          return (_QWORD *)(*v7 + 1768);
        goto LABEL_11;
      }
      return (_QWORD *)sub_20C4FC0((__int64 **)(*v7 + 2128), 4, v9, v10, v11, v12);
    }
    goto LABEL_53;
  }
  a3 = *(_QWORD *)v8 ^ 0x65762E7663736972LL | *(_QWORD *)(v8 + 8) ^ 0x7075742E726F7463LL;
  if ( a3 || *(_WORD *)(v8 + 16) != 25964 )
    goto LABEL_7;
  v21 = 8;
  v22 = **(_QWORD **)(a1 + 16);
  if ( *(_DWORD *)(v22 + 32) >= 8u )
    v21 = *(_DWORD *)(v22 + 32);
  return (_QWORD *)sub_20C4A10((__int64 **)(*v7 + 2080), **(_DWORD **)(a1 + 40) * v21, 0, a4, a5, a6);
}
