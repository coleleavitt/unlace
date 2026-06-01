__int64 __fastcall sub_C049D0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = *(unsigned int **)(a2 + 24);
  if ( v2
    && (v3 = *v2, (_DWORD)v3 != 4)
    && (_DWORD)v3 != -1
    && (v4 = *(_QWORD *)(a1 + 96)) != 0
    && (unsigned int)v3 < *(_DWORD *)(v4 - 4)
    && (v5 = *(_QWORD *)(v4 + 8 * v3)) != 0 )
  {
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 16LL))(*(_QWORD *)(a1 + 112));
  }
}

