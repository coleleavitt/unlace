__int64 __fastcall sub_335A80(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  unsigned int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = a1[9];
  if ( !v1 || !*(_DWORD *)(v1 - 4) )
    return 1;
  v2 = a1[2];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
  sub_180C5A0(v6, "symba");
  if ( a1[10] == v6[0] )
    v3 = sub_334F60(a1);
  else
    v3 = sub_333170(a1);
  v4 = v3;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 200LL))(v2, 1);
  return v4;
}

