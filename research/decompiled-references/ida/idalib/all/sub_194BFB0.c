unsigned __int64 __fastcall sub_194BFB0(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  unsigned int v8; // edx
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rax
  char v12; // r14
  _BYTE *v13; // rsi
  const __m128i *v14; // r15
  const __m128i *v15; // r12
  const __m128i *v16; // rcx
  __int64 v17; // rax
  __m128 *v18; // rax
  __int64 v19; // rdx
  bool v20; // al
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // ecx
  _QWORD *v26; // rdi
  int v27; // esi
  signed __int64 v28; // [rsp+18h] [rbp-230h]
  void *v29; // [rsp+20h] [rbp-228h] BYREF
  __int64 v30; // [rsp+28h] [rbp-220h]
  _BYTE v31[192]; // [rsp+30h] [rbp-218h] BYREF
  void *ptr; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-150h]
  _BYTE v34[256]; // [rsp+100h] [rbp-148h] BYREF
  int v35; // [rsp+200h] [rbp-48h]
  int v36; // [rsp+204h] [rbp-44h]

  v4 = a2;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    v6 = *a1;
    sub_18C79E0(*a1, 0, 4);
    if ( (*(_DWORD *)a2 & 0x20000) == 0 || (v8 = *(_DWORD *)(a2 + 28)) == 0 )
    {
      v11 = sub_18CBA40((__int64)a1, *(_QWORD *)(a2 + 32));
      if ( v11 )
        v4 = sub_C98D20(
               *(_QWORD **)(*a1 + 248),
               *(_DWORD *)(a2 + 16),
               v11,
               *(_DWORD *)(a2 + 20),
               *(unsigned int *)(a2 + 24),
               0,
               nullptr,
               0);
      else
        v4 = 1;
      goto LABEL_9;
    }
    v9 = v8;
    v10 = sub_194BE00(a1, a2 + 40, v8, a3, a4);
    if ( v10 )
    {
      v4 = sub_C98D20(
             *(_QWORD **)(*a1 + 248),
             *(_DWORD *)(a2 + 16),
             *(_QWORD *)(a2 + 32),
             *(_DWORD *)(a2 + 20),
             *(unsigned int *)(a2 + 24),
             v10,
             nullptr,
             0);
LABEL_9:
      sub_190D5E0(v6, a3);
      return v4;
    }
    v35 = *(_DWORD *)(a2 + 20);
    ptr = v34;
    v36 = v35;
    v33 = 0x800000000LL;
    v12 = sub_194A2E0(a1, a1, a2 + 40, (__int64)a1, a2 + 40 + 24 * v9, (__int64)&ptr, 1u);
    if ( v12 )
    {
      v4 = 1;
LABEL_21:
      if ( ptr != v34 )
        free(ptr);
      goto LABEL_9;
    }
    v30 = 0x800000000LL;
    v13 = v31;
    v14 = (const __m128i *)ptr;
    v29 = v31;
    v15 = (const __m128i *)((char *)ptr + 32 * (unsigned int)v33);
    if ( v15 == ptr )
    {
      v22 = *(unsigned int *)(a2 + 24);
      v23 = 1;
      v25 = *(_DWORD *)(a2 + 20);
      v24 = *(_QWORD *)(a2 + 32);
      v27 = *(_DWORD *)(a2 + 16);
      v26 = *(_QWORD **)(*a1 + 248);
    }
    else
    {
      v16 = (const __m128i *)ptr;
      v17 = 0;
      while ( 1 )
      {
        a3 = (__m128)_mm_loadu_si128(v16);
        v18 = (__m128 *)&v13[24 * v17];
        *v18 = a3;
        v19 = v16[1].m128i_i64[0];
        LODWORD(v30) = v30 + 1;
        v18[1].m128_u64[0] = v19;
        v20 = sub_F1D570((__int64)v14);
        if ( v20 )
          v12 = v20;
        v14 += 2;
        v17 = (unsigned int)v30;
        if ( v14 == v15 )
          break;
        v21 = (unsigned int)v30 + 1LL;
        v13 = v29;
        v16 = v14;
        if ( v21 > HIDWORD(v30) )
        {
          if ( v29 > v14 || (char *)v29 + 24 * (unsigned int)v30 <= (char *)v14 )
          {
            sub_2237220(&v29, v31, v21, 24);
            v13 = v29;
            v16 = v14;
            v17 = (unsigned int)v30;
          }
          else
          {
            v28 = (char *)v14 - (_BYTE *)v29;
            sub_2237220(&v29, v31, v21, 24);
            v13 = v29;
            v16 = (const __m128i *)((char *)v29 + v28);
            v17 = (unsigned int)v30;
          }
        }
      }
      v22 = *(unsigned int *)(a2 + 24);
      v23 = (unsigned int)(v30 + 1);
      v24 = *(_QWORD *)(a2 + 32);
      v25 = *(_DWORD *)(a2 + 20);
      v26 = *(_QWORD **)(*a1 + 248);
      v27 = *(_DWORD *)(a2 + 16);
      if ( v12 )
      {
        v4 = sub_C98D20(v26, v27, v24, v25, v22, 0, (const __m128i *)v29, (unsigned int)v30);
        goto LABEL_25;
      }
    }
    v4 = sub_C98D20(v26, v27, v24, v25, v22, v23, nullptr, 0);
LABEL_25:
    if ( v29 != v31 )
      free(v29);
    goto LABEL_21;
  }
  return v4;
}
