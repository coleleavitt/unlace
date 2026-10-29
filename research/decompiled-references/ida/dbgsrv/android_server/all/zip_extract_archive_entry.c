/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: zip_extract_archive_entry
// Address: 0x00000000000B88D8

//----- (00000000000B88D8) ----------------------------------------------------
__int64 __fastcall zip_extract_archive_entry(
        __int64 a1,
        char *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, _BYTE *, _QWORD),
        __int64 a7)
{
  __int128 v7; // q0
  int32x2_t *v14; // x0
  unsigned int v15; // w25
  __int64 v16; // x19
  unsigned int v17; // w2
  int v18; // w25
  int v19; // w0
  int v21; // w23
  const char *v22; // x0
  int32x2_t v23[2]; // [xsp+10h] [xbp-8130h] BYREF
  char v24; // [xsp+20h] [xbp-8120h]
  __int64 (__fastcall *v25)(); // [xsp+98h] [xbp-80A8h] BYREF
  __int128 v26; // [xsp+A0h] [xbp-80A0h]
  void *v27; // [xsp+B0h] [xbp-8090h]
  __int64 (__fastcall *v28)(__int64, __int64, __int64, unsigned int); // [xsp+B8h] [xbp-8088h]
  __int128 v29; // [xsp+C0h] [xbp-8080h]
  __int64 v30; // [xsp+D0h] [xbp-8070h]
  _BYTE v31[32776]; // [xsp+D8h] [xbp-8068h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)&v7 = sub_B8B94;
  v25 = nullsub_9;
  *((_QWORD *)&v7 + 1) = sub_B8BA4;
  v26 = v7;
  *(_QWORD *)&v7 = sub_B8C08;
  *((_QWORD *)&v7 + 1) = sub_B8C10;
  v27 = &loc_B8BC4;
  v28 = sub_B8BD4;
  v29 = v7;
  v30 = a1;
  v14 = sub_D2360((__int64)"", (__int128 *)&v25);
  v15 = 1;
  if ( !v14 )
    return v15;
  v16 = (__int64)v14;
  if ( (a4 & 1) != 0 )
    v17 = 1;
  else
    v17 = 2;
  v18 = sub_D3248((__int64)v14, a2, v17);
  if ( v18 )
  {
    if ( a7 )
      sub_3C748(a7, "could not locate zip file entry '%s'", a2);
LABEL_14:
    if ( v18 < 0 )
      v15 = -v18;
    else
      v15 = 0;
    goto LABEL_17;
  }
  v18 = sub_D2510(v16, v23, 0, 0, 0, 0, 0, 0);
  if ( v18 )
  {
LABEL_12:
    if ( a7 )
      sub_3C748(a7, "could not open zip file entry '%s'", a2);
    goto LABEL_14;
  }
  if ( (v24 & 1) != 0 )
  {
    if ( !a3 )
    {
      if ( a7 )
        sub_3C748(a7, "zip file entry '%s' is encrypted, but no password has been provided", a2);
      goto LABEL_34;
    }
    v19 = sub_D3CA0(v16, a3);
  }
  else
  {
    v19 = sub_D3C8C(v16);
  }
  v18 = v19;
  if ( v19 )
    goto LABEL_12;
  do
  {
    v21 = sub_D3CE0(v16, (__int64)v31, 0x8000u);
    if ( v21 < 0 )
    {
      if ( a7 )
        sub_3C748(a7, "error reading from zip file");
      goto LABEL_35;
    }
    if ( !v21 )
    {
      v21 = sub_D2444(v16);
      if ( v21 == -105 )
      {
        if ( a7 )
          sub_3C748(a7, "CRC error while extracting from zip file");
LABEL_34:
        v15 = 3;
        goto LABEL_17;
      }
LABEL_35:
      if ( v21 < 0 )
        v15 = -v21;
      else
        v15 = 0;
      goto LABEL_17;
    }
  }
  while ( a6(a5, v31, v21) == v21 );
  if ( a7 )
  {
    v22 = qstrerror(0xFFFFFFFF);
    sub_3C748(a7, "error writing to output file : %s", v22);
  }
  v15 = 778;
LABEL_17:
  sub_D23D0(v16);
  return v15;
}
// B8B90: using guessed type __int64 __fastcall nullsub_9();
