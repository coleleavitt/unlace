__int64 __fastcall std::_Sp_counted_ptr_inplace_searchable_container_meta_t__std::allocator_void______gnu_cxx::_Lock_policy_2___::vfunc_6(
        _QWORD *a1,
        _QWORD *a2,
        int a3)
{
  _QWORD *v3; // rbx
  volatile signed __int32 *v4; // rbp
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  _QWORD *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = *a2;
        break;
      case 2:
        v8 = (_QWORD *)*a2;
        v9 = (_QWORD *)operator new(0x20u);
        *v9 = *v8;
        v9[1] = v8[1];
        v10 = v8[2];
        v9[2] = v10;
        if ( v10 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
          else
            ++*(_DWORD *)(v10 + 8);
        }
        v9[3] = v8[3];
        *a1 = v9;
        break;
      case 3:
        v3 = (_QWORD *)*a1;
        if ( *a1 )
        {
          v4 = (volatile signed __int32 *)v3[2];
          if ( v4 )
          {
            v5 = v4 + 2;
            if ( *((_QWORD *)v4 + 1) == 0x100000001LL )
            {
              v11 = *(_QWORD *)v4;
              v12 = v3[2];
              *((_QWORD *)v4 + 1) = 0;
              (*(void (__fastcall **)(__int64, _QWORD *, volatile signed __int32 *))(v11 + 16))(v12, a2, v5);
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
            }
            else
            {
              if ( &_pthread_key_create )
              {
                v6 = _InterlockedExchangeAdd(v5, 0xFFFFFFFF);
              }
              else
              {
                v6 = *((_DWORD *)v4 + 2);
                *((_DWORD *)v4 + 2) = v6 - 1;
              }
              if ( v6 == 1 )
                sub_28E9C0(v4);
            }
          }
          operator delete(v3, 0x20u);
        }
        break;
    }
    return 0;
  }
  else
  {
    *a1 = &off_8943D8;
    return 0;
  }
}
