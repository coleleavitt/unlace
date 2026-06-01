__int64 __fastcall sub_8E2630(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  void *v4; // r12
  __int64 v5; // r13
  int v6; // ebp
  __int64 v7; // rdi
  int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  unsigned __int8 **v12; // rbp
  unsigned __int8 **v13; // [rsp+18h] [rbp-40h] BYREF
  void *v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+2Ch] [rbp-2Ch]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_QWORD *)(a1 + 792);
  v4 = (void *)*(unsigned __int8 *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = *(__int16 *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v4) = (unsigned __int8)v4 & 0xF;
LABEL_3:
    v7 = *(_QWORD *)(a1 + 568);
    v8 = v6 >> (char)v4;
LABEL_4:
    *(_WORD *)sub_A1A4E0(v7, 8) = v8;
    return 1;
  }
  if ( (unsigned __int8)v4 <= 0xFu )
    goto LABEL_3;
  v10 = sub_A180F0(*(_QWORD *)(a1 + 584), v3);
  v15 = 8;
  v14 = v4;
  v16 = 1;
  v11 = *(_QWORD *)(v10 + 8);
  v13 = (unsigned __int8 **)sub_A2E240(a1 + 384, v10, 2220, 0);
  v12 = v13;
  if ( v13 )
  {
    sub_8DF340(&v13, (__int64)&v14);
    sub_8D69A0(v12, v11);
    sub_8D6E40(v12, 16);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v15 > 0x40 )
    {
      if ( v14 )
        operator delete[](v14);
    }
    v7 = *(_QWORD *)(a1 + 568);
    LOWORD(v8) = -1;
    goto LABEL_4;
  }
  if ( v15 > 0x40 && v14 )
  {
    operator delete[](v14);
    return 0;
  }
  return result;
}

