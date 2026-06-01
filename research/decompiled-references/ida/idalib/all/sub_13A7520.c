void __fastcall sub_13A7520(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  _DWORD *v12; // r14
  volatile signed __int32 **v13; // r12
  volatile signed __int32 **v14; // r15
  volatile signed __int32 **v15; // rdi
  volatile signed __int32 *v16; // rax
  int v17; // r14d
  int v18; // ecx
  volatile signed __int32 *v19; // rax
  int v20; // ecx
  _QWORD *v21; // [rsp+0h] [rbp-58h]
  volatile signed __int32 *v22; // [rsp+8h] [rbp-50h]
  volatile signed __int32 *v23; // [rsp+8h] [rbp-50h]
  __int64 v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v21 = (_QWORD *)(a1 + 16);
  v3 = sub_2237400(a1, a1 + 16, a2, 32, v24);
  v4 = *(_DWORD **)a1;
  v5 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v5 )
  {
    v6 = v3;
    do
    {
      v7 = *v4;
      *(_OWORD *)(v6 + 8) = 0;
      v4 += 8;
      v6 += 32;
      *(_QWORD *)(v6 - 8) = 0;
      *(_DWORD *)(v6 - 32) = v7;
      *(_QWORD *)(v6 - 24) = *((_QWORD *)v4 - 3);
      v8 = *((_QWORD *)v4 - 2);
      *((_QWORD *)v4 - 3) = 0;
      v9 = *(_QWORD *)(v6 - 16);
      *(_QWORD *)(v6 - 16) = v8;
      v10 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 2) = v9;
      v11 = *(_QWORD *)(v6 - 8);
      *(_QWORD *)(v6 - 8) = v10;
      *((_QWORD *)v4 - 1) = v11;
    }
    while ( v5 != (_QWORD *)v4 );
    v12 = *(_DWORD **)a1;
    v5 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 4;
          v13 = (volatile signed __int32 **)v5[1];
          v14 = (volatile signed __int32 **)v5[2];
          v15 = v13;
          if ( v14 != v13 )
          {
            if ( &_pthread_key_create )
            {
              do
              {
                while ( 1 )
                {
                  v16 = v13[1];
                  if ( v16 )
                  {
                    if ( !_InterlockedSub(v16 + 2, 1u) )
                    {
                      v22 = v16;
                      (*(void (__fastcall **)(volatile signed __int32 *, double))(*(_QWORD *)v16 + 16LL))(v16, 0.0);
                      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
                        break;
                    }
                  }
                  v13 += 2;
                  if ( v14 == v13 )
                    goto LABEL_13;
                }
                v13 += 2;
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 24LL))(v22);
              }
              while ( v14 != v13 );
            }
            else
            {
              do
              {
                v19 = v13[1];
                if ( v19 )
                {
                  v20 = *((_DWORD *)v19 + 2);
                  *((_DWORD *)v19 + 2) = v20 - 1;
                  if ( v20 == 1 )
                  {
                    v23 = v19;
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
                    v18 = *((_DWORD *)v23 + 3);
                    *((_DWORD *)v23 + 3) = v18 - 1;
                    if ( v18 == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 24LL))(v23);
                  }
                }
                v13 += 2;
              }
              while ( v14 != v13 );
            }
LABEL_13:
            v15 = (volatile signed __int32 **)v5[1];
          }
          if ( !v15 )
            break;
          operator delete(v15);
          if ( v5 == (_QWORD *)v12 )
          {
            v5 = *(_QWORD **)a1;
            goto LABEL_17;
          }
        }
      }
      while ( v5 != (_QWORD *)v12 );
      v5 = *(_QWORD **)a1;
    }
  }
LABEL_17:
  v17 = v24[0];
  if ( v21 != v5 )
    free(v5);
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 12) = v17;
}
