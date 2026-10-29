__int64 __fastcall sub_3CD300(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // r14
  volatile signed __int32 *v5; // rdi
  signed __int32 v6; // edx
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  void (__fastcall *v9)(_QWORD *); // rdx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        while ( 1 )
        {
          v8 = *(_QWORD **)(v2 + 8 * i);
          if ( v8 )
            break;
LABEL_14:
          if ( v3 == ++i )
            goto LABEL_18;
        }
        v9 = *(void (__fastcall **)(_QWORD *))(*v8 + 8LL);
        if ( v9 == sub_3C5E80 )
        {
          v5 = (volatile signed __int32 *)v8[12];
          *v8 = &off_4E8318;
          if ( v5 )
          {
            if ( &_pthread_key_create )
            {
              v6 = _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
            }
            else
            {
              v6 = *((_DWORD *)v5 + 3);
              *((_DWORD *)v5 + 3) = v6 - 1;
            }
            if ( v6 == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
          }
          if ( v8[8] )
          {
            v8[9] = 0;
            qfree();
          }
          v7 = v8[2];
          *v8 = &off_4E82D8;
          if ( v7 )
          {
            v8[3] = 0;
            qfree();
          }
          operator delete(v8, 0x68u);
          v2 = *a1;
          goto LABEL_14;
        }
        v9(v8);
        v2 = *a1;
      }
    }
LABEL_18:
    a1[1] = 0;
    return qfree();
  }
  return result;
}
