__int64 __fastcall sub_198A20(__int64 a1, int a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // r13d
  int v7; // eax
  int v8; // ebp
  unsigned int v9; // r14d
  unsigned int v10; // eax
  int *v12; // rax
  int v13; // edx
  int v14; // eax

  v2 = *(_QWORD **)(a1 + 16);
  v3 = (_QWORD *)v2[35];
  v4 = v3[58];
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_37EEE0(52056);
    BUG();
  }
  v5 = *(_DWORD *)(a1 + 184) - 1;
  if ( v5 < 0 || (unsigned __int64)v5 >= v2[13] )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v2[12] + 4LL * v5);
  v7 = *(_DWORD *)(a1 + 208) - 1;
  if ( v7 < 0 || (unsigned __int64)v7 >= v2[16] )
    v8 = -1;
  else
    v8 = *(_DWORD *)(v2[15] + 4LL * v7);
  v9 = v4 - 1;
  if ( (int)v4 - 1 >= 0 )
  {
    do
    {
      v12 = (int *)sub_139840(v3, v9);
      v13 = *v12;
      if ( (unsigned int)(*v12 - 3) <= 1 )
      {
        v10 = v12[2];
        if ( v13 == 4 )
        {
          if ( v6 == (unsigned __int16)v10 || v8 == (unsigned __int16)v10 )
            return v9;
          v10 >>= 16;
        }
        if ( v8 == v10 || v6 == v10 )
          return v9;
      }
      else
      {
        v14 = sub_1BFAC0(v12);
        if ( a2 > v14 && v14 != -1 )
          return v9;
      }
    }
    while ( v9-- != 0 );
    v4 = v3[58];
  }
  return *(unsigned int *)(v3[57] + 4 * v4 - 4);
}
