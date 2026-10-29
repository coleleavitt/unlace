/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069690
// Address: 0x08069690

//----- (08069690) --------------------------------------------------------
void __cdecl sub_8069690(_DWORD *a1)
{
  int v1; // esi
  void *v2; // eax
  int v3; // esi
  void *v4; // edi
  int v5; // ebp
  void *v6; // eax

  v1 = a1[9];
  *a1 = &off_811B8D4;
  while ( v1 )
  {
    sub_8069200(*(_DWORD **)(v1 + 12));
    v2 = (void *)v1;
    v1 = *(_DWORD *)(v1 + 8);
    operator delete(v2, 0x14u);
  }
  v3 = a1[3];
  while ( v3 )
  {
    v4 = (void *)v3;
    sub_8069580(*(_DWORD **)(v3 + 12));
    v5 = *(_DWORD *)(v3 + 28);
    v3 = *(_DWORD *)(v3 + 8);
    while ( v5 )
    {
      sub_80693C0(*(_DWORD **)(v5 + 12));
      v6 = (void *)v5;
      v5 = *(_DWORD *)(v5 + 8);
      operator delete(v6, 0x1Cu);
    }
    operator delete(v4, 0x2Cu);
  }
  operator delete(a1, 0x40u);
}
// 811B8D4: using guessed type int (__cdecl *off_811B8D4)(int);
