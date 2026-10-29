void __fastcall sub_2267EB0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r13
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 *v9; // r15
  __int64 *v10; // rbx
  volatile signed __int32 *v11; // rbp
  int v12; // ebp
  int v13; // eax
  _DWORD *v14; // rbp
  int v15; // eax
  unsigned __int64 v16[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, (void *)(a1 + 16), a2, 16, v16);
  v3 = *(__int64 **)a1;
  v4 = 16LL * *(unsigned int *)(a1 + 8);
  v5 = (__int64 *)(*(_QWORD *)a1 + v4);
  if ( *(__int64 **)a1 != v5 )
  {
    v6 = v2;
    do
    {
      v7 = *v3;
      v6[1] = 0;
      v3 += 2;
      v6 += 2;
      *(v6 - 2) = v7;
      v8 = *(v3 - 1);
      *(v3 - 1) = 0;
      *(v6 - 1) = v8;
      *(v3 - 2) = 0;
    }
    while ( v5 != v3 );
    v9 = *(__int64 **)a1;
    v5 = (__int64 *)(*(_QWORD *)a1 + v4);
    if ( *(__int64 **)a1 != v5 )
    {
      if ( &_pthread_key_create )
      {
        v10 = v5 - 2;
        v11 = (volatile signed __int32 *)v10[1];
        if ( v11 )
          goto LABEL_9;
LABEL_7:
        while ( v9 != v10 )
        {
          while ( 1 )
          {
            v10 -= 2;
            v11 = (volatile signed __int32 *)v10[1];
            if ( !v11 )
              break;
LABEL_9:
            if ( _InterlockedSub(v11 + 2, 1u) )
              goto LABEL_7;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
            if ( _InterlockedSub(v11 + 3, 1u) )
              goto LABEL_7;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 24LL))(v11);
            if ( v9 == v10 )
              goto LABEL_12;
          }
        }
      }
      else
      {
        do
        {
          v5 -= 2;
          v14 = (_DWORD *)v5[1];
          if ( v14 )
          {
            v15 = v14[2];
            v14[2] = v15 - 1;
            if ( v15 == 1 )
            {
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
              v13 = v14[3];
              v14[3] = v13 - 1;
              if ( v13 == 1 )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 24LL))(v14);
            }
          }
        }
        while ( v9 != v5 );
      }
LABEL_12:
      v5 = *(__int64 **)a1;
    }
  }
  v12 = v16[0];
  if ( (__int64 *)(a1 + 16) != v5 )
    free(v5);
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 12) = v12;
}
