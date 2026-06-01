__int64 __fastcall sub_A7A3B0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rbp

  sub_B6A470(
    *(_QWORD *)(*(_QWORD *)a1 + 16LL),
    *(unsigned int *)(*(_QWORD *)a1 + 8LL),
    (unsigned int)qword_1C7ECC0,
    a2,
    0,
    0);
  result = sub_8E7030(*(_QWORD *)(*(_QWORD *)a1 + 16LL));
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 7488) + 48LL))(
      *(_QWORD *)(v3 + 7488),
      *(_QWORD *)(*(_QWORD *)(v3 + 8840) + 8LL * (a2 >> 1)));
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 7488) + 64LL))(*(_QWORD *)(v3 + 7488));
  }
  return result;
}

