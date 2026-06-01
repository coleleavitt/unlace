__int64 __fastcall sub_371EE0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  void (__fastcall ***v17)(void *, __int64, __int64); // rbx
  __int64 v18; // rax
  void (__fastcall ***v19)(_QWORD, __int64); // r13
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // [rsp-8h] [rbp-38h]

  v2 = a1[3];
  if ( !v2 )
  {
    sub_1862370(a1 + 2, "smt.max_conflicts", 100);
    v15 = sub_AFF8B0();
    v16 = a1[1];
    v17 = (void (__fastcall ***)(void *, __int64, __int64))v15;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, _QWORD, __int64, const int *))(*(_QWORD *)v15 + 16LL))(
            v15,
            v16,
            a1 + 2,
            0,
            0,
            1,
            &qword_18D6CD0);
    v19 = (void (__fastcall ***)(_QWORD, __int64))a1[3];
    v20 = v18;
    v21 = v22;
    if ( (void (__fastcall ***)(_QWORD, __int64))v18 != v19 )
    {
      if ( v19 )
      {
        (**v19)(a1[3], v16);
        sub_186B220(v19);
      }
      a1[3] = v20;
    }
    (**v17)(v17, v16, v21);
    sub_186B220(v17);
    v2 = a1[3];
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
  v3 = a1[15];
  if ( v3 )
  {
    v4 = (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
    v5 = 4 * v4;
  }
  else
  {
    v5 = 0x3FFFFFFFCLL;
    LODWORD(v4) = -1;
  }
  v6 = *(unsigned int *)(v3 + v5);
  v7 = a1[14];
  v8 = v6;
  v9 = 8 * v6;
  v10 = v7 + v9;
  if ( v7 )
  {
    v11 = 8LL * *(unsigned int *)(v7 - 4);
    v12 = v7 + v11;
    if ( v9 == v11 )
    {
LABEL_8:
      *(_DWORD *)(v7 - 4) = v8;
      goto LABEL_9;
    }
    do
    {
LABEL_6:
      v13 = *(_QWORD *)(v12 - 8);
      v12 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    while ( v10 != v12 );
    v7 = a1[14];
    v3 = a1[15];
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v12 = 0;
  if ( v9 )
    goto LABEL_6;
LABEL_9:
  if ( v3 )
    *(_DWORD *)(v3 - 4) = v4;
  return sub_180C2E0(a1 + 16);
}

