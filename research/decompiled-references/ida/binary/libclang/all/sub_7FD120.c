__int64 __fastcall sub_7FD120(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r13
  unsigned int v12; // r13d
  __int64 v14; // rsi
  __int64 *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // r14
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = *(_QWORD *)(a2 + 120);
  if ( !v7 )
    goto LABEL_11;
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 4) != 0 )
  {
    if ( !v8 )
      goto LABEL_11;
    v8 = *(_QWORD *)v8;
  }
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 + 8);
    if ( (_DWORD)v9 )
    {
      v10 = v8 + 16;
      v11 = v10 + 32 * v9;
      while ( (unsigned __int8)sub_7EF520(a1, v10, a3, a4, a5, a6) )
      {
        v10 += 32;
        if ( v11 == v10 )
          goto LABEL_11;
      }
      return 0;
    }
  }
LABEL_11:
  if ( !(unsigned __int8)sub_7F0190(a1, a2, a3, a4, a5, a6) )
    return 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
  {
    v19 = sub_77BC00(a2);
    if ( !(unsigned __int8)sub_7EBA80(a1, v19) )
      return 0;
  }
  v14 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v14 = sub_79AC10(a2);
  v12 = sub_7E1600(a1, v14);
  if ( !(_BYTE)v12 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v15 = nullptr;
    v16 = sub_79A2B0(a2);
    v17 = *v16 + 8LL * *((unsigned int *)v16 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v15 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v17 != v15 )
    {
      while ( 1 )
      {
        v18 = *a1;
        v20[0] = *v15;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v20[0], v20[0], v20, a1, v18) )
          break;
        if ( (__int64 *)v17 == ++v15 )
          return v12;
      }
      return 0;
    }
  }
  return v12;
}

