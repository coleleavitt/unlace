/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002FC80
// Address: 0x000000014002FC80

//----- (000000014002FC80) ----------------------------------------------------
__int64 __fastcall sub_14002FC80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int *v4; // rdx
  _DWORD *v5; // r8
  __int64 v6; // r14
  unsigned int v7; // r15d
  _QWORD *v8; // rsi
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned int v12; // ebp

  v1 = a1 + 288;
  v2 = *(_QWORD *)(a1 + 296);
  v4 = *(unsigned int **)(a1 + 288);
  v5 = v4;
  v6 = v4[v2 - 1];
  if ( v2 )
    *(_QWORD *)(a1 + 296) = --v2;
  v7 = v4[v2 - 1];
  v8 = (_QWORD *)(a1 + 296);
  if ( v2 )
  {
    *v8 = --v2;
    v9 = v4[v2 - 1];
    if ( v2 )
    {
      *v8 = --v2;
      v5 = *(_DWORD **)(a1 + 288);
    }
  }
  else
  {
    v9 = *(v4 - 1);
  }
  v10 = v2 + 1;
  if ( v10 > *(_QWORD *)(a1 + 304) )
  {
    v5 = sub_14005ABE0(a1 + 288, v4, v10, 4u);
    *(_QWORD *)v1 = v5;
  }
  v5[(*v8)++] = v6 + 4;
  v11 = *v8 + 1LL;
  if ( v11 > *(_QWORD *)(v1 + 16) )
    *(_QWORD *)v1 = sub_14005ABE0(v1, *(void **)v1, v11, 4u);
  *(_DWORD *)(*(_QWORD *)v1 + 4LL * (*(_QWORD *)(v1 + 8))++) = v7;
  if ( v7 )
  {
    sub_1400347C0(a1, 171);
    v12 = v9 - *(_DWORD *)(a1 + 200);
    sub_1400343E0(a1, v12 - 4);
    sub_1400343E0(a1, (v12 - 4) >> 16);
  }
  sub_14002E390(*(_QWORD **)(a1 + 192), v6, *(_DWORD *)(a1 + 200) - v6 - 4);
  return 0;
}
