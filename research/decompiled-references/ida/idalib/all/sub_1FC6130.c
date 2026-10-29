__int64 __fastcall sub_1FC6130(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  unsigned __int64 i; // rax
  __int64 v8; // rax
  _QWORD *v9; // r12
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]

  v3 = (_QWORD *)(a2 + 32);
  sub_1FC2690(a1, a2);
  v4 = *(unsigned int *)(a2 + 24);
  v13 = (_QWORD *)(a2 + 32);
  v5 = 0;
  v14 = 0;
  v6 = &v3[v4];
  for ( i = (unsigned __int64)v3; v6 != (_QWORD *)i; v13 = (_QWORD *)i )
  {
    i += 8LL;
    ++v5;
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), v5);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  v8 = *(unsigned int *)(a2 + 24);
  v13 = v3;
  v14 = 0;
  v9 = &v3[v8];
  result = 0;
LABEL_5:
  if ( v9 == v3 )
    goto LABEL_12;
  do
  {
    do
    {
      if ( (result & 3) != 0 )
        v3 = (_QWORD *)sub_EF2B30((__int64)&v13);
      v11 = *(unsigned int *)(a1 + 40);
      v12 = *v3;
      if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v11 + 1, 8);
        v11 = *(unsigned int *)(a1 + 40);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11) = v12;
      result = v14;
      ++*(_DWORD *)(a1 + 40);
      if ( (result & 3) != 0 )
      {
        if ( (result & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v13);
        else
          sub_EF2750((unsigned __int64 *)&v13, 1);
        v3 = v13;
        result = v14;
        goto LABEL_5;
      }
      v3 = v13 + 1;
      v13 = v3;
    }
    while ( v9 != v3 );
LABEL_12:
    ;
  }
  while ( result );
  *(_DWORD *)(a1 + 224) = 215;
  return result;
}
