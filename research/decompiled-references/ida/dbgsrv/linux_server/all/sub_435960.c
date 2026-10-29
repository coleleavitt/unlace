/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435960
// Address: 0x0000000000435960

//----- (0000000000435960) ----------------------------------------------------
__int64 __fastcall sub_435960(void **a1, char a2)
{
  _BYTE *v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  void *v6; // rsi
  void *v8; // rax

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 1;
    v4 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
LABEL_5:
    v8 = sub_481540((__int64)a1, v6, v4, 1u);
    *a1 = v8;
    v6 = v8;
    goto LABEL_3;
  }
  v4 = (unsigned __int64)(v3 + 1);
  v5 = (__int64)a1[1];
  v6 = *a1;
  --v3;
  if ( (unsigned __int64)a1[2] < v4 )
    goto LABEL_5;
LABEL_3:
  a1[1] = (void *)v4;
  v3[(_QWORD)v6] = a2;
  *((_BYTE *)*a1 + v5) = 0;
  return 0;
}
