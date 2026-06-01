/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426400
// Address: 0x0000000000426400

//----- (0000000000426400) ----------------------------------------------------
char *__fastcall sub_426400(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  char *v5; // rsi
  __int64 v6; // rdi
  char *result; // rax
  char *v8; // rax

  v4 = a1[73];
  v5 = (char *)a1[72];
  v6 = v4 + 1;
  if ( a1[74] < (unsigned __int64)(v4 + 1) )
  {
    v8 = (char *)sub_481540((__int64)(a1 + 72), v5, v4 + 1, 0x18u);
    v4 = a1[73];
    a1[72] = v8;
    v5 = v8;
    v6 = v4 + 1;
  }
  a1[73] = v6;
  result = &v5[24 * v4];
  *(_QWORD *)result = a2[1];
  *((_QWORD *)result + 1) = a2[4];
  *((_QWORD *)result + 2) = a2[2];
  return result;
}
