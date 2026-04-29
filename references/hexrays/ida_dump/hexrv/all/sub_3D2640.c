__int64 __fastcall sub_3D2640(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // r14
  volatile signed __int32 *v5; // rdi
  signed __int32 v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  void (__fastcall *v10)(_QWORD *); // rdx
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
          v9 = *(_QWORD **)(v2 + 8 * i);
          if ( v9 )
            break;
LABEL_14:
          if ( v3 == ++i )
            goto LABEL_18;
        }
        v10 = *(void (__fastcall **)(_QWORD *))(*v9 + 8LL);
        if ( v10 == sub_3CA9D0 )
        {
          v5 = (volatile signed __int32 *)v9[12];
          *v9 = &off_4BB878;
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
          v7 = v9[8];
          if ( v7 )
          {
            v9[9] = 0;
            qfree(v7);
          }
          v8 = v9[2];
          *v9 = &off_4BB838;
          if ( v8 )
          {
            v9[3] = 0;
            qfree(v8);
          }
          operator delete(v9, 0x68u);
          v2 = *a1;
          goto LABEL_14;
        }
        v10(v9);
        v2 = *a1;
      }
    }
LABEL_18:
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
