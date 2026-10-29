__int64 __fastcall sub_82B4D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 32) != a2 )
    return -1;
  v13 = 0;
  v11 = a3;
  v12 = a4;
  if ( a4 )
  {
    v4 = *(_QWORD *)(a1 + 32840);
    do
    {
      if ( *(_QWORD *)(a1 + 32832) == v4 )
      {
        v7 = *(_QWORD *)(a1 + 40);
        if ( v7 > 0x8000 )
          v7 = 0x8000;
        result = qlread(*(_QWORD *)(a1 + 24), a1 + 56, v7);
        if ( result < 0 )
          return -1;
        if ( !result && *(_BYTE *)(a1 + 32848) )
          return result;
        v9 = *(_QWORD *)(a1 + 40);
        if ( v9 != -1 )
          *(_QWORD *)(a1 + 40) = v9 - result;
        *(_QWORD *)(a1 + 32840) = 0;
        *(_QWORD *)(a1 + 32832) = result;
      }
      v5 = sub_952B60(*(_QWORD *)(a1 + 48), &v11, a1 + 32824);
      v6 = v5;
      if ( !v5 )
        goto LABEL_22;
      if ( (unsigned int)sub_8DFCA0(v5) )
        break;
      v4 = *(_QWORD *)(a1 + 32840);
      if ( !v4 && !*(_QWORD *)(a1 + 32832) )
        return -1;
    }
    while ( v13 < v12 );
    v10 = 0;
  }
  else
  {
LABEL_22:
    v10 = 1;
    v6 = 0;
  }
  *(_BYTE *)(a1 + 32848) = v10;
  if ( (unsigned int)sub_8DFCA0(v6) )
    return -1;
  result = v13;
  *(_QWORD *)(a1 + 32) += v13;
  return result;
}

