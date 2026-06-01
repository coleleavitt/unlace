/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4016C0
// Address: 0x004016C0

//----- (004016C0) --------------------------------------------------------
void __thiscall sub_4016C0(unsigned int *this, int a2)
{
  int v3; // edx
  unsigned int v4; // esi
  int v5; // ebp
  int i; // ecx
  int v7; // ebx
  int v8; // eax
  void *v9; // esi

  v3 = 0;
  v4 = *(this + 182);
  if ( v4 )
  {
    v5 = *(this + 181);
    for ( i = v5; *(_DWORD *)(*(_DWORD *)i + 216) != a2; i += 4 )
    {
      if ( ++v3 >= v4 )
        return;
    }
    v7 = 4 * v3;
    sub_4082E0(*(_DWORD *)(4 * v3 + v5));
    v8 = *(this + 181);
    v9 = *(void **)(v7 + v8);
    if ( v9 )
    {
      sub_403060(*(_DWORD *)(v7 + v8));
      sub_4627F2(v9);
    }
    sub_464310(*(this + 181) + v7, *(this + 181) + v7 + 4, 4 * ((int)(4 * *(this + 182) - v7) >> 2) - 4);
    --*(this + 182);
  }
}
