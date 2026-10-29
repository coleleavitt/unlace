__int64 __fastcall sub_17B0C20(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(a1 + 32), *a2, 0xEu);
    return a1;
  }
  else if ( *(_BYTE *)(a1 + 132) )
  {
    v7 = sub_168B9E0((_QWORD *)a1);
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 )
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 32LL))(*(_QWORD *)(a1 + 16));
    v10[0] = v8;
    v9 = sub_1587BC0(v7, v10, v3, v4, v5, v6);
    sub_AE9DF0((unsigned __int8 **)(*v9 + 32LL * *(unsigned int *)(a1 + 128) + 8), *a2, 0xEu);
    return a1;
  }
  else
  {
    return a1;
  }
}
