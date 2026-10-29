/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435C70
// Address: 0x0000000000435C70

//----- (0000000000435C70) ----------------------------------------------------
__int64 __fastcall sub_435C70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  int v10; // w2
  int v11; // w3
  int v12; // w4
  int v13; // w5
  int v14; // w6
  int v15; // w7
  __int64 v16; // x0
  char *v17; // x1

  if ( !*(_QWORD *)(a1 + 48) )
  {
    if ( sub_43E0A8((char *)&qword_4B2D48) )
      goto LABEL_3;
LABEL_7:
    v16 = *(_QWORD *)(a1 + 48);
    if ( v16 )
    {
      v17 = *(char **)(a1 + 40);
      if ( (unsigned __int64)(v16 - 1) > 0x7F )
      {
        sub_486A58(0, v17);
        return sub_4869C8(28);
      }
    }
    else
    {
      v17 = (char *)&qword_4B2D48;
    }
    return sub_435688(a1, v17, v10, v11, v12, v13, v14, v15, a9);
  }
  if ( !sub_43E0A8(*(char **)(a1 + 40)) )
    goto LABEL_7;
LABEL_3:
  if ( *(_QWORD *)(a1 + 48) )
    sub_486A58(0, *(char **)(a1 + 40));
  else
    sub_486A58(0, (char *)&qword_4B2D48);
  return sub_4869C8(52);
}
// 435CD4: variable 'v10' is possibly undefined
// 435CD4: variable 'v11' is possibly undefined
// 435CD4: variable 'v12' is possibly undefined
// 435CD4: variable 'v13' is possibly undefined
// 435CD4: variable 'v14' is possibly undefined
// 435CD4: variable 'v15' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
