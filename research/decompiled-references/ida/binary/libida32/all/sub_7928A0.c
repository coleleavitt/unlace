__int64 __fastcall sub_7928A0(__int64 a1, unsigned __int8 a2, unsigned int a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax

  v6 = *(_QWORD *)a1;
  sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 45));
  if ( !a4 )
  {
    v10 = sub_720F10(v6);
    if ( v10 )
    {
      v8 = v10 - 1;
      goto LABEL_3;
    }
    return 0xFFFFFFFFLL;
  }
  sub_720F20(v6);
  v8 = v7 - 1;
  if ( !v7 )
    return 0xFFFFFFFFLL;
LABEL_3:
  if ( !v8 || *(_WORD *)(v8 + 1) != 10 || *(char *)(v8 + 8) != a2 || *(_DWORD *)(v8 + 4) != _byteswap_ulong(a3) )
    return 0xFFFFFFFFLL;
  return _byteswap_ulong(*(_DWORD *)(v8 + 9));
}

