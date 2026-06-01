unsigned __int64 __fastcall sub_89E210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int8 v6; // r13
  _BYTE *v9; // rax
  __int64 v10; // rsi
  char v11; // dl
  __int64 v12[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+18h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-58h]
  _BYTE v16[80]; // [rsp+28h] [rbp-50h] BYREF

  v6 = a4;
  if ( (unsigned __int8)sub_89DEE0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
    return sub_855AD0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL), a3, *(_QWORD *)(a2 + 24), v6);
  if ( *(_DWORD *)(a1 + 48) )
  {
    v9 = *(_BYTE **)(a1 + 24);
    if ( *(_BYTE *)(a1 + 962) )
    {
      *v9 = 1;
      goto LABEL_6;
    }
    v11 = *(_BYTE *)(a1 + 963);
    *v9 |= v11;
    if ( v11 )
    {
LABEL_6:
      v10 = *(_QWORD *)(a2 + 24);
      v12[0] = a1;
      v12[1] = (__int64)&v13;
      v13 = 0;
      ptr = v16;
      v15 = 0x400000000LL;
      sub_854640(v12, v10);
      if ( ptr != v16 )
        free(ptr);
    }
  }
  return 0;
}

