__int64 __fastcall sub_B9FCF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax
  void (*v8)(); // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-20h]

  v4 = a1[10];
  if ( !v4 )
  {
    v10 = a3;
    v9 = sub_B9F7C0(a1);
    a3 = v10;
    v4 = v9;
  }
  v5 = v4 + 8;
  if ( a3 )
  {
    sub_21FF4D0(v5, a2, a3, off_2B21420);
  }
  else if ( a2 != sub_21FF720(v5, a2, off_2B21420) )
  {
    goto LABEL_8;
  }
  v6 = *(unsigned int *)(v4 + 32);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 36) )
  {
    sub_22134E0(v4 + 24, v4 + 40, v6 + 1, 8);
    v6 = *(unsigned int *)(v4 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v6) = a2;
  ++*(_DWORD *)(v4 + 32);
LABEL_8:
  result = sub_B68850((__int64)a1);
  if ( result )
  {
    v8 = *(void (**)())(*(_QWORD *)result + 56LL);
    if ( v8 != nullsub_414 )
      return ((__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64))v8)(
               result,
               a1,
               *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}

