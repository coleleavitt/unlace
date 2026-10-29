unsigned __int64 *__fastcall sub_186F640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 *result; // rax
  unsigned __int64 *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 *v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]

  v6 = *(unsigned int *)(a1 + 112);
  v7 = *(unsigned int *)(a1 + 116);
  if ( v6 + 1 > v7 )
  {
    sub_2237220(a1 + 104, a1 + 120, v6 + 1, 4);
    v6 = *(unsigned int *)(a1 + 112);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * v6) = 0;
  ++*(_DWORD *)(a1 + 112);
  result = *(unsigned __int64 **)(a2 + 16);
  v9 = *(unsigned __int64 **)(a2 + 24);
  if ( v9 == result )
  {
    v9 = nullptr;
    result = nullptr;
  }
  v12 = result;
  v10 = 0;
  v13 = 0;
  v14 = 0;
LABEL_6:
  if ( v9 == result )
    goto LABEL_13;
  do
  {
    do
    {
      v11 = v10 & 3;
      if ( (_DWORD)v11 )
        result = (unsigned __int64 *)sub_EF2B30((__int64)&v12);
      if ( (*(_WORD *)*result & 0x1FF) == 0x35 )
        sub_186F640(a1);
      else
        sub_186F230((__int64 *)a1, *result, v11, v7, a5, a6);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 4LL * *(unsigned int *)(a1 + 112) - 4);
      v10 = v13;
      if ( (v13 & 3) != 0 )
      {
        if ( (v13 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v12);
        else
          sub_EF2750((unsigned __int64 *)&v12, 1);
        result = v12;
        v10 = v13;
        goto LABEL_6;
      }
      result = v12 + 1;
      v12 = result;
    }
    while ( v9 != result );
LABEL_13:
    ;
  }
  while ( v10 );
  --*(_DWORD *)(a1 + 112);
  return result;
}
