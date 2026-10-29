__int64 __fastcall sub_1AF1810(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  unsigned int v9; // edi
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = *(unsigned int *)(a2 + 344);
  if ( (_DWORD)v5
    && (v6 = *(_QWORD *)(a2 + 336) + 6776 * v5 - 6776, *(_QWORD *)(v6 + 6768) == *(_QWORD *)(a2 + 328))
    && (v8 = *(unsigned int *)(v6 + 8), v9 = *(_DWORD *)(a2 + 27504), (unsigned int)v8 > v9)
    && a4 < v8 - (unsigned __int64)v9 )
  {
    v10 = ~(unsigned __int64)a4;
    v11 = sub_1AEE450(a3);
    v12 = 0;
    v13 = *(unsigned int *)(a2 + 344);
    if ( (_DWORD)v13 )
    {
      v14 = *(unsigned int *)(a2 + 27504);
      v15 = *(_QWORD *)(a2 + 336) + 6776 * v13 - 6776;
      v16 = *(unsigned int *)(v15 + 8);
      v17 = 0;
      if ( *(_QWORD *)(v15 + 6768) == *(_QWORD *)(a2 + 328) && (unsigned int)v16 > (unsigned int)v14 )
        v17 = v16 - v14;
      v10 += v17;
      v12 = *(_QWORD *)v15 + 1688 * (v16 - v14);
    }
    v18[0] = v12 - 1688 * v10;
    sub_1AF0DC0(a1, a2, (__int64 *)v18, v11);
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = 0x6A00000067LL;
    *(_OWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    return a1;
  }
}
