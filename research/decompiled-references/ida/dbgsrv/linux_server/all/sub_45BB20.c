/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BB20
// Address: 0x000000000045BB20

//----- (000000000045BB20) ----------------------------------------------------
void *__fastcall sub_45BB20(char **a1, const void *a2, size_t a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  char *v8; // rsi
  char *v9; // rax
  char *v10; // rax

  v5 = (unsigned __int64)a1[1];
  v6 = a3 + v5;
  if ( !__CFADD__(a3, v5) )
  {
    if ( v5 >= v6 )
      return memcpy(&(*a1)[v5], a2, a3);
    goto LABEL_8;
  }
  if ( v5 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
    v8 = *a1;
    v9 = a1[1];
    if ( (unsigned __int64)a1[2] < v6 )
    {
      v10 = (char *)sub_481540((__int64)a1, v8, v6, 1u);
      *a1 = v10;
      v8 = v10;
      v9 = a1[1];
    }
    memset(&v9[(_QWORD)v8], 0, v6 - (_QWORD)v9);
    a1[1] = (char *)v6;
    return memcpy(&(*a1)[v5], a2, a3);
  }
  if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
    a1[1] = (char *)0x7FFFFFFFFFFFFFFFLL;
  return memcpy(&(*a1)[v5], a2, a3);
}
