__int64 __fastcall sub_1AF1930(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v13[2]; // [rsp+18h] [rbp-10h] BYREF

  v5 = *(unsigned int *)(a2 + 344);
  if ( (_DWORD)v5
    && (v6 = *(_QWORD *)(a2 + 336) + 6776 * v5 - 6776, *(_QWORD *)(v6 + 6768) == *(_QWORD *)(a2 + 328))
    && *(_DWORD *)(v6 + 8) > *(_DWORD *)(a2 + 27504) )
  {
    v8 = sub_1AEE450(a3);
    v9 = *(unsigned int *)(a2 + 344);
    if ( (_DWORD)v9 )
    {
      v10 = *(_QWORD *)(a2 + 336) + 6776 * v9 - 6776;
      v11 = *(_QWORD *)v10 + 1688 * (*(unsigned int *)(v10 + 8) - (unsigned __int64)*(unsigned int *)(a2 + 27504));
      v13[0] = v11;
      if ( a4 && v11 != *(_QWORD *)v10 )
        v13[0] = v11 - 1688;
    }
    else
    {
      v13[0] = 0;
    }
    sub_1AF0DC0(a1, a2, v13, v8);
  }
  else
  {
    v13[0] = 0;
    sub_1AF0DC0(a1, a2, v13, a3);
  }
  return a1;
}
