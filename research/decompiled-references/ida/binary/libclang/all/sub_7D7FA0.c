__int64 __fastcall sub_7D7FA0(__int64 a1, __int64 a2, __int64 a3)
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

  v5 = *(_QWORD *)(a1 + 80);
  if ( !v5 )
  {
    v13 = a3;
    v12 = sub_7D0C20(a1);
    a3 = v13;
    v5 = v12;
  }
  v6 = v5 + 8;
  if ( a3 )
  {
    v7 = a2 + 104;
    if ( !a2 )
      v7 = 0;
    sub_25AC200(v6, v7, a3, &off_47DA890);
  }
  else if ( a2 )
  {
    v11 = sub_25AC4A0(v6, a2 + 104, &off_47DA890);
    if ( !v11 || a2 != v11 - 104 )
      goto LABEL_10;
  }
  else if ( sub_25AC4A0(v6, 0, &off_47DA890) )
  {
    goto LABEL_10;
  }
  v8 = *(unsigned int *)(v5 + 32);
  if ( *(unsigned int *)(v5 + 36) < (unsigned __int64)(v8 + 1) )
  {
    sub_25D6060(v5 + 24, v5 + 40, v8 + 1, 8);
    v8 = *(unsigned int *)(v5 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v8) = a2;
  ++*(_DWORD *)(v5 + 32);
LABEL_10:
  result = sub_798D90(a1);
  if ( result )
  {
    v10 = *(void (**)())(*(_QWORD *)result + 48LL);
    if ( v10 != nullsub_68 )
      return ((__int64 (__fastcall *)(__int64, __int64, __int64))v10)(result, a1, a2);
  }
  return result;
}

