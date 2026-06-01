void __fastcall sub_98A210(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r12
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rsi
  __int64 v20; // rsi
  __int64 *v21; // rax
  int v22; // edi
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 *v26; // rdi
  char *v28; // [rsp+10h] [rbp-88h]
  __int64 v29; // [rsp+18h] [rbp-80h]
  void (*v30)(); // [rsp+20h] [rbp-78h]
  char *v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  __m128 v34; // [rsp+40h] [rbp-58h] BYREF
  __int64 v35; // [rsp+50h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 16);
  v4 = &v3[2 * *(unsigned int *)(a1 + 32)];
  if ( *(_DWORD *)(a1 + 24) )
    sub_98A090(&v34, v3, v4, a1 + 16, 0);
  else
    sub_98A090(&v34, v4, v4, a1 + 16, 1);
  v6 = v34.m128_u64[1];
  v5 = (_QWORD *)v34.m128_u64[0];
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * *(unsigned int *)(a1 + 32));
  sub_98A090(&v34, v7, v7, a1 + 16, 1);
  v8 = v34.m128_u64[0];
  if ( v5 != (_QWORD *)v34.m128_u64[0] )
  {
    while ( 1 )
    {
LABEL_4:
      v9 = *v5;
      if ( (*(_BYTE *)(*v5 + 28LL) & 0x7F) == 0x2B && (*(_BYTE *)(v9 + 29) & 1) != 0 )
      {
        v14 = sub_B68690(*v5);
        v15 = *(__int64 **)v14;
        v16 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
        if ( (unsigned __int64)v15 < v16 )
        {
          v19 = v15;
          while ( *(_WORD *)(*v19 + 36) != 350 )
          {
            if ( (__int64 *)v16 == ++v19 )
              goto LABEL_5;
          }
          if ( (__int64 *)v16 == v19 )
            goto LABEL_5;
LABEL_29:
          v20 = *v15;
          if ( *(_WORD *)(*v15 + 36) != 350 )
          {
            v21 = v15 + 1;
            do
              v20 = *v21++;
            while ( *(_WORD *)(v20 + 36) != 350 );
          }
          v22 = *((_DWORD *)v5 + 2);
          v23 = dword_23B6E18[*(unsigned int *)(v20 + 40)];
          if ( v22 != v23 )
          {
            v30 = *(void (**)())(*(_QWORD *)a3 + 32LL);
            v32 = sub_986660(v22);
            v33 = v24;
            v28 = sub_986660(v23);
            v29 = v25;
            sub_B62CC0(&v34, v9 + 40);
            v26 = (__int64 *)v34.m128_u64[0];
            if ( v30 != nullsub_331 )
            {
              ((void (__fastcall *)(__int64, _QWORD, unsigned __int64, unsigned __int64, char *, __int64, char *, __int64))v30)(
                a3,
                a2,
                v34.m128_u64[0],
                v34.m128_u64[1],
                v28,
                v29,
                v32,
                v33);
              v26 = (__int64 *)v34.m128_u64[0];
            }
            if ( v26 != &v35 )
              operator delete(v26);
          }
          goto LABEL_5;
        }
        if ( v15 != (__int64 *)v16 )
        {
          if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 350 )
          {
            v17 = (__int64 *)(v16 + 8);
            while ( v17 != v15 )
            {
              v18 = *v17++;
              if ( *(_WORD *)(v18 + 36) == 350 )
                goto LABEL_29;
            }
            goto LABEL_5;
          }
          goto LABEL_29;
        }
      }
LABEL_5:
      v10 = v5 + 2;
      if ( v5 + 2 == (_QWORD *)v6 )
      {
LABEL_14:
        v5 = (_QWORD *)v6;
        if ( v8 == v6 )
          return;
      }
      else
      {
        v11 = v5[2];
        if ( v11 == -8192 || v11 == -4096 )
        {
          v12 = v5 + 4;
          while ( 1 )
          {
            v5 = v12;
            if ( v12 == (_QWORD *)v6 )
              goto LABEL_14;
            v13 = *v12;
            v12 += 2;
            if ( v13 != -4096 && v13 != -8192 )
            {
              if ( (_QWORD *)v8 != v5 )
                goto LABEL_4;
              return;
            }
          }
        }
        v5 += 2;
        if ( (_QWORD *)v8 == v10 )
          return;
      }
    }
  }
}

