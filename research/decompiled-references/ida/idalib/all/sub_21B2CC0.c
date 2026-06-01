__int64 __fastcall sub_21B2CC0(__int64 a1, __int64 a2)
{
  void (*v3)(void); // rax
  _DWORD *v4; // rdi
  __int64 (*v5)(void); // rax
  char v6; // al
  _DWORD *v7; // r12
  _BYTE *v8; // rax
  __int64 v9; // rdx

  v3 = *(void (**)(void))(**(_QWORD **)(a2 + 8) + 64LL);
  if ( (char *)v3 != (char *)sub_21B1110 )
    v3();
  if ( *(char *)(*(_QWORD *)a2 + 16LL) < 0 )
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = "Unimplemented Debug Name";
    *(_QWORD *)(a1 + 8) = 24;
    return a1;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 8);
    v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 64LL);
    if ( (char *)v5 == (char *)sub_21B1110 )
      v6 = v4[2] == 12;
    else
      v6 = v5();
    v7 = *(_DWORD **)a2;
    if ( v6 )
    {
      sub_21B29A0(a1, *(_QWORD *)(a2 + 8), _byteswap_ulong(v7[2]));
      return a1;
    }
    else if ( *v7 )
    {
      v8 = memchr(*(const void **)a2, 0, 8u);
      *(_QWORD *)a1 = v7;
      v9 = v8 - (_BYTE *)v7;
      if ( !v8 )
        v9 = 8;
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)(a1 + 8) = v9;
      return a1;
    }
    else
    {
      sub_21B29A0(a1, *(_QWORD *)(a2 + 8), _byteswap_ulong(v7[1]));
      return a1;
    }
  }
}
