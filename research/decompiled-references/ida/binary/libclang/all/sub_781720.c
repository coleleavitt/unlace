__int64 __fastcall sub_781720(__int64 a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v3; // rax

  if ( (*(_BYTE *)(a1 + 29) & 2) != 0
    && (v1 = *(_QWORD *)(a1 + 40), v1 <= 7)
    && !(_DWORD)v1
    && (v3 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(*v3 + 16LL) == 47) )
  {
    return *(_BYTE *)(sub_B14A40(*v3) + 75) & 1;
  }
  else
  {
    return 0;
  }
}

