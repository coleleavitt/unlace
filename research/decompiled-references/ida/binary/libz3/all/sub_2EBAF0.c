__int64 __fastcall sub_2EBAF0(__int64 a1, unsigned __int64 *a2, unsigned __int8 a3, char a4)
{
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rdi
  void **p_ptr; // rsi
  __int64 v15; // rdx
  unsigned int v16; // ebp
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rdi
  void (__fastcall ***v19)(_QWORD); // rbx
  void *ptr; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v23[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a2;
  v8 = *(_DWORD *)(a1 + 424);
  v9 = *(_QWORD *)(a1 + 416);
  ptr = nullptr;
  v23[1] = 0;
  v23[0] = v7;
  v10 = sub_2EB230(v9, v8, v23);
  v11 = *(_QWORD *)(v10 + 16);
  if ( a4 )
  {
    v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL);
    if ( v12 == sub_2EAF00 )
      v13 = *(_QWORD *)(a1 + 232);
    else
      v13 = v12(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 192LL))(v13);
    p_ptr = (void **)a3;
    v16 = sub_301AB0(v11, a3);
    if ( v16 == -1 || (p_ptr = &ptr, sub_300510(v11, &ptr), v15 = a1 + 768, !ptr) )
    {
      v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL);
      if ( v17 != sub_2EAF00 )
      {
LABEL_22:
        v18 = ((__int64 (__fastcall *)(__int64, void **, __int64))v17)(a1, p_ptr, v15);
        goto LABEL_7;
      }
LABEL_6:
      v18 = *(_QWORD *)(a1 + 232);
LABEL_7:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 200LL))(v18, 1);
      goto LABEL_8;
    }
LABEL_16:
    p_ptr = (void **)(a1 + 616);
    sub_300510(v11, a1 + 616);
    if ( !a4 )
      goto LABEL_8;
    v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL);
    if ( v17 != sub_2EAF00 )
      goto LABEL_22;
    goto LABEL_6;
  }
  v16 = sub_301AB0(*(_QWORD *)(v10 + 16), a3);
  if ( v16 == -1 )
    goto LABEL_11;
  sub_300510(v11, &ptr);
  if ( ptr )
    goto LABEL_16;
LABEL_8:
  if ( v16 == 1 && a3 )
    sub_300610(v11);
LABEL_11:
  v19 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 4))-- == 1 )
    {
      (**v19)(v19);
      sub_186B220(v19);
    }
  }
  return v16;
}

