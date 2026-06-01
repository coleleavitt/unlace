/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428830
// Address: 0x00428830

//----- (00428830) --------------------------------------------------------
unsigned int __thiscall sub_428830(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // edi
  unsigned int result; // eax
  char *v5; // eax
  _DWORD *v6; // ebx
  int v7; // ecx
  bool v8; // sf
  int v9; // ecx
  int *v10; // esi
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // eax
  void *v14; // eax
  int v15; // [esp+10h] [ebp-18h]
  char *v16; // [esp+14h] [ebp-14h]
  int v18; // [esp+30h] [ebp+8h]

  v2 = this;
  v3 = *(this + 2);
  result = a2;
  if ( a2 > v3 )
  {
    v5 = (char *)sub_453B00((int)this, nullptr, a2, 0x10u);
    v6 = (_DWORD *)*v2;
    v15 = v2[2];
    v7 = v2[1];
    v8 = v7 - 1 < 0;
    v9 = v7 - 1;
    v16 = v5;
    v2[2] = v3;
    v18 = v9;
    if ( !v8 )
    {
      v10 = v6 + 3;
      v11 = v5 + 12;
      do
      {
        *(v11 - 3) = *v6;
        *(v11 - 2) = *(v10 - 2);
        v12 = *(v10 - 1);
        *(v10 - 2) = 0;
        *(v11 - 1) = v12;
        v13 = *v10;
        *(v10 - 1) = 0;
        *v11 = v13;
        *v10 = 0;
        v14 = (void *)*(v10 - 2);
        if ( v14 )
        {
          *(v10 - 1) = 0;
          sub_453A20(v14);
          v9 = v18;
          *(v10 - 2) = 0;
          *v10 = 0;
        }
        v6 += 4;
        v10 += 4;
        v11 += 4;
        v18 = --v9;
      }
      while ( v9 >= 0 );
      v2 = this;
    }
    sub_453A20((void *)*v2);
    *v2 = v16;
    v2[2] = v15;
    return v15;
  }
  return result;
}
