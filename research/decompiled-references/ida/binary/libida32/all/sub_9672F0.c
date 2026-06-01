void __fastcall sub_9672F0(_QWORD *a1, _QWORD *a2, unsigned int a3, char a4)
{
  __int64 *v4; // r12
  __int64 *v5; // rbx
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rsi
  void (*v13)(); // r10
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-98h] BYREF
  unsigned int *v22; // [rsp+8h] [rbp-90h]
  __m128 *v23; // [rsp+10h] [rbp-88h]
  unsigned __int8 v24; // [rsp+1Fh] [rbp-79h]
  __int64 v25; // [rsp+20h] [rbp-78h]
  void (*v26)(); // [rsp+28h] [rbp-70h]
  __m128 v27; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  char v30; // [rsp+50h] [rbp-48h]

  v4 = (__int64 *)a2[11];
  v5 = (__int64 *)a2[10];
  if ( v5 != v4 )
  {
    v22 = &v28;
    v8 = 8LL * a3;
    v9 = 16LL * a3;
    v24 = a4 ^ 1;
    v23 = &v27;
    do
    {
      while ( 1 )
      {
        if ( *v5 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1[14] + 48LL * *(unsigned int *)(*v5 + 48)) + v9) == 5 )
          {
            v10 = a2[4] & 0xFFFFFFFFFFFFFFF8LL;
            if ( v10 )
            {
              v21 = *v5;
              v27 = _mm_loadh_ps((const double *)&v21);
              sub_967150((__int64)v22, v23, v10);
              if ( v30 )
              {
                v11 = a1[2];
                v12 = *(_QWORD *)(a1[10] + v8);
                v13 = *(void (**)())(*(_QWORD *)v11 + 40LL);
                if ( (*(_BYTE *)(v12 + 29) & 1) != 0 )
                {
                  v14 = *(_QWORD *)(a1[10] + v8);
                  v26 = *(void (**)())(*(_QWORD *)v11 + 40LL);
                  v25 = v11;
                  v21 = v12;
                  v15 = sub_B68690(v14);
                  v12 = v21;
                  v11 = v25;
                  v16 = *(_QWORD *)v15;
                  v13 = v26;
                  v17 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
                  if ( *(_QWORD *)v15 < v17 )
                  {
                    v20 = *(_QWORD *)v15;
                    do
                    {
                      if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 414 )
                        break;
                      v20 += 8;
                    }
                    while ( v17 != v20 );
                  }
                  else if ( v16 != v17 && *(_WORD *)(*(_QWORD *)v17 + 36LL) != 414 )
                  {
                    v18 = v17 + 8;
                    do
                    {
                      v19 = v18;
                      if ( v16 == v18 )
                        break;
                      v18 += 8LL;
                    }
                    while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 414 );
                  }
                }
                if ( v13 != nullsub_314 )
                  break;
              }
            }
          }
        }
        v5 += 2;
        if ( v4 == v5 )
          return;
      }
      v5 += 2;
      ((void (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))v13)(
        v11,
        v12,
        *(_QWORD *)(a1[1] + 8LL),
        v29,
        v28,
        v24);
    }
    while ( v4 != v5 );
  }
}

