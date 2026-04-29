__int64 __fastcall sub_16DFA0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v12[3] = __readfsqword(0x28u);
  if ( **(_DWORD **)(a1 + 56) == 44
    && (v4 = sub_1229A0(*(_QWORD *)(a2 + 48)), (v5 = v4) != 0)
    && *(_DWORD *)v4 == 4
    && ((v6 = *(_DWORD **)(v4 + 8)) == nullptr || *v6 == 55)
    && (unsigned __int8)sub_11FD80((char *)(v5 + 32), v12, 0)
    && v12[0] == 1
    && (LOBYTE(v7) = sub_125B60((unsigned __int8 *)(v5 + 64), *(_QWORD *)(a1 + 56) + 32LL, 0), v2 = v7, (_BYTE)v7) )
  {
    sub_123A40((__int64)v12, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL), v8, v9);
    v10 = *(_QWORD *)(a1 + 64);
    v11 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 64) )
      sub_167AF0(v12);
    sub_167DA0(a1, a2, *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v11), 32, (__int64)v12, v5);
    sub_11CDA0((__int64)v12);
    sub_66FA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"RECOGNIZE_SETNZ");
  }
  else
  {
    return 0;
  }
  return v2;
}
