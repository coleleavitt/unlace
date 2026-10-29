/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFE60
// Address: 0x00000000004AFE60

//----- (00000000004AFE60) ----------------------------------------------------
unsigned __int64 __fastcall sub_4AFE60(_QWORD *a1, size_t a2, __int64 a3, _BYTE *a4, size_t a5)
{
  _QWORD *v7; // x23
  size_t v8; // x1
  __int64 v11; // x0
  _BYTE *v13; // x4
  size_t v14; // x20
  unsigned __int64 v15; // x2
  _BYTE *v16; // x0
  _BYTE *v17; // x24
  _BYTE *v18; // x1
  bool v19; // zf
  _BYTE *v20; // x0
  size_t v21; // x22
  size_t v22; // x21
  unsigned __int64 result; // x0
  unsigned __int64 v24; // [xsp+58h] [xbp+58h] BYREF

  v7 = a1 + 2;
  v8 = a5 - a3;
  v11 = a1[1];
  v13 = (_BYTE *)*a1;
  v24 = v8 + v11;
  v14 = v11 - a2 - a3;
  v15 = 15;
  if ( v7 != (_QWORD *)v13 )
    v15 = a1[2];
  v16 = sub_4AFA78((__int64)a1, &v24, v15);
  v17 = v16;
  if ( a2 )
  {
    v18 = (_BYTE *)*a1;
    if ( a2 == 1 )
      *v16 = *v18;
    else
      memcpy(v16, v18, a2);
  }
  if ( a4 )
    v19 = a5 == 0;
  else
    v19 = 1;
  if ( !v19 )
  {
    if ( a5 == 1 )
      v17[a2] = *a4;
    else
      memcpy(&v17[a2], a4, a5);
  }
  v20 = (_BYTE *)*a1;
  if ( v14 )
  {
    v21 = a2 + a5;
    v22 = a2 + a3;
    if ( v14 == 1 )
      v17[v21] = v20[v22];
    else
      memcpy(&v17[v21], &v20[v22], v14);
    v20 = (_BYTE *)*a1;
  }
  if ( v7 != (_QWORD *)v20 )
    j__free_0(v20);
  result = v24;
  *a1 = v17;
  a1[2] = result;
  return result;
}
