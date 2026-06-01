__int64 __fastcall sub_9D7930(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v8; // r12
  unsigned __int8 **v9; // rax
  unsigned __int8 **v10; // rbx
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a3 + 48) )
    return 1;
  v5 = *(_QWORD *)(a3 + 24);
  if ( !v5 )
    return 1;
  v6 = *(unsigned int *)(a3 + 32);
  LOBYTE(v3) = (_DWORD)v6 == 0 || *(_DWORD *)(*(_QWORD *)(v5 + 32) + 16LL) == (_DWORD)v6;
  if ( (_BYTE)v3
    || (*(_BYTE *)(v5 + v6 + 28) & 0x40) == 0
    || (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x20) != 0
    && **(_DWORD **)(a3 + 24) == *(_DWORD *)(*(_QWORD *)(a1 + 192) + 32LL) )
  {
    return 1;
  }
  v11[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v8 = sub_8E91E0(a3);
  v9 = (unsigned __int8 **)sub_A2E0C0(a1, v11, 2167, 1);
  v10 = v9;
  if ( v9 )
  {
    sub_9B5410(v9, 0);
    sub_8356A0(v10, v8, 0xAu);
  }
  sub_A2DD70(a1, *(unsigned int *)(v8 + 24), 105);
  return v3;
}

