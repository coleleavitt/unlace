__int64 __fastcall sub_DA3980(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  unsigned __int8 **v7; // rax
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !a4 )
    return sub_D9E8E0(a1, a2, *(unsigned int **)(a3 + 16));
  v8[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v6 = *(_QWORD *)(a3 + 16);
  v7 = (unsigned __int8 **)sub_E0FE60(a1, v8, 2501, 1);
  if ( v7 )
    sub_AC60B0(v7, v6, 0xAu);
  sub_E10070(a1, *(unsigned int *)(v6 + 24), 103);
  return 0;
}

