__int64 __fastcall sub_512FC0(int *a1, int *a2, int *a3)
{
  int v3; // r12d
  int v4; // r13d
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned int v8; // r11d
  unsigned int v9; // eax
  int v10; // eax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  int v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v3 = a1[26];
  if ( v3 == -1 )
    return 0;
  if ( a1[27] == -1 )
    return 0;
  v4 = a1[28];
  if ( v4 == -1 || a1[29] == -1 )
    return 0;
  if ( (int)sub_511D50(a1 + 28, a1 + 26) >= 0 )
  {
    v9 = v8;
    v8 = v7;
    v7 = v9;
    v10 = v4;
    v4 = v3;
    v3 = v10;
  }
  if ( v8 == v6 )
  {
    if ( v7 == v6 )
      goto LABEL_17;
    QT::QTextLayout::text((QT::QTextLayout *)ptr);
    v3 = v13;
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  else
  {
    if ( v7 == v6 )
    {
      v4 = 0;
      goto LABEL_17;
    }
    if ( v6 >= v7 || v8 >= v6 )
      return 0;
    QT::QTextLayout::text((QT::QTextLayout *)ptr);
    v3 = v13;
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    v4 = 0;
  }
  if ( v3 == -1 )
    return 0;
LABEL_17:
  *a2 = v4;
  *a3 = v3;
  return 1;
}
