_QWORD *__fastcall sub_220C6E0(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _BYTE *v4; // rbp
  unsigned int *v6; // rdi
  __int64 v7; // r8
  char *v8; // rax
  _BYTE **v9; // rsi
  _QWORD v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = a4;
  v6 = (unsigned int *)&unk_2C752E0;
  *a4 = 0;
  while ( 1 )
  {
    v7 = *v6;
    if ( v7 == a3 )
      break;
    v6 += 6;
    if ( &unk_2C75700 == (_UNKNOWN *)v6 )
      goto LABEL_9;
  }
  v8 = *((char **)v6 + 1);
  v9 = (_BYTE **)(*((_QWORD *)v6 + 2) + a2);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    a4 = *v9;
    v8 = *(char **)&v8[(_QWORD)*v9 - 1];
  }
  ((void (__fastcall *)(_QWORD *, _BYTE **, __int64, _BYTE *, __int64, void *))v8)(v11, v9, a3, a4, v7, &unk_2C75700);
  if ( v11[0] )
  {
    *a1 = v11[0];
    return a1;
  }
  *v4 = 1;
LABEL_9:
  *a1 = 0;
  return a1;
}
