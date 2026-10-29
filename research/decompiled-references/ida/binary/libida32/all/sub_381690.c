__int64 __fastcall sub_381690(_QWORD *a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // r14
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r15
  __int64 *v12; // rdi
  __int64 v13; // rsi
  void (__fastcall *v14)(_QWORD *, __int64, _QWORD); // r12
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  if ( a2 == 39 && *((_DWORD *)a1 + 27) == -1 )
    *((_DWORD *)a1 + 27) = *(_QWORD *)(a1[12] + 8LL);
  v5 = a2;
  v6 = qword_2CA1698;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(v6 + 952), 0);
  v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v7 != sub_3598B0 )
  {
    v7(a1, 32);
    v12 = a1 + 3;
    goto LABEL_6;
  }
  v8 = a1[4];
  if ( v8 )
  {
    v11 = v8 + 1;
    v10 = a1[4];
    v9 = a1[3];
    --v8;
    v12 = a1 + 3;
    if ( a1[5] >= v11 )
      goto LABEL_5;
LABEL_8:
    v18 = v10;
    v17 = qvector_reserve(v12, v9, v11, 1);
    v10 = v18;
    a1[3] = v17;
    v9 = v17;
    goto LABEL_5;
  }
  v9 = a1[3];
  v10 = 1;
  v11 = 2;
  v12 = a1 + 3;
  if ( a1[5] < 2u )
    goto LABEL_8;
LABEL_5:
  a1[4] = v11;
  *(_BYTE *)(v9 + v8) = 32;
  *(_BYTE *)(a1[3] + v10) = 0;
LABEL_6:
  v13 = a3;
  sub_357460(v12);
  v14 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
  v15 = closing_comment(v12, v13);
  v14(a1, v15, 0);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 72LL))(a1, v5);
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 128LL))(a1, 0);
}

