/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64EC0
// Address: 0x0000000000064EC0

//----- (0000000000064EC0) ----------------------------------------------------
__int64 __fastcall sub_64EC0(_QWORD *a1, int a2)
{
  const char *v3; // rsi
  unsigned __int16 v4; // ax
  char v5; // cl
  int v7; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  if ( a1[6] )
    v3 = (const char *)a1[5];
  else
    v3 = s1;
  v4 = sub_64D00(a1, v3, &v7);
  switch ( v7 )
  {
    case 3:
      v5 = 2 * (a2 <= 0) - 37;
      goto LABEL_10;
    case 2:
      v5 = (4 * (a2 <= 0)) | 0xC2;
      goto LABEL_10;
    case 1:
      v5 = (4 * (a2 <= 0)) | 0xC0;
LABEL_10:
      sub_61840((__int64)a1, v5, v4);
      return 0;
  }
  return set_qerrno(0x3Au);
}
