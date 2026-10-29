/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_attr
// Address: 0x0005AC80

//----- (0005AC80) --------------------------------------------------------
int __cdecl set_idcv_attr(int a1, char *s, char *a3, char a4)
{
  _DWORD *v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  int v7; // ecx
  int qerrno; // esi
  char *idc_gvar; // eax
  int v11; // eax
  int v12[6]; // [esp+0h] [ebp-8Ch] BYREF
  int *v13; // [esp+18h] [ebp-74h] BYREF
  _DWORD v14[20]; // [esp+20h] [ebp-6Ch] BYREF
  int v15[7]; // [esp+70h] [ebp-1Ch] BYREF

  v15[2] = __readgsdword(0x14u);
  if ( a1 )
  {
    if ( *(_BYTE *)a1 != 5 )
      return set_qerrno(1532);
    sub_1B530((int)v12, s);
    if ( a4 )
    {
      sub_5FB80((int)v14, 0, 1);
      v4 = *(_DWORD **)(a1 + 4);
      v5 = v4[4];
      if ( v5 )
      {
        while ( 1 )
        {
          v6 = sub_538B0(v14[1], v5);
          v7 = *(_DWORD *)(v6 + 36);
          if ( v7 != -1 )
            break;
          v5 = *(_DWORD *)(v6 + 12);
          if ( !v5 )
            goto LABEL_15;
        }
        qerrno = 0;
        if ( !(unsigned __int8)sub_5E430((int)v14, v4, v7, (int)v12, a3, 0) )
          qerrno = get_qerrno();
      }
      else
      {
LABEL_15:
        v13 = v12;
        sub_68CD0((int)v15, (int)v4, (int)v12, (int)dword_F4D90, (int *)&v13);
        qerrno = 0;
        copy_idcv((char *)(v15[0] + 28), a3);
      }
      sub_5FE80((int)v14);
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 4);
      v15[0] = (int)v12;
      sub_68CD0((int)v14, v11, (int)v12, (int)dword_F4D90, v15);
      qerrno = 0;
      copy_idcv((char *)(v14[0] + 28), a3);
    }
    if ( v12[0] )
    {
      v12[1] = 0;
      qfree((void *)v12[0]);
      v12[0] = 0;
      v12[2] = 0;
    }
  }
  else
  {
    idc_gvar = (char *)find_idc_gvar(s);
    if ( !idc_gvar )
    {
      set_error_string(0, s);
      return set_qerrno(1538);
    }
    copy_idcv(idc_gvar, a3);
    return 0;
  }
  return qerrno;
}
// F4D90: using guessed type int dword_F4D90[2];
