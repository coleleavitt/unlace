void __fastcall sub_DF9830(_QWORD *a1, std::ostream *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r14
  char v5; // si
  std::ostream *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64); // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, unsigned int); // rax
  __int64 v13; // [rsp+10h] [rbp-D0h]
  void *ptr[2]; // [rsp+20h] [rbp-C0h] BYREF
  _BYTE v16[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (__int64 *)a1[95];
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    while ( v3 != v2 )
    {
      v7 = *a1;
      v8 = *v2;
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*a1 + 104LL);
      if ( v9 == sub_DF5F90 )
      {
        ptr[0] = v16;
        ptr[1] = (void *)0x1000000000LL;
        (*(void (__fastcall **)(_QWORD *, std::ostream *, __int64, _QWORD, _QWORD, _QWORD, void **))(v7 + 96))(
          a1,
          a2,
          v8,
          0,
          0,
          0,
          ptr);
        if ( ptr[0] != v16 && ptr[0] )
          sub_186B220(ptr[0]);
      }
      else
      {
        v9((__int64)a1, (__int64)a2, v8, 0);
      }
      v10 = *(_QWORD *)(*(_QWORD *)a2 - 24LL);
      v11 = *(_QWORD *)((char *)a2 + v10 + 240);
      if ( !v11 )
        std::__throw_bad_cast();
      if ( *(_BYTE *)(v11 + 56) )
      {
        v5 = *(_BYTE *)(v11 + 67);
      }
      else
      {
        v13 = *(_QWORD *)((char *)a2 + v10 + 240);
        std::ctype<char>::_M_widen_init();
        v5 = 10;
        v12 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
        if ( v12 != sub_26BE90 )
          v5 = v12(v13, 10u);
      }
      ++v2;
      v6 = (std::ostream *)std::ostream::put(a2, v5);
      std::ostream::flush(v6);
    }
  }
}

