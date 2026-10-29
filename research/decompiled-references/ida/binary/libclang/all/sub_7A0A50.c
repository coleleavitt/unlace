char __fastcall sub_7A0A50(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rax

  v2 = (_BYTE *)sub_79CC40(a1);
  v3 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v4 = sub_79CC40((__int64)v3);
  return sub_7A07F0(v2, a2, 0, v2 == (_BYTE *)v4);
}

