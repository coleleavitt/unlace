/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_long
// Address: 0x00044A34

//----- (00044A34) --------------------------------------------------------
int __fastcall idcv_long(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  int v5; // r0
  char *v6; // r0
  int v8; // [sp+0h] [bp-8h] BYREF

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
        goto LABEL_13;
      case 3:
        v2 = 0;
        v3 = eetol(&v8, (unsigned __int16 *)(a1 + 8), 0) - 1;
        v4 = 97;
        switch ( v3 )
        {
          case 0:
            v5 = v8;
            *(_BYTE *)a1 = 2;
            *(_DWORD *)(a1 + 8) = v5;
            goto LABEL_13;
          case 1:
            return set_qerrno(v4);
          case 3:
            v4 = 86;
            return set_qerrno(v4);
          case 4:
            v4 = 98;
            return set_qerrno(v4);
          default:
            return v2;
        }
        return v2;
      case 7:
        if ( *(_DWORD *)(a1 + 12) )
          v6 = *(char **)(a1 + 8);
        else
          v6 = &byte_B3CBE;
        v2 = 0;
        qsscanf((int)v6, "%i");
        free_idcv((unsigned __int8 *)a1);
        *(_DWORD *)(a1 + 8) = 0;
        return v2;
      case 9:
        *(_BYTE *)a1 = 2;
LABEL_13:
        v2 = 0;
        break;
      default:
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v4 = 1531;
    return set_qerrno(v4);
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
