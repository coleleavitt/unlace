unsigned __int64 __fastcall sub_1086A0(__int64 a1)
{
  _QWORD *v1; // r14
  int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 i; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 30216);
  v2 = *(_DWORD *)(a1 + 29956);
  v12 = __readfsqword(0x28u);
  v3 = v1[1];
  v11 = v2;
  v4 = v3 - 1;
  for ( i = v4 & sub_117B50(&v11, 4, 0); ; i = (v4 & i) + 1 )
  {
    v7 = sub_128230(*(_QWORD *)(*v1 + 8 * i), 4, v5);
    if ( v2 == v7 || !v7 )
      break;
  }
  v8 = *(_QWORD *)(*v1 + 8 * i);
  if ( v8 )
  {
    sub_1281B0(*(void **)(a1 + 30184));
    v9 = *(_DWORD *)(a1 + 29956);
    *(_QWORD *)(a1 + 30184) = 0;
    *(_QWORD *)(a1 + 30192) = v8;
    *(_DWORD *)(a1 + 30200) = v9;
    *(_DWORD *)(a1 + 30208) = -1;
  }
  return __readfsqword(0x28u) ^ v12;
}

