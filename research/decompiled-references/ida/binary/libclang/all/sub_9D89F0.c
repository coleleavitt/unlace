__int64 __fastcall sub_9D89F0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  _QWORD *v9; // rbx
  _QWORD v10[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  unsigned int v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+30h] [rbp-48h]

  sub_A25550(v10, *(_QWORD *)(a1 + 176), a3);
  v3 = v11;
  if ( v13 != 1 )
  {
    if ( v13 )
    {
      v3 = 0;
      if ( (unsigned int)(v13 - 2) > 1 )
        v3 = *(_QWORD *)(v11 + 32);
    }
    else
    {
      v3 = *(_QWORD *)(v11 + 32);
      if ( v12 != *(_DWORD *)(v3 + 16) && v12 )
        v3 = *(_QWORD *)(v11 + v12 + 32);
    }
  }
  if ( (unsigned __int8)sub_9D4860(a1, a2, (_QWORD *)v3)
    && (v13 || !v11 || !*(_BYTE *)(v11 + 25))
    && (v4 = sub_9D7D80(a1, a2, (__int64)v10), (_BYTE)v4) )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v7 = v11;
    v8 = v10[0];
    if ( v13 || !*(_BYTE *)(sub_8E5480((__int64)v10) + 51) || (v9 = (_QWORD *)(v7 + v12 + 72), v12 != v8) )
      v9 = (_QWORD *)(v7 + v8 + 40);
    *(_QWORD *)sub_A1A4E0(v6, 8) = *v9;
  }
  else
  {
    v4 = 0;
  }
  sub_A1C0C0(v10);
  return v4;
}

