/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807A930
// Address: 0x0807A930

//----- (0807A930) --------------------------------------------------------
int __cdecl sub_807A930(int *a1, char *s2)
{
  unsigned int v2; // eax
  int result; // eax
  char v4; // di
  void **v5; // ebp
  _BYTE *v6; // edx
  void *v7; // eax
  int v8; // [esp+18h] [ebp-24h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-20h]

  v9 = __readgsdword(0x14u);
  v2 = sub_8079A20(a1, s2, &v8);
  switch ( v8 )
  {
    case 0:
      sub_80C7880(53);
      goto LABEL_3;
    case 1:
      v4 = -7;
      goto LABEL_9;
    case 2:
      v4 = -8;
      goto LABEL_9;
    case 3:
      v4 = -6;
LABEL_9:
      sub_80792A0((int)a1, v2);
      v5 = (void **)a1[27];
      v6 = v5[1];
      v7 = *v5;
      if ( v5[2] < v6 + 1 )
      {
        v7 = sub_80CF920((int)v5, v7, (unsigned int)(v6 + 1), 1u);
        v6 = v5[1];
        *v5 = v7;
      }
      v6[(_DWORD)v7] = v4;
      result = 0;
      v5[1] = (char *)v5[1] + 1;
      ++a1[28];
      goto LABEL_4;
    case 6:
      sub_80C7880(1565);
      goto LABEL_3;
    default:
      sub_80C7880(1564);
LABEL_3:
      sub_80C7910(0, s2);
      result = sub_80C7880(53);
LABEL_4:
      if ( v9 != __readgsdword(0x14u) )
        sub_80D7AB0();
      return result;
  }
}
