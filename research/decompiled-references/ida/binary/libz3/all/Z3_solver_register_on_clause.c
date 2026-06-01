__int64 __fastcall Z3_solver_register_on_clause(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // r14
  void (__fastcall ***v20)(_QWORD); // r15
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 (__fastcall *v23)(const __m128i **, const __m128i *, int); // [rsp+10h] [rbp-48h]
  __int64 (__fastcall *v24)(int, int, int, int, int, int, __int64, int, __int64); // [rsp+18h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !v8 )
  {
    sub_2A74C0(a1, a2);
    v8 = *(_QWORD *)(a2 + 32);
  }
  v9 = v8 + 72;
  v10 = *(_QWORD *)(v8 + 72);
  v22 = a4;
  v21 = a1;
  v11 = a3;
  v24 = sub_2AB5B0;
  v23 = sub_2A7460;
  (*(void (__fastcall **)(__int64, __int64, __int64 *))(v10 + 96))(v9, a3, &v21);
  v16 = *(_QWORD *)(a2 + 72);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 280);
    if ( v17 )
      goto LABEL_5;
    goto LABEL_13;
  }
  v11 = 0;
  v19 = sub_186B270(0x3A0u);
  sub_E059D0(v19, 0, *(_QWORD *)(a1 + 232), &qword_18D6CD0);
  v20 = *(void (__fastcall ****)(_QWORD))(a2 + 72);
  if ( (void (__fastcall ***)(_QWORD))v19 != v20 )
  {
    if ( v20 )
    {
      (**v20)(*(_QWORD *)(a2 + 72));
      sub_186B220(v20);
    }
    *(_QWORD *)(a2 + 72) = v19;
    v20 = (void (__fastcall ***)(_QWORD))v19;
  }
  sub_2CFBE0(v20);
  v16 = *(_QWORD *)(a2 + 72);
  v17 = *(_QWORD *)(v16 + 280);
  if ( !v17 )
  {
LABEL_13:
    sub_2CFCB0(v16, v11, v12, v13, v14, v15, v21, v22);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a2 + 72) + 280LL) + 48LL))(
      *(_QWORD *)(*(_QWORD *)(a2 + 72) + 280LL),
      a2 + 40);
    v17 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 280LL);
  }
LABEL_5:
  (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 56LL))(v17, a3, &v21);
  result = (__int64)v23;
  if ( v23 )
    return v23((const __m128i **)&v21, (const __m128i *)&v21, 3);
  return result;
}

