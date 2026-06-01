__int64 __fastcall sub_ADA940(__int64 a1, __int64 a2)
{
  __m128i *exception; // r13
  char *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r15
  _DWORD *v9; // rax
  unsigned int v10; // r12d
  int v11; // eax
  _DWORD *v12; // rcx
  void *v13; // rdi
  void *v14; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r12
  unsigned int v19; // edx
  __int64 v20; // rsi
  int v21; // eax
  _QWORD *v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // r9d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+Ch] [rbp-DCh]
  unsigned int v30; // [rsp+10h] [rbp-D8h]
  unsigned int v31; // [rsp+14h] [rbp-D4h]
  __int64 *v32; // [rsp+18h] [rbp-D0h]
  _BYTE v33[16]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v34[32]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v35[32]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v36[3]; // [rsp+70h] [rbp-78h] BYREF
  void *v37; // [rsp+88h] [rbp-60h]
  __int64 v38; // [rsp+98h] [rbp-50h]
  void *v39; // [rsp+A0h] [rbp-48h]

  sub_16669D0(v33, a1);
  sub_15F01E0(v34, a1);
  sub_16744A0(v35, a1);
  v36[2] = 0;
  v37 = nullptr;
  v38 = 0;
  v36[0] = &off_1C62200;
  v39 = nullptr;
  v4 = (_QWORD *)sub_186B270(0x18u);
  v4[1] = a2;
  v5 = v4 + 1;
  *v4 = 0x100000002LL;
  while ( 1 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( !v6 )
    {
      v36[0] = &off_1C62200;
      if ( v39 )
      {
        sub_186B220(v39);
        v14 = v37;
        if ( !v37 )
        {
LABEL_16:
          v10 = 1;
          goto LABEL_17;
        }
      }
      else
      {
        v14 = v37;
        if ( !v37 )
          goto LABEL_16;
      }
      sub_186B220(v14);
      goto LABEL_16;
    }
    v7 = (unsigned int)(v6 - 1);
    v8 = v5[v7];
    *((_DWORD *)v5 - 1) = v7;
    if ( !(unsigned __int8)sub_15D37A0(v36, v8) )
    {
      sub_15D0A90(v36, v8, 1);
      v9 = *(_DWORD **)(v8 + 24);
      if ( (!v9 || *v9 != 5) && *(_QWORD *)(a1 + 840) != v8 )
      {
        v10 = sub_1673B10(v35, v8);
        if ( !(_BYTE)v10 )
        {
          v11 = sub_15F0200(v34);
          v12 = *(_DWORD **)(v8 + 24);
          if ( !v12 || v11 != *v12 || v12[1] )
          {
            v36[0] = &off_1C62200;
            if ( v39 )
            {
              sub_186B220(v39);
              v13 = v37;
              if ( !v37 )
              {
LABEL_17:
                sub_186B220(v5 - 1);
                return v10;
              }
            }
            else
            {
              v13 = v37;
              if ( !v37 )
                goto LABEL_17;
            }
            sub_186B220(v13);
            goto LABEL_17;
          }
          v32 = (__int64 *)sub_15F6BE0(v34, v8);
          v16 = *v32;
          if ( *v32 )
          {
            v31 = 0;
            do
            {
              if ( v31 >= *(_DWORD *)(v16 - 4) )
                break;
              v17 = *(_QWORD *)(v16 + 8LL * v31);
              if ( *(_DWORD *)(v17 + 32) )
              {
                v18 = *(_QWORD *)(v17 + 48);
                if ( v5 )
                {
                  v19 = 0;
                  goto LABEL_33;
                }
                v28 = (_QWORD *)sub_186B270(0x18u);
                v5 = v28 + 1;
                v19 = 0;
                v22 = v28 + 1;
                *v28 = 2;
                v21 = 1;
                while ( 1 )
                {
                  *v22 = v18;
                  ++v19;
                  *((_DWORD *)v5 - 1) = v21;
                  if ( v19 >= *(_DWORD *)(v17 + 32) )
                    break;
                  v18 = *(_QWORD *)(v17 + 8LL * v19 + 48);
LABEL_33:
                  v23 = *((_DWORD *)v5 - 1);
                  if ( v23 == *((_DWORD *)v5 - 2) )
                  {
                    v24 = (3 * v23 + 1) >> 1;
                    v25 = 8 * v24 + 8;
                    if ( 8 * v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
                    {
                      exception = (__m128i *)__cxa_allocate_exception(0x28u);
                      v3 = (char *)operator new(0x2Bu);
                      strcpy(v3, "Overflow encountered when expanding vector");
                      exception->m128i_i64[1] = (__int64)v3;
                      exception->m128i_i64[0] = (__int64)off_1C63128;
                      exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v30 = (3 * v23 + 1) >> 1;
                    v29 = v19;
                    v26 = (unsigned int *)sub_186B300(v5 - 1, v25);
                    v27 = v26[1];
                    v5 = v26 + 2;
                    v19 = v29;
                    *v26 = v30;
                    LODWORD(v26) = v27;
                    v22 = &v5[v27];
                    v21 = (_DWORD)v26 + 1;
                  }
                  else
                  {
                    v20 = v23;
                    v21 = v23 + 1;
                    v22 = &v5[v20];
                  }
                }
                v16 = *v32;
              }
              ++v31;
            }
            while ( v16 );
            if ( !v5 )
              break;
          }
        }
      }
    }
  }
  v36[0] = &off_1C62200;
  if ( v39 )
    sub_186B220(v39);
  if ( v37 )
    sub_186B220(v37);
  return 1;
}

