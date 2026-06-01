void __fastcall sub_A04AB0(__int64 *a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  char v10; // al
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  const __m128i *v18; // rsi
  __m128i *v19; // rdi
  unsigned int v20; // edi
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // r12
  int v29; // [rsp+14h] [rbp-A4h] BYREF
  __int64 v30; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v32[136]; // [rsp+30h] [rbp-88h] BYREF

  v8 = sub_A00840(*a1, a2, a3);
  v9 = *a1;
  v29 = v8 >> 33;
  v10 = sub_9FDCD0((__int64 *)(v9 + 832), &v29, &v30);
  v11 = a4;
  v12 = v10 == 0;
  v13 = v30;
  if ( !v12 )
  {
    v14 = v30 + 8;
    goto LABEL_3;
  }
  v20 = *(_DWORD *)(v9 + 848);
  v21 = *(_DWORD *)(v9 + 840);
  v31[0] = v30;
  v22 = (unsigned int)(v21 + 1);
  v23 = (unsigned int)(4 * v22);
  v24 = 3 * v20;
  if ( (unsigned int)v23 >= (unsigned int)v24 )
  {
    sub_A048D0(v9 + 832, 2 * v20, v22, a4, v24, v23);
LABEL_17:
    sub_9FDCD0((__int64 *)(v9 + 832), &v29, v31);
    v11 = a4;
    LODWORD(v22) = *(_DWORD *)(v9 + 840) + 1;
    v13 = v31[0];
    goto LABEL_8;
  }
  v25 = v20 >> 3;
  if ( v20 - *(_DWORD *)(v9 + 844) - (unsigned int)v22 <= (unsigned int)v25 )
  {
    sub_A048D0(v9 + 832, v20, v22, a4, v25, v23);
    goto LABEL_17;
  }
LABEL_8:
  *(_DWORD *)(v9 + 840) = v22;
  if ( *(_DWORD *)v13 != -1 )
    --*(_DWORD *)(v9 + 844);
  v26 = v29;
  *(_QWORD *)(v13 + 16) = 0x100000000LL;
  v14 = v13 + 8;
  *(_DWORD *)v13 = v26;
  *(_QWORD *)(v13 + 8) = v13 + 24;
LABEL_3:
  v31[0] = a5;
  v31[1] = a6;
  sub_9FD050((__int64)v32, v11);
  v15 = *(unsigned int *)(v14 + 8);
  v16 = v15 + 1;
  if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(v14 + 12) )
  {
    v27 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 > (unsigned __int64)v31 || (unsigned __int64)v31 >= v27 + 88 * v15 )
    {
      sub_9F4B80(v14, v16);
      v17 = *(_QWORD *)v14;
      v15 = *(unsigned int *)(v14 + 8);
      v18 = (const __m128i *)v31;
    }
    else
    {
      sub_9F4B80(v14, v16);
      v17 = *(_QWORD *)v14;
      v15 = *(unsigned int *)(v14 + 8);
      v18 = (const __m128i *)((char *)v31 + *(_QWORD *)v14 - v27);
    }
  }
  else
  {
    v17 = *(_QWORD *)v14;
    v18 = (const __m128i *)v31;
  }
  v19 = (__m128i *)(v17 + 88 * v15);
  *v19 = _mm_loadu_si128(v18);
  sub_9E61E0((__int64)v19[1].m128i_i64, (__int64)v18[1].m128i_i64);
  ++*(_DWORD *)(v14 + 8);
  sub_9E5EF0((__int64)v32);
}

