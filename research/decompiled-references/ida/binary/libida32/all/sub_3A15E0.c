__int64 __fastcall sub_3A15E0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r12d
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r13d
  __int64 v21; // r12

  v4 = a2;
  result = sub_614FB0(*a1, 10);
  if ( (result & 0x20) != 0 )
  {
    if ( a3 >= a2 )
    {
      v17 = a3;
      a3 = a2;
      v4 = v17;
    }
    result = 4294967294LL;
    if ( v4 == -1 )
      v4 = -2;
    if ( v4 != a3 )
    {
      v6 = *(_QWORD *)(*a1 + 1344LL);
      v7 = v6 + 1608;
      sub_39F4C0(v6, 1, a3, v4);
      v8 = v6 + 1608;
      sub_39F4C0(v6, 2, a3, v4);
      sub_39F4C0(v6, 3, a3, v4);
      sub_39F4C0(v6, 6, a3, v4);
      v9 = *(_QWORD *)(v6 + 1616);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v6 + 1616);
        do
        {
          if ( *(_DWORD *)(v10 + 32) < a3 )
          {
            v10 = *(_QWORD *)(v10 + 24);
          }
          else
          {
            v8 = v10;
            v10 = *(_QWORD *)(v10 + 16);
          }
        }
        while ( v10 );
        do
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v9 + 16);
            v12 = *(_QWORD *)(v9 + 24);
            if ( *(_DWORD *)(v9 + 32) >= v4 )
              break;
            v9 = *(_QWORD *)(v9 + 24);
            if ( !v12 )
              goto LABEL_17;
          }
          v7 = v9;
          v9 = *(_QWORD *)(v9 + 16);
        }
        while ( v11 );
      }
LABEL_17:
      if ( (unsigned __int8)sub_3A0490(v8, v7, *(unsigned int *)(v6 + 1660)) )
        sub_3A07C0(v6 + 1600, v8, v7);
      v13 = *(_QWORD *)(v6 + 1720);
      v14 = v6 + 1712;
      v15 = v6 + 1712;
      if ( v13 )
      {
        v16 = *(_QWORD *)(v6 + 1720);
        do
        {
          if ( *(_DWORD *)(v16 + 32) < a3 )
          {
            v16 = *(_QWORD *)(v16 + 24);
          }
          else
          {
            v15 = v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
        }
        while ( v16 );
        do
        {
          while ( 1 )
          {
            v18 = *(_QWORD *)(v13 + 16);
            v19 = *(_QWORD *)(v13 + 24);
            if ( *(_DWORD *)(v13 + 32) >= v4 )
              break;
            v13 = *(_QWORD *)(v13 + 24);
            if ( !v19 )
              goto LABEL_28;
          }
          v14 = v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
        while ( v18 );
      }
LABEL_28:
      if ( (unsigned __int8)sub_3A0490(v15, v14, *(unsigned int *)(v6 + 1764)) )
        sub_3A07C0(v6 + 1704, v15, v14);
      v20 = sub_3B90A0(a1, a3);
      v21 = (unsigned int)sub_3B9170(a1, v4);
      sub_79B540(v6 + 76, *a1, v20, v21, 65);
      sub_79B540(v6 + 76, *a1, v20, (unsigned int)v21, 80);
      return sub_79B540(v6 + 88, *a1, v20, (unsigned int)v21, 65);
    }
  }
  return result;
}

