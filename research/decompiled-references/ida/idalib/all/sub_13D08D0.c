unsigned __int64 __fastcall sub_13D08D0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // r8d
  int v5; // edx
  int v6; // ebp
  int v7; // eax
  unsigned int v8; // eax
  int v10; // eax

  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_DWORD *)(a1 + 128);
  v5 = a3 - v3;
  if ( v4 < 0 )
  {
    v10 = sub_13D0510(*(_QWORD *)(a1 + 8), v4, v5, 1);
    v4 = *(_DWORD *)(a1 + 128);
    v6 = v10;
    v7 = a2 - *(_DWORD *)(a1 + 112);
    if ( v4 < 0 )
    {
      v8 = sub_13D0510(*(_QWORD *)(a1 + 8), v4, a2 - *(_DWORD *)(a1 + 112), 1);
      return __PAIR64__(v6, v8);
    }
  }
  else
  {
    v6 = v4 + v5;
    v7 = a2 - v3;
  }
  v8 = v4 + v7;
  return __PAIR64__(v6, v8);
}
