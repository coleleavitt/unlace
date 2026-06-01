_QWORD *__fastcall sub_B52C40(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx

  sub_B6F650(*(_QWORD *)(a1 + 16));
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(*(_QWORD *)(v2 + 8656) + 8LL * *a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 7488) + 48LL))(*(_QWORD *)(v2 + 7488), *v3);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 7488) + 64LL))(*(_QWORD *)(v2 + 7488));
  return v3;
}

