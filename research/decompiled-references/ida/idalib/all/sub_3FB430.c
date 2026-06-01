unsigned __int64 __fastcall sub_3FB430(int *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 license_manager; // rbx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( a1 )
  {
    v2 = qword_2CCB5A8;
    v4 = qword_2CCB5A8;
    qmutex_lock(qword_2CCB5A8);
    *(_QWORD *)(qword_2CCB5B0 + 8LL * a1[22]) = 0;
    v5 = xmmword_2CCB5B8 - 1;
    if ( (__int64)xmmword_2CCB5B8 - 1 >= 0 )
    {
      while ( !*(_QWORD *)(qword_2CCB5B0 + 8 * v5) )
      {
        if ( v5-- == 0 )
          goto LABEL_9;
      }
    }
    if ( (_DWORD)v5 == -1 )
    {
LABEL_9:
      license_manager = get_license_manager();
      if ( license_manager && !(unsigned __int8)is_cvt64(v4, a2, v8) )
      {
        ptr = nullptr;
        v11 = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, void **))(*(_QWORD *)license_manager
                                                                                           + 80LL))(
                license_manager,
                0,
                0,
                1,
                &ptr)
          && (debug & 0x200) != 0 )
        {
          sub_3879F0();
        }
        if ( ptr )
        {
          *(_QWORD *)&v11 = 0;
          qfree(ptr);
        }
      }
      sub_3FAF10((__int64)a1);
      sub_3FA820((__int64)a1);
      qword_2CCB598 = (__int64)a1;
      qmutex_unlock(v2);
    }
    else
    {
      sub_3FAF10((__int64)a1);
      operator delete(a1, 0x780u);
      switch_dbctx((int)v5);
      qmutex_unlock(v2);
    }
  }
  return v12 - __readfsqword(0x28u);
}
