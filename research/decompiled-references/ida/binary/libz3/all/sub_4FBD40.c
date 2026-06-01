__int64 __fastcall sub_4FBD40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v5[0] = 0;
  sub_4C6580(*(_QWORD *)(v2 + 24), a1 + 16, a2, v5);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 32) + 56LL))(*(_QWORD *)(a1 + 32), v5);
  if ( v5[0] )
    sub_186B220((void *)(v5[0] - 8LL));
  return v3;
}

