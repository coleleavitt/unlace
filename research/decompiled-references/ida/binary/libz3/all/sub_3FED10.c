__int64 __fastcall sub_3FED10(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // r12d
  _QWORD *v9; // r13
  __int64 (__fastcall *v10)(); // rax
  __int64 v11; // r14
  __int64 (__fastcall *v12)(); // rdx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rax

  v4 = a1;
  if ( *(_BYTE *)(a1 + 392) )
  {
    v5 = *(_QWORD *)(a1 + 216);
    if ( !v5 )
    {
LABEL_17:
      LODWORD(a3) = 0;
      goto LABEL_18;
    }
  }
  else
  {
    v16 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 392) = 1;
    *(_QWORD *)(a1 + 376) = v16;
    v5 = *(_QWORD *)(a1 + 216);
    if ( !v5 )
      goto LABEL_17;
  }
  if ( !*(_DWORD *)(v5 - 4) )
    goto LABEL_17;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 192LL))(*(_QWORD *)(a1 + 128));
  sub_E5EBF0(*(_QWORD *)(a1 + 128), a2);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = sub_15E1A70(*(_QWORD *)(a1 + 8));
  sub_E5EBF0(v6, v7);
  v8 = sub_E60CB0(*(std::ios_base **)(a1 + 128), 0, 0);
  if ( !a3 )
    goto LABEL_14;
  v9 = *(_QWORD **)(a1 + 128);
  v10 = *(__int64 (__fastcall **)())(*v9 + 32LL);
  if ( v10 != sub_41C670 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD *))v10)(*(_QWORD *)(a1 + 128), a3);
    goto LABEL_11;
  }
  v11 = v9[12];
  v12 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 32LL);
  if ( v12 == v10 )
    sub_3FD060(*(_QWORD **)(v11 + 96), a3);
  else
    ((void (__fastcall *)(_QWORD, _QWORD *))v12)(v9[12], a3);
  if ( *a3 )
  {
    v13 = *(_QWORD *)(v11 + 56);
    if ( !v13 )
    {
LABEL_12:
      v14 = v9[7];
      if ( v14 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 32LL))(v14, a3);
      goto LABEL_14;
    }
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 32LL))(v13, a3);
LABEL_11:
    if ( !*a3 )
      goto LABEL_14;
    goto LABEL_12;
  }
LABEL_14:
  a1 = *(_QWORD *)(v4 + 128);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 200LL))(a1, 1);
  LOBYTE(a3) = v8 == 1;
  if ( !*(_BYTE *)(v4 + 392) )
    return (unsigned int)a3;
LABEL_18:
  v17 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
  *(_BYTE *)(v4 + 392) = 0;
  *(_QWORD *)(v4 + 384) += v17 - *(_QWORD *)(v4 + 376);
  return (unsigned int)a3;
}

