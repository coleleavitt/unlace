__int64 __fastcall sub_D5CF0(int a1, __int64 a2, unsigned __int8 a3, char a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rax

  if ( !a1 )
    return 0;
  v6 = qword_252590;
  v7 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v7 )
    return 0;
  while ( a1 != *(_DWORD *)v6 )
  {
    v6 += 256;
    if ( v7 == v6 )
      return 0;
  }
  if ( !v6 )
    return 0;
  v8 = *(_QWORD *)(v6 + 40);
  if ( !v8 )
    goto LABEL_21;
  v9 = *(_QWORD *)(v8 + 32LL * dword_245174 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v10 = qword_252758;
      if ( qword_252758 )
      {
        *((_DWORD *)qword_252758 + 4) = dword_245174;
        *v10 = v9;
        v10[1] = v8;
        if ( (unsigned int)sub_CDCF0((__int64)v10, 11) == 1 )
        {
          v9 = *(_QWORD *)qword_252758;
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
  if ( a2 != v9 )
  {
LABEL_14:
    result = sub_CE160(v6, a2, 2, nullptr, 0, 0);
    goto LABEL_15;
  }
LABEL_17:
  v12 = operator new(0x80u);
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 96;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 56) = -1;
  *(_QWORD *)(v12 + 64) = 0;
  *(_OWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 80) = -1;
  *(_QWORD *)(v12 + 72) = 0xFFFFFFFFLL;
  *(_QWORD *)(v12 + 88) = 4;
  *(_QWORD *)(v12 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 96) = 9;
  *(_QWORD *)(v12 + 112) = 0;
  *(_QWORD *)v12 = &off_230408;
  *(_QWORD *)(v12 + 120) = a2;
  if ( (unsigned int)sub_C8400(v6, v12, 0) != 1 )
    return 0;
  result = sub_D4880(v6, (a4 == 0 ? 4096 : 36864) | (8 * (unsigned int)a3));
LABEL_15:
  if ( (int)result > 0 )
    return sub_D5C00(a3, a4);
  return result;
}

