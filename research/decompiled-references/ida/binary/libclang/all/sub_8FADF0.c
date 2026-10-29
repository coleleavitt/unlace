__int64 __fastcall sub_8FADF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  unsigned int v6; // r15d
  __int64 v7; // r13
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int8 v14; // [rsp+Fh] [rbp-49h]
  void *v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 184);
  v6 = *(_DWORD *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(_DWORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  v9 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( v8 < v6 )
  {
    v10 = 2;
    v11 = 2;
  }
  else if ( v6 < v8 )
  {
    v10 = 3;
    v11 = 3;
  }
  else
  {
    v10 = 1;
    v11 = 0;
  }
  if ( *(_BYTE *)(a3 + 112) == 2 )
    v10 = v11;
  v12 = sub_B9AC80(a3, v10);
  sub_B99210(&v15, v12);
  result = sub_987D60(a1, a2, v9, &v15);
  if ( v16 > 0x40 )
  {
    if ( v15 )
    {
      v14 = result;
      operator delete[](v15);
      return v14;
    }
  }
  return result;
}

