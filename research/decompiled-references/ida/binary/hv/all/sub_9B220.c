void *__fastcall sub_9B220(char **a1, const void *a2, size_t a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  char *v7; // rsi
  char *v8; // rax
  char *v10; // rax

  v5 = (unsigned __int64)a1[1];
  v6 = a3 + v5;
  if ( !__CFADD__(a3, v5) )
    goto LABEL_2;
  if ( v5 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_2:
    v7 = *a1;
    v8 = a1[1];
    if ( (unsigned __int64)a1[2] < v6 )
    {
      v10 = (char *)sub_96080((__int64)a1, v7, v6, 1u);
      *a1 = v10;
      v7 = v10;
      v8 = a1[1];
    }
    memset(&v8[(_QWORD)v7], 0, v6 - (_QWORD)v8);
    a1[1] = (char *)v6;
    return memcpy(&(*a1)[v5], a2, a3);
  }
  if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
    a1[1] = (char *)0x7FFFFFFFFFFFFFFFLL;
  return memcpy(&(*a1)[v5], a2, a3);
}

