__int64 __fastcall sub_14FCFD0(__int64 a1, _DWORD *a2)
{
  unsigned __int16 v4; // bx
  __int64 v5; // r12
  char v7; // al
  __int64 *v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // rdi
  void *v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(_WORD *)(a1 + 32);
  if ( v4 <= 0x2Au )
  {
    if ( v4 >= 0x28u || (unsigned __int16)(v4 - 28) <= 2u )
      goto LABEL_13;
  }
  else
  {
    if ( v4 == 62 )
    {
      *a2 = *(_DWORD *)(a1 + 16);
      return 0;
    }
    if ( v4 > 0x3Eu )
    {
      v5 = 0;
      if ( v4 == 189 )
        return v5;
      goto LABEL_8;
    }
    if ( (unsigned __int16)(v4 - 56) <= 4u )
    {
LABEL_13:
      v5 = 0;
      sub_13D35F0(
        (__int64)v12,
        a1 + 16,
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
        nullptr);
      v9 = (__int64 *)v12[0];
      if ( (byte_2411740[2 * *(unsigned __int8 *)v12[0]] & 0x60) != 0 )
      {
        v10 = sub_6F3470(*(_QWORD *)(a1 + 8) + 552LL, v12[0], (size_t)v12[1]);
        v11 = *(__int64 **)(a1 + 8);
        v5 = v10;
        *(_WORD *)(a1 + 32) = 5;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v11, (int *)(a1 + 16));
        v9 = (__int64 *)v12[0];
        *a2 = *(_DWORD *)(a1 + 40);
      }
      if ( v9 == &v13 )
        return v5;
      operator delete(v9);
      return v5;
    }
  }
LABEL_8:
  v7 = sub_141A630(v4);
  if ( v4 == 1 || v7 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    return v5;
  v8 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v8, (int *)(a1 + 16));
  *a2 = *(_DWORD *)(a1 + 40);
  return v5;
}
