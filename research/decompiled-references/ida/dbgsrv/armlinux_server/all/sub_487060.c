/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487060
// Address: 0x0000000000487060

//----- (0000000000487060) ----------------------------------------------------
void *__fastcall sub_487060(int errnum)
{
  int v1; // w20
  char *v2; // x0
  char *v3; // x21
  size_t v4; // x0
  _QWORD *StatusReg; // x22
  size_t v6; // x23
  void *v7; // x1
  unsigned __int64 v9; // x21
  size_t v10; // x24
  _QWORD *v11; // x22
  char buf[1024]; // [xsp+48h] [xbp-408h] BYREF

  v1 = errnum;
  if ( errnum == -1 )
    v1 = *__errno_location();
  v2 = strerror_r(v1, buf, 0x400u);
  v3 = v2;
  if ( v2 )
  {
    v4 = strlen(v2);
    StatusReg = (_QWORD *)_ReadStatusReg(TPIDR_EL0);
    v6 = v4;
    v7 = (void *)StatusReg[24];
    if ( v4 )
    {
      v10 = v4 + 1;
      if ( v4 + 1 > StatusReg[26] )
      {
        v7 = sub_491288((__int64)(StatusReg + 24), v7, v4 + 1, 1u);
        StatusReg[24] = v7;
      }
      v11 = StatusReg + 2;
      v11[23] = v10;
      memmove(v7, v3, v6);
      *(_BYTE *)(v11[22] + v6) = 0;
      return (void *)v11[22];
    }
    else
    {
      StatusReg[25] = 0;
    }
  }
  else
  {
    v9 = _ReadStatusReg(TPIDR_EL0) + 16;
    sub_40CD68(v9 + 176, "unknown error code %d", v1);
    return *(void **)(v9 + 176);
  }
  return v7;
}
// 487060: could not find valid save-restore pair for x22
// 487060: could not find valid save-restore pair for x23
