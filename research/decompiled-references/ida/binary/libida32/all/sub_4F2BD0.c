__int64 __fastcall sub_4F2BD0(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rbp
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  _QWORD *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi

  switch ( a3 )
  {
    case 1:
      *a1 = *a2;
      break;
    case 2:
      v8 = (_QWORD *)*a2;
      v9 = (_QWORD *)operator new(0x10u);
      *v9 = *v8;
      v10 = v8[1];
      v9[1] = v10;
      if ( v10 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
        else
          ++*(_DWORD *)(v10 + 8);
      }
      *a1 = v9;
      break;
    case 3:
      v4 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v5 = (volatile signed __int32 *)v4[1];
        if ( v5 )
        {
          v6 = v5 + 2;
          if ( *((_QWORD *)v5 + 1) == 0x100000001LL )
          {
            v11 = *(_QWORD *)v5;
            v12 = v4[1];
            *((_QWORD *)v5 + 1) = 0;
            (*(void (__fastcall **)(__int64, _QWORD *, volatile signed __int32 *))(v11 + 16))(v12, a2, v6);
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
              sub_420480(v5);
          }
        }
        operator delete(v4, 0x10u);
      }
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}

