__int64 __fastcall sub_18D9F0(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 (*v4)(void); // rax
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(_QWORD *, __int64, __int64); // r12
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rax

  v2 = a2;
  v4 = *(__int64 (**)(void))(*a1 + 88LL);
  if ( (char *)v4 == (char *)sub_18D6C0 )
    v5 = a1[13];
  else
    v5 = v4();
  v6 = *a2;
  v7 = *a2;
  if ( v5 )
  {
    v12 = a2[1];
    v13 = v5 + 1;
    if ( v12 < v5 + 1 )
    {
      if ( a2[2] < v13 )
      {
        v14 = qvector_reserve();
        *a2 = v14;
        v6 = v14;
        v12 = a2[1];
      }
      a2 = nullptr;
      memset((void *)(v12 + v6), 0, v13 - v12);
      v2[1] = v13;
      v7 = *v2;
    }
    else if ( v13 != v12 )
    {
      a2[1] = v13;
    }
    *(_BYTE *)(v7 + v5) = 0;
    v8 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 96LL);
    v9 = *(__int64 (__fastcall **)(__int64))(*a1 + 88LL);
    if ( v9 == sub_18D6C0 )
      goto LABEL_7;
LABEL_13:
    v10 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64))v9)(a1, a2, v7);
    return v8(a1, *v2, v10);
  }
  if ( v6 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  v8 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 96LL);
  v9 = *(__int64 (__fastcall **)(__int64))(*a1 + 88LL);
  if ( v9 != sub_18D6C0 )
    goto LABEL_13;
LABEL_7:
  v10 = a1[13];
  return v8(a1, *v2, v10);
}

