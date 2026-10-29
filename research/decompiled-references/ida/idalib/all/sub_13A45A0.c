__int64 __fastcall sub_13A45A0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 result; // rax
  _QWORD v12[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_BYTE *)(a1 + 48) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD *)(a2 + 160);
    v12[0] = v3;
    sub_2231DA0(v5, v12, 8);
    sub_2231DA0(*(_QWORD *)(a2 + 160), v4, v3);
    v6 = *(_QWORD *)(a2 + 160);
    LODWORD(v12[0]) = *(_DWORD *)(a1 + 40);
    sub_2231DA0(v6, v12, 4);
    v7 = *(_QWORD *)(a2 + 160);
    LODWORD(v12[0]) = *(_DWORD *)(a1 + 44);
    sub_2231DA0(v7, v12, 4);
    v8 = *(_QWORD *)(a1 + 56);
    v9 = *(_QWORD *)(a1 + 64);
    v10 = *(_QWORD *)(a2 + 160);
    v12[0] = v9;
    sub_2231DA0(v10, v12, 8);
    return sub_2231DA0(*(_QWORD *)(a2 + 160), v8, v9);
  }
  return result;
}
