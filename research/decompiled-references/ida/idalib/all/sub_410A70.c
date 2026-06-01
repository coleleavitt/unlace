__int64 __fastcall sub_410A70(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *((unsigned __int8 *)a1 + 2321);
  v11[1] = __readfsqword(0x28u);
  if ( (_BYTE)v3 )
    return sub_40F6E0(a2, (__int64)(a1 + 237), a3, 1, nullptr, nullptr);
  v6 = sub_3BDD60(a1, a3);
  v7 = *(_QWORD *)a2;
  v8 = *a1;
  v11[0] = v6;
  v9 = sub_7BEBF0(v11, v8, v7, 68);
  v10 = v9;
  if ( v9 == -1 )
  {
    *(_QWORD *)a2 = -1;
  }
  else
  {
    v3 = 1;
    *(_QWORD *)a2 = sub_3BDE50(a1, v9);
    *(_BYTE *)(a2 + 8) = sub_7BE710(v11, *a1, v10, 4164);
  }
  return v3;
}
