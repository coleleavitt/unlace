char __fastcall sub_BE3800(__int64 a1, __m128 a2, __m128 a3, __m128 a4)
{
  char **exception; // rbx
  __int64 v6; // rax
  char (__fastcall *v7)(__int64); // rax
  __int64 v8; // rdi
  char result; // al
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  unsigned int v24; // r13d
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 (__fastcall *i)(); // rcx
  unsigned int v36; // r13d
  unsigned int v37; // ecx
  unsigned int *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  __int64 v41[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_QWORD *)a1;
LABEL_2:
  v7 = *(char (__fastcall **)(__int64))(v6 + 176);
  v8 = a1;
  if ( v7 != sub_BDC800 )
  {
    while ( 1 )
    {
      result = v7(v8);
      if ( !result )
        return result;
LABEL_4:
      v10 = *(_QWORD *)(a1 + 72);
      if ( v10 )
      {
        v11 = 0;
        while ( v11 < *(_DWORD *)(v10 - 4) )
        {
          v12 = v11++;
          sub_BDFC50(a1, *(__int64 **)(v10 + 8 * v12), a2, a3, a4);
          v10 = *(_QWORD *)(a1 + 72);
          if ( !v10 )
            goto LABEL_8;
        }
        *(_DWORD *)(v10 - 4) = 0;
      }
LABEL_8:
      v13 = *(_QWORD *)(a1 + 80);
      v14 = 0;
      if ( v13 )
      {
        while ( v14 < *(_DWORD *)(v13 - 4) )
        {
          v15 = v14++;
          sub_BDD630(a1, *(char **)(16 * v15 + v13), *(__int64 **)(16 * v15 + v13 + 8));
          v13 = *(_QWORD *)(a1 + 80);
          if ( !v13 )
            goto LABEL_11;
        }
        *(_DWORD *)(v13 - 4) = 0;
      }
LABEL_11:
      v16 = *(_QWORD *)(a1 + 88);
      if ( v16 )
        break;
LABEL_15:
      v19 = *(_QWORD *)(a1 + 96);
      if ( v19 )
        goto LABEL_16;
LABEL_21:
      v22 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(*(_QWORD *)(v22 + 112) + 404LL) )
      {
        v23 = *(_QWORD *)(a1 + 64);
        if ( v23 )
        {
          v24 = *(_DWORD *)(a1 + 56);
          if ( v24 < *(_DWORD *)(v23 - 4) )
          {
            v26 = sub_180C100(v22 + 8400, 24);
            v27 = *(_QWORD **)(v22 + 9456);
            v28 = v26;
            *(_QWORD *)v26 = &off_1C4C070;
            *(_QWORD *)(v26 + 8) = a1 + 56;
            *(_DWORD *)(v26 + 16) = v24;
            if ( v27 )
            {
              v29 = *((_DWORD *)v27 - 1);
              if ( v29 == *((_DWORD *)v27 - 2) )
              {
                v36 = (3 * v29 + 1) >> 1;
                v37 = 8 * v36 + 8;
                if ( 8 * v29 + 8 >= v37 || v29 >= v36 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v41, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v41);
                  sub_233E40((__int64)v41);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v38 = (unsigned int *)sub_186B300(v27 - 1, v37);
                v39 = v38[1];
                v27 = v38 + 2;
                *(_QWORD *)(v22 + 9456) = v38 + 2;
                *v38 = v36;
                LODWORD(v38) = v39;
                v32 = &v27[v39];
                v31 = (_DWORD)v38 + 1;
              }
              else
              {
                v30 = v29;
                v31 = v29 + 1;
                v32 = &v27[v30];
              }
            }
            else
            {
              v40 = (_QWORD *)sub_186B270(0x18u);
              *v40 = 2;
              v31 = 1;
              v27 = v40 + 1;
              *(_QWORD *)(v22 + 9456) = v27;
              v32 = v27;
            }
            v33 = *(_QWORD *)(a1 + 64);
            *v32 = v28;
            *((_DWORD *)v27 - 1) = v31;
            v6 = *(_QWORD *)a1;
            if ( v33 )
            {
              v34 = *(unsigned int *)(a1 + 56);
              while ( (unsigned int)v34 < *(_DWORD *)(v33 - 4) )
              {
                for ( i = *(__int64 (__fastcall **)())(v6 + 392);
                      i == nullsub_733;
                      i = *(__int64 (__fastcall **)())(v6 + 392) )
                {
                  v34 = (unsigned int)(v34 + 1);
                  *(_DWORD *)(a1 + 56) = v34;
                  if ( (unsigned int)v34 >= *(_DWORD *)(v33 - 4) )
                    goto LABEL_2;
                }
                ((void (__fastcall *)(__int64, _QWORD))i)(a1, *(unsigned int *)(v33 + 4 * v34));
                v33 = *(_QWORD *)(a1 + 64);
                v6 = *(_QWORD *)a1;
                v34 = (unsigned int)(*(_DWORD *)(a1 + 56) + 1);
                *(_DWORD *)(a1 + 56) = v34;
                if ( !v33 )
                  goto LABEL_2;
              }
            }
            goto LABEL_2;
          }
        }
      }
      v8 = a1;
      v7 = *(char (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL);
      if ( v7 == sub_BDC800 )
        goto LABEL_3;
    }
    v17 = 0;
    while ( v17 < *(_DWORD *)(v16 - 4) )
    {
      v18 = v17++;
      sub_BE28F0(a1, *(__int64 **)(16 * v18 + v16), *(_QWORD **)(16 * v18 + v16 + 8));
      v16 = *(_QWORD *)(a1 + 88);
      if ( !v16 )
        goto LABEL_15;
    }
    v19 = *(_QWORD *)(a1 + 96);
    if ( v19 )
    {
LABEL_16:
      v20 = 0;
      do
      {
        if ( v20 >= *(_DWORD *)(v19 - 4) )
        {
          v25 = *(_QWORD *)(a1 + 88);
          if ( v25 )
            *(_DWORD *)(v25 - 4) = 0;
          *(_DWORD *)(v19 - 4) = 0;
          goto LABEL_21;
        }
        v21 = v20++;
        sub_BE3000(
          a1,
          *(_QWORD **)(16 * v21 + v19),
          *(_DWORD ***)(16 * v21 + v19 + 8),
          *(double *)a2.m128_u64,
          *(double *)a3.m128_u64,
          a4);
        v19 = *(_QWORD *)(a1 + 96);
      }
      while ( v19 );
      v16 = *(_QWORD *)(a1 + 88);
      if ( !v16 )
        goto LABEL_21;
    }
    *(_DWORD *)(v16 - 4) = 0;
    goto LABEL_21;
  }
LABEL_3:
  result = sub_BDC800(v8);
  if ( result )
    goto LABEL_4;
  return result;
}

