/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400589C0
// Address: 0x00000001400589C0

//----- (00000001400589C0) ----------------------------------------------------
char *__fastcall sub_1400589C0(__int64 a1, void **a2, char *a3)
{
  char *result; // rax
  size_t v5; // rax
  char *v6; // rdi
  char *v7; // rbx

  result = a3;
  if ( *((_DWORD *)a3 + 1) == 5 )
  {
    v5 = *(unsigned int *)a3;
    v6 = (char *)*a2;
    v7 = (char *)a2[1] + (_QWORD)*a2 - v5;
    memcpy(*a2, v7, v5);
    result = &v6[(_BYTE *)a2[1] - v7];
    a2[1] = result;
  }
  else
  {
    a2[1] = nullptr;
  }
  return result;
}
