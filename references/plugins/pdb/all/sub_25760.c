_QWORD *__fastcall sub_25760(_QWORD *a1, __int64 a2)
{
  void (__fastcall *v2)(_QWORD *); // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx

  v2 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)a2 + 24LL);
  if ( (char *)v2 == (char *)sub_24710 )
  {
    v3 = *(_QWORD *)(a2 + 16) + 16LL * *(int *)(a2 + 40);
    v4 = operator new(0x38u);
    v5 = *(_DWORD *)(v3 + 8);
    v6 = *(_QWORD *)v3;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &off_AA270;
    *(_QWORD *)(v4 + 16) = v6;
    *(_DWORD *)(v4 + 24) = v5;
    *(_QWORD *)(v4 + 32) = 0;
    *a1 = v4;
    *(_OWORD *)(v4 + 40) = 0;
  }
  else
  {
    v2(a1);
  }
  return a1;
}
