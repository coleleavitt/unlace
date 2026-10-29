bool __fastcall sub_46C7E0(int *a1, unsigned int *a2, int *a3)
{
  unsigned int v4; // ebp
  __int64 (__fastcall *v5)(__int64, unsigned int); // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64, unsigned int); // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = *a2;
  v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 168LL);
  if ( v5 != sub_46AD80 )
  {
    v7 = v5((__int64)a1, v4);
    v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a3 + 168LL);
    if ( v8 == sub_46AD80 )
      goto LABEL_3;
LABEL_6:
    v10 = v8((__int64)a3, v4);
    return *(_QWORD *)(v7 + 8) == *(_QWORD *)(v10 + 8);
  }
  v6 = switch_dbctx(a1[2]);
  v7 = sub_4EE820(*(_QWORD *)(v6 + 1480) + 2672LL, v4);
  v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a3 + 168LL);
  if ( v8 != sub_46AD80 )
    goto LABEL_6;
LABEL_3:
  v9 = switch_dbctx(a3[2]);
  v10 = sub_4EE820(*(_QWORD *)(v9 + 1480) + 2672LL, v4);
  return *(_QWORD *)(v7 + 8) == *(_QWORD *)(v10 + 8);
}

