_QWORD *__fastcall sub_1FC2730(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h]

  v2 = (_QWORD *)(a2 + 40);
  sub_1FC2690(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  result = (_QWORD *)(a2 + 24);
  v4 = 0;
  v7 = (_QWORD *)(a2 + 24);
  v8 = 0;
LABEL_2:
  if ( v2 == result )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v4 & 3) != 0 )
        result = (_QWORD *)sub_EF2B30((__int64)&v7);
      v5 = *result;
      v6 = *(unsigned int *)(a1 + 40);
      if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v6 + 1, 8);
        v6 = *(unsigned int *)(a1 + 40);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6) = v5;
      v4 = v8;
      ++*(_DWORD *)(a1 + 40);
      if ( (v4 & 3) != 0 )
      {
        if ( (v4 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v7);
        else
          sub_EF2750((unsigned __int64 *)&v7, 1);
        result = v7;
        v4 = v8;
        goto LABEL_2;
      }
      result = v7 + 1;
      v7 = result;
    }
    while ( v2 != result );
LABEL_9:
    ;
  }
  while ( v4 );
  *(_DWORD *)(a1 + 224) = 390;
  return result;
}
