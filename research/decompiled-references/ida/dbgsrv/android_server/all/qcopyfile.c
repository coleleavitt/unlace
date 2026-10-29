/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcopyfile
// Address: 0x00000000000BDA2C

//----- (00000000000BDA2C) ----------------------------------------------------
__int64 __fastcall qcopyfile(
        const char *a1,
        const char *a2,
        char a3,
        __int64 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5)
{
  FILE *v9; // x0
  FILE *v10; // x19
  unsigned int v11; // w21
  FILE *v12; // x0
  FILE *v13; // x23
  __int64 v14; // x24
  int v15; // w0
  __int64 v16; // x25
  __int64 v17; // x26
  unsigned int qerrno; // w22
  _BYTE ptr[4096]; // [xsp+8h] [xbp-1068h] BYREF
  __int64 v21; // [xsp+1008h] [xbp-68h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v9 = fopenRB(a1);
  if ( v9 )
  {
    v10 = v9;
    if ( !qfileexist(a2) || (a3 & 1) != 0 )
    {
      v12 = fopenWB(a2);
      if ( v12 )
      {
        v13 = v12;
        qfseek(v10, 0, 2);
        v14 = qftell(v10);
        qfseek(v10, 0, 0);
        v15 = qfread(v10, ptr, 0x1000u);
        if ( v15 < 1 )
        {
LABEL_13:
          qfclose(v13);
          v11 = 0;
        }
        else
        {
          v16 = 0;
          while ( 1 )
          {
            v17 = v15;
            if ( qfwrite(v13, ptr, v15) != v15 )
            {
              v11 = -4;
              goto LABEL_17;
            }
            if ( a4 )
            {
              v16 += v17;
              if ( (a4(v16, v14, a5) & 1) == 0 )
                break;
            }
            v15 = qfread(v10, ptr, 0x1000u);
            if ( v15 <= 0 )
              goto LABEL_13;
          }
          v11 = -5;
LABEL_17:
          qfclose(v13);
          qerrno = get_qerrno();
          qunlink(a2);
          set_qerrno(qerrno);
        }
        qfclose(v10);
      }
      else
      {
        qfclose(v10);
        return (unsigned int)-2;
      }
    }
    else
    {
      return (unsigned int)-3;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v11;
}
