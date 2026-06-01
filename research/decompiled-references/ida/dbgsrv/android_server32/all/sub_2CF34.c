/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2CF34
// Address: 0x0002CF34

//----- (0002CF34) --------------------------------------------------------
int __fastcall sub_2CF34(int a1, unsigned int *a2, _DWORD *a3, int a4)
{
  unsigned int v6; // r7
  char *v7; // r0
  const char *v8; // r1
  unsigned int v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r0
  int v13; // r1
  _DWORD *v14; // [sp+10h] [bp-20h]
  unsigned int v16; // [sp+1Ch] [bp-14h]
  char *v17; // [sp+20h] [bp-10h] BYREF
  unsigned int v18; // [sp+24h] [bp-Ch]
  int v19; // [sp+28h] [bp-8h]
  int v20; // [sp+2Ch] [bp-4h]

  v6 = a3[1];
  if ( v6 > 0xB || ((1 << v6) & 0xA55) == 0 )
  {
    v10 = a3[6];
    v16 = a3[7];
    if ( !*((_QWORD *)a3 + 3) )
    {
      sub_1BBA0((int)"Illegal offset of the string table section\n");
      return _stack_chk_guard - v20;
    }
    v14 = a2 + 4;
    if ( *(__int64 *)a2 >= 1 && *((_QWORD *)a2 + 2) )
    {
      if ( __PAIR64__(*a2, a2[1]) == __PAIR64__(v10, v16) )
        return _stack_chk_guard - v20;
      sub_2BC80((int)"AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX");
      if ( !a4 )
        return _stack_chk_guard - v20;
      v11 = a3[6];
      v16 = a3[7];
    }
    else
    {
      v11 = v10;
    }
    *a2 = v11;
    a2[1] = v16;
    v12 = a3[4];
    a2[3] = a3[5];
    a2[2] = v12;
    v13 = a3[9];
    *v14 = a3[8];
    v14[1] = v13;
    return _stack_chk_guard - v20;
  }
  v7 = (char *)sub_321FC(a1 + 40, v6);
  sub_1B09C((int)&v17, v7);
  if ( v18 > 1 || (sub_1DA58((int)&v17, "%X", v6), v18) )
    v8 = v17;
  else
    v8 = &byte_B3CBE;
  sub_1BBA0((int)"Illegal type %s of the string table section\n", v8);
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  return _stack_chk_guard - v20;
}
// B3CBE: using guessed type char byte_B3CBE;
