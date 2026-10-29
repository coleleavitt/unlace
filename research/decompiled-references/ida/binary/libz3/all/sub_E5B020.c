__int64 __fastcall sub_E5B020(_DWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = sub_186B270(0x38u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = &off_1C5CF18;
  v2 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 72LL))(a1);
  ++a1[12];
  *(_QWORD *)(v1 + 16) = v2;
  *(_QWORD *)(v1 + 24) = a1;
  *(_QWORD *)(v1 + 48) = 0;
  *(_OWORD *)(v1 + 32) = 0;
  return v1;
}

