__int64 __fastcall sub_1A2D110(__int64 a1, __int64 a2, __int64 a3, const void *a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v8; // r14d
  int v9; // r13d
  __int64 v11; // rax
  size_t v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // ebp

  v8 = a3;
  v9 = a6;
  v11 = sub_15F2610(a1, 0, a3, (__int64)a4, a5, a6);
  v12 = 8 * a5;
  v13 = v11;
  v14 = *(unsigned int *)(v11 + 1544);
  v15 = (8 * a5) >> 3;
  if ( v15 + v14 > (unsigned __int64)*(unsigned int *)(v13 + 1548) )
  {
    sub_2237220(v13 + 1536, v13 + 1552, v15 + v14, 8);
    v14 = *(unsigned int *)(v13 + 1544);
    v12 = 8 * a5;
  }
  if ( v12 )
  {
    memcpy((void *)(*(_QWORD *)(v13 + 1536) + 8 * v14), a4, v12);
    LODWORD(v14) = *(_DWORD *)(v13 + 1544);
  }
  v16 = v14 + v15;
  *(_DWORD *)(v13 + 1528) = a5;
  *(_DWORD *)(v13 + 1544) = v16;
  *(_DWORD *)(v13 + 1636) = v8;
  *(_DWORD *)(v13 + 1640) = v9;
  *(_QWORD *)(v13 + 1648) = a7;
  return a7;
}
