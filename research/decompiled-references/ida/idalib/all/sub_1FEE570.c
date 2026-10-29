__int64 __fastcall sub_1FEE570(_QWORD *a1, _QWORD **a2, int a3)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  volatile signed __int32 *v8; // rbp
  signed __int32 v9; // eax
  signed __int32 v10; // eax

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = (_QWORD *)operator new(0x10u);
      *v5 = *v4;
      v6 = v4[1];
      v5[1] = v6;
      if ( v6 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
        else
          ++*(_DWORD *)(v6 + 8);
      }
      *a1 = v5;
      return 0;
    case 3:
      v7 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v8 = (volatile signed __int32 *)v7[1];
      if ( v8 )
      {
        if ( &_pthread_key_create )
        {
          v9 = _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
        }
        else
        {
          v9 = *((_DWORD *)v8 + 2);
          *((_DWORD *)v8 + 2) = v9 - 1;
        }
        if ( v9 == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
          if ( &_pthread_key_create )
          {
            v10 = _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF);
          }
          else
          {
            v10 = *((_DWORD *)v8 + 3);
            *((_DWORD *)v8 + 3) = v10 - 1;
          }
          if ( v10 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 24LL))(v8);
        }
      }
      operator delete(v7, 0x10u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}
