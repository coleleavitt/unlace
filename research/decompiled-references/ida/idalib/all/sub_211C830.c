void (*__fastcall sub_211C830(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  void (*v6)(); // rax
  void (*result)(); // rax
  __int64 v8; // rdi
  const char *v9; // [rsp+0h] [rbp-48h] BYREF
  __int16 v10; // [rsp+20h] [rbp-28h]

  v3 = a1[4];
  if ( a1[3] != v3 && !*(_QWORD *)(v3 - 88) || (v4 = a1[11], a1[10] != v4) && !*(_QWORD *)(*(_QWORD *)(v4 - 8) + 8LL) )
  {
    v8 = a1[1];
    v9 = "Unfinished frame!";
    v10 = 259;
    return (void (*)())sub_2100A30(v8, a2, (__int64)&v9);
  }
  v5 = a1[2];
  if ( !v5 || (v6 = *(void (**)())(*(_QWORD *)v5 + 80LL), v6 == nullsub_1428) )
  {
    result = *(void (**)())(*a1 + 1272LL);
    if ( result == nullsub_1428 )
      return result;
    return (void (*)())((__int64 (__fastcall *)(_QWORD *))result)(a1);
  }
  v6();
  result = *(void (**)())(*a1 + 1272LL);
  if ( result != nullsub_1428 )
    return (void (*)())((__int64 (__fastcall *)(_QWORD *))result)(a1);
  return result;
}
