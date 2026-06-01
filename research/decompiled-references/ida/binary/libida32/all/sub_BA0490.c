__int64 __fastcall sub_BA0490(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax
  void (*v11)(); // rcx
  __int64 v12; // rdi
  __int64 v13; // rax

  if ( a3 )
  {
    v6 = *(_QWORD *)(sub_B685F0((__int64)a1) + 18360);
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 80LL))(v6, a1[9], 1);
    v7 = a1[10];
    if ( !v7 )
      v7 = sub_B9F7C0(a1);
    v8 = a2 + 104;
    if ( !a2 )
      v8 = 0;
    sub_21FF4D0(v7 + 104, v8, a3, &off_2B21440);
    goto LABEL_9;
  }
  sub_B99EB0((__int64)a1, 1u);
  v7 = a1[10];
  if ( !v7 )
    v7 = sub_B9F7C0(a1);
  v12 = v7 + 104;
  if ( a2 )
  {
    v13 = sub_21FF720(v12, a2 + 104, &off_2B21440);
    if ( !v13 )
      goto LABEL_12;
LABEL_19:
    if ( a2 != v13 - 104 )
      goto LABEL_12;
    goto LABEL_9;
  }
  v13 = sub_21FF720(v12, 0, &off_2B21440);
  if ( v13 )
    goto LABEL_19;
LABEL_9:
  v9 = *(unsigned int *)(v7 + 128);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 132) )
  {
    sub_22134E0(v7 + 120, v7 + 136, v9 + 1, 8);
    v9 = *(unsigned int *)(v7 + 128);
  }
  *(_QWORD *)(*(_QWORD *)(v7 + 120) + 8 * v9) = a2;
  ++*(_DWORD *)(v7 + 128);
LABEL_12:
  result = sub_B68850((__int64)a1);
  if ( result )
  {
    v11 = *(void (**)())(*(_QWORD *)result + 48LL);
    if ( v11 != nullsub_413 )
      return ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v11)(result, a1, a2);
  }
  return result;
}

