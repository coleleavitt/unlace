bool __fastcall sub_120040(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v6; // r13d
  bool result; // al

  v4 = *(_QWORD *)(a1 + 40);
  result = v4
        && *(_QWORD *)(a2 + 40)
        && (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4),
            v6 == (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 40) + 112LL))(*(_QWORD *)(a2 + 40)))
        && (unsigned __int8)sub_1612C0(a3, *(_QWORD *)(a1 + 40), *(_QWORD *)(a2 + 40))
        && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32)
        && *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24)
        && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28)
        && *(double *)a1 == *(double *)a2
        && *(double *)(a1 + 8) == *(double *)(a2 + 8)
        && *(double *)(a1 + 16) == *(double *)(a2 + 16);
  return result;
}

