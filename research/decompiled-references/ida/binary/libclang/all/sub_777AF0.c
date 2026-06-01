bool __fastcall sub_777AF0(__int64 *a1, __int64 a2)
{
  bool result; // al
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (*v9)(); // rax
  __int64 v10; // rax

  result = *(_BYTE *)(a2 + 12) & 1;
  if ( result )
  {
    v3 = *(__int64 **)(a2 + 16);
    v4 = *a1;
    v5 = *v3;
    v6 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *(_QWORD *)(v6 + 8);
    if ( (v7 & 7) != 0 || (v7 & 8) != 0 )
      v6 = sub_B0CF30(v5, a2);
    v8 = sub_B0E890(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL));
    v9 = *(__int64 (**)())(*(_QWORD *)v8 + 32LL);
    if ( v9 == sub_6A41B0 )
      v10 = sub_777E10(v8);
    else
      v10 = ((__int64 (__fastcall *)(__int64))v9)(v8);
    return v4 == v10;
  }
  return result;
}

