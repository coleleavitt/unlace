/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: zip_extract_archive_entry
// Address: 0x0007A9E0

//----- (0007A9E0) --------------------------------------------------------
int __fastcall zip_extract_archive_entry(
        int a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall *a6)(int, _BYTE *, int),
        int a7)
{
  _DWORD *v9; // r0
  int v10; // r5
  int v11; // r4
  unsigned int v12; // r2
  int v13; // r6
  int v14; // r0
  int v15; // r0
  int v16; // r6
  int v17; // r0
  int v19; // r0
  const char *v20; // r0
  int v22; // [sp+2Ch] [bp-8084h] BYREF
  unsigned __int8 v23; // [sp+34h] [bp-807Ch]
  int v24[8]; // [sp+88h] [bp-8028h] BYREF
  _BYTE v25[32776]; // [sp+A8h] [bp-8008h] BYREF

  v24[1] = (int)sub_7ABFA;
  v24[0] = (int)nullsub_6;
  v24[2] = (int)byte_7AC09;
  v24[3] = (int)sub_7AC28;
  v24[4] = (int)sub_7AC40;
  v24[5] = (int)sub_7AC66;
  v24[6] = (int)sub_7AC6A;
  v24[7] = a1;
  v9 = sub_8D154((int)&byte_A0742, v24);
  v10 = 1;
  if ( v9 )
  {
    v11 = (int)v9;
    v12 = 1;
    if ( !a4 )
      v12 = 2;
    v13 = sub_8DCA4((int)v9, a2, v12);
    if ( v13 )
    {
      if ( a7 )
        sub_1DA58(a7, "could not locate zip file entry '%s'", a2);
LABEL_7:
      v14 = -v13;
      v10 = 0;
      if ( v13 >= 0 )
        goto LABEL_19;
    }
    else
    {
      v10 = 0;
      sub_8D2A8(v11, &v22, 0, 0, 0, 0, 0, 0);
      v16 = v15;
      if ( !v15 )
      {
        if ( v23 << 31 )
        {
          if ( !a3 )
          {
            v10 = 3;
            if ( a7 )
            {
              v10 = 3;
              sub_1DA58(a7, "zip file entry '%s' is encrypted, but no password has been provided", a2);
            }
            goto LABEL_19;
          }
          v17 = sub_8E486(v11, a3);
        }
        else
        {
          v17 = sub_8E470(v11);
        }
        v16 = v17;
        if ( !v17 )
        {
          while ( 1 )
          {
            v19 = sub_8E4DA(v11, (int)v25, 0x8000u);
            v13 = v19;
            if ( v19 < 0 )
            {
              if ( a7 )
                sub_1DA58(a7, "error reading from zip file");
              goto LABEL_7;
            }
            if ( !v19 )
              break;
            if ( a6(a5, v25, v19) != v19 )
            {
              v10 = 778;
              if ( a7 )
              {
                v20 = qstrerror(0xFFFFFFFF);
                sub_1DA58(a7, "error writing to output file : %s", v20);
              }
              goto LABEL_19;
            }
          }
          v13 = sub_8D206(v11);
          if ( v13 != -105 )
            goto LABEL_7;
          v10 = 3;
          if ( a7 )
          {
            v10 = 3;
            sub_1DA58(a7, "CRC error while extracting from zip file");
          }
          goto LABEL_19;
        }
      }
      if ( a7 )
        sub_1DA58(a7, "could not open zip file entry '%s'", a2);
      v14 = -v16;
      if ( v16 >= 0 )
      {
LABEL_19:
        sub_8D1BC(v11);
        return v10;
      }
    }
    v10 = v14;
    goto LABEL_19;
  }
  return v10;
}
// 7AA8E: variable 'v15' is possibly undefined
// 7ABF8: using guessed type int nullsub_6();
// A0742: using guessed type char byte_A0742;
