__int64 __fastcall sub_8E6080(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  _QWORD v14[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  unsigned int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+30h] [rbp-48h]

  v3 = a1 + 48;
  a1[100] = a3;
  v4 = a1[99];
  sub_A25550(v14, a1[70], a2);
  v5 = v15;
  if ( v17 != 1 )
  {
    if ( v17 )
    {
      v5 = 0;
      if ( (unsigned int)(v17 - 2) > 1 )
        v5 = *(_QWORD *)(v15 + 32);
    }
    else
    {
      v5 = *(_QWORD *)(v15 + 32);
      if ( v16 != *(_DWORD *)(v5 + 16) && v16 )
        v5 = *(_QWORD *)(v15 + v16 + 32);
    }
  }
  if ( (unsigned __int8)sub_9D4860(v3, v4, v5)
    && (v17 || !v15 || !*(_BYTE *)(v15 + 25))
    && (v6 = sub_9D7D80(v3, v4, v14), (_BYTE)v6) )
  {
    v8 = a1[71];
    v9 = v15;
    v10 = v14[0];
    if ( v17 || !*(_BYTE *)(sub_8E5480((__int64)v14) + 51) || (v11 = v9 + v16 + 72, v16 != v10) )
      v11 = v9 + v10 + 40;
    v12 = sub_A1A4E0(v8, 16);
    v13 = *(_DWORD *)(v11 + 8);
    *(_DWORD *)(v12 + 8) = v13;
    if ( v13 > 0x40 )
      sub_2585B30(v12);
    else
      *(_QWORD *)v12 = *(_QWORD *)v11;
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(v14);
  return v6;
}

