__int64 __fastcall sub_89F3B0(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r13
  unsigned __int16 v5; // r12
  unsigned int v6; // r14d
  unsigned __int16 v7; // r15
  int v8; // ebp
  _WORD *v9; // rbx
  int v10; // eax
  __int64 v12; // r15
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // [rsp+10h] [rbp-58h]
  unsigned __int16 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+18h] [rbp-50h]

  v4 = a1 + 152;
  v5 = 0;
  v6 = *(unsigned __int16 *)(a1 + 140);
  v7 = *(_WORD *)(a1 + 142);
  v16 = *(_WORD *)(a1 + 140);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = (v5 + v7) >> 1;
      v9 = (_WORD *)(v4 + (int)(v6 * v8));
      v10 = sub_89AAA0(a2, (__int64)(v9 + 1));
      if ( !v10 )
        break;
      if ( v10 > 0 )
      {
        v5 = v8 + 1;
        if ( (unsigned __int16)(v8 + 1) >= v7 )
          return (unsigned int)-49;
      }
      else
      {
        v7 = v8;
        if ( v5 >= (unsigned __int16)v8 )
          return (unsigned int)-49;
      }
    }
    v15 = v4 + (int)(v6 * (*(unsigned __int16 *)(a1 + 142) - 1));
    if ( v4 >= (unsigned __int64)v9 )
    {
      v12 = v16;
      v13 = v4 + (int)(v6 * v8);
      if ( (unsigned __int64)v9 >= v15 )
      {
        v14 = v4 + (int)(v6 * v8);
        if ( a3 )
          goto LABEL_18;
        return (unsigned __int16)__ROL2__(*v9, 8);
      }
    }
    else
    {
      v12 = v16;
      v13 = v4 + (int)(v6 * v8);
      v17 = -(__int64)v16;
      do
      {
        if ( (unsigned int)sub_89AAA0(a2, v13 + 2 - v12) )
          break;
        v13 += v17;
      }
      while ( v4 < v13 );
      if ( (unsigned __int64)v9 >= v15 )
      {
        v14 = v4 + (int)(v6 * v8);
LABEL_17:
        if ( a3 )
        {
LABEL_18:
          *a3 = v13;
          *a4 = v14;
          return v6;
        }
        v6 = -50;
        if ( v13 != v14 )
          return v6;
        return (unsigned __int16)__ROL2__(*v9, 8);
      }
    }
    v14 = v4 + (int)(v6 * v8);
    do
    {
      if ( (unsigned int)sub_89AAA0(a2, v14 + v12 + 2) )
        break;
      v14 += v12;
    }
    while ( v14 < v15 );
    goto LABEL_17;
  }
  return (unsigned int)-49;
}
