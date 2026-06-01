_BYTE *__fastcall sub_7C2900(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  _BYTE *v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdi
  _WORD *v13; // rdx
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  __int64 v17; // rdi
  _BYTE *result; // rax
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rdi
  _WORD *v22; // rdx
  __int64 v23; // rdi

  v7 = *a1;
  v8 = *(_BYTE **)(v7 + 32);
  if ( *(_BYTE **)(v7 + 24) == v8 )
  {
    sub_26240F0(v7, "<", 1);
  }
  else
  {
    *v8 = 60;
    ++*(_QWORD *)(v7 + 32);
  }
  if ( a3 )
  {
    if ( a4 )
    {
      v9 = sub_7D2C40(a1 + 1, a4, 0);
      sub_AFE2C0(a2, a1 + 1, *a1, v9);
      if ( a3 != 1 )
      {
        v10 = a2 + 32;
        v11 = 1;
        do
        {
          v12 = *a1;
          v13 = *(_WORD **)(*a1 + 32LL);
          if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v13 <= 1u )
          {
            sub_26240F0(v12, ", ", 2);
          }
          else
          {
            *v13 = 8236;
            *(_QWORD *)(v12 + 32) += 2LL;
          }
          v14 = (unsigned int)v11++;
          v15 = sub_7D2C40(a1 + 1, a4, v14);
          v16 = v10;
          v10 += 32;
          sub_AFE2C0(v16, a1 + 1, *a1, v15);
        }
        while ( a3 != v11 );
      }
    }
    else
    {
      sub_AFE2C0(a2, a1 + 1, *a1, 1);
      if ( a3 != 1 )
      {
        v19 = a2 + 32;
        v20 = 1;
        do
        {
          v21 = *a1;
          v22 = *(_WORD **)(*a1 + 32LL);
          if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v22 <= 1u )
          {
            sub_26240F0(v21, ", ", 2);
          }
          else
          {
            *v22 = 8236;
            *(_QWORD *)(v21 + 32) += 2LL;
          }
          v23 = v19;
          ++v20;
          v19 += 32;
          sub_AFE2C0(v23, a1 + 1, *a1, 1);
        }
        while ( a3 != v20 );
      }
    }
  }
  v17 = *a1;
  result = *(_BYTE **)(*a1 + 32LL);
  if ( *(_BYTE **)(*a1 + 24LL) == result )
    return (_BYTE *)sub_26240F0(v17, ">", 1);
  *result = 62;
  ++*(_QWORD *)(v17 + 32);
  return result;
}

