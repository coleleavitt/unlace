/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D9E0
// Address: 0x0044D9E0

//----- (0044D9E0) --------------------------------------------------------
char *__thiscall sub_44D9E0(char *this, int a2, char a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  int v8; // [esp-Ch] [ebp-28h]

  v4 = (int)(this + 76);
  *(_DWORD *)this = &off_48F91C;
  *((_DWORD *)this + 18) = a2;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  v5 = dword_4B5090;
  *((_DWORD *)this + 22) = dword_4B5090;
  dword_4B5090 = v5 + 1;
  *((_DWORD *)this + 24) = sub_453720();
  v8 = *((_DWORD *)this + 18);
  *((_DWORD *)this + 25) = v6;
  *(this + 104) = a3;
  if ( !(unsigned __int8)sub_44D570(v8, v4, 0) )
  {
    if ( *(_DWORD *)(v4 + 8) < 0xAu )
      *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, 0xAu, 1u);
    *(_DWORD *)(v4 + 4) = 10;
    sub_464310(*(_DWORD *)v4, (unsigned int)"(unknown)", 9u);
    *(_BYTE *)(*(_DWORD *)v4 + 9) = 0;
  }
  sub_464890((__m128i *)(this + 8), 0, 0x40u);
  return this;
}
// 44DA56: variable 'v6' is possibly undefined
// 48F91C: using guessed type int (__stdcall *off_48F91C)(char);
// 4B5090: using guessed type int dword_4B5090;
