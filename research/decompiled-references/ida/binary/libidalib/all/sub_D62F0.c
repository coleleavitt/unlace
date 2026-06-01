bool __fastcall sub_D62F0(int *a1, int a2, unsigned __int8 a3)
{
  bool result; // al
  int v5; // edi
  int v7; // r12d

  if ( !a1 || dword_25274C >= 0 )
    return 0;
  v5 = *a1;
  result = dbg
        && v5
        && (unsigned __int8)sub_BF0F0(v5)
        && dword_25274C < 0
        && (v7 = 8 * a3, (int)sub_D4880((__int64)a1, v7 | (a2 << 12) | 2u) > 0)
        && (int)sub_D50A0(v7) > 0;
  return result;
}

