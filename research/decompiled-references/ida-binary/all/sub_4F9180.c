__int64 __fastcall sub_4F9180(__int64 a1, int a2, _BYTE *a3, _QWORD *a4)
{
  __int64 *v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rsi
  int v15; // edx

  if ( a3 )
    *a3 = -1;
  v8 = *(__int64 **)(a1 + 24);
  v9 = v8[1];
  if ( v9 )
  {
    v10 = *v8;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = 72 * v12;
      v14 = (_BYTE *)(v10 + v13);
      v15 = *(_DWORD *)(v10 + v13 + 56);
      if ( v15 == a2 )
      {
        if ( a3 )
        {
          *a3 = v14[52];
          v14 = (_BYTE *)(v13 + **(_QWORD **)(a1 + 24));
        }
        if ( a4 )
        {
          *a4 = v14;
          v14 = (_BYTE *)(**(_QWORD **)(a1 + 24) + v13);
        }
        return *(_QWORD *)v14;
      }
      if ( v15 == -a2 )
        break;
      v12 = ++v11;
      if ( v11 >= v9 )
        return 0;
    }
    if ( a3 )
      *a3 = v14[52];
    if ( a4 )
      *a4 = 0;
  }
  return 0;
}
