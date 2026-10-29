/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3A64
// Address: 0x00000000000A3A64

//----- (00000000000A3A64) ----------------------------------------------------
void __fastcall sub_A3A64(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // x19
  pthread_t v5; // x0
  __int64 v6; // x0
  const char *v7; // x0
  __int64 v8; // x0

  if ( ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88)) & 1) != 0 )
  {
    v4 = operator new(0x18u);
    *v4 = a1;
    v4[1] = a2;
    v4[2] = qsem_create(nullptr, 0);
    v5 = qthread_create((void *(*)(void *))sub_A366C, v4);
    if ( v5 )
    {
      sub_A3B74(a1, (unsigned __int64)a2, v5);
      v6 = v4[2];
      if ( v6 )
        qsem_post(v6);
    }
    else
    {
      v7 = (const char *)qerrstr(0xFFFFFFFFLL);
      sub_8D3F8((__int64)a2, "Failed to create thread: %s; cannot handle session\n", v7);
      if ( a2 )
        (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      v8 = v4[2];
      *v4 = 0;
      v4[1] = 0;
      qsem_free(v8);
      operator delete(v4);
    }
  }
  else
  {
    sub_A3B74(a1, (unsigned __int64)a2, 0);
    sub_A36B0(a1, a2);
  }
}
