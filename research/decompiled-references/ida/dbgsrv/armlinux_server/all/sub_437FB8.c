/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437FB8
// Address: 0x0000000000437FB8

//----- (0000000000437FB8) ----------------------------------------------------
__int64 __fastcall sub_437FB8(__int64 *a1, char *a2, int *a3)
{
  __int64 v6; // x0
  int v7; // w1
  __int64 v8; // x19
  __int64 v10; // x27
  __int64 v11; // x26
  __int64 v12; // x24
  __int64 v13; // x23
  const char *v14; // x0
  bool v15; // w0

  v6 = sub_435100(a1 + 14, a2);
  v7 = 1;
  v8 = v6;
  if ( v6 == -1 )
  {
    v8 = sub_435100(a1 + 17, a2);
    v7 = 2;
    if ( v8 == -1 )
    {
      v10 = a1[13];
      v11 = *(_QWORD *)(v10 + 96);
      if ( v11 )
      {
        v12 = 0;
        v13 = *(_QWORD *)(v10 + 88);
        while ( 1 )
        {
          v14 = (const char *)&qword_4B2D48;
          if ( *(_QWORD *)(v13 + 8) )
            v14 = *(const char **)v13;
          v13 += 56;
          if ( !strcmp(v14, a2) )
            break;
          if ( ++v12 == v11 )
            goto LABEL_13;
        }
        v8 = v12;
        v7 = 3;
      }
      else
      {
LABEL_13:
        if ( sub_43E590(v10, a2) )
        {
          v7 = 5;
        }
        else if ( (unsigned int)sub_43E818((__int64 *)a1[13], a2) == 0x7FFFFFFF )
        {
          if ( !off_520188 || (v15 = off_520188((__int64)a2), v7 = 4, !v15) )
            v7 = 0;
        }
        else
        {
          v7 = 6;
        }
      }
    }
  }
  if ( a3 )
    *a3 = v7;
  return v8;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 520188: using guessed type bool (__fastcall *off_520188)(__int64 a1);
