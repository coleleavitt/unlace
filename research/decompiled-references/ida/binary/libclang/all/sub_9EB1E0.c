__int64 __fastcall sub_9EB1E0(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rbp
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11[13]; // [rsp+0h] [rbp-68h] BYREF

  v4 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9E1180(a1, a2, (__int64)v4) || !(unsigned __int8)sub_9E1270(a1, a2, *v4) )
    return 0;
  sub_A1C030(v11, v4[3], (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_9E82D0(a1, a2, (__int64)v11);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    v8 = sub_8F8D30(v11);
    v9 = sub_A1A4E0(v7, 16);
    v10 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v9 + 8) = v10;
    if ( v10 > 0x40 )
      sub_2585B30(v9);
    else
      *(_QWORD *)v9 = *(_QWORD *)v8;
  }
  sub_A1C0C0(v11);
  return v6;
}

