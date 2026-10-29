bool __fastcall sub_777B70(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  bool result; // al
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (*v10)(); // rax
  __int64 v11; // rax

  v2 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 7) != 0 || (v3 & 8) != 0 )
    v2 = sub_B0CF30(**(_QWORD **)(a2 + 16), a2);
  v4 = sub_B0E890(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL));
  result = 0;
  if ( v4 )
  {
    v6 = *a1;
    v7 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(_QWORD *)(v7 + 8);
    if ( (v8 & 7) != 0 || (v8 & 8) != 0 )
      v7 = sub_B0CF30(**(_QWORD **)(a2 + 16), a2);
    v9 = sub_B0E890(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL));
    v10 = *(__int64 (**)())(*(_QWORD *)v9 + 32LL);
    if ( v10 == sub_6A41B0 )
      v11 = sub_777E10(v9);
    else
      v11 = ((__int64 (__fastcall *)(__int64))v10)(v9);
    return v6 == v11;
  }
  return result;
}

