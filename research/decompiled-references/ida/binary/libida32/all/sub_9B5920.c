void __fastcall sub_9B5920(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rax
  __int64 *v4; // rdx
  _DWORD v5[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    v5[0] = 0;
    if ( (unsigned __int8)sub_B752A0(v2, v5) )
    {
      v3 = (__int64 *)(a2 + 40);
      if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
        v3 = (__int64 *)(a2 + 48);
      sub_9A9BF0(*(_QWORD *)a1, (unsigned __int16 **)(a1 + 8), *v3, 0, 1u);
      if ( (*(_BYTE *)(v2 + 29) & 1) == 0 )
        return;
LABEL_11:
      sub_9B3100((__int64 *)a1, a2, v2, nullptr, 0);
      return;
    }
  }
  v4 = (__int64 *)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    v4 = (__int64 *)(a2 + 48);
  sub_9AA450(a1, v2, v4, &v4[*(unsigned int *)(a2 + 32)], 0);
  if ( v2 && (*(_BYTE *)(v2 + 29) & 1) != 0 )
    goto LABEL_11;
}

