__int64 __fastcall sub_9EAEA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13[13]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v12, v5);
  sub_A1A5E0(v4, 56);
  if ( (unsigned __int8)sub_9E1180(a1, a2, (__int64)v12) && (unsigned __int8)sub_9E1270(a1, a2, v12[0]) )
  {
    sub_A1C030(v13, v12[3], (unsigned int)(a3 + LODWORD(v12[0])), (unsigned int)(a3 + LODWORD(v12[0])));
    v6 = sub_9E82D0(a1, a2, (__int64)v13);
    if ( (_BYTE)v6 )
    {
      v8 = *(_QWORD *)(a1 + 184);
      v9 = sub_8F8D30(v13);
      v10 = sub_A1A4E0(v8, 16);
      v11 = *(_DWORD *)(v9 + 8);
      *(_DWORD *)(v10 + 8) = v11;
      if ( v11 > 0x40 )
        sub_2585B30(v10);
      else
        *(_QWORD *)v10 = *(_QWORD *)v9;
    }
    sub_A1C0C0(v13);
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(v12);
  return v6;
}

