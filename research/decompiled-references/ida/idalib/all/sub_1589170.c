__int64 __fastcall sub_1589170(__int64 a1, _DWORD *a2)
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
    if ( *a2 && a2[1] )
      sub_1585F70((__int64 *)(a1 + 32), (unsigned __int64)a2);
  }
  else if ( *(_BYTE *)(a1 + 132) )
  {
    v7 = sub_168B9E0(a1);
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 )
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 32LL))(*(_QWORD *)(a1 + 16));
    v10[0] = v8;
    v9 = sub_1587BC0(v7, v10, v3, v4, v5, v6);
    if ( *a2 && a2[1] )
      sub_1585F70((__int64 *)(*v9 + 32LL * *(unsigned int *)(a1 + 128) + 8), (unsigned __int64)a2);
  }
  return a1;
}
