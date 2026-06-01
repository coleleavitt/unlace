bool __fastcall sub_6C1A80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  bool result; // al

  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  result = *(_BYTE *)(v2 + 16) == 13
        && (v2 = *(unsigned __int16 *)(v2 + 18), LOWORD(v2) = ((unsigned __int16)v2 >> 3) & 0x1FF, (_WORD)v2 == 487)
        || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL)
          & 0xF7) == 0x21
        && (v3 = sub_8116F0(a2, a2, v2), (unsigned int)sub_817820(v3, a1, 1))
        || (*(_WORD *)a2 & 0x1FF) == 59;
  return result;
}

