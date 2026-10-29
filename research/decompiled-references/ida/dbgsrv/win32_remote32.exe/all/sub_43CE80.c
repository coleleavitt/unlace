/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CE80
// Address: 0x0043CE80

//----- (0043CE80) --------------------------------------------------------
bool __thiscall sub_43CE80(_DWORD *this, int a2, char a3)
{
  char v4; // bl
  unsigned int v6; // esi
  _DWORD *v7; // ecx
  _DWORD *i; // eax
  double v10; // [esp-4h] [ebp-14h]
  unsigned int *v11; // [esp+14h] [ebp+4h]

  v4 = 0;
  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 5 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    if ( v6 == -1 )
    {
      v6 = *(_DWORD *)(a2 + 20);
      if ( v6 == -1 )
        v6 = *(_DWORD *)(a2 + 8);
    }
    v11 = (unsigned int *)sub_43D0A0((int)this, 0, *(_DWORD *)(a2 + 4), v6);
    if ( v11 )
    {
      LODWORD(v10) = v6;
      sub_43C900((int)this, (int)"%a: bptcnd yielded false\n", v10);
      *(_BYTE *)(a2 + 12) = 1;
      v7 = (_DWORD *)*(this + 44);
      for ( i = &v7[*(this + 45)]; v7 != i; ++v7 )
      {
        if ( v6 == *v7 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(617);
        }
      }
      return sub_43D2B0(this, v11, (_DWORD *)a2, a3);
    }
  }
  return v4;
}
// 43CEC4: variable 'v10' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
