__int64 __fastcall sub_6BF2A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax

  v2 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v2 + 16LL) == 47 && (v3 = sub_B14A40(*v2)) != 0 && (*(_BYTE *)(v3 + 28) & 0x7Fu) - 57 <= 2 )
    return *(_BYTE *)(*(_QWORD *)(sub_AB4240(a1, v3) + 72) + 40LL) & 1;
  else
    return 0;
}

