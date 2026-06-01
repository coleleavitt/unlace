__int64 __fastcall sub_4A0B00(_QWORD *a1, unsigned __int64 a2)
{
  void (*v4)(void); // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax

  v4 = *(void (**)(void))(*a1 + 672LL);
  if ( v4 != nullsub_263 )
    v4();
  v5 = (_QWORD *)a1[287];
  v6 = a1 + 286;
  if ( !v5 )
    return -1;
  v7 = a1 + 286;
  do
  {
    while ( 1 )
    {
      v8 = v5[2];
      v9 = v5[3];
      if ( v5[4] < a2 )
        break;
      v7 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !v8 )
        goto LABEL_8;
    }
    v5 = (_QWORD *)v5[3];
  }
  while ( v9 );
LABEL_8:
  result = -1;
  if ( v7 != v6 && a2 >= v7[4] )
    return v7[5];
  return result;
}
