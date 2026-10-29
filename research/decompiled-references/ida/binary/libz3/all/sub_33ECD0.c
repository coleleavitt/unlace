__int64 __fastcall sub_33ECD0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  void (*v5)(void); // rax
  int v6; // eax
  int v7; // r12d
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  _DWORD *v13; // r12
  __int64 v14; // rbp
  void **v15; // rdx
  void (__fastcall ***v16)(void *); // r14
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF

  v4 = a1;
  v5 = *(void (**)(void))(*(_QWORD *)a1 + 400LL);
  if ( (char *)v5 == (char *)sub_33D690 )
    sub_8E36C0(a1 + 880);
  else
    v5();
  sub_33DDB0(&v17, (_QWORD *)a1, a2, a3);
  sub_E5EBF0(a1, v17.m128i_i64[0]);
  v6 = sub_8E3730(a1 + 880, 0, 0);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_5;
  }
  else
  {
    if ( (unsigned int)sub_8E37E0(a1 + 880) != 8 )
      goto LABEL_5;
    *(_BYTE *)(a1 + 993) = 1;
  }
  sub_8E3780(a1 + 880, a1 + 920);
  v13 = *(_DWORD **)(a1 + 920);
  if ( v13 )
    ++v13[4];
  v14 = 8LL * a2;
  v15 = (void **)(v14 + *(_QWORD *)(a1 + 944));
  v16 = (void (__fastcall ***)(void *))*v15;
  if ( *v15 )
  {
    v11 = (*((_DWORD *)v16 + 4))-- == 1;
    if ( v11 )
    {
      (**v16)(v16);
      sub_186B220(v16);
      v15 = (void **)(v14 + *(_QWORD *)(a1 + 944));
    }
  }
  *v15 = v13;
  v7 = 1;
LABEL_5:
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL);
  if ( v8 == sub_33D6A0 )
    sub_8E36D0(a1 + 880);
  else
    ((void (__fastcall *)(__int64, __int64))v8)(a1, 1);
  v9 = v17.m128i_i64[0];
  LOBYTE(v4) = v7 == 1;
  if ( !v17.m128i_i64[0] )
    return v4;
  v10 = v17.m128i_i64[1];
  v11 = (*(_DWORD *)(v17.m128i_i64[0] + 8))-- == 1;
  if ( !v11 )
    return v4;
  sub_15D7BC0(v10, v9);
  return v4;
}

