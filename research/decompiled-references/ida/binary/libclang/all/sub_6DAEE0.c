unsigned __int64 __fastcall sub_6DAEE0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  char v6; // al
  __int64 v7; // rax

  v3 = sub_6DABD0(a1, a2);
  v4 = v3;
  v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v6 - 25) <= 1u || (unsigned __int8)(v6 - 2) <= 4u )
  {
    v4 = sub_6DA4C0(a1, v3);
    v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v7 = *(_QWORD *)(v5 + 8);
  if ( (v7 & 7) != 0 || (v7 & 8) != 0 )
    return sub_B0CF30(v4, v3) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v5 & 0xFFFFFFFFFFFFFFF0LL;
}

