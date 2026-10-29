void __fastcall sub_17A3BD0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rax

  if ( !a2 )
    return;
  v3 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v3 - 34) > 5 )
    goto LABEL_6;
  v4 = *(_QWORD *)(a2 + 112);
  if ( v4 != a2 )
  {
    if ( (unsigned __int8)sub_17A37C0(a1, v4) )
      return;
    v3 = *(_BYTE *)(a2 + 28) & 0x7F;
LABEL_6:
    if ( (unsigned int)(v3 - 40) <= 6 )
    {
      v5 = *(_QWORD *)(a2 + 80);
      if ( v5 != a2 )
      {
        if ( (unsigned __int8)sub_17A37C0(a1, v5) )
          return;
      }
    }
  }
  if ( (unsigned __int8)sub_17A37C0(a1, a2) )
  {
    v6 = *(unsigned int *)(a1 + 2896);
    if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2900) )
    {
      sub_2237220(a1 + 2888, a1 + 2904, v6 + 1, 8);
      v6 = *(unsigned int *)(a1 + 2896);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 2888) + 8 * v6) = a2;
    ++*(_DWORD *)(a1 + 2896);
  }
}
