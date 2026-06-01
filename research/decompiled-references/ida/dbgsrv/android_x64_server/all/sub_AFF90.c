/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AFF90
// Address: 0x00000000000AFF90

//----- (00000000000AFF90) ----------------------------------------------------
__int64 __fastcall sub_AFF90(unsigned int a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  int v3; // r9d
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // esi
  __int64 *v7; // r11
  unsigned int v8; // edx
  _DWORD *v9; // r10

  if ( a1 <= 0x7F )
  {
    v1 = a1;
    return *((unsigned int *)qword_103F20 + v1);
  }
  result = 0;
  if ( a1 <= (unsigned int)&byte_10FFFF )
  {
    v3 = 3200;
    v4 = 0;
    while ( 1 )
    {
      if ( v3 >= 3201 )
      {
        if ( !(_BYTE)under_debugger )
          interr(1520);
        goto LABEL_30;
      }
      v5 = (v4 + v3) / 2;
      if ( v5 < 0xC80 )
        break;
      v6 = v5 + 1;
      if ( *((_DWORD *)&qword_10B470 + 3 * (int)v5) >= a1 )
        goto LABEL_18;
LABEL_19:
      result = 0;
      if ( v6 <= v3 )
      {
        v4 = v6;
        if ( v6 < 3200 )
          continue;
      }
      return result;
    }
    v6 = v5 + 1;
    v7 = qword_110000;
    if ( v5 + 1 <= 0xC7F )
      LODWORD(v7) = *((_DWORD *)&qword_10B470 + 3 * v6);
    v8 = *((_DWORD *)&qword_10B470 + 3 * (int)v5);
    if ( (unsigned int)v7 > a1 )
    {
      v9 = (_DWORD *)&qword_10B470 + 3 * (int)v5;
      if ( v8 > a1 )
        goto LABEL_17;
    }
    else
    {
      v9 = nullptr;
      if ( v8 > a1 )
        goto LABEL_17;
    }
    if ( v9 )
    {
      LODWORD(v1) = v9[1];
      if ( !v9[2] )
        LODWORD(v1) = a1 + v1 - *v9;
      if ( (unsigned int)v1 < 0x1D52 )
      {
        v1 = (unsigned int)v1;
        return *((unsigned int *)qword_103F20 + v1);
      }
      if ( !(_BYTE)under_debugger )
        interr(1519);
LABEL_30:
      BUG();
    }
LABEL_17:
    if ( v8 < a1 )
      goto LABEL_19;
LABEL_18:
    v3 = v5 - 1;
    v6 = v4;
    goto LABEL_19;
  }
  return result;
}
// 103F20: using guessed type __int64 qword_103F20[630];
// 10B470: using guessed type __int64 qword_10B470;
// 10FFFF: using guessed type char byte_10FFFF;
// 110000: using guessed type __int64 qword_110000[512];
// 158B40: using guessed type __int64 under_debugger;
