__int64 __fastcall sub_17A5D60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (*v8)(); // rdx

  v2 = sub_B8BF30(a2);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 84) & 3) != 0 )
      return 0;
    v6 = sub_C1D490(v2, a2, v3, v4);
    if ( sub_F57E80(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL)) )
      return 0;
  }
  v7 = *(_QWORD *)(a1 + 256);
  v8 = *(__int64 (**)())(*(_QWORD *)v7 + 160LL);
  result = 1;
  if ( v8 != sub_6EE830 )
    return ((__int64 (__fastcall *)(__int64, __int64))v8)(v7, a2);
  return result;
}
