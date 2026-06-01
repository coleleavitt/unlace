__int64 __fastcall sub_5E90E0(__int64 a1)
{
  unsigned int v1; // ebp
  __int16 v2; // ax
  __int64 v4; // r12
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _BYTE *v7; // rbx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  bool v10; // zf
  __int64 v11; // rax
  _BYTE *v12; // rdx

  if ( (unsigned int)sub_5E8BB0(a1) )
    return (unsigned int)-1;
  v1 = 0;
  v2 = *(_WORD *)(a1 + 64);
  if ( v2 != 41 )
  {
    if ( v2 != 40 )
      return set_qerrno(47);
    if ( !(unsigned int)sub_5E8BB0(a1) )
    {
      if ( *(_WORD *)(a1 + 64) != 3 )
        return set_qerrno(47);
      v4 = *(_QWORD *)(a1 + 72);
      if ( !(unsigned int)sub_5E8BB0(a1) )
      {
        if ( *(_WORD *)(a1 + 64) != 41 )
          return set_qerrno(47);
        v5 = *(_QWORD *)(a1 + 128);
        v6 = (int)v4;
        if ( !v5 )
        {
          v5 = *(_QWORD *)(a1 + 136);
          if ( !v5 )
            v5 = *(_QWORD *)(a1 + 112);
        }
        v7 = (_BYTE *)(a1 + 753);
        if ( (*(_BYTE *)(v5 + 41) & 8) != 0 )
          v7 = (_BYTE *)(v5 + 185);
        if ( !(_DWORD)v4 || ((int)v4 & (unsigned __int64)((int)v4 - 1LL)) != 0 )
          return set_qerrno(1506);
        goto LABEL_32;
      }
    }
    return (unsigned int)-1;
  }
  sub_5E6830(a1);
  v8 = *(_QWORD *)(a1 + 128);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 41) & 8) != 0 )
      v7 = (_BYTE *)(v8 + 185);
    else
      v7 = (_BYTE *)(a1 + 753);
    LOBYTE(v6) = 5;
    goto LABEL_18;
  }
  v6 = *(_QWORD *)(a1 + 136);
  if ( v6 )
  {
    v9 = (_BYTE *)(v6 + 185);
    v7 = (_BYTE *)(a1 + 753);
    v10 = (*(_BYTE *)(v6 + 41) & 8) == 0;
    LOBYTE(v6) = 5;
    if ( !v10 )
      v7 = v9;
    goto LABEL_18;
  }
  v11 = *(_QWORD *)(a1 + 112);
  v7 = (_BYTE *)(a1 + 753);
  v12 = (_BYTE *)(v11 + 185);
  v10 = (*(_BYTE *)(v11 + 41) & 8) == 0;
  v6 = 16;
  if ( !v10 )
    v7 = v12;
LABEL_32:
  _BitScanReverse64(&v6, v6);
  LOWORD(v6) = v6 + 1;
  if ( (unsigned __int16)v6 <= 0xFu )
  {
LABEL_18:
    *v7 = v6;
    return v1;
  }
  return set_qerrno(83);
}
