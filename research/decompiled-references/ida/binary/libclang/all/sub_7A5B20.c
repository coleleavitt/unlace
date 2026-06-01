unsigned __int64 __fastcall sub_7A5B20(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
  v2 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v1 & 4) != 0 )
    v2 = (_QWORD *)*v2;
  if ( v2 )
    v2 -= 8;
  v3 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 26 )
    v4 = sub_B0D320(v4);
  return sub_7A5970(v4, (__int64)v2);
}

