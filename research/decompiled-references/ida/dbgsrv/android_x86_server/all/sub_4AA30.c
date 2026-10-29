/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AA30
// Address: 0x0004AA30

//----- (0004AA30) --------------------------------------------------------
int __cdecl sub_4AA30(_DWORD *a1, int a2)
{
  char *v2; // eax
  unsigned __int16 v3; // ax
  char v4; // cl
  int v6[6]; // [esp+4h] [ebp-18h] BYREF

  v6[1] = __readgsdword(0x14u);
  if ( a1[6] )
    v2 = (char *)a1[5];
  else
    v2 = byte_EF875;
  v3 = sub_4A890(a1, v2, v6);
  switch ( v6[0] )
  {
    case 3:
      v4 = 2 * (a2 <= 0) - 37;
      goto LABEL_10;
    case 2:
      v4 = (4 * (a2 <= 0)) | 0xC2;
      goto LABEL_10;
    case 1:
      v4 = (4 * (a2 <= 0)) | 0xC0;
LABEL_10:
      sub_470B0((int)a1, v4, v3);
      return 0;
  }
  return set_qerrno(58);
}
