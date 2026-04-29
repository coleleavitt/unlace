__int64 __fastcall sub_13580(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  size_t v11; // rbp
  void *v12; // rax

  v4 = (_QWORD *)(a4 + 8);
  v6 = *(_QWORD **)(a4 + 16);
  if ( !v6 )
    goto LABEL_8;
  v7 = (_QWORD *)(a4 + 8);
  do
  {
    while ( 1 )
    {
      v8 = v6[2];
      v9 = v6[3];
      if ( v6[4] < a3 )
        break;
      v7 = v6;
      v6 = (_QWORD *)v6[2];
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = (_QWORD *)v6[3];
  }
  while ( v9 );
LABEL_6:
  if ( v4 != v7 && a3 >= v7[4] )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v11 = v7[6];
    if ( v11 )
    {
      v12 = (void *)qalloc_or_throw();
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)a1 = v12;
      memcpy(v12, (const void *)v7[5], v11);
      *(_QWORD *)(a1 + 8) = v11;
    }
  }
  else
  {
LABEL_8:
    get_data_value();
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  return a1;
}
