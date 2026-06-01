__int64 __fastcall sub_901EA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13[13]; // [rsp+0h] [rbp-68h] BYREF

  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9D4FE0(a1, a2, v4, 2) || !(unsigned __int8)sub_9D7120(a1, a2, v4, 2) )
    return 0;
  sub_A1C030(v13, *(_QWORD *)(v4 + 24), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_9E4580(a1, a2, v13, 0);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    v8 = (__int64 *)sub_8F8D80(v13);
    v9 = sub_A1A4E0(v7, 24);
    v10 = *v8;
    v11 = v9;
    if ( v10 == sub_2575D20(v7, 24, v12) )
      sub_257CF50(v11, v8);
    else
      sub_25768A0(v11, v8);
  }
  sub_A1C0C0(v13);
  return v6;
}

