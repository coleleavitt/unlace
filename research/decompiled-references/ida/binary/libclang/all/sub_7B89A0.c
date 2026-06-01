unsigned __int64 __fastcall sub_7B89A0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 104) &= 7uLL;
  v1 = (_QWORD *)sub_798D40(a1);
  v2 = v1[274];
  v1[284] += 40LL;
  v3 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v1[275] >= v3 + 40 && v2 )
  {
    v1[274] = v3 + 40;
    v4 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v4 = sub_7B4EB0((__int64)(v1 + 274), 40, 3);
    v3 = v4;
  }
  *(_QWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 36) = 0;
  v5 = v3 | *(_QWORD *)(a1 + 104) & 7LL;
  *(_QWORD *)(a1 + 104) = v5;
  *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL) = a1;
  result = *(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  *(_BYTE *)(result + 32) &= ~1u;
  return result;
}

