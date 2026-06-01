__int64 __fastcall sub_5A2592(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  size_t v9; // rbx
  const void *v10; // rsi
  _QWORD v12[4]; // [rsp+10h] [rbp-100h] BYREF
  _BYTE v13[200]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+F8h] [rbp-18h]

  sub_5A4CFA(v13, a1 + 40);
  if ( (unsigned __int8)sub_5A4D70(v13) != 1 )
  {
    v2 = 0;
  }
  else
  {
    v14 = sub_5A4DA6(v13);
    sub_5ADF07(v14, 0, 168);
    *(_DWORD *)a2 = 6;
    *(_QWORD *)(a2 + 4) = sub_5A4152(v13);
    v3 = sub_5A3080(a1);
    *(_DWORD *)v14 = v3;
    v4 = sub_5983A0(*(_QWORD *)(a1 + 32));
    *(_DWORD *)(v14 + 8) = v4;
    v5 = sub_5A40CA(*(_QWORD *)(a1 + 32));
    *(_DWORD *)(v14 + 12) = v5;
    v6 = sub_59838E(*(_QWORD *)(a1 + 32));
    *(_QWORD *)(v14 + 24) = v6;
    v7 = sub_5A40DC(*(_QWORD *)(a1 + 32));
    sub_5A4DB8(v12, v7);
    v8 = sub_5A4424(v12);
    *(_DWORD *)(v14 + 32) = v8;
    v9 = 8 * sub_5A4424(v12);
    v10 = (const void *)sub_5A4EAA(v12);
    memcpy((void *)(v14 + 40), v10, v9);
    *(_QWORD *)(v14 + 160) = *(_QWORD *)(a1 + 72);
    v2 = 1;
    sub_59BE32(v12);
  }
  sub_5A4D46(v13);
  return v2;
}
