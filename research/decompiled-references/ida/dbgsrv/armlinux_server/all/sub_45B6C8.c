/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B6C8
// Address: 0x000000000045B6C8

//----- (000000000045B6C8) ----------------------------------------------------
__int64 __fastcall sub_45B6C8(__int64 a1, int a2, const char *a3, unsigned __int64 a4)
{
  __int64 (*v7)(void); // x2
  _DWORD *v8; // x0
  unsigned __int8 *v9; // x1

  v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v7 != (char *)sub_45B650 )
  {
    v8 = (_DWORD *)v7();
    if ( v8 )
      goto LABEL_3;
LABEL_7:
    sub_49B748(a3, a4, "%08X", a2);
    return 0;
  }
  v8 = sub_45B650(a1, a2);
  if ( !v8 )
    goto LABEL_7;
LABEL_3:
  if ( *((_QWORD *)v8 + 2) )
    v9 = *((unsigned __int8 **)v8 + 1);
  else
    v9 = (unsigned __int8 *)&qword_4B2D48;
  sub_493350((unsigned __int64)a3, v9, a4);
  return 1;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
