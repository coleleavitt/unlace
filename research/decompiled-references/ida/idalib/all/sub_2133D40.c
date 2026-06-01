__int64 __fastcall sub_2133D40(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v3; // rax
  bool v4; // zf
  unsigned int v5; // ebp
  _QWORD v7[2]; // [rsp+8h] [rbp-30h] BYREF
  _DWORD v8[7]; // [rsp+1Ch] [rbp-1Ch] BYREF

  v3 = *(_DWORD **)(a1 + 48);
  v7[0] = a3;
  v4 = *v3 == 4;
  v8[0] = 0;
  if ( v4 )
    return (unsigned int)sub_21335C0(a1, a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD *, _QWORD *))(**(_QWORD **)(a1 + 8) + 40LL))(
         *(_QWORD *)(a1 + 8),
         v8,
         v7,
         v7);
  if ( !(_BYTE)v5 )
    *a2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 160LL) + 16LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL),
            v8[0],
            1);
  return v5;
}
