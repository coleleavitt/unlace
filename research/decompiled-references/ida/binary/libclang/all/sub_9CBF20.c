__int64 __fastcall sub_9CBF20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // r14
  int v5; // ebp
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  unsigned __int8 **v10; // r12
  int v11; // eax
  char v12; // dl
  char v13; // cl
  unsigned __int8 **v14; // [rsp+18h] [rbp-40h] BYREF
  void *v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(unsigned __int16 *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 0xF;
LABEL_3:
    v6 = v5 << v3;
LABEL_4:
    *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v6;
    return 1;
  }
  if ( v3 <= 0xF )
    goto LABEL_3;
  v8 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v16 = 64;
  v15 = (void *)v3;
  v17 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v14 = (unsigned __int8 **)sub_A2E240(a1, v8, 2220, 0);
  v10 = v14;
  if ( v14 )
  {
    sub_9C19A0(&v14, (__int64)&v15);
    sub_9B5660(v10, v9);
    sub_9B58B0(v10, 16);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v16 > 0x40 && v15 )
      operator delete[](v15);
    if ( (_WORD)v5 )
    {
      v11 = (unsigned __int16)v5;
      if ( (v5 & 0xFF00) != 0 )
      {
        v5 = BYTE1(v5);
        v12 = 0;
      }
      else
      {
        v12 = 8;
      }
      if ( v5 >> 4 )
        v5 >>= 4;
      else
        v12 |= 4u;
      if ( v5 >> 2 )
        v5 = (unsigned __int16)(v5 >> 2);
      else
        v12 |= 2u;
      v13 = v12 | 1;
      if ( (unsigned int)v5 >> 1 )
        v13 = v12;
    }
    else
    {
      v13 = 16;
      v11 = 0;
    }
    LOWORD(v6) = v11 << v13;
    goto LABEL_4;
  }
  if ( v16 > 0x40 && v15 )
  {
    operator delete[](v15);
    return 0;
  }
  return result;
}

