unsigned __int64 __fastcall sub_A31900(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  result = a2 & 0xFFFFFFFFFFFFFFF9LL;
  *a1 = a2 & 0xFFFFFFFFFFFFFFF9LL;
  v3 = *(_QWORD *)(a2 + 24);
  if ( (*(_BYTE *)(v3 + 60) & 4) == 0 )
    BUG();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 16LL) + 64LL);
  if ( v4 )
    result = *a1 & 0xFFFFFFFFFFFFFFFDLL | (2LL * (unsigned __int8)sub_F3A850(v4 + 48, *(unsigned int *)(v4 + 8) - 1LL));
  *a1 = result;
  return result;
}

