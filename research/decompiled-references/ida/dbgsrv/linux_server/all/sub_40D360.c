/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D360
// Address: 0x000000000040D360

//----- (000000000040D360) ----------------------------------------------------
__int64 __fastcall sub_40D360(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  unsigned __int16 v4; // r9
  __int64 v5; // rdi
  int v6; // r10d
  char v7; // r8
  int v8; // eax
  char v9; // cl
  __int64 result; // rax
  _BYTE *v11; // rcx
  int v12; // esi

  v3 = 7;
  v4 = 0;
  v5 = a1 + 352;
  v7 = ~(*(_WORD *)(v5 - 30) >> 11) & 7;
  do
  {
    v8 = 3;
    v6 = *(unsigned __int8 *)(v5 - 28);
    if ( _bittest(&v6, v3) )
    {
      v11 = (_BYTE *)(v5 + 16LL * (v7 & 7));
      v12 = (unsigned __int8)v11[8] | ((unsigned __int8)v11[9] << 8) & 0x7F00;
      v8 = 2;
      if ( v12 != 0x7FFF )
      {
        if ( v12 )
          v8 = (2 * ((unsigned __int8)~v11[7] >> 7)) & 2;
        else
          v8 = (unsigned __int16)(2
                                - (((unsigned __int8)~v11[7] >> 7)
                                 & ((((unsigned __int8)v11[7] << 24) & 0x7F000000
                                   | ((unsigned __int8)v11[5] << 8)
                                   | ((unsigned __int8)v11[6] << 16)
                                   | ((unsigned __int8)v11[1] << 8)
                                   | ((unsigned __int8)v11[2] << 16)
                                   | ((unsigned __int8)v11[3] << 24)
                                   | (unsigned __int8)(v11[4] | *v11)) == 0)));
      }
    }
    v9 = 2 * v3--;
    --v7;
    result = (unsigned int)(v8 << v9);
    v4 |= result;
  }
  while ( v3 != -1 );
  *(_QWORD *)(a2 + 8) = v4;
  return result;
}
