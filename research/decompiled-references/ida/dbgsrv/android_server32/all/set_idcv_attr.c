/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_attr
// Address: 0x000455E8

//----- (000455E8) --------------------------------------------------------
int __fastcall set_idcv_attr(int a1, char *s, unsigned __int8 *a3, int a4)
{
  int qerrno; // r4
  _DWORD *v8; // r6
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r2
  unsigned __int8 *idc_gvar; // r0
  int v14; // r0
  int v15; // r1
  void *v18[3]; // [sp+Ch] [bp-70h] BYREF
  void **v19; // [sp+1Ch] [bp-60h] BYREF
  _DWORD v20[20]; // [sp+20h] [bp-5Ch] BYREF
  int v21[2]; // [sp+70h] [bp-Ch] BYREF

  if ( !a1 )
  {
    idc_gvar = (unsigned __int8 *)find_idc_gvar(s);
    if ( idc_gvar )
    {
      copy_idcv(idc_gvar, a3);
      return 0;
    }
    set_error_string(0, s);
    v14 = 1538;
    return set_qerrno(v14);
  }
  if ( *(_BYTE *)a1 != 5 )
  {
    v14 = 1532;
    return set_qerrno(v14);
  }
  sub_1B09C((int)v18, s);
  if ( a4 )
  {
    qerrno = 0;
    ((void (__fastcall *)(_DWORD *, _DWORD, int))loc_48528)(v20, 0, 1);
    v8 = *(_DWORD **)(a1 + 8);
    v9 = v8[4];
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = sub_40FB8(v20[1], v9);
        v11 = *(_DWORD *)(v10 + 36);
        if ( v11 != -1 )
          break;
        v9 = *(_DWORD *)(v10 + 12);
        if ( !v9 )
          goto LABEL_16;
      }
      if ( !sub_47764((int)v20, v8, v11, (int)v18, a3, 0) )
        qerrno = get_qerrno();
    }
    else
    {
LABEL_16:
      v19 = v18;
      sub_4DDA0((int)v21, (int)v8, (int)v18, (int)&byte_B45D0, (int *)&v19);
      copy_idcv((unsigned __int8 *)(v21[0] + 32), a3);
    }
    sub_486C4((int)v20);
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 8);
    v21[0] = (int)v18;
    sub_4DDA0((int)v20, v15, (int)v18, (int)&byte_B45D0, v21);
    qerrno = 0;
    copy_idcv((unsigned __int8 *)(v20[0] + 32), a3);
  }
  if ( v18[0] )
  {
    v18[1] = nullptr;
    qfree(v18[0]);
    v18[2] = nullptr;
    v18[0] = nullptr;
  }
  return qerrno;
}
// B45D0: using guessed type char byte_B45D0;
