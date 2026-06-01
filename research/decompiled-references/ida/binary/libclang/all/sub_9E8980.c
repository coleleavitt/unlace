__int64 __fastcall sub_9E8980(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned int v10; // eax
  _QWORD v11[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  unsigned int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v11, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E82D0(a1, a2, (__int64)v11);
  if ( (_BYTE)v4 )
  {
    if ( v14 )
    {
      v4 = 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 184);
      v7 = *(_QWORD *)(v12 + 32);
      if ( *(_DWORD *)(v7 + 16) != v13 && v13 )
        v7 = *(_QWORD *)(v12 + v13 + 32);
      if ( !*(_BYTE *)(v7 + 51) || (v8 = v12 + v11[0] + 72, v11[0] != v13) )
        v8 = v12 + v11[0] + 40;
      v9 = sub_A1A4E0(v6, 16);
      v10 = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v9 + 8) = v10;
      if ( v10 > 0x40 )
        sub_2585B30(v9);
      else
        *(_QWORD *)v9 = *(_QWORD *)v8;
    }
  }
  sub_A1C0C0(v11);
  return v4;
}

