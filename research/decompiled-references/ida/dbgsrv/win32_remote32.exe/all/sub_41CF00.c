/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CF00
// Address: 0x0041CF00

//----- (0041CF00) --------------------------------------------------------
int __thiscall sub_41CF00(int *this, unsigned int *a2)
{
  int v3; // esi
  char *v4; // esi
  signed int v5; // eax
  LPVOID v6; // eax
  int v7; // eax
  _DWORD *v9; // [esp-Ch] [ebp-40h]
  int v10; // [esp-8h] [ebp-3Ch]
  unsigned int v11; // [esp-4h] [ebp-38h]
  _DWORD v12[2]; // [esp+Ch] [ebp-28h] BYREF
  int v13; // [esp+14h] [ebp-20h]
  int *v14; // [esp+18h] [ebp-1Ch]
  char *v15; // [esp+1Ch] [ebp-18h]
  int v16; // [esp+20h] [ebp-14h]
  unsigned int v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+30h] [ebp-4h]

  sub_41C640(this, v12, (int)a2);
  v3 = v13;
  if ( *(_BYTE *)(v13 + 13) || (unsigned __int8)sub_41D0A0((int)a2, v13 + 16) )
  {
    if ( *(this + 1) == 76695844 )
      sub_403E20();
    v16 = *this;
    v14 = this;
    v18 = 0;
    v15 = nullptr;
    v4 = (char *)sub_4627C2(0x38u);
    v15 = v4;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 6) = 0;
    v5 = a2[1];
    v18 = 1;
    v17 = v5;
    if ( v5 )
    {
      v6 = sub_4539E0(v5);
      v11 = v17;
      *((_DWORD *)v4 + 6) = v17;
      *((_DWORD *)v4 + 4) = v6;
      sub_464310((unsigned int)v6, *a2, v11);
      *((_DWORD *)v4 + 5) = v17;
    }
    v7 = v16;
    v4[32] = 2;
    v10 = v12[1];
    *(_OWORD *)(v4 + 40) = 0;
    *(_DWORD *)v4 = v7;
    v9 = (_DWORD *)v12[0];
    *((_DWORD *)v4 + 1) = v7;
    *((_DWORD *)v4 + 2) = v7;
    *((_WORD *)v4 + 6) = 0;
    v3 = sub_403C10(this, v9, v10, (int)v4);
  }
  return v3 + 32;
}
