__int64 __fastcall sub_677E40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 (__fastcall *v5)(); // r13
  __int64 *v6; // rbx
  __int64 (__fastcall *v7)(); // r14
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(); // rax
  __int64 v11; // rdx
  __int64 *v12; // rdi

  sub_677B20(a1);
  v4 = (__int64 *)a1[169];
  v5 = *(__int64 (__fastcall **)())(*v4 + 360);
  if ( v5 != sub_677E40 )
    return ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v5)(v4, a2, a3);
  sub_677B20(v4);
  v6 = (__int64 *)v4[169];
  v7 = *(__int64 (__fastcall **)())(*v6 + 360);
  if ( v7 != v5 )
    goto LABEL_10;
  sub_677B20(v6);
  v4 = (__int64 *)v6[169];
  v5 = *(__int64 (__fastcall **)())(*v4 + 360);
  if ( v5 != v7 )
    return ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v5)(v4, a2, a3);
  sub_677B20(v4);
  v6 = (__int64 *)v4[169];
  v7 = *(__int64 (__fastcall **)())(*v6 + 360);
  if ( v7 != v5 )
    goto LABEL_10;
  sub_677B20(v6);
  v4 = (__int64 *)v6[169];
  v5 = *(__int64 (__fastcall **)())(*v4 + 360);
  if ( v5 != v7 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v5)(v4, a2, a3);
  sub_677B20(v4);
  v6 = (__int64 *)v4[169];
  v7 = *(__int64 (__fastcall **)())(*v6 + 360);
  if ( v7 != v5 )
  {
LABEL_10:
    v11 = a3;
    v12 = v6;
    v9 = v7;
    return ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v9)(v12, a2, v11);
  }
  sub_677B20(v6);
  v4 = (__int64 *)v6[169];
  v5 = *(__int64 (__fastcall **)())(*v4 + 360);
  if ( v5 == v7 )
  {
    sub_677B20(v4);
    v8 = v4[169];
    v9 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 360LL);
    if ( v9 == v5 )
    {
      sub_677B20((__int64 *)v8);
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v8 + 1352) + 360LL))(
               *(_QWORD *)(v8 + 1352),
               a2,
               a3);
    }
    v11 = a3;
    v12 = (__int64 *)v8;
    return ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v9)(v12, a2, v11);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v5)(v4, a2, a3);
}

