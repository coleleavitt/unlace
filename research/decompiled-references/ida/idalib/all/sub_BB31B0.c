_BYTE *__fastcall sub_BB31B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  __int64 v11; // rdi
  _WORD *v12; // rdx
  __int64 v13; // rdi
  _BYTE *result; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdi
  _WORD *v18; // rdx

  sub_995540(*a1, "<");
  if ( a3 )
  {
    v7 = a2;
    v8 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v9 = (unsigned int)v8++;
        v10 = sub_BBDA50(a1 + 1, a4, v9);
        sub_F1E030(v7, a1 + 1, *a1, v10);
        if ( a3 == v8 )
          break;
        v11 = *a1;
        v12 = *(_WORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v12 <= 1u )
        {
          sub_227BF10(v11, ", ", 2);
        }
        else
        {
          *v12 = 8236;
          *(_QWORD *)(v11 + 32) += 2LL;
        }
        v7 += 32;
      }
    }
    else
    {
      v15 = a2;
      v16 = 0;
      while ( 1 )
      {
        ++v16;
        sub_F1E030(v15, a1 + 1, *a1, 1);
        if ( v16 == a3 )
          break;
        v17 = *a1;
        v18 = *(_WORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v18 <= 1u )
        {
          sub_227BF10(v17, ", ", 2);
        }
        else
        {
          *v18 = 8236;
          *(_QWORD *)(v17 + 32) += 2LL;
        }
        v15 += 32;
      }
    }
  }
  v13 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( *(_BYTE **)(*a1 + 24) == result )
    return (_BYTE *)sub_227BF10(v13, ">", 1);
  *result = 62;
  ++*(_QWORD *)(v13 + 32);
  return result;
}
