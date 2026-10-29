void __fastcall sub_9A9030(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 i; // r15
  __int64 v11; // rax
  void (*v12)(); // r14
  char *v13; // rdi
  unsigned int v15; // [rsp+1Ch] [rbp-64h]
  __m128i v18; // [rsp+28h] [rbp-58h] BYREF
  char v19; // [rsp+38h] [rbp-48h] BYREF

  if ( a5 - 2 > 1 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v7 = v6 + 32LL * *(unsigned int *)(a1 + 48);
    if ( v6 != v7 )
    {
      for ( i = *(_QWORD *)(a1 + 40); v7 != i; i += 32 )
      {
        while ( 1 )
        {
          v11 = sub_9A6250(a2, a3, (__int64 *)i);
          if ( !*(_DWORD *)(i + 24) )
            break;
          if ( !v11 )
            goto LABEL_8;
LABEL_5:
          i += 32;
          if ( v7 == i )
            return;
        }
        if ( !v11 )
          goto LABEL_5;
LABEL_8:
        v12 = *(void (**)())(*(_QWORD *)a6 + 48LL);
        v15 = *(_DWORD *)(a1 + 36);
        sub_9A8660(&v18, (__int64 *)i);
        v13 = (char *)v18.m128i_i64[0];
        if ( v12 != nullsub_352 )
        {
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v12)(
            a6,
            *(_QWORD *)(i + 8),
            *(_QWORD *)(i + 16),
            v18.m128i_i64[0],
            v18.m128i_i64[1],
            v15,
            a4,
            a5,
            0);
          v13 = (char *)v18.m128i_i64[0];
        }
        if ( v13 == &v19 )
          goto LABEL_5;
        operator delete(v13);
      }
    }
  }
}

