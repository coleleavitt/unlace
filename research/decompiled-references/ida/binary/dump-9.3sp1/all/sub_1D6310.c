__int64 __fastcall sub_1D6310(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // [rsp+8h] [rbp-60h]

  v10 = a7;
  v15 = *(_QWORD *)(a1 + 40);
  sub_330D80(*(_QWORD *)(a1 + 16), v15, *(unsigned __int16 *)(a1 + 50));
  v13 = j__qalloc_or_throw(80, v15, v11, v12);
  *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 72) = 0;
  sub_330970(v13, v15);
  if ( a7 == -1 )
  {
    *(_DWORD *)(v13 + 4) |= 0x10u;
    v10 = 0;
  }
  if ( (unsigned __int8)sub_A2BF0(*(_QWORD *)(a1 + 16), v13, a2, a3, a4, a5, a6, v10) )
    return sub_B5190(*(_QWORD **)(a1 + 16), v13);
  if ( v13 )
  {
    sub_11CDA0(v13 + 64);
    sub_11CDA0(v13 + 48);
    sub_11CDA0(v13 + 32);
    j__qfree(v13);
  }
  return 0;
}
