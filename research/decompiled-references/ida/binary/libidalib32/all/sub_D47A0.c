__int64 __fastcall sub_D47A0(int a1, unsigned int a2, unsigned __int8 a3, char a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rdi
  int v12; // ecx
  _DWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // rax

  if ( !a1 )
    return 0;
  v7 = qword_251410;
  v8 = qword_251410 + 232 * xmmword_251418;
  if ( qword_251410 == v8 )
    return 0;
  while ( a1 != *(_DWORD *)v7 )
  {
    v7 += 232;
    if ( v8 == v7 )
      return 0;
  }
  if ( !v7 )
    return 0;
  v9 = *(_QWORD *)(v7 + 40);
  if ( !v9 )
    goto LABEL_21;
  v10 = dword_24411C;
  v11 = *(_QWORD *)(v9 + 32LL * dword_24411C + 8);
  v12 = v11;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v13 = qword_2515B0;
      if ( qword_2515B0 )
      {
        *(_DWORD *)qword_2515B0 = v11;
        v13[4] = v10;
        *((_QWORD *)v13 + 1) = v9;
        if ( (unsigned int)sub_CC780((__int64)v13, 11) == 1 )
        {
          v12 = *(_DWORD *)qword_2515B0;
          goto LABEL_13;
        }
LABEL_21:
        if ( a2 != -1 )
          goto LABEL_14;
        goto LABEL_17;
      }
    }
  }
LABEL_13:
  if ( a2 != v12 )
  {
LABEL_14:
    result = sub_CCBE0(v7, a2, 2, nullptr, 0, 0);
    goto LABEL_15;
  }
LABEL_17:
  v15 = operator new(0x78u);
  *(_QWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 88;
  *(_QWORD *)(v15 + 32) = 0;
  *(_OWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 56) = 0xFFFFFFFFLL;
  *(_QWORD *)(v15 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v15 + 72) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v15 + 80) = 4;
  *(_QWORD *)(v15 + 96) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v15 + 88) = 9;
  *(_QWORD *)(v15 + 104) = 0;
  *(_QWORD *)v15 = &off_22F388;
  *(_DWORD *)(v15 + 112) = a2;
  if ( (unsigned int)sub_C6F80(v7, v15, 0) != 1 )
    return 0;
  result = sub_D3340(v7, (a4 == 0 ? 4096 : 36864) | (8 * (unsigned int)a3), 0.0);
LABEL_15:
  if ( (int)result > 0 )
    return sub_D46B0(a3, a4);
  return result;
}

