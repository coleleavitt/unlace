__int64 __fastcall sub_E1E1D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  char v8; // al
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  void *v13; // r14
  __int64 v14; // rbp

  v6 = a4;
  v8 = *(_BYTE *)(a3 + 504);
  if ( (v8 & 4) != 0 )
  {
    v9 = (unsigned int)(*(_DWORD *)(a3 + 28) + a4);
    if ( (v8 & 8) != 0 )
      v9 -= sub_E29180(13);
    v10 = sub_E21760(*(_QWORD *)(a1 + 176), v9);
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 32LL);
    if ( (!v11 || *(_DWORD *)(v11 + 8) != 3 || *(_DWORD *)(a3 + 8) != 4) && !(unsigned __int8)sub_DCA0D0(a1, a2, v10)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
    {
      return 0;
    }
    v8 = *(_BYTE *)(a3 + 504);
  }
  if ( (v8 & 2) == 0 )
    sub_DEED30(a1, a3, a3, a4, a5, a6);
  if ( !(unsigned __int8)sub_DCA180(a1, (__int64)a2, a3) || !(unsigned __int8)sub_DCA680(a1, (__int64)a2) )
    return 0;
  v13 = (void *)operator new(0xD0u);
  sub_E1EA30(v13, a1, a3, a2, v6);
  v14 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = v13;
  result = sub_E0F910(a1);
  if ( !(_BYTE)result )
  {
    *(_QWORD *)(a1 + 400) = v14;
    sub_E20A70(v13);
    return 0;
  }
  return result;
}
