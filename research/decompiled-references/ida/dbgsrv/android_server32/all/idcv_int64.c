/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_int64
// Address: 0x00044B0C

//----- (00044B0C) --------------------------------------------------------
int __fastcall idcv_int64(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  char *v5; // r0
  int v6; // r1
  int v8; // [sp+0h] [bp-10h] BYREF
  int v9; // [sp+4h] [bp-Ch]

  if ( a1 )
  {
    while ( *(_BYTE *)a1 == 10 )
    {
      if ( !deref_idcv((unsigned __int8 *)a1, 2) )
        return get_qerrno();
    }
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        *(_BYTE *)a1 = 9;
        *(_DWORD *)(a1 + 12) = *(int *)(a1 + 8) >> 31;
        goto LABEL_16;
      case 3:
        v2 = 0;
        v4 = eetol64(&v8, (unsigned __int16 *)(a1 + 8), 0) - 1;
        v3 = 97;
        switch ( v4 )
        {
          case 0:
            goto LABEL_15;
          case 1:
            return set_qerrno(v3);
          case 3:
            v3 = 86;
            return set_qerrno(v3);
          case 4:
            v3 = 98;
            return set_qerrno(v3);
          default:
            return v2;
        }
        return v2;
      case 7:
        if ( *(_DWORD *)(a1 + 12) )
          v5 = *(char **)(a1 + 8);
        else
          v5 = &byte_B3CBE;
        v9 = 0;
        v8 = 0;
        qsscanf((int)v5, "%lli");
        free_idcv((unsigned __int8 *)a1);
LABEL_15:
        *(_BYTE *)a1 = 9;
        v6 = v9;
        *(_DWORD *)(a1 + 8) = v8;
        *(_DWORD *)(a1 + 12) = v6;
        goto LABEL_16;
      case 9:
LABEL_16:
        v2 = 0;
        break;
      default:
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v3 = 1531;
    return set_qerrno(v3);
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
