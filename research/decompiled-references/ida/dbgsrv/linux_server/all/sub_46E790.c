/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E790
// Address: 0x000000000046E790

//----- (000000000046E790) ----------------------------------------------------
void __fastcall sub_46E790(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r12
  pthread_t v4; // rdx
  __int64 v5; // rdi
  const char *v6; // rax
  char *v7; // rdi

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88)) )
  {
    v2 = (__int64 *)operator new(0x18u);
    *v2 = a1;
    v3 = v2;
    v2[1] = (__int64)a2;
    v2[2] = (__int64)sub_4825A0(nullptr, 0);
    v4 = sub_482E20((void *(*)(void *))start_routine, v3);
    if ( v4 )
    {
      sub_46E2C0(a1, (unsigned __int64)a2, v4);
      v5 = v3[2];
      if ( v5 )
        sub_482760(v5);
    }
    else
    {
      v6 = (const char *)sub_47A200(-1);
      sub_45C330((__int64)a2, "Failed to create thread: %s; cannot handle session\n", v6);
      if ( a2 )
        (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      if ( v3 )
      {
        v7 = (char *)v3[2];
        *(_OWORD *)v3 = 0;
        sub_4826F0(v7);
        operator delete(v3, 0x18u);
      }
    }
  }
  else
  {
    sub_46E2C0(a1, (unsigned __int64)a2, 0);
    sub_46E5F0(a1, a2);
  }
}
