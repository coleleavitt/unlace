__int64 __fastcall sub_BD6CC0(_QWORD *a1, unsigned int a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **v6; // rbp
  char **exception; // rbp
  __int64 result; // rax
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r12
  __int64 v13; // r14
  _QWORD *v14; // rdx
  __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  unsigned int v27; // r13d
  __int64 *v28; // rsi
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r13d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39[11]; // [rsp+10h] [rbp-58h] BYREF

  result = a1[33];
  if ( !*(_BYTE *)(result + 17) || *(_QWORD *)(a3 + 24) == a3 )
  {
    do
    {
      v10 = a2;
      v11 = a2;
      a2 = *(_DWORD *)(a1[43] + 4LL * a2);
    }
    while ( v11 != a2 );
    v12 = *(_QWORD *)(a1[32] + 8 * v10);
    v13 = *(_QWORD *)(a1[56] + 8 * v10);
    v14 = *(_QWORD **)(v13 + 32);
    v15 = v13 + 32;
    if ( v14 )
    {
      v16 = *((_DWORD *)v14 - 1);
      if ( v16 == *((_DWORD *)v14 - 2) )
      {
        v29 = (3 * v16 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v30 || v16 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v39, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v14 - 1, v30);
        v32 = v31[1];
        v14 = v31 + 2;
        *(_QWORD *)(v13 + 32) = v31 + 2;
        *v31 = v29;
        LODWORD(v31) = v32;
        v19 = &v14[v32];
        v18 = (_DWORD)v31 + 1;
      }
      else
      {
        v17 = v16;
        v18 = v16 + 1;
        v19 = &v14[v17];
      }
    }
    else
    {
      v38 = (_QWORD *)sub_186B270(0x18u);
      v14 = v38 + 1;
      *v38 = 2;
      v18 = 1;
      *(_QWORD *)(v13 + 32) = v14;
      v19 = v14;
    }
    *v19 = a3;
    *((_DWORD *)v14 - 1) = v18;
    v20 = (_QWORD *)sub_180C100(a1 + 50, 16);
    v21 = (_QWORD *)a1[48];
    v22 = v20;
    *v20 = off_1C56E28;
    v20[1] = v15;
    if ( v21 )
    {
      v23 = *((_DWORD *)v21 - 1);
      if ( v23 == *((_DWORD *)v21 - 2) )
      {
        v33 = (3 * v23 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v34 || v23 >= v33 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v39, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v21 - 1, v34);
        v36 = v35[1];
        v21 = v35 + 2;
        *v35 = v33;
        a1[48] = v35 + 2;
        LODWORD(v35) = v36;
        v26 = &v21[v36];
        v25 = (_DWORD)v35 + 1;
      }
      else
      {
        v24 = v23;
        v25 = v23 + 1;
        v26 = &v21[v24];
      }
    }
    else
    {
      v37 = (_QWORD *)sub_186B270(0x18u);
      v21 = v37 + 1;
      *v37 = 2;
      v25 = 1;
      a1[48] = v21;
      v26 = v21;
    }
    *v26 = v22;
    *((_DWORD *)v21 - 1) = v25;
    result = a1[33];
    if ( !*(_BYTE *)(result + 16) )
    {
      if ( *(_BYTE *)(v12 + 24) )
      {
        result = *(_QWORD *)(v12 + 8);
        if ( result )
        {
          v27 = 0;
          do
          {
            if ( v27 >= *(_DWORD *)(result - 4) )
              break;
            v28 = *(__int64 **)(result + 8LL * v27);
            if ( !*(_BYTE *)(a1[33] + 17LL) || v28 == (__int64 *)v28[3] )
            {
              sub_BD5FC0((__int64)a1, v28, a3, a4, a5, a6);
              result = *(_QWORD *)(v12 + 8);
            }
            ++v27;
          }
          while ( result );
        }
      }
    }
  }
  return result;
}

