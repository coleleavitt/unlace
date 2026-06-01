__int64 __fastcall sub_2E85A0(_QWORD *a1, const char *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rbp
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rbp
  volatile signed __int32 *v9; // rdx
  signed __int32 v10; // eax
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // r13
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = *(_QWORD *)a2;
        break;
      case 2:
        v12 = *(_QWORD *)a2;
        v13 = operator new(0x38u);
        *(_QWORD *)v13 = *(_QWORD *)v12;
        v14 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v13 + 8) = v14;
        if ( v14 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
          else
            ++*(_DWORD *)(v14 + 8);
        }
        *(_QWORD *)(v13 + 16) = *(_QWORD *)(v12 + 16);
        v15 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)(v13 + 24) = v15;
        if ( v15 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
          else
            ++*(_DWORD *)(v15 + 8);
        }
        *(_QWORD *)(v13 + 32) = 0;
        *(_OWORD *)(v13 + 40) = 0;
        v16 = *(_QWORD *)(v12 + 40);
        if ( v16 )
        {
          v17 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 40));
          *(_QWORD *)(v13 + 32) = v17;
          *(_QWORD *)(v13 + 48) = v16;
          memcpy(v17, *(const void **)(v12 + 32), v16);
          *(_QWORD *)(v13 + 40) = v16;
        }
        *a1 = v13;
        break;
      case 3:
        v3 = (_QWORD *)*a1;
        if ( *a1 )
        {
          v4 = v3[4];
          if ( v4 )
          {
            v3[5] = 0;
            qfree(v4, a2);
          }
          v5 = (volatile signed __int32 *)v3[3];
          if ( v5 )
          {
            v6 = v5 + 2;
            if ( *((_QWORD *)v5 + 1) == 0x100000001LL )
            {
              v20 = *(_QWORD *)v5;
              v21 = v3[3];
              *((_QWORD *)v5 + 1) = 0;
              (*(void (__fastcall **)(__int64, const char *, volatile signed __int32 *))(v20 + 16))(v21, a2, v6);
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
            }
            else
            {
              if ( &_pthread_key_create )
              {
                v7 = _InterlockedExchangeAdd(v6, 0xFFFFFFFF);
              }
              else
              {
                v7 = *((_DWORD *)v5 + 2);
                *((_DWORD *)v5 + 2) = v7 - 1;
              }
              if ( v7 == 1 )
                sub_28E9C0(v5);
            }
          }
          v8 = (volatile signed __int32 *)v3[1];
          if ( v8 )
          {
            v9 = v8 + 2;
            if ( *((_QWORD *)v8 + 1) == 0x100000001LL )
            {
              v18 = *(_QWORD *)v8;
              v19 = v3[1];
              *((_QWORD *)v8 + 1) = 0;
              (*(void (__fastcall **)(__int64, const char *, volatile signed __int32 *))(v18 + 16))(v19, a2, v9);
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 24LL))(v8);
            }
            else
            {
              if ( &_pthread_key_create )
              {
                v10 = _InterlockedExchangeAdd(v9, 0xFFFFFFFF);
              }
              else
              {
                v10 = *((_DWORD *)v8 + 2);
                *((_DWORD *)v8 + 2) = v10 - 1;
              }
              if ( v10 == 1 )
                sub_28E9C0(v8);
            }
          }
          operator delete(v3, 0x38u);
        }
        break;
    }
    return 0;
  }
  else
  {
    *a1 = &`typeinfo for'JumpAnywhereDialog::on_search_input_changed(QT::QString const&)::{lambda(bool,qvector<search_result_t *>)#1};
    return 0;
  }
}
