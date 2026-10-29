unsigned __int64 __fastcall sub_9510F0(__int64 a1)
{
  _QWORD *v1; // r14
  int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // r12
  unsigned __int64 i; // rbx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v10; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 30216);
  v2 = *(_DWORD *)(a1 + 29956);
  v11 = __readfsqword(0x28u);
  v3 = v1[1];
  v10 = v2;
  v4 = v3 - 1;
  for ( i = v4 & sub_8DF7D0((unsigned __int64)&v10, 4u, 0); ; i = (v4 & i) + 1 )
  {
    v6 = sub_950DE0(*(_QWORD *)(*v1 + 8 * i));
    if ( v2 == v6 || !v6 )
      break;
  }
  v7 = *(_QWORD *)(*v1 + 8 * i);
  if ( v7 )
  {
    sub_950D60(*(void ***)(a1 + 30184));
    v8 = *(_DWORD *)(a1 + 29956);
    *(_QWORD *)(a1 + 30184) = 0;
    *(_QWORD *)(a1 + 30192) = v7;
    *(_DWORD *)(a1 + 30200) = v8;
    *(_DWORD *)(a1 + 30208) = -1;
  }
  return __readfsqword(0x28u) ^ v11;
}

