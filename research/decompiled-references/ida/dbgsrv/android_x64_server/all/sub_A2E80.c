/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2E80
// Address: 0x00000000000A2E80

//----- (00000000000A2E80) ----------------------------------------------------
char __fastcall sub_A2E80(_QWORD *a1, unsigned __int64 a2, int a3)
{
  int v5; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  char result; // al
  int v16; // esi
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rcx
  bool v21; // zf

  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 496LL))(a1);
  v6 = a1 + 64;
  v7 = (_QWORD *)a1[64];
  v8 = a1 + 64;
  if ( v7 )
  {
    v9 = a2 & -v5;
    v10 = a1 + 64;
    do
    {
      if ( v7[4] >= v9 )
        v10 = v7;
      v7 = (_QWORD *)v7[v7[4] < v9];
    }
    while ( v7 );
    v8 = a1 + 64;
    if ( v10 != v6 )
    {
      v11 = v10[4];
      if ( v11 < a2 + 1 )
      {
        v12 = v10 + 4;
        goto LABEL_17;
      }
      v8 = v10;
    }
  }
  if ( v8 == (_QWORD *)a1[63] )
    return 0;
  v13 = (_QWORD *)*v8;
  if ( *v8 )
  {
    do
    {
      v10 = v13;
      v13 = (_QWORD *)v13[1];
    }
    while ( v13 );
  }
  else
  {
    do
    {
      v14 = v8;
      v8 = (_QWORD *)v8[2];
    }
    while ( (_QWORD *)*v8 == v14 );
    v10 = v8;
  }
  v11 = v10[4];
  v12 = v10 + 4;
LABEL_17:
  result = 0;
  if ( v11 > a2 )
    return result;
  v16 = *((_DWORD *)v12 + 7);
  if ( !v16 )
    return result;
  if ( v11 + v16 - 1 < a2 || v10 == v6 || v10[5] != a2 || *((_DWORD *)v10 + 19) != a3 )
    return 0;
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a1 + 344LL))(a1, v10, 0);
  v17 = (_QWORD *)v10[1];
  if ( v17 )
  {
    do
    {
      v18 = v17;
      v17 = (_QWORD *)*v17;
    }
    while ( v17 );
  }
  else
  {
    v18 = (_QWORD *)v10[2];
    if ( (_QWORD *)*v18 != v10 )
    {
      v19 = v10 + 2;
      do
      {
        v20 = *v19;
        v18 = *(_QWORD **)(v20 + 16);
        v21 = *v18 == v20;
        v19 = (__int64 *)(v20 + 16);
      }
      while ( !v21 );
    }
  }
  if ( (_QWORD *)a1[63] == v10 )
    a1[63] = v18;
  --a1[65];
  sub_4C430((__int64 *)a1[64], v10);
  operator delete(v10);
  return 1;
}
