__int64 __fastcall sub_150B70(__int64 a1, int a2, char a3)
{
  unsigned int v4; // edx
  __int64 v7; // rsi
  unsigned int v8; // eax
  char v9; // al
  int v10; // ecx
  int v11; // eax
  char v12[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v4 = 0;
  if ( *(_BYTE *)a1 == 4 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 > 9u )
      goto LABEL_13;
LABEL_4:
    if ( v8 > 7 )
    {
      if ( v8 != a2 )
        return v4;
    }
    else
    {
      if ( v8 != 4 )
        return v4;
      v9 = *(_BYTE *)(v7 + 32);
      if ( v9 != 10 && v9 != 4 && (unsigned int)(a2 - 10) <= 1 )
        return v4;
    }
    while ( 2 )
    {
      if ( !a3 || *(_DWORD *)(v7 + 36) == *(_DWORD *)(v7 + 68) )
      {
        do
        {
          sub_11F840((__int64)v12, (unsigned __int8 *)(v7 + 32));
          sub_118810((char *)a1, v12);
          if ( *(_BYTE *)a1 != 4 )
          {
            sub_118BA0((__int64)v12);
            return 1;
          }
          sub_118BA0((__int64)v12);
          v7 = *(_QWORD *)(a1 + 8);
          v4 = 1;
          v8 = *(_DWORD *)v7;
          if ( *(_DWORD *)v7 <= 9u )
            goto LABEL_4;
LABEL_13:
          if ( v8 != 67 )
            return v4;
          v10 = *(_DWORD *)(v7 + 36);
          v11 = *(_DWORD *)(v7 + 68);
        }
        while ( v10 == v11 );
        if ( *(_BYTE *)(v7 + 32) == 13 && v10 < v11 )
        {
          *(_DWORD *)(v7 + 36) = v11;
          v7 = *(_QWORD *)(a1 + 8);
          continue;
        }
      }
      break;
    }
  }
  return v4;
}
