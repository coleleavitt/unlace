__int64 __fastcall sub_8E4510(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  void *v4; // r12
  __int64 v5; // r13
  int v6; // ebp
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int8 **v11; // r12
  int v12; // eax
  char v13; // dl
  char v14; // cl
  unsigned __int8 **v15; // [rsp+18h] [rbp-40h] BYREF
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+2Ch] [rbp-2Ch]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_QWORD *)(a1 + 792);
  v4 = (void *)*(unsigned __int16 *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = *(unsigned __int16 *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v4) = (unsigned __int8)v4 & 0xF;
LABEL_3:
    v7 = v6 << (char)v4;
LABEL_4:
    *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v7;
    return 1;
  }
  if ( (unsigned __int16)v4 <= 0xFu )
    goto LABEL_3;
  v9 = sub_A180F0(*(_QWORD *)(a1 + 584), v3);
  v17 = 16;
  v16 = v4;
  v18 = 1;
  v10 = *(_QWORD *)(v9 + 8);
  v15 = (unsigned __int8 **)sub_A2E240(a1 + 384, v9, 2220, 0);
  v11 = v15;
  if ( v15 )
  {
    sub_8DF340(&v15, (__int64)&v16);
    sub_8D69A0(v11, v10);
    sub_8D6E40(v11, 16);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
    if ( (_WORD)v6 )
    {
      v12 = (unsigned __int16)v6;
      if ( (v6 & 0xFF00) != 0 )
      {
        v6 = BYTE1(v6);
        v13 = 0;
      }
      else
      {
        v13 = 8;
      }
      if ( v6 >> 4 )
        v6 >>= 4;
      else
        v13 |= 4u;
      if ( v6 >> 2 )
        v6 = (unsigned __int16)(v6 >> 2);
      else
        v13 |= 2u;
      v14 = v13 | 1;
      if ( (unsigned int)v6 >> 1 )
        v14 = v13;
    }
    else
    {
      v14 = 16;
      v12 = 0;
    }
    LOWORD(v7) = v12 << v14;
    goto LABEL_4;
  }
  if ( v17 > 0x40 && v16 )
  {
    operator delete[](v16);
    return 0;
  }
  return result;
}

