/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478383
// Address: 0x00478383

//----- (00478383) --------------------------------------------------------
void *__usercall sub_478383@<eax>(int a1@<ebx>, int *a2@<edi>, void *a3@<esi>)
{
  DWORD v3; // eax
  LPVOID v4; // eax
  void *v5; // eax

  v3 = dword_4B6020;
  if ( dword_4B6020 != -1 )
  {
    v4 = sub_478F9E(dword_4B6020);
    a3 = v4;
    if ( v4 )
    {
      if ( v4 == (LPVOID)-1 )
        goto LABEL_14;
      goto LABEL_12;
    }
    v3 = dword_4B6020;
  }
  if ( !sub_478FDD(v3, (void *)0xFFFFFFFF) )
    goto LABEL_14;
  v5 = sub_4791B9(1u, 0x364u);
  a3 = v5;
  if ( !v5 )
  {
    sub_478FDD(dword_4B6020, nullptr);
    sub_479216(nullptr);
    goto LABEL_14;
  }
  if ( !sub_478FDD(dword_4B6020, v5) )
  {
    sub_478FDD(dword_4B6020, nullptr);
    sub_479216(a3);
    goto LABEL_14;
  }
  sub_4780F4((int)a3, (char)&dword_4B7A54);
  sub_479216(nullptr);
LABEL_12:
  if ( !a3 )
LABEL_14:
    sub_467F38(a1, a2, (int)a3);
  return a3;
}
// 4B6020: using guessed type int dword_4B6020;
// 4B7A54: using guessed type int dword_4B7A54;
