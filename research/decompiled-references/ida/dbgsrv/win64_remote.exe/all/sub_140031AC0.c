/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140031AC0
// Address: 0x0000000140031AC0

//----- (0000000140031AC0) ----------------------------------------------------
__int64 __fastcall sub_140031AC0(_QWORD *a1)
{
  const char *v1; // rdx
  __int16 v3; // ax
  __int16 v4; // di
  __int64 result; // rax
  char v6; // dl
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = Str1;
  if ( a1[5] )
    v1 = (const char *)a1[4];
  v3 = sub_1400333C0(a1, v1, &v7);
  v4 = v3;
  switch ( v7 )
  {
    case 1:
      v6 = -64;
LABEL_11:
      if ( (unsigned __int8)v3 == v3 )
      {
        sub_1400347C0((__int64)a1, v6);
        sub_1400344E0((__int64)a1, v4);
      }
      else
      {
        sub_1400347C0((__int64)a1, v6 + 1);
        sub_1400343E0((__int64)a1, v4);
      }
      goto LABEL_14;
    case 2:
      v6 = -62;
      goto LABEL_11;
    case 3:
      v6 = -37;
      goto LABEL_11;
  }
  if ( (unsigned int)sub_1400640B0(0x3Au) )
    return 1;
LABEL_14:
  if ( (unsigned int)sub_140031C80((__int64)a1) )
    return 1;
  result = sub_140031FD0((__int64)a1);
  if ( (_DWORD)result )
    return 1;
  return result;
}
