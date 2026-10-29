/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C850
// Address: 0x000000000005C850

//----- (000000000005C850) ----------------------------------------------------
__int64 __fastcall sub_5C850(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // edx
  __int64 *v18; // rdx

  v6 = *(_QWORD **)(a1 + 16);
  v7 = v6 + 3;
  v8 = v6[4];
  if ( v6[5] >= (unsigned __int64)(v8 + 1) )
  {
    v9 = (_QWORD *)*v7;
  }
  else
  {
    v9 = qvector_reserve((__int64)v7, (char *)v6[3], v8 + 1, 0x28u);
    v6[3] = v9;
    v8 = v6[4];
  }
  v10 = 5 * v8;
  *(_OWORD *)&v9[v10 + 2] = 0;
  v9[v10 + 4] = 0;
  ++v6[4];
  v9[v10] = a3;
  v9[v10 + 1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
  v11 = *(_QWORD **)(a1 + 16);
  v12 = v11 + 10;
  v13 = v11[11];
  if ( v11[12] >= (unsigned __int64)(v13 + 1) )
  {
    v14 = (_QWORD *)*v12;
  }
  else
  {
    v14 = qvector_reserve((__int64)v12, (char *)v11[10], v13 + 1, 0x18u);
    v11[10] = v14;
    v13 = v11[11];
  }
  v15 = 3 * v13;
  *(_OWORD *)&v14[v15] = 0;
  v14[v15 + 2] = 0;
  ++v11[11];
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_DWORD *)(a1 + 24);
  if ( v17 == 2 )
  {
    v18 = (__int64 *)(v16 + 352);
  }
  else
  {
    if ( v17 != 1 )
    {
      if ( !(_BYTE)under_debugger )
        interr(20086);
      BUG();
    }
    v18 = (__int64 *)(v16 + 320);
  }
  return sub_57CE0(v16, (__int64)&v14[3 * v13], v18, *(_DWORD *)(a2 + 4));
}
// 158B40: using guessed type __int64 under_debugger;
