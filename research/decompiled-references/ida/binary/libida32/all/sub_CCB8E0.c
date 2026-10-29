unsigned __int64 __fastcall sub_CCB8E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  int v10; // eax
  __int64 i; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx

  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
    v8 = v7;
  }
  else
  {
    v7 = sub_CC8800((__int64 *)a1);
    v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v9 = *(_QWORD *)v8;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
  {
    v7 = sub_F44710(v9, a2, a3, a4, a5);
    v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v10 = *(unsigned __int8 *)(v9 + 16);
  if ( (unsigned __int8)(v10 - 2) <= 4u )
    goto LABEL_6;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
  {
LABEL_18:
    if ( (_BYTE)v10 != 14 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v14 + 16) != 14 )
      {
LABEL_22:
        if ( (unsigned int)(v10 - 57) <= 1 )
          return *(_QWORD *)(v9 + 32);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
        {
          v9 = sub_F3F310(v9, a2, v14, a4);
          if ( v9 )
            return *(_QWORD *)(v9 + 32);
        }
        return v7;
      }
      v9 = sub_F3F310(v9, a2, v14, a4);
      if ( !v9 )
      {
        v9 = *(_QWORD *)v8;
        v10 = *(unsigned __int8 *)(*(_QWORD *)v8 + 16LL);
        goto LABEL_22;
      }
    }
    return *(_QWORD *)(v9 + 32);
  }
  v9 = sub_F3F310(
         v9,
         a2,
         (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
         a4);
  if ( !v9 )
  {
    v9 = *(_QWORD *)v8;
    v10 = *(unsigned __int8 *)(*(_QWORD *)v8 + 16LL);
    goto LABEL_18;
  }
LABEL_6:
  if ( *(_QWORD *)(a1 + 40) || !*(_BYTE *)(a1 + 60) )
    return *(_QWORD *)(v9 + 32);
  for ( i = *(_QWORD *)v8;
        (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u;
        i = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v13 = *(unsigned __int8 *)(i + 16);
    if ( (unsigned __int8)(v13 - 2) > 4u )
    {
      v15 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2;
      if ( (unsigned int)v15 > 4 )
        BUG();
      i = sub_F3F310(i, v13, (unsigned int)(v13 - 2), v15);
    }
    v7 = *(_QWORD *)(i + 32);
  }
  return v7;
}

