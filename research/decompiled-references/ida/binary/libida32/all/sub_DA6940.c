__int64 __fastcall sub_DA6940(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned __int8 **v4; // rbx
  __int64 v5; // rax
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 24LL);
  if ( (unsigned int)(v2 + 1) <= *(_DWORD *)(sub_E0E500(a1) + 132) )
    return 1;
  v6[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v4 = (unsigned __int8 **)sub_E0FE60(a1, v6, 2402, 0);
  v5 = sub_E0E500(a1);
  if ( v4 )
    sub_AC60B0(v4, *(unsigned int *)(v5 + 132), 3u);
  return 0;
}

