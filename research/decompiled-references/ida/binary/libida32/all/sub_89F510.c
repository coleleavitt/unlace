__int64 __fastcall sub_89F510(__int64 a1, char a2, __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // r13
  unsigned __int8 (__fastcall **v7)(__int64); // rax
  unsigned int *v8; // r12
  int v9; // eax
  __int64 v10; // rbp
  void *v11; // rdi
  size_t v12; // rbp
  size_t v13; // rdx
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx

  if ( *(_DWORD *)(a1 + 252) == 2
    && ((v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL), v15 != sub_79C400)
      ? (v16 = ((__int64 (*)(void))v15)())
      : (v16 = *(_QWORD *)(a1 + 96)),
        (int)sub_79DA80(v16) <= 0) )
  {
    v17 = operator new(0x10u);
    *(_BYTE *)(v17 + 8) = 10;
    v10 = v17;
    *(_QWORD *)v17 = off_2B14128;
  }
  else if ( a3
         && *(int *)(a3 + 8) > 0
         && ((v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL), v5 != sub_79C400)
           ? (v6 = v5(a1))
           : (v6 = *(_QWORD *)(a1 + 96)),
             (*(_DWORD *)(a3 + 8) <= (int)time(nullptr) || (int)sub_79DA80(v6) <= 0)
          && (v7 = *(unsigned __int8 (__fastcall ***)(__int64))a3, *(_DWORD *)(a3 + 8) = 0, (*v7)(a3))) )
  {
    return 0;
  }
  else
  {
    v8 = (unsigned int *)sub_79FBE0(a1, a2);
    v9 = *(_DWORD *)(a1 + 248);
    if ( v9 > 0 )
      *(_DWORD *)(a1 + 248) = v9 - 1;
    v10 = 0;
    if ( v8 )
    {
      *(_QWORD *)(a1 + 272) = 0;
      v11 = *(void **)(a1 + 264);
      v12 = *v8 + 5LL;
      v13 = v12;
      if ( *(_QWORD *)(a1 + 280) < v12 )
      {
        v18 = qvector_reserve(a1 + 264, *(_QWORD *)(a1 + 264), v12, 1);
        v19 = *(_QWORD *)(a1 + 272);
        *(_QWORD *)(a1 + 264) = v18;
        v13 = v12 - v19;
        v11 = (void *)(v18 + v19);
      }
      memset(v11, 0, v13);
      *(_QWORD *)(a1 + 272) = v12;
      memcpy(*(void **)(a1 + 264), v8, v12);
      v10 = sub_79E760(a1, v8);
      if ( (unsigned __int8)sub_79E740(a1) )
        nullsub_225();
    }
    qfree(v8);
  }
  return v10;
}

