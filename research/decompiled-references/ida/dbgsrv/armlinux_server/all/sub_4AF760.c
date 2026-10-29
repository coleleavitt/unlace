/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF760
// Address: 0x00000000004AF760

//----- (00000000004AF760) ----------------------------------------------------
unsigned __int64 __fastcall sub_4AF760(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  bool v3; // zf
  size_t v4; // x19
  _BYTE *v7; // x1
  _BYTE *v8; // x0
  unsigned __int64 result; // x0
  _BYTE *v10; // x1
  _BYTE *v11; // x1
  unsigned __int64 v12; // [xsp+38h] [xbp+38h] BYREF

  if ( a2 )
    v3 = 1;
  else
    v3 = a3 == 0;
  if ( !v3 )
    sub_4A03B0("basic_string::_M_construct null not valid");
  v4 = a3 - (_QWORD)a2;
  v12 = a3 - (_QWORD)a2;
  if ( (unsigned __int64)(a3 - (_QWORD)a2) > 0xF )
  {
    v8 = sub_4AFA78((__int64)a1, &v12, 0);
    *a1 = v8;
    a1[2] = v12;
LABEL_10:
    memcpy(v8, a2, v4);
    result = v12;
    v11 = (_BYTE *)*a1;
    a1[1] = v12;
    v11[result] = 0;
    return result;
  }
  v7 = (_BYTE *)*a1;
  v8 = (_BYTE *)*a1;
  if ( v4 == 1 )
  {
    *v7 = *a2;
    result = v12;
    v10 = (_BYTE *)*a1;
    a1[1] = v12;
    v10[result] = 0;
    return result;
  }
  if ( v4 )
    goto LABEL_10;
  result = v12;
  a1[1] = v12;
  v7[result] = 0;
  return result;
}
