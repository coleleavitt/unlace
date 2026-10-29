__int64 __fastcall sub_8EAA80(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v3;
  v6 = *(_QWORD *)(a1 + 792);
  v8 = a1 + 384;
  *(_QWORD *)(v8 + 416) = *a3;
  v3 = sub_9DC8A0(v8, v6);
  if ( !(_BYTE)v3 )
    return v3;
  v9 = sub_9A2420(a1 + 432, a2, *(unsigned int *)(*(_QWORD *)(a1 + 576) + 32LL), 0);
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BF70(v10, v9);
  return v3;
}

