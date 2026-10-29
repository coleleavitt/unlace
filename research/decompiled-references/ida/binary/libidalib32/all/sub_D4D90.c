bool __fastcall sub_D4D90(int *a1, int a2, unsigned __int8 a3, double a4)
{
  bool result; // al
  int v6; // edi
  int v8; // r12d

  if ( !a1 || dword_2515A4 >= 0 )
    return 0;
  v6 = *a1;
  result = dbg
        && v6
        && (unsigned __int8)sub_BEA10(v6)
        && dword_2515A4 < 0
        && (v8 = 8 * a3, (int)sub_D3340((__int64)a1, v8 | (a2 << 12) | 2u, a4) > 0)
        && (int)sub_D3B60(v8) > 0;
  return result;
}

