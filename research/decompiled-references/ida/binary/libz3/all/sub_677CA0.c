__int64 __fastcall sub_677CA0(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 *v4; // rbx
  __int64 (__fastcall *v5)(); // r13
  __int64 *v6; // rbx
  __int64 (__fastcall *v7)(); // r14
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(); // rax

  sub_677B20(a2);
  v4 = (__int64 *)a2[169];
  v5 = *(__int64 (__fastcall **)())(*v4 + 352);
  if ( v5 != sub_677CA0 )
    goto LABEL_12;
  sub_677B20(v4);
  v6 = (__int64 *)v4[169];
  v7 = *(__int64 (__fastcall **)())(*v6 + 352);
  if ( v7 != v5 )
    goto LABEL_10;
  sub_677B20(v6);
  v4 = (__int64 *)v6[169];
  v5 = *(__int64 (__fastcall **)())(*v4 + 352);
  if ( v5 != v7 )
    goto LABEL_12;
  sub_677B20(v4);
  v6 = (__int64 *)v4[169];
  v7 = *(__int64 (__fastcall **)())(*v6 + 352);
  if ( v7 != v5 )
    goto LABEL_10;
  sub_677B20(v6);
  v4 = (__int64 *)v6[169];
  v5 = *(__int64 (__fastcall **)())(*v4 + 352);
  if ( v5 != v7 )
    goto LABEL_12;
  sub_677B20(v4);
  v6 = (__int64 *)v4[169];
  v7 = *(__int64 (__fastcall **)())(*v6 + 352);
  if ( v7 != v5 )
  {
LABEL_10:
    ((void (__fastcall *)(__int64, __int64 *, _QWORD))v7)(a1, v6, a3);
    return a1;
  }
  sub_677B20(v6);
  v4 = (__int64 *)v6[169];
  v5 = *(__int64 (__fastcall **)())(*v4 + 352);
  if ( v5 == v7 )
  {
    sub_677B20(v4);
    v8 = v4[169];
    v9 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 352LL);
    if ( v9 == v5 )
    {
      sub_677B20((__int64 *)v8);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(**(_QWORD **)(v8 + 1352) + 352LL))(
        a1,
        *(_QWORD *)(v8 + 1352),
        a3);
      return a1;
    }
    ((void (__fastcall *)(__int64, __int64, _QWORD))v9)(a1, v8, a3);
    return a1;
  }
LABEL_12:
  ((void (__fastcall *)(__int64, __int64 *, _QWORD))v5)(a1, v4, a3);
  return a1;
}

