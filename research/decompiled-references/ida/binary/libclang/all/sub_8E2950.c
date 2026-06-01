__int64 __fastcall sub_8E2950(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  unsigned int v4; // r12d
  __int64 v5; // r13
  int v6; // ebp
  __int64 v7; // rdi
  int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rsi
  void *v11; // rax
  __int64 v12; // r12
  unsigned __int8 **v13; // rbp
  unsigned __int8 **v14; // [rsp+18h] [rbp-40h] BYREF
  void *v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+2Ch] [rbp-2Ch]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_QWORD *)(a1 + 792);
  v4 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = *(unsigned __int8 *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v4) = v4 & 7;
LABEL_3:
    v7 = *(_QWORD *)(a1 + 568);
    v8 = v6 >> v4;
LABEL_4:
    *(_BYTE *)sub_A1A4E0(v7, 8) = v8;
    return 1;
  }
  if ( v4 <= 7 )
    goto LABEL_3;
  v10 = sub_A180F0(*(_QWORD *)(a1 + 584), v3);
  v11 = (void *)v4;
  v17 = 1;
  v16 = 32;
  v12 = *(_QWORD *)(v10 + 8);
  v15 = v11;
  v14 = (unsigned __int8 **)sub_A2E240(a1 + 384, v10, 2220, 0);
  v13 = v14;
  if ( v14 )
  {
    sub_8DF340(&v14, (__int64)&v15);
    sub_8D69A0(v13, v12);
    sub_8D6E40(v13, 8);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v16 > 0x40 )
    {
      if ( v15 )
        operator delete[](v15);
    }
    v7 = *(_QWORD *)(a1 + 568);
    LOBYTE(v8) = -1;
    goto LABEL_4;
  }
  if ( v16 > 0x40 && v15 )
  {
    operator delete[](v15);
    return 0;
  }
  return result;
}

