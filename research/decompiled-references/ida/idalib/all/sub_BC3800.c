__int64 __fastcall sub_BC3800(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  void (*v10)(); // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-20h]

  v5 = a1[10];
  if ( !v5 )
  {
    v13 = a3;
    v12 = sub_BC3500(a1);
    a3 = v13;
    v5 = v12;
  }
  v6 = v5 + 8;
  if ( a3 )
  {
    v7 = a2 + 144;
    if ( !a2 )
      v7 = 0;
    sub_2223210(v6, v7, a3, &off_2B4B3A0);
    goto LABEL_7;
  }
  if ( a2 )
  {
    v11 = sub_2223460(v6, a2 + 144, &off_2B4B3A0);
    if ( !v11 )
      goto LABEL_10;
LABEL_15:
    if ( a2 != v11 - 144 )
      goto LABEL_10;
    goto LABEL_7;
  }
  v11 = sub_2223460(v6, 0, &off_2B4B3A0);
  if ( v11 )
    goto LABEL_15;
LABEL_7:
  v8 = *(unsigned int *)(v5 + 32);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v5 + 36) )
  {
    sub_2237220(v5 + 24, v5 + 40, v8 + 1, 8);
    v8 = *(unsigned int *)(v5 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v8) = a2;
  ++*(_DWORD *)(v5 + 32);
LABEL_10:
  result = sub_B8C590((__int64)a1);
  if ( result )
  {
    v10 = *(void (**)())(*(_QWORD *)result + 40LL);
    if ( v10 != nullsub_433 )
      return ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v10)(result, a1, a2);
  }
  return result;
}
