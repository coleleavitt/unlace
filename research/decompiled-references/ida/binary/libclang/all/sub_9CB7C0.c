__int64 __fastcall sub_9CB7C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rbp
  __int64 v4; // r13
  unsigned __int8 v5; // r14
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned __int8 **v10; // rbp
  char v11; // cl
  int v12; // eax
  char v13; // dl
  char v14; // si
  unsigned __int8 **v15; // [rsp+18h] [rbp-40h] BYREF
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_BYTE *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 7;
LABEL_3:
    v6 = v5 << v3;
LABEL_4:
    *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v6;
    return 1;
  }
  if ( v3 <= 7 )
    goto LABEL_3;
  v8 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v17 = 64;
  v16 = (void *)v3;
  v18 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v15 = (unsigned __int8 **)sub_A2E240(a1, v8, 2220, 0);
  v10 = v15;
  if ( v15 )
  {
    sub_9C19A0(&v15, (__int64)&v16);
    sub_9B5660(v10, v9);
    sub_9B58B0(v10, 8);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
    v11 = 8;
    if ( v5 )
    {
      v12 = (int)v5 >> 4;
      if ( v12 )
      {
        v13 = 2;
        v14 = 0;
      }
      else
      {
        v12 = v5;
        v13 = 6;
        v14 = 4;
      }
      if ( v12 >> 2 )
      {
        v12 >>= 2;
        v13 = v14;
      }
      v11 = v13 | 1;
      if ( (unsigned int)v12 >> 1 )
        v11 = v13;
    }
    v6 = v5 << v11;
    goto LABEL_4;
  }
  if ( v17 > 0x40 && v16 )
  {
    operator delete[](v16);
    return 0;
  }
  return result;
}

