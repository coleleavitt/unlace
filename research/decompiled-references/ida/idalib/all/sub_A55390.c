_BYTE *__fastcall sub_A55390(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  _BYTE *result; // rax
  _BYTE *v7; // rax
  __int64 v8; // rax
  char v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r12
  _WORD *v12; // rdx

  v5 = *a1;
  if ( v5 )
    sub_E90250(v5, a2, a3, 0, 1);
  result = (_BYTE *)sub_B85C90(a1 + 3, a2, *a3, a3[1]);
  if ( a1[8] )
  {
    v7 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v7 )
    {
      sub_227BF10(a2, "<", 1);
    }
    else
    {
      *v7 = 60;
      ++*(_QWORD *)(a2 + 32);
    }
    v8 = a1[8];
    v9 = 1;
    v10 = v8 + 16;
    v11 = v8 + 16 + 32LL * *(unsigned int *)(v8 + 8);
    if ( v11 != v8 + 16 )
    {
      do
      {
        if ( v9 )
        {
          v9 = 0;
        }
        else
        {
          v12 = *(_WORD **)(a2 + 32);
          if ( *(_QWORD *)(a2 + 24) - (_QWORD)v12 > 1u )
          {
            *v12 = 8236;
            *(_QWORD *)(a2 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(a2, ", ", 2);
          }
        }
        sub_F1E030(v10, a3, a2, 0);
        v10 += 32;
      }
      while ( v11 != v10 );
    }
    result = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == result )
    {
      return (_BYTE *)sub_227BF10(a2, ">", 1);
    }
    else
    {
      *result = 62;
      ++*(_QWORD *)(a2 + 32);
    }
  }
  return result;
}
