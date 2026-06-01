__int64 __fastcall sub_18F1340(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // r15d
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v35; // [rsp+10h] [rbp-148h]
  signed __int64 v36; // [rsp+10h] [rbp-148h]
  __int64 v37; // [rsp+10h] [rbp-148h]
  __int64 v38; // [rsp+10h] [rbp-148h]
  void *v39; // [rsp+18h] [rbp-140h]
  _BYTE *v40; // [rsp+18h] [rbp-140h]
  __int64 v41; // [rsp+20h] [rbp-138h]
  __int64 v42; // [rsp+28h] [rbp-130h] BYREF
  _QWORD *v43; // [rsp+38h] [rbp-120h] BYREF
  __int64 v44; // [rsp+40h] [rbp-118h] BYREF
  __int64 v45; // [rsp+48h] [rbp-110h]
  char v46; // [rsp+54h] [rbp-104h]
  void *ptr; // [rsp+60h] [rbp-F8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-F0h]
  _BYTE v49[24]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+98h] [rbp-C0h]

  v7 = *(_QWORD **)(a1 + 248);
  v42 = a3;
  v8 = sub_A62D20(v7, a3);
  v10 = sub_21F90D0(v7, a3, v9);
  if ( v8 == v10 )
    sub_21FFBD0(&v44, v8);
  else
    sub_21FBA00(&v44, v8);
  v11 = (*(_DWORD *)(a1 + 224) >> 3) & 7;
  if ( ((*(_DWORD *)(a1 + 224) >> 3) & 7) == 7 )
    v11 = 1;
  v12 = sub_13E4440(a2, (__int64)&v44, v11);
  v13 = v12;
  if ( (v12 & 4) != 0 )
  {
    ptr = v49;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8080);
    if ( v8 == v10 )
      sub_21FFC40(&v50, v10, 0);
    else
      sub_21FD1F0(&v50, v8, 0);
    if ( v10 == v50 )
      sub_2200380(&v50, 0);
    else
      sub_21FAA70(&v50, 0);
    if ( v10 == v50 )
      sub_2204E00(&v50, &ptr, 0, 3, 1);
    else
      sub_2203EA0(&v50, &ptr, 0, 3, 1);
    if ( v10 == v50 )
    {
      v31 = v51;
      if ( v51 )
      {
        v32 = 24LL * *(_QWORD *)(v51 - 8);
        v33 = v51 + v32;
        if ( v51 != v51 + v32 )
        {
          while ( 1 )
          {
            v31 = v33 - 24;
            v38 = v33;
            sub_9955A0((_QWORD *)(v33 - 24));
            if ( v51 == v31 )
              break;
            v33 = v31;
          }
          v32 = 24LL * *(_QWORD *)(v38 - 32);
        }
        operator delete[]((void *)(v31 - 8), v32 + 8);
      }
    }
    else
    {
      sub_21F9830(&v50);
    }
    v14 = 6897;
  }
  else
  {
    if ( (v12 & 8) == 0 )
      goto LABEL_19;
    if ( v44 == v10 )
    {
      if ( (*(_BYTE *)(v45 + 20) & 7) != 3 )
        goto LABEL_19;
    }
    else if ( (v46 & 7) != 3 )
    {
      goto LABEL_19;
    }
    ptr = v49;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8080);
    if ( v8 == v10 )
      sub_21FFC40(&v50, v10, 0);
    else
      sub_21FD1F0(&v50, v8, 0);
    if ( v10 == v50 )
      sub_22004A0(&v50, 0);
    else
      sub_21FAB30(&v50, 0);
    if ( v10 == v50 )
      sub_2204E00(&v50, &ptr, 0, 3, 1);
    else
      sub_2203EA0(&v50, &ptr, 0, 3, 1);
    if ( v10 == v50 )
    {
      v28 = v51;
      if ( v51 )
      {
        v29 = 24LL * *(_QWORD *)(v51 - 8);
        v30 = v51 + v29;
        if ( v51 != v51 + v29 )
        {
          while ( 1 )
          {
            v28 = v30 - 24;
            v37 = v30;
            sub_9955A0((_QWORD *)(v30 - 24));
            if ( v51 == v28 )
              break;
            v30 = v28;
          }
          v29 = 24LL * *(_QWORD *)(v37 - 32);
        }
        operator delete[]((void *)(v28 - 8), v29 + 8);
      }
    }
    else
    {
      sub_21F9830(&v50);
    }
    v14 = 6898;
  }
  sub_168B9F0((__int64)&v50, (__int64 *)(a1 + 8), a4, v14, 0);
  v15 = sub_1605D30((__int64)&v50, &v42);
  v16 = v15;
  if ( *(_BYTE *)(v15 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v15 + 32), ptr, si128.m128i_i64[0]);
  }
  else if ( *(_BYTE *)(v15 + 132) )
  {
    v39 = ptr;
    v35 = si128.m128i_i64[0];
    v21 = sub_168B9E0((_QWORD *)v15);
    v23 = v35;
    v24 = (__int64)v39;
    v25 = v21;
    v26 = *(_QWORD **)(v16 + 16);
    if ( v26 )
    {
      v41 = v25;
      v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, void *))(*v26 + 32LL))(v26, *v26, v35, v39);
      v25 = v41;
      v24 = (__int64)v39;
      v23 = v35;
    }
    v40 = (_BYTE *)v24;
    v36 = v23;
    v43 = v26;
    v27 = sub_1587BC0(v25, (__int64 *)&v43, v23, v24, v25, v22);
    sub_AEC220((unsigned __int8 **)(*v27 + 32LL * *(unsigned int *)(v16 + 128) + 8), v40, v36);
  }
  sub_15F7200(&v50);
  if ( ptr != v49 )
    free(ptr);
LABEL_19:
  v17 = sub_C0C840(*(_QWORD **)(a1 + 248), &v44, v13 == 0, v42, a4);
  if ( v10 == v44 )
  {
    if ( v45 )
    {
      v19 = 24LL * *(_QWORD *)(v45 - 8);
      v20 = v45 + v19;
      if ( v45 == v45 + v19 )
      {
        operator delete[]((void *)(v45 - 8), v19 + 8);
      }
      else
      {
        while ( 1 )
        {
          sub_9955A0((_QWORD *)(v20 - 24));
          if ( v45 == v20 - 24 )
            break;
          v20 -= 24;
        }
        operator delete[]((void *)(v20 - 32), 24LL * *(_QWORD *)(v20 - 32) + 8);
      }
    }
  }
  else
  {
    sub_21F9830(&v44);
  }
  return v17;
}
