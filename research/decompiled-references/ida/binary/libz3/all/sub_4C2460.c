__int64 __fastcall sub_4C2460(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 200LL);
  if ( v5 == sub_4C9870 || (result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v5)(v4, a2, a3)) == 0 )
  {
    v6 = sub_186B270(0x30u);
    *(_QWORD *)v6 = &off_1C4F270;
    v7 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v6 + 8) = a3;
    if ( v7 )
      v8 = *(_DWORD *)(v7 - 4);
    else
      v8 = 0;
    v9 = *(__int64 **)(a2 + 8);
    *(_DWORD *)(v6 + 16) = v8 - *(_DWORD *)(a2 + 24);
    v10 = *v9;
    *(_OWORD *)(v6 + 32) = 0;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v10 + 40))(v9, a2 + 16);
    *(_QWORD *)(v6 + 24) = v11;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(*v9 + 120))(v9, a2, v11, 0);
    if ( v12 )
      *(_QWORD *)(v6 + 32) = v12;
    return v6;
  }
  return result;
}

