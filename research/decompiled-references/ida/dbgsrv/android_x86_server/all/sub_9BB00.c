/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BB00
// Address: 0x0009BB00

//----- (0009BB00) --------------------------------------------------------
_DWORD *__userpurge sub_9BB00@<eax>(_DWORD *a1, unsigned int a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // esi
  int *v10; // edx
  _DWORD *v11; // ebx
  bool v12; // cf
  unsigned int v13; // eax
  int v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+18h] [ebp-14h]

  result = a1;
  if ( a2 <= 0x7F )
  {
    v3 = (int)*(&off_F58FC + a2);
    goto LABEL_3;
  }
  if ( a2 > (unsigned int)&byte_10FFFF )
  {
LABEL_20:
    *a1 = 0;
    return a1;
  }
  v4 = 3200;
  v5 = 0;
  while ( 1 )
  {
    if ( v4 >= 3201 )
    {
      if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
      {
        v14 = 1520;
        goto LABEL_27;
      }
LABEL_30:
      BUG();
    }
    v15 = v4;
    v6 = (v5 + v4) / 2;
    if ( v6 < 0xC80 )
      break;
    v7 = *((_DWORD *)&qword_13ACD8 + 3 * v6 - 63397);
    v8 = a2;
    v9 = v6 + 1;
LABEL_16:
    v12 = v7 < v8;
    v4 = v15;
    if ( !v12 )
    {
      v4 = v6 - 1;
      v9 = v5;
    }
    if ( v9 <= v4 )
    {
      v5 = v9;
      if ( v9 < 3200 )
        continue;
    }
    goto LABEL_20;
  }
  v9 = v6 + 1;
  v10 = dword_110000;
  if ( v6 + 1 <= 0xC7F )
    v10 = *((int **)&qword_13ACD8 + 3 * v9 - 63397);
  v7 = *((_DWORD *)&qword_13ACD8 + 3 * v6 - 63397);
  if ( (unsigned int)v10 > a2 )
    v11 = (_DWORD *)&qword_13ACD8 + 3 * v6 - 63397;
  else
    v11 = nullptr;
  v8 = a2;
  if ( v7 > a2 || !v11 )
    goto LABEL_16;
  v13 = v11[1];
  if ( !v11[2] )
    v13 = a2 + v13 - *v11;
  if ( v13 >= 0x1D52 )
  {
    if ( !(_BYTE)under_debugger )
    {
      v14 = 1519;
LABEL_27:
      interr(v14);
    }
    goto LABEL_30;
  }
  v3 = (int)*(&off_F58FC + v13);
  result = a1;
LABEL_3:
  *result = v3;
  return result;
}
// F58FC: using guessed type Elf32_Rel *off_F58FC;
// 10FFFF: using guessed type char byte_10FFFF;
// 110000: using guessed type int dword_110000[6];
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13E34C: using guessed type int under_debugger;
