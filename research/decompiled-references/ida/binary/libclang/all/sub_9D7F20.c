__int64 __fastcall sub_9D7F20(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD v14[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  unsigned int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+30h] [rbp-48h]

  sub_A25550(v14, *(_QWORD *)(a1 + 176), a3);
  v3 = v15;
  if ( v17 != 1 )
  {
    if ( v17 )
    {
      v3 = 0;
      if ( (unsigned int)(v17 - 2) > 1 )
        v3 = *(_QWORD *)(v15 + 32);
    }
    else
    {
      v3 = *(_QWORD *)(v15 + 32);
      if ( v16 != *(_DWORD *)(v3 + 16) && v16 )
        v3 = *(_QWORD *)(v15 + v16 + 32);
    }
  }
  if ( (unsigned __int8)sub_9D4860(a1, a2, (_QWORD *)v3)
    && (v17 || !v15 || !*(_BYTE *)(v15 + 25))
    && (v4 = sub_9D7D80(a1, a2, (__int64)v14), (_BYTE)v4) )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v7 = v15;
    v8 = v14[0];
    if ( v17 || !*(_BYTE *)(sub_8E5480((__int64)v14) + 51) || (v9 = (__int64 *)(v7 + v16 + 72), v16 != v8) )
      v9 = (__int64 *)(v7 + v8 + 40);
    v10 = sub_A1A4E0(v6, 24);
    v11 = *v9;
    v13 = v10;
    if ( v11 == sub_2575D20(v6, 24, v12) )
      sub_257CF50(v13, v9);
    else
      sub_25768A0(v13, v9);
  }
  else
  {
    v4 = 0;
  }
  sub_A1C0C0(v14);
  return v4;
}

