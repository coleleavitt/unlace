/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56FCC
// Address: 0x00056FCC

//----- (00056FCC) --------------------------------------------------------
int __fastcall sub_56FCC(int a1, int a2)
{
  unsigned __int16 *v3; // r6
  unsigned __int16 *v4; // r5
  int v5; // r0
  int (__fastcall *v6)(unsigned __int8 *); // r1
  int v7; // r2
  unsigned __int8 *v8; // r0
  int v9; // r1
  int result; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r2
  int (__fastcall *v15)(unsigned __int8 *); // r1
  int v16; // r2
  unsigned __int8 *v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r5
  const char *v22; // r1
  unsigned __int16 *v23; // [sp+8h] [bp-4h]

  v3 = *(unsigned __int16 **)(*(_DWORD *)(a1 + 8) + 4 * a2);
  v4 = v3;
  v23 = v3;
  while ( 1 )
  {
    v5 = *v4;
    if ( !*v4 )
      goto LABEL_12;
    if ( v5 == 0xFFFF )
      break;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v6 = *(int (__fastcall **)(unsigned __int8 *))a1;
      v7 = *(_DWORD *)(a1 + 4);
      v8 = (unsigned __int8 *)(a1 + (v7 >> 1));
      if ( v7 << 31 )
      {
        v3 = v23;
        v6 = *(int (__fastcall **)(unsigned __int8 *))((char *)v6 + 0x10000 * ((v8[3] << 8) + v8[2]) + 256 * v8[1] + *v8);
      }
      v9 = v6(v8);
      result = 0;
      if ( v9 )
        return result;
      *(_BYTE *)(a1 + 16) = 1;
      LOWORD(v5) = *v4;
    }
    if ( (__int16)v5 == *(unsigned __int16 *)(a1 + 36) )
    {
      *(_BYTE *)(a1 + 16) = 0;
LABEL_12:
      if ( (__int16)v4[1] != -1 )
      {
        v11 = sub_56FCC(a1);
        result = 0;
        if ( !v11 )
          return result;
      }
      v12 = *((unsigned __int8 *)v4 + 5);
      if ( v12 == 255 )
        goto LABEL_20;
      v13 = 8 * v12;
      v14 = *(_DWORD *)(a1 + 12);
      v15 = *(int (__fastcall **)(unsigned __int8 *))(v14 + v13);
      v16 = *(_DWORD *)(v14 + v13 + 4);
      v17 = (unsigned __int8 *)(a1 + (v16 >> 1));
      if ( v16 << 31 )
      {
        v3 = v23;
        v15 = *(int (__fastcall **)(unsigned __int8 *))((char *)v15
                                                      + 0x10000 * ((v17[3] << 8) + v17[2])
                                                      + 256 * v17[1]
                                                      + *v17);
      }
      v18 = v15(v17);
      result = 0;
      if ( !v18 )
      {
LABEL_20:
        v19 = *((unsigned __int8 *)v4 + 4);
        if ( v19 == 255 )
          return 1;
        v4 = &v3[3 * v19];
      }
      else
      {
        if ( v18 != 1507 )
          return result;
        *(_BYTE *)(a1 + 16) = 1;
        v4 += 3;
      }
    }
    else
    {
      v4 += 3;
    }
  }
  v20 = v4[1];
  v21 = (__int16)v20;
  result = 1;
  if ( v20 )
  {
    if ( v20 == 67 )
    {
      if ( *(_DWORD *)(a1 + 28) )
        v22 = *(const char **)(a1 + 24);
      else
        v22 = &byte_B3CBE;
      set_error_string(0, v22);
    }
    set_qerrno(v21);
    return 0;
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
