__int64 __fastcall sub_BB3060(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  __int64 v11; // rdi
  _WORD *v12; // rdx
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdi
  _WORD *v17; // rdx

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
        v7 += 24;
      }
    }
    else
    {
      v14 = a2;
      v15 = 0;
      while ( 1 )
      {
        ++v15;
        sub_F1E030(v14, a1 + 1, *a1, 1);
        if ( v15 == a3 )
          break;
        v16 = *a1;
        v17 = *(_WORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v17 <= 1u )
        {
          sub_227BF10(v16, ", ", 2);
        }
        else
        {
          *v17 = 8236;
          *(_QWORD *)(v16 + 32) += 2LL;
        }
        v14 += 24;
      }
    }
  }
  return sub_995540(*a1, ">");
}
