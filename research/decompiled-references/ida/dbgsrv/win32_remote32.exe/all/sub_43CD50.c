/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CD50
// Address: 0x0043CD50

//----- (0043CD50) --------------------------------------------------------
char __thiscall sub_43CD50(int this, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // esi
  void *v6; // eax

  v4 = a2;
  sub_43CF50((_DWORD *)this, &a2, a2, 1);
  v5 = a2;
  if ( a2 == *(_DWORD *)(this + 248) || *(_DWORD *)(a2 + 20) != v4 || *(_DWORD *)(a2 + 48) != a3 )
    return 0;
  (*(void (__stdcall **)(int, unsigned int, _DWORD))(*(_DWORD *)this + 168))(this, a2, 0);
  v6 = (void *)sub_40BA90((int ***)(this + 248), v5);
  sub_4627F2(v6);
  return 1;
}
