__int64 __fastcall sub_77C6A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned int v6; // edx

  v2 = *(_QWORD *)(a1 + 88);
  if ( !v2 || (v2 & 4) == 0 || (v5 = v2 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v3 = (_QWORD *)sub_798D40(a1);
    v4 = v3[274];
    v3[284] += 72LL;
    v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3[275] >= v5 + 72 && v4 )
      v3[274] = v5 + 72;
    else
      v5 = sub_779030((__int64)(v3 + 274), 72, 3);
    *(_QWORD *)(v5 + 8) = 0;
    *(_BYTE *)v5 &= 0xC0u;
    *(_BYTE *)(v5 + 20) &= ~1u;
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 88) = v5 | 4;
  }
  if ( !sub_77C160(a1, a2, 1u) || (v6 = 1, *(_DWORD *)(a2 + 8)) )
  {
    *(_BYTE *)v5 &= ~1u;
    v6 = 0;
  }
  *(_BYTE *)v5 = (4 * v6) | *(_BYTE *)v5 & 0xFB;
  return v6;
}

