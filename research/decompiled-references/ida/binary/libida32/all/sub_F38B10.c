__int64 __fastcall sub_F38B10(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // cl
  unsigned __int8 v3; // r8
  __int64 v4; // r9
  char v5; // dl
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 *v8; // r10
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_BYTE *)(v1 + 19);
  v3 = ((unsigned __int8)v2 >> 1) & 0xF;
  if ( (unsigned int)v3 - 6 > 2 )
  {
    *(_DWORD *)a1 = 6;
    *(_QWORD *)(a1 + 24) = 0;
    return 0;
  }
  else
  {
    v4 = 8LL * *(unsigned __int16 *)(v1 + 22) + 48;
    v5 = BYTE3(*(_QWORD *)(v1 + 16));
    v6 = (v5 & 0x40) != 0;
    v7 = (v1 + v4 + ((v5 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 0x40) != 0 )
      v6 += (*(_BYTE *)(((v1 + v4 + ((v2 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v8 = (__int64 *)(v7 + 8 * v6);
    if ( v3 == 2 )
      v8 = (__int64 *)(v7 + 8 * ((*(_WORD *)((v1 + v4 + ((v2 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v6));
    result = *v8;
    *(_DWORD *)a1 = 6;
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}

