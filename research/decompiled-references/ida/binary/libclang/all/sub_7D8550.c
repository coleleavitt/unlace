__int64 __fastcall sub_7D8550(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax
  void (*v11)(); // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax

  if ( a3 )
  {
    v6 = *(_QWORD *)(sub_798D40(a1) + 18200);
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 80LL))(v6, *(_QWORD *)(a1 + 72), 1);
    v7 = *(_QWORD *)(a1 + 80);
    if ( !v7 )
      v7 = sub_7D0C20(a1);
    v8 = a2 + 104;
    if ( !a2 )
      v8 = 0;
    sub_25AC200(v7 + 104, v8, a3, &off_47DA8F0);
  }
  else
  {
    v12 = *(_QWORD *)(sub_798D40(a1) + 18200);
    if ( v12 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 80LL))(v12, *(_QWORD *)(a1 + 72), 1);
    v7 = *(_QWORD *)(a1 + 80);
    if ( !v7 )
      v7 = sub_7D0C20(a1);
    v13 = v7 + 104;
    if ( a2 )
    {
      v14 = sub_25AC4A0(v13, a2 + 104, &off_47DA8F0);
      if ( !v14 || a2 != v14 - 104 )
        goto LABEL_12;
    }
    else if ( sub_25AC4A0(v13, 0, &off_47DA8F0) )
    {
      goto LABEL_12;
    }
  }
  v9 = *(unsigned int *)(v7 + 128);
  if ( *(unsigned int *)(v7 + 132) < (unsigned __int64)(v9 + 1) )
  {
    sub_25D6060(v7 + 120, v7 + 136, v9 + 1, 8);
    v9 = *(unsigned int *)(v7 + 128);
  }
  *(_QWORD *)(*(_QWORD *)(v7 + 120) + 8 * v9) = a2;
  ++*(_DWORD *)(v7 + 128);
LABEL_12:
  result = sub_798D90(a1);
  if ( result )
  {
    v11 = *(void (**)())(*(_QWORD *)result + 48LL);
    if ( v11 != nullsub_68 )
      return ((__int64 (__fastcall *)(__int64, __int64, __int64))v11)(result, a1, a2);
  }
  return result;
}

