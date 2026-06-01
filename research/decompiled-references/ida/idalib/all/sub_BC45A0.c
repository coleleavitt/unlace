__int64 __fastcall sub_BC45A0(_QWORD *a1, __int64 a2, __int64 a3)
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
    v6 = *(_QWORD *)(sub_B8C330((__int64)a1) + 18360);
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 80LL))(v6, a1[9], 1);
    v7 = a1[10];
    if ( !v7 )
      v7 = sub_BC3500(a1);
    v8 = a2 + 144;
    if ( !a2 )
      v8 = 0;
    sub_2223210(v7 + 104, v8, a3, &off_2B4B400);
    goto LABEL_9;
  }
  sub_BBDBF0((__int64)a1, 1u);
  v7 = a1[10];
  if ( !v7 )
    v7 = sub_BC3500(a1);
  v12 = v7 + 104;
  if ( a2 )
  {
    v13 = sub_2223460(v12, a2 + 144, &off_2B4B400);
    if ( !v13 )
      goto LABEL_12;
LABEL_19:
    if ( a2 != v13 - 144 )
      goto LABEL_12;
    goto LABEL_9;
  }
  v13 = sub_2223460(v12, 0, &off_2B4B400);
  if ( v13 )
    goto LABEL_19;
LABEL_9:
  v9 = *(unsigned int *)(v7 + 128);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 132) )
  {
    sub_2237220(v7 + 120, v7 + 136, v9 + 1, 8);
    v9 = *(unsigned int *)(v7 + 128);
  }
  *(_QWORD *)(*(_QWORD *)(v7 + 120) + 8 * v9) = a2;
  ++*(_DWORD *)(v7 + 128);
LABEL_12:
  result = sub_B8C590((__int64)a1);
  if ( result )
  {
    v11 = *(void (**)())(*(_QWORD *)result + 40LL);
    if ( v11 != nullsub_433 )
      return ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v11)(result, a1, a2);
  }
  return result;
}
