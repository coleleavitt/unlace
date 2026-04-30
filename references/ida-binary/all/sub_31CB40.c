__int64 __fastcall sub_31CB40(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  _BYTE *v8; // rbx
  const char *v9; // rsi
  __m128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  _BYTE *v23; // [rsp+0h] [rbp-1038h] BYREF
  __int128 v24; // [rsp+8h] [rbp-1030h]
  _BYTE v25[4104]; // [rsp+20h] [rbp-1018h] BYREF
  unsigned __int64 v26; // [rsp+1028h] [rbp-10h]

  v26 = __readfsqword(0x28u);
  if ( !(unsigned __int8)reload_file(0, 0) )
  {
    sub_17CE30(976);
    return 1;
  }
  v8 = v25;
  v9 = v25;
  if ( getinf_buf(97, v25, 4096) <= 0 )
  {
    v10 = 0;
    v23 = nullptr;
    v24 = 0;
    v8 = nullptr;
    if ( (unsigned __int8)qfileexist(0) )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)qfileexist(v25) )
  {
    v10 = 0;
    v23 = nullptr;
    v8 = (_BYTE *)qbasename(v25);
    v24 = 0;
    if ( (unsigned __int8)qfileexist(v8) )
      goto LABEL_11;
    goto LABEL_9;
  }
  v10 = 0;
  v23 = nullptr;
  v24 = 0;
  if ( !(unsigned __int8)qfileexist(v25) )
  {
LABEL_9:
    v9 = nullptr;
    if ( (unsigned __int8)sub_486440((unsigned int)&v23, 0, (_DWORD)v8, 975, v11, v12, (char)v23) )
      v8 = v23;
LABEL_11:
    if ( !v8 )
      goto LABEL_4;
  }
  sub_1C76F0((int)"Reloading the input file", v9, v14, v15, v11, v12, v23, v24);
  v9 = nullptr;
  v16 = reload_file(v8, 0);
  sub_1C78D0();
  if ( v16 )
    sub_16B9E0(
      (int)"AUTOHIDE NONE\nThe input file has been reloaded",
      0,
      v17,
      v18,
      v19,
      v20,
      v10,
      a2,
      a3,
      a4,
      v21,
      v22,
      a7,
      a8,
      (char)v23);
  else
    sub_169630(
      (int)"AUTOHIDE NONE\nReloading the input file failed",
      0,
      v17,
      v18,
      v19,
      v20,
      v10,
      a2,
      a3,
      a4,
      v21,
      v22,
      a7,
      a8,
      (char)v23);
LABEL_4:
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, v9);
  }
  return 1;
}
