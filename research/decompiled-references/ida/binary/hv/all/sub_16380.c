__int64 __fastcall sub_16380(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rax
  bool v3; // zf
  _QWORD *v4; // rbx
  __int64 v6; // rax

  v1 = 0;
  v2 = (_QWORD *)operator new(8u);
  v3 = byte_165962 == 0;
  v4 = v2;
  *v2 = off_15F168;
  if ( !v3 )
  {
    v6 = operator new(0x38u);
    v3 = byte_165962 == 0;
    *(_BYTE *)(v6 + 24) = 0;
    v1 = v6;
    *(_OWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = off_15F190;
    *(_QWORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    if ( !v3 )
      setvbuf(stdout, nullptr, 2, 0);
  }
  return sub_5D7A0(a1, v4, v1);
}

