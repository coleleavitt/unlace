__int64 __fastcall sub_9D81F0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+18h] [rbp-60h]
  unsigned int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+30h] [rbp-48h]

  sub_A25550(v11, *(_QWORD *)(a1 + 176), a3);
  v3 = v12;
  if ( v14 != 1 )
  {
    if ( v14 )
    {
      v3 = 0;
      if ( (unsigned int)(v14 - 2) > 1 )
        v3 = *(_QWORD *)(v12 + 32);
    }
    else
    {
      v3 = *(_QWORD *)(v12 + 32);
      if ( v13 != *(_DWORD *)(v3 + 16) && v13 )
        v3 = *(_QWORD *)(v12 + v13 + 32);
    }
  }
  if ( (unsigned __int8)sub_9D4860(a1, a2, (_QWORD *)v3)
    && (v14 || !v12 || !*(_BYTE *)(v12 + 25))
    && (v4 = sub_9D7D80(a1, a2, (__int64)v11), (_BYTE)v4) )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v7 = v12;
    v8 = v11[0];
    if ( v14 || !*(_BYTE *)(sub_8E5480((__int64)v11) + 51) || (v9 = v7 + v13 + 72, v13 != v8) )
      v9 = v7 + v8 + 40;
    v10 = sub_A1A4E0(v6, 56);
    sub_A1BFE0(v10, v9);
  }
  else
  {
    v4 = 0;
  }
  sub_A1C0C0(v11);
  return v4;
}

