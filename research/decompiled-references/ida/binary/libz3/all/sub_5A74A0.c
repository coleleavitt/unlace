__int64 __fastcall sub_5A74A0(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD); // r15
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1[2] + 112LL) + 8LL * *a2);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1[3] + 112LL) + 8LL * a2[2]);
  v7 = *(_QWORD *)(a1[1] + 72LL);
  if ( !v7 )
  {
    v17[0] = 0;
    v10 = *(_QWORD *)(v5 + 16);
    if ( v10 )
      v11 = *(unsigned int *)(v10 - 4);
    else
      v11 = 0;
    sub_647A70(0, v11, v17);
    if ( v17[0] )
      v12 = *(_DWORD *)(v17[0] - 4);
    else
      v12 = 0;
    v13 = sub_4C4AE0(*(_QWORD *)(*(_QWORD *)(a1[2] + 8LL) + 24LL), v5, v6, v12, v17[0], v17[0]);
    v14 = a1[1];
    v15 = *(void (__fastcall ****)(_QWORD))(v14 + 72);
    if ( (void (__fastcall ***)(_QWORD))v13 != v15 )
    {
      if ( v15 )
      {
        v16 = a1[1];
        (**v15)(*(_QWORD *)(v14 + 72));
        sub_186B220(v15);
        v14 = v16;
      }
      *(_QWORD *)(v14 + 72) = v13;
    }
    if ( v17[0] )
      sub_186B220((void *)(v17[0] - 8));
    v7 = *(_QWORD *)(a1[1] + 72LL);
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v5, v6);
  v8 = sub_5A1A80(a1[2]);
  *(_QWORD *)(*(_QWORD *)(a1[2] + 112LL) + 8LL * v8) = v5;
  *(_QWORD *)a2 = v8;
  return 1;
}

