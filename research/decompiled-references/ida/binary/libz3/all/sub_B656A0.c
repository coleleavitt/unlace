__int64 __fastcall sub_B656A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r12
  unsigned int v4; // eax
  char v5; // bp
  __int64 v6; // r13

  result = sub_8E7030(a1);
  if ( (_DWORD)result )
  {
    v3 = sub_918D90(*(_QWORD *)(a1 + 7488), a2);
    v4 = sub_B645B0(a1, *(unsigned int **)(a2 + 32));
    v5 = v4;
    v6 = v4 >> 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, bool, _QWORD *))(**(_QWORD **)(a1 + 7488) + 24LL))(
      *(_QWORD *)(a1 + 7488),
      *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v6),
      (v4 & 1) == 0,
      v3);
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 7488) + 24LL))(
             *(_QWORD *)(a1 + 7488),
             *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v6),
             v5 & 1,
             v3);
  }
  return result;
}

