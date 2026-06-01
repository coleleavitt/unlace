__int64 __fastcall sub_9D8750(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // eax
  _QWORD v12[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+18h] [rbp-60h]
  unsigned int v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+30h] [rbp-48h]

  sub_A25550(v12, *(_QWORD *)(a1 + 176), a3);
  v3 = v13;
  if ( v15 != 1 )
  {
    if ( v15 )
    {
      v3 = 0;
      if ( (unsigned int)(v15 - 2) > 1 )
        v3 = *(_QWORD *)(v13 + 32);
    }
    else
    {
      v3 = *(_QWORD *)(v13 + 32);
      if ( v14 != *(_DWORD *)(v3 + 16) && v14 )
        v3 = *(_QWORD *)(v13 + v14 + 32);
    }
  }
  if ( (unsigned __int8)sub_9D4860(a1, a2, (_QWORD *)v3)
    && (v15 || !v13 || !*(_BYTE *)(v13 + 25))
    && (v4 = sub_9D7D80(a1, a2, (__int64)v12), (_BYTE)v4) )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v7 = v13;
    v8 = v12[0];
    if ( v15 || !*(_BYTE *)(sub_8E5480((__int64)v12) + 51) || (v9 = v7 + v14 + 72, v14 != v8) )
      v9 = v7 + v8 + 40;
    v10 = sub_A1A4E0(v6, 16);
    v11 = *(_DWORD *)(v9 + 8);
    *(_DWORD *)(v10 + 8) = v11;
    if ( v11 > 0x40 )
      sub_2585B30(v10);
    else
      *(_QWORD *)v10 = *(_QWORD *)v9;
  }
  else
  {
    v4 = 0;
  }
  sub_A1C0C0(v12);
  return v4;
}

