bool __fastcall sub_1DB8A10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v2 = sub_C95340(a2);
  v3 = v2;
  if ( v2
    && (*(_BYTE *)(v2 + 80) & 0x7Fu) - 35 <= 3
    && ((v5 = *(_QWORD *)(sub_B8C1B0(v2 + 72) + 16), (v5 & 4) == 0)
      ? (v6 = v5 & 0xFFFFFFFFFFFFFFF8LL)
      : (v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL)),
        v6
     && v6 != 64
     && (v7 = *(_QWORD *)(v6 + 64)) != 0
     && (*(_BYTE *)(v7 + 10) & 0x20) != 0
     && (unsigned int)sub_B77890(v3) == 42) )
  {
    return *(_QWORD *)(a1 + 16) != sub_1DB8140(v3);
  }
  else
  {
    return *(_QWORD *)(a1 + 16) != v3;
  }
}
