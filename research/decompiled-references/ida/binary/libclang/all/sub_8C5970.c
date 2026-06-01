_BOOL8 __fastcall sub_8C5970(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edx
  __int64 v4; // rax

  v1 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v2 = *(_QWORD *)(*(_QWORD *)(sub_7A3750(v1) + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *(unsigned __int8 *)(v2 + 16);
  if ( (unsigned int)(v3 - 25) > 1 )
  {
    v4 = sub_B0D320(v2);
    LOBYTE(v3) = *(_BYTE *)(v4 + 16);
    v2 = v4;
  }
  return (_BYTE)v3 != 26
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || !sub_B0D320(v2))
      || (*(_BYTE *)(v2 + 20) & 4) == 0;
}

