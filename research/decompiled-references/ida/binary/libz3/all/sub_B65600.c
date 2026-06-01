__int64 __fastcall sub_B65600(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rbp
  int v4; // eax
  unsigned int v5; // eax

  result = sub_8E7030(a1);
  if ( (_DWORD)result )
  {
    v3 = sub_918D30(*(_QWORD *)(a1 + 7488), a2);
    v4 = sub_B645B0(a1, *(unsigned int **)(a2 + 32));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 7488) + 24LL))(
      *(_QWORD *)(a1 + 7488),
      *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * ((v4 ^ 1u) >> 1)),
      v4 & 1,
      v3);
    v5 = sub_B645B0(a1, *(unsigned int **)(a2 + 40));
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD *))(**(_QWORD **)(a1 + 7488) + 24LL))(
             *(_QWORD *)(a1 + 7488),
             *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v5 >> 1)),
             (v5 & 1) == 0,
             v3);
  }
  return result;
}

