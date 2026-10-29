__int64 __fastcall sub_1FC80E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rax
  _QWORD *v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h]

  v2 = (_QWORD *)(a2 + 64);
  v3 = a1 + 32;
  sub_1FC2690(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  v4 = (_QWORD *)(a2 + 24);
  v5 = 0;
  v10 = 0;
  v9 = (_QWORD *)(a2 + 24);
LABEL_2:
  if ( v2 == v4 )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v5 & 3) != 0 )
        v4 = (_QWORD *)sub_EF2B30((__int64)&v9);
      v6 = *v4;
      v7 = *(unsigned int *)(a1 + 40);
      if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(v3, a1 + 48, v7 + 1, 8);
        v7 = *(unsigned int *)(a1 + 40);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v7) = v6;
      v5 = v10;
      ++*(_DWORD *)(a1 + 40);
      if ( (v5 & 3) != 0 )
      {
        if ( (v5 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960((__int64)&v9);
        else
          sub_EF2750((unsigned __int64 *)&v9, 1);
        v4 = v9;
        v5 = v10;
        goto LABEL_2;
      }
      v4 = v9 + 1;
      v9 = v4;
    }
    while ( v2 != v4 );
LABEL_9:
    ;
  }
  while ( v5 );
  return sub_183F100(v3, *(_QWORD *)(a2 + 64));
}
