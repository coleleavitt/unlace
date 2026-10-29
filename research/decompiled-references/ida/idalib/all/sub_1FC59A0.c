_QWORD *__fastcall sub_1FC59A0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 8));
  result = (_QWORD *)(a2 + 16);
  v3 = *(unsigned int *)(a2 + 8);
  v9 = 0;
  v8 = (_QWORD *)(a2 + 16);
  v4 = a2 + 8 * v3 + 112;
  v5 = 0;
LABEL_2:
  if ( (_QWORD *)v4 == result )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v5 & 3) != 0 )
        result = (_QWORD *)sub_EF2B30((__int64)&v8);
      v6 = *result;
      v7 = *(unsigned int *)(a1 + 40);
      if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v7 + 1, 8);
        v7 = *(unsigned int *)(a1 + 40);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v7) = v6;
      v5 = v9;
      ++*(_DWORD *)(a1 + 40);
      if ( (v5 & 3) != 0 )
      {
        if ( (v5 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v8);
        else
          sub_EF2750((unsigned __int64 *)&v8, 1);
        result = v8;
        v5 = v9;
        goto LABEL_2;
      }
      result = v8 + 1;
      v8 = result;
    }
    while ( (_QWORD *)v4 != result );
LABEL_9:
    ;
  }
  while ( v5 );
  *(_DWORD *)(a1 + 224) = 386;
  return result;
}
