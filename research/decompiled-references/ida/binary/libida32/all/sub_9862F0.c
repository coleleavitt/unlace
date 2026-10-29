__int64 __fastcall sub_9862F0(__int64 *a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // eax
  __int64 result; // rax
  _QWORD **v7; // rdx
  __int64 **v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax

  do
  {
    v2 = a1[4] & 0xFFFFFFFFFFFFFFF8LL;
    if ( v2 )
      return sub_EC7AA0(v2);
    v3 = *a1;
    v4 = a1[1];
    if ( *a1 != v4 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)v3 & 3 | (4 * (*(_QWORD *)(v3 + 8) & 3));
        if ( (unsigned int)v5 > 5 && v5 <= 8 )
          break;
        v3 += 16;
        if ( v3 == v4 )
          goto LABEL_9;
      }
      v2 = *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL;
      return sub_EC7AA0(v2);
    }
LABEL_9:
    v7 = (_QWORD **)a1[10];
    if ( (unsigned int)((a1[11] - (__int64)v7) >> 4) == 1 )
    {
      do
      {
        v9 = *v7;
        if ( !*v7 )
          break;
        v10 = v9[1];
        if ( v10 != *v9 )
        {
          v11 = *(_QWORD *)(v10 - 16);
          v12 = *(_DWORD *)(v10 - 16) & 3 | (4 * (*(_QWORD *)(v10 - 8) & 3));
          if ( (unsigned int)v12 > 5 && v12 <= 8 )
          {
LABEL_22:
            result = sub_EC7AA0(v11 & 0xFFFFFFFFFFFFFFFCLL);
            if ( !(_DWORD)result )
              break;
            return result;
          }
          v13 = v10 - 16;
          while ( *v9 != v13 )
          {
            v14 = *(_QWORD *)(v13 - 8);
            v11 = *(_QWORD *)(v13 - 16);
            v13 -= 16;
            v15 = v11 & 3 | (4 * (v14 & 3));
            if ( v15 <= 8 && (unsigned int)v15 > 5 )
              goto LABEL_22;
          }
        }
        v7 = (_QWORD **)v9[10];
      }
      while ( (unsigned int)((__int64)(v9[11] - (_QWORD)v7) >> 4) == 1 );
    }
    v8 = (__int64 **)a1[7];
    if ( (unsigned int)((a1[8] - (__int64)v8) >> 4) != 1 )
      break;
    a1 = *v8;
  }
  while ( *v8 );
  return 0;
}

