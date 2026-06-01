__int64 __fastcall sub_9B6830(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 648);
  if ( v2 )
  {
    if ( a2 >= *(_DWORD *)(v2 - 4) )
      v2 = 0;
    else
      v2 = *(_QWORD *)(v2 + 8LL * a2);
  }
  v3 = *(_DWORD *)(v2 + 8);
  if ( (*(_BYTE *)(v2 + 48) & 1) != 0 )
  {
    v4 = sub_999800(a1, v3);
    v5 = v2 + 56;
    v6 = v4;
  }
  else
  {
    v8 = sub_999800(a1, v3);
    v6 = v2 + 56;
    v5 = v8;
  }
  if ( sub_3ED700((__int64)qword_1C7F2C0, v5, v6) )
    return 0xFFFFFFFFLL;
  else
    return 1;
}

