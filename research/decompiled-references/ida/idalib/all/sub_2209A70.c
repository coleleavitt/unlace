__int64 __fastcall sub_2209A70(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  unsigned int v7; // eax
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // r10
  unsigned __int128 v11; // kr10_16
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int128 v18; // kr30_16
  __int64 v19; // rax
  __int64 v20; // rcx
  bool v21; // cf
  unsigned __int64 v22; // rax

  v7 = a6;
  if ( a5 <= a6 )
    v7 = a5;
  if ( v7 )
  {
    v8 = v7 - 1;
    v9 = HIDWORD(a3);
    v10 = 0;
    if ( !a7 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(a2 + 8 * v10);
        if ( v13 && a3 )
        {
          v11 = __PAIR128__(((unsigned int)a3 * HIDWORD(v13)) >> 32, ((unsigned int)a3 * HIDWORD(v13)) << 32)
              + __PAIR128__(((unsigned int)v13 * v9) >> 32, (unsigned int)a3 * (unsigned __int64)(unsigned int)v13)
              + __PAIR128__(HIDWORD(v13) * v9, ((unsigned int)v13 * v9) << 32);
          *(_QWORD *)(a1 + 8 * v10) = a4 + v11;
          v12 = v10 + 1;
          a4 = *((_QWORD *)&v11 + 1) - (!__CFADD__(a4, (_QWORD)v11) - 1LL);
          if ( v10 == v8 )
            goto LABEL_11;
        }
        else
        {
          v14 = a4;
          a4 = 0;
          *(_QWORD *)(a1 + 8 * v10) = v14;
          v12 = v10 + 1;
          if ( v10 == v8 )
            goto LABEL_11;
        }
        v10 = v12;
      }
    }
    while ( 1 )
    {
      v22 = *(_QWORD *)(a2 + 8 * v10);
      if ( v22 && a3 )
      {
        v18 = __PAIR128__(((unsigned int)a3 * HIDWORD(v22)) >> 32, ((unsigned int)a3 * HIDWORD(v22)) << 32)
            + __PAIR128__(((unsigned int)v22 * v9) >> 32, (unsigned int)a3 * (unsigned __int64)(unsigned int)v22)
            + __PAIR128__(HIDWORD(v22) * v9, ((unsigned int)v22 * v9) << 32);
        v19 = a4 + v18;
        v20 = *((_QWORD *)&v18 + 1) - (!__CFADD__(a4, (_QWORD)v18) - 1LL);
      }
      else
      {
        v19 = a4;
        v20 = 0;
      }
      v21 = __CFADD__(*(_QWORD *)(a1 + 8 * v10), v19);
      *(_QWORD *)(a1 + 8 * v10) += v19;
      a4 = v21 + v20;
      if ( v10 == v8 )
        break;
      ++v10;
    }
  }
LABEL_11:
  if ( a5 < a6 )
  {
    *(_QWORD *)(a1 + 8LL * a5) = a4;
    return 0;
  }
  else
  {
    result = 1;
    if ( !a4 )
    {
      result = 0;
      if ( a3 )
      {
        if ( a5 != a6 )
        {
          if ( *(_QWORD *)(a2 + 8LL * a6) )
          {
            return 1;
          }
          else
          {
            v16 = a6 + 1;
            v17 = a2 + 8 * v16;
            while ( a5 > (unsigned int)v16 )
            {
              v17 += 8;
              if ( *(_QWORD *)(v17 - 8) )
                return 1;
              LODWORD(v16) = v16 + 1;
            }
            return 0;
          }
        }
      }
    }
  }
  return result;
}
