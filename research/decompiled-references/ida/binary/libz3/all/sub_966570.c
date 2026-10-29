_QWORD *__fastcall sub_966570(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  _QWORD *v7; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 8656);
  if ( !v4 || (v5 = *a2, (unsigned int)v5 >= *(_DWORD *)(v4 - 4)) || !*(_QWORD *)(v4 + 8 * v5) )
  {
    sub_B6F780(v3);
    v3 = *(_QWORD *)(a1 + 16);
  }
  sub_B6F650(v3);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD **)(*(_QWORD *)(v6 + 8656) + 8LL * *a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 7488) + 48LL))(*(_QWORD *)(v6 + 7488), *v7);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 7488) + 64LL))(*(_QWORD *)(v6 + 7488));
  return v7;
}

