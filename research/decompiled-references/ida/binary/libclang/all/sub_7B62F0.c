_QWORD *__fastcall sub_7B62F0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  char v5; // cl
  __int64 v6; // rax
  _QWORD *result; // rax

  v1 = (_QWORD *)sub_798D40(a1);
  v2 = v1[274];
  v1[284] += 88LL;
  v3 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v1[275] >= v3 + 88 && v2 )
  {
    v1[274] = v3 + 88;
    v4 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v4 = sub_7B4EB0((__int64)(v1 + 274), 88, 3);
    v3 = v4;
  }
  v5 = *(_BYTE *)(v4 + 72);
  *(_QWORD *)(v4 + 16) = 0;
  *(_OWORD *)v4 = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  *(_BYTE *)(v4 + 72) = v5 & 0xC0 | 2;
  *(_QWORD *)(v4 + 76) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  v6 = v3 | *(_QWORD *)(a1 + 120) & 7LL;
  *(_QWORD *)(a1 + 120) = v6;
  result = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  *result = a1;
  return result;
}

