/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001E980
// Address: 0x000000014001E980

//----- (000000014001E980) ----------------------------------------------------
char __fastcall sub_14001E980(unsigned int *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int8 v8; // bl
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // bl
  int v14[10]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x100) != 0 )
    return 0;
  if ( (v4 & 8) != 0 )
  {
    v8 = 3;
  }
  else if ( (v4 & 0x80u) == 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v12 = *((_BYTE *)&qword_1400941D8 + v8);
      if ( v12 != 0xFF && (v12 & (unsigned __int8)v4) != 0 )
        break;
      if ( ++v8 >= 8u )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(622);
      }
    }
  }
  else
  {
    v8 = 7;
  }
  v9 = (a2 >> 1) & 1 | 2;
  if ( (a2 & 1) == 0 )
    v9 = (a2 >> 1) & 1;
  if ( (a2 & 8) != 0 )
  {
    LOBYTE(v9) = v9 | 4;
    if ( a3 != 1 )
    {
      v10 = 0;
      v15 = 0;
      v11 = 0;
      v14[0] = 0;
      if ( !qword_1400CAEF8 )
        goto LABEL_29;
      if ( byte_1400CAFA4 )
      {
        if ( dword_1400CAF20 == 2 && dword_1400CAF14 == 5 && dword_1400CAF18 == 1 )
          goto LABEL_29;
        if ( byte_1400CAFA4 )
        {
          if ( dword_1400CAF14 == 10 )
          {
            if ( !dword_1400CAF18 )
              goto LABEL_29;
          }
          else if ( dword_1400CAF14 == 6 && (unsigned int)(dword_1400CAF18 - 2) <= 1 )
          {
            goto LABEL_29;
          }
        }
      }
      if ( (unsigned int)qword_1400CAEF8(a4, &v15, v14) )
      {
        v10 = v15;
        v11 = v14[0];
LABEL_29:
        if ( a3 == 2 && !v11 || !v10 )
          LOBYTE(v9) = v9 | 1;
      }
    }
  }
  v13 = ~(_BYTE)v9 & v8;
  if ( v13 == 2 || v13 == 6 )
    v13 = 0;
  *a1 = v4 & 0xFFFFFF00 | *((unsigned __int8 *)&qword_1400941D8 + v13);
  return 1;
}
// 1400941D8: using guessed type __int64 qword_1400941D8;
// 1400CAEF8: using guessed type __int64 (__fastcall *qword_1400CAEF8)(_QWORD, _QWORD, _QWORD);
// 1400CAF14: using guessed type int dword_1400CAF14;
// 1400CAF18: using guessed type int dword_1400CAF18;
// 1400CAF20: using guessed type int dword_1400CAF20;
// 1400CAFA4: using guessed type char byte_1400CAFA4;
// 1400CB61C: using guessed type char byte_1400CB61C;
