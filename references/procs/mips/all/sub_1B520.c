void __fastcall sub_1B520(__int64 **a1, int a2, int a3, int a4)
{
  __int64 *v4; // r13
  int v5; // r8d
  int v6; // esi
  int v7; // ebp
  unsigned __int64 v8; // rdx
  int v9; // ebx
  int v10; // r12d
  int v11; // esi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rsi
  __int64 v18; // rax

  v4 = *a1;
  if ( *a1 )
  {
    if ( a3 < a4 )
    {
      if ( !under_debugger )
        interr(10294);
      BUG();
    }
    v5 = 8 * *((_DWORD *)a1 + 2);
    v6 = v5 + a2;
    v7 = a3 + v5;
    v8 = v4[1];
    v9 = a4 + v5;
    v10 = v6 + 14;
    v11 = v6 + 7;
    if ( v11 >= 0 )
      v10 = v11;
    v12 = v10 >> 3;
    if ( v8 < v12 )
    {
      v17 = *v4;
      if ( v4[2] < v12 )
      {
        v18 = qvector_reserve(*a1, v17, v12, 1);
        v8 = v4[1];
        *v4 = v18;
        v17 = v18;
      }
      memset((void *)(v17 + v8), 0, v12 - v8);
      v4[1] = v12;
      v4 = *a1;
    }
    v13 = v9;
    v14 = *v4;
    if ( v9 < (unsigned __int64)v7 )
    {
      do
      {
        v15 = v13;
        v16 = v13++;
        *(_BYTE *)(v14 + (v15 >> 3)) |= 1 << (v16 & 7);
      }
      while ( v7 != v13 );
    }
  }
}
