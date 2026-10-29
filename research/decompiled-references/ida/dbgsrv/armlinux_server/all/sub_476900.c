/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476900
// Address: 0x0000000000476900

//----- (0000000000476900) ----------------------------------------------------
void __fastcall sub_476900(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // x21
  pthread_t v5; // x0
  __int64 v6; // x0
  const char *v7; // x0
  __int64 v8; // x0

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88)) )
  {
    v4 = sub_49E050(0x18u);
    *v4 = a1;
    v4[1] = a2;
    v4[2] = sub_493CB0(nullptr, 0);
    v5 = sub_494528((void *(*)(void *))sub_476220, v4);
    if ( v5 )
    {
      sub_4767C0(a1, (unsigned __int64)a2, v5);
      v6 = v4[2];
      if ( v6 )
        sub_493F08(v6);
    }
    else
    {
      v7 = (const char *)sub_487060(-1);
      sub_463500((__int64)a2, "Failed to create thread: %s; cannot handle session\n", v7);
      if ( a2 )
        (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      if ( v4 )
      {
        v8 = v4[2];
        *v4 = 0;
        v4[1] = 0;
        sub_493E90(v8);
        j_j__free_0(v4);
      }
    }
  }
  else
  {
    sub_4767C0(a1, (unsigned __int64)a2, 0);
    sub_476068(a1, a2);
  }
}
