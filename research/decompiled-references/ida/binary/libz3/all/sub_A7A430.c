__int64 __fastcall sub_A7A430(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rdx

  if ( (_DWORD)qword_1C7ECC0 == a2 )
    return sub_A7A3B0(a1, a3);
  sub_B6A470(*(_QWORD *)(*(_QWORD *)a1 + 16LL), *(unsigned int *)(*(_QWORD *)a1 + 8LL), a2, a3, 0, 0);
  result = sub_8E7030(*(_QWORD *)(*(_QWORD *)a1 + 16LL));
  if ( (_DWORD)result )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 7488) + 48LL))(
      *(_QWORD *)(v5 + 7488),
      *(_QWORD *)(*(_QWORD *)(v5 + 8840) + 8LL * (a2 >> 1)));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 7488) + 64LL))(*(_QWORD *)(v5 + 7488));
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v6 + 7488) + 32LL))(
             *(_QWORD *)(v6 + 7488),
             *(_QWORD *)(*(_QWORD *)(v6 + 8840) + 8LL * (a2 >> 1)),
             a2 & 1,
             *(_QWORD *)(*(_QWORD *)(v6 + 8840) + 8LL * (a3 >> 1)));
  }
  return result;
}

