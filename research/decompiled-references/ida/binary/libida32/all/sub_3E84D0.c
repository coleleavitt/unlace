unsigned __int64 __fastcall sub_3E84D0(int *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 license_manager; // rbx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a1 )
  {
    v1 = qword_2CA16A8;
    qmutex_lock(qword_2CA16A8);
    *(_QWORD *)(qword_2CA16B0 + 8LL * a1[22]) = 0;
    v2 = xmmword_2CA16B8 - 1;
    if ( (__int64)xmmword_2CA16B8 - 1 >= 0 )
    {
      while ( !*(_QWORD *)(qword_2CA16B0 + 8 * v2) )
      {
        if ( v2-- == 0 )
          goto LABEL_9;
      }
    }
    if ( (_DWORD)v2 == -1 )
    {
LABEL_9:
      license_manager = get_license_manager();
      if ( license_manager && !(unsigned __int8)is_cvt64() )
      {
        ptr = nullptr;
        v7 = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, void **))(*(_QWORD *)license_manager
                                                                                           + 80LL))(
                license_manager,
                0,
                0,
                1,
                &ptr)
          && (debug & 0x200) != 0 )
        {
          sub_383DA0();
        }
        if ( ptr )
        {
          *(_QWORD *)&v7 = 0;
          qfree(ptr);
        }
      }
      sub_3E7FB0((__int64)a1);
      sub_3E7960((__int64)a1);
      qword_2CA1698 = (__int64)a1;
      qmutex_unlock(v1);
    }
    else
    {
      sub_3E7FB0((__int64)a1);
      operator delete(a1, 0x6B8u);
      switch_dbctx((int)v2);
      qmutex_unlock(v1);
    }
  }
  return v8 - __readfsqword(0x28u);
}

