__int64 __fastcall sub_77C510(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  char v8; // al
  __int64 result; // rax

  v2 = sub_77BC00(a1);
  v3 = *(_QWORD *)(a1 + 88);
  v4 = v2;
  if ( !v3 || (v3 & 4) == 0 || (v7 = v3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v5 = (_QWORD *)sub_798D40(a1);
    v6 = v5[274];
    v5[284] += 72LL;
    v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5[275] >= v7 + 72 && v6 )
      v5[274] = v7 + 72;
    else
      v7 = sub_779030((__int64)(v5 + 274), 72, 3);
    *(_BYTE *)v7 &= 0xC0u;
    *(_QWORD *)(v7 + 8) = 0;
    *(_BYTE *)(v7 + 20) &= ~1u;
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 88) = v7 | 4;
    v8 = *(_BYTE *)v7;
    if ( (*(_BYTE *)v7 & 0x20) == 0 )
      goto LABEL_10;
    return (v8 & 0x10) != 0;
  }
  v8 = *(_BYTE *)v7;
  if ( (*(_BYTE *)v7 & 0x20) != 0 )
    return (v8 & 0x10) != 0;
LABEL_10:
  *(_BYTE *)v7 = v8 | 0x20;
  result = sub_865090(v4, a2, 0);
  *(_BYTE *)v7 = (16 * (result & 1)) | *(_BYTE *)v7 & 0xEF;
  return result;
}

