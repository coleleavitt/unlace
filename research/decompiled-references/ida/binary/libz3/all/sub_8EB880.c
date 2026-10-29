__int64 __fastcall sub_8EB880(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi

  v4 = *(unsigned int **)(sub_15D1F10(*a2) + 24);
  if ( v4
    && (v5 = *v4, (_DWORD)v5 != -1)
    && (v6 = *(_QWORD *)(a1 + 8672)) != 0
    && (unsigned int)v5 < *(_DWORD *)(v6 - 4)
    && (v7 = *(_QWORD *)(v6 + 8 * v5)) != 0 )
  {
    return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v7 + 352LL))(v7, a2, a3);
  }
  else
  {
    return 0;
  }
}

