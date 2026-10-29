__int64 __fastcall sub_784990(__int64 a1)
{
  unsigned __int16 v1; // dx
  __int64 *v3; // r12
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  v1 = *(_WORD *)(a1 + 120) - 1;
  if ( v1 <= 0xFu )
  {
    v3 = *(__int64 **)(a1 + 200);
    v4 = v1 + 64;
    *(_BYTE *)(a1 + 212) = v1 + 64;
    v5 = v3[1];
    v6 = *v3;
    if ( v3[2] < (unsigned __int64)(v5 + 1) )
    {
      v7 = qvector_reserve(v3, v6, v5 + 1, 1);
      *v3 = v7;
      v6 = v7;
      v5 = v3[1];
    }
    *(_BYTE *)(v6 + v5) = v4;
    ++v3[1];
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
  else
  {
    sub_784860(a1, 0x40u, v1);
    return 0;
  }
}
