_QWORD *__fastcall sub_AEE2E0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbp

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 8656);
  if ( !v3 || (v4 = *a2, (unsigned int)v4 >= *(_DWORD *)(v3 - 4)) || !*(_QWORD *)(v3 + 8 * v4) )
  {
    sub_B6F780(*(_QWORD *)(a1 + 16));
    v2 = *(_QWORD *)(a1 + 16);
    v4 = *a2;
    v3 = *(_QWORD *)(v2 + 8656);
  }
  v5 = *(_QWORD **)(v3 + 8 * v4);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 7488) + 48LL))(*(_QWORD *)(v2 + 7488), *v5);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 7488) + 64LL))(*(_QWORD *)(v2 + 7488));
  return v5;
}

