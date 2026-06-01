void __fastcall sub_A0AEB0(__int64 a1)
{
  _QWORD *v1; // r12
  _QWORD *v2; // rbp
  char *v3; // rdi
  char *v4; // r13
  char *v5; // r14
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  void (*v8)(); // rax
  signed __int32 v9; // eax
  __int64 (__fastcall *v10)(__int64); // rcx

  v1 = *(_QWORD **)a1;
  v2 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 == v2 )
    goto LABEL_20;
  do
  {
    while ( 1 )
    {
      v2 -= 4;
      v3 = (char *)v2[1];
      v4 = (char *)v2[2];
      v5 = v3;
      if ( v4 != v3 )
      {
        while ( 1 )
        {
          v6 = *((volatile signed __int32 **)v5 + 1);
          if ( !v6 )
            goto LABEL_5;
          if ( &_pthread_key_create )
          {
            if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
              goto LABEL_9;
LABEL_5:
            v5 += 16;
            if ( v4 == v5 )
              goto LABEL_16;
          }
          else
          {
            v7 = *((_DWORD *)v6 + 2);
            *((_DWORD *)v6 + 2) = v7 - 1;
            if ( v7 != 1 )
              goto LABEL_5;
LABEL_9:
            v8 = *(void (**)())(*(_QWORD *)v6 + 16LL);
            if ( v8 != nullsub_425 )
              ((void (__fastcall *)(volatile signed __int32 *))v8)(v6);
            if ( &_pthread_key_create )
            {
              v9 = _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
            }
            else
            {
              v9 = *((_DWORD *)v6 + 3);
              *((_DWORD *)v6 + 3) = v9 - 1;
            }
            if ( v9 != 1 )
              goto LABEL_5;
            v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL);
            if ( v10 != sub_A09830 )
            {
              v10((__int64)v6);
              goto LABEL_5;
            }
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
            v5 += 16;
            if ( v4 == v5 )
            {
LABEL_16:
              v3 = (char *)v2[1];
              break;
            }
          }
        }
      }
      if ( !v3 )
        break;
      operator delete(v3);
      if ( v2 == v1 )
        goto LABEL_19;
    }
  }
  while ( v2 != v1 );
LABEL_19:
  v2 = *(_QWORD **)a1;
LABEL_20:
  if ( v2 != (_QWORD *)(a1 + 16) )
    free(v2);
}
