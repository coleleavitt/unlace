/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069A40
// Address: 0x0000000100069A40

//----- (0000000100069A40) ----------------------------------------------------
void __fastcall sub_100069A40(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r14
  pthread_t v3; // rax
  __int64 v4; // rdi
  const char *v5; // rax

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88)) )
  {
    v2 = operator new(0x18u);
    *v2 = a1;
    v2[1] = a2;
    v2[2] = qsem_create(nullptr, 0);
    v3 = qthread_create((void *(__cdecl *)(void *))sub_100069610, v2);
    if ( v3 )
    {
      sub_100069B50(a1, a2, &v3->__sig);
      v4 = v2[2];
      if ( v4 )
        qsem_post(v4);
    }
    else
    {
      v5 = (const char *)qerrstr(-1);
      sub_100054CC0((__int64)a2, "Failed to create thread: %s; cannot handle session\n", v5);
      if ( a2 )
        (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      *(_OWORD *)v2 = 0;
      qsem_free((_DWORD *)v2[2]);
      operator delete(v2);
    }
  }
  else
  {
    sub_100069B50(a1, a2, nullptr);
    sub_100069660(a1, a2);
  }
}
