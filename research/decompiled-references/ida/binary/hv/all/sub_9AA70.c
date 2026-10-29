__int64 __fastcall sub_9AA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+10h] [rbp-28h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 32) != a2 )
    return -1;
  v14 = 0;
  v12 = a3;
  v13 = a4;
  if ( a4 )
  {
    v5 = *(_QWORD *)(a1 + 32840);
    do
    {
      if ( *(_QWORD *)(a1 + 32832) == v5 )
      {
        v8 = *(_QWORD *)(a1 + 40);
        if ( v8 > 0x8000 )
          v8 = 0x8000;
        result = sub_923E0(*(_QWORD *)(a1 + 24), (void *)(a1 + 56), v8, a4, a5);
        if ( result < 0 )
          return -1;
        if ( !result && *(_BYTE *)(a1 + 32848) )
          return result;
        v10 = *(_QWORD *)(a1 + 40);
        if ( v10 != -1 )
          *(_QWORD *)(a1 + 40) = v10 - result;
        *(_QWORD *)(a1 + 32840) = 0;
        *(_QWORD *)(a1 + 32832) = result;
      }
      v6 = sub_10A110(*(_QWORD *)(a1 + 48), &v12, a1 + 32824);
      v7 = v6;
      if ( !v6 )
        goto LABEL_22;
      if ( (unsigned int)sub_A7480(v6) )
        break;
      v5 = *(_QWORD *)(a1 + 32840);
      if ( !v5 && !*(_QWORD *)(a1 + 32832) )
        return -1;
      a4 = v13;
    }
    while ( v14 < v13 );
    v11 = 0;
  }
  else
  {
LABEL_22:
    v11 = 1;
    v7 = 0;
  }
  *(_BYTE *)(a1 + 32848) = v11;
  if ( (unsigned int)sub_A7480(v7) )
    return -1;
  result = v14;
  *(_QWORD *)(a1 + 32) += v14;
  return result;
}

