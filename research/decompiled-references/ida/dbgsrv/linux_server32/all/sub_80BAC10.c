/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BAC10
// Address: 0x080BAC10

//----- (080BAC10) --------------------------------------------------------
void __cdecl __noreturn sub_80BAC10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // eax
  _DWORD *v10; // ebp
  _DWORD *v11; // esi
  _DWORD *v12; // ecx
  _DWORD *v13; // ebp
  int v14; // eax
  int i; // esi
  void *v16; // eax
  _DWORD *v17; // [esp+38h] [ebp-4h]

  v9 = strsignal(a2);
  sub_80BF890("%s: terminating the server\n", v9);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v10 = *(_DWORD **)(a1 + 44);
  v11 = (_DWORD *)v10[4];
  v12 = v10 + 2;
  if ( v11 != v10 + 2 )
  {
    do
    {
      v13 = (_DWORD *)v11[4];
      if ( v11[5] )
        sub_80D0BB0(v11[5]);
      if ( v13 && v13[17] )
      {
        (*(void (__cdecl **)(_DWORD *, int))(*v13 + 12))(v13, a9);
        sub_80BA320((int)v13);
      }
      v14 = std::_Rb_tree_increment(v11);
      v10 = *(_DWORD **)(a1 + 44);
      v11 = (_DWORD *)v14;
      v12 = v10 + 2;
    }
    while ( (_DWORD *)v14 != v10 + 2 );
  }
  for ( i = v10[3]; i; v12 = v17 )
  {
    v17 = v12;
    sub_80BA8D0(*(_DWORD **)(i + 12));
    v16 = (void *)i;
    i = *(_DWORD *)(i + 8);
    operator delete(v16, 0x18u);
  }
  v10[4] = v12;
  v10[5] = v12;
  v10[3] = 0;
  v10[6] = 0;
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 12))(*(_DWORD *)(a1 + 44));
  sub_80BC010((int *)(a1 + 40), -1);
  _exit(a9 != 15);
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B7E0: using guessed type int __cdecl strsignal(_DWORD);
