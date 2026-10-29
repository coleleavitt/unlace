_QWORD *__fastcall sub_4F36D0(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rax
  __int64 v3; // r13
  __int64 *v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // rbp
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // ett
  __int64 v10; // rax
  signed __int32 v11; // eax
  int v12; // edx
  const char *v13; // rax
  char v14; // cl
  signed __int32 v15; // eax
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v2 = *a2;
  v23 = __readfsqword(0x28u);
  v3 = *v2;
  v4 = a2[1];
  v5 = *v4;
  v6 = *(_DWORD **)(*v4 + 96);
  if ( v6 )
  {
    v7 = v6[2];
    v8 = v6 + 2;
    while ( v7 )
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange(v8, v7 + 1, v7);
      if ( v9 == v7 )
      {
        if ( v6[2] )
        {
          v10 = *(_QWORD *)(v5 + 88);
          if ( v10 )
          {
            if ( !*(_BYTE *)(v10 + 24) )
            {
              if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
              {
                v20 = *(_QWORD *)v6;
                *((_QWORD *)v6 + 1) = 0;
                (*(void (__fastcall **)(_DWORD *))(v20 + 16))(v6);
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 24LL))(v6);
              }
              else
              {
                if ( &_pthread_key_create )
                {
                  v11 = _InterlockedExchangeAdd(v8, 0xFFFFFFFF);
                }
                else
                {
                  v11 = v6[2];
                  v6[2] = v11 - 1;
                }
                if ( v11 == 1 )
                  sub_420480(v6);
              }
              sub_4F31A0(&v21, (_QWORD *)(v5 + 40));
              v12 = DWORD2(v21);
              v13 = (const char *)v22;
              v14 = v21;
              goto LABEL_21;
            }
          }
        }
        v21 = 0;
        v22 = 0;
        if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
        {
          v19 = *(_QWORD *)v6;
          *((_QWORD *)v6 + 1) = 0;
          (*(void (__fastcall **)(_DWORD *))(v19 + 16))(v6);
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 24LL))(v6);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v15 = _InterlockedExchangeAdd(v8, 0xFFFFFFFF);
          }
          else
          {
            v15 = v6[2];
            v6[2] = v15 - 1;
          }
          if ( v15 == 1 )
            sub_420480(v6);
        }
        goto LABEL_20;
      }
    }
  }
  v21 = 0;
  v22 = 0;
LABEL_20:
  v14 = 0;
  v13 = "shutting down";
  v12 = -2147483646;
LABEL_21:
  DWORD2(v21) = v12;
  *(_QWORD *)&v22 = v13;
  v16 = _mm_loadu_si128((const __m128i *)((char *)&v21 + 8));
  *(_BYTE *)(v3 + 16) = v14;
  *(_BYTE *)(v3 + 48) = 1;
  *(__m128i *)(v3 + 24) = v16;
  v17 = **a2;
  **a2 = 0;
  *a1 = v17;
  return a1;
}

