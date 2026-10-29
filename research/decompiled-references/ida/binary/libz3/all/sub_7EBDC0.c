__int64 __fastcall sub_7EBDC0(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, _BYTE *a6)
{
  char **exception; // rbx
  unsigned int v7; // r13d
  __int64 v9; // rax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rax
  __int64 *v18; // r13
  unsigned int v19; // r14d
  __int64 *v20; // r15
  __int64 v21; // rsi
  int v22; // eax
  __int64 *v23; // r12
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 (*v26)(void); // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned int v30; // esi
  __int64 v31; // r8
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // r12d
  _QWORD *v36; // rdx
  __int64 v37; // rbp
  bool v38; // r14
  __int64 v39; // rax
  _QWORD *v40; // rax
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  int v47; // [rsp+8h] [rbp-70h]
  int v48; // [rsp+8h] [rbp-70h]
  unsigned int v49; // [rsp+8h] [rbp-70h]
  int v50; // [rsp+8h] [rbp-70h]
  unsigned int v51; // [rsp+Ch] [rbp-6Ch]
  unsigned int v52; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v53[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(unsigned __int8 *)(a1 + 2600);
  if ( !(_BYTE)v7 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 3184LL) )
    return v7;
  v9 = *(_QWORD *)(a1 + 2592);
  v52 = -1;
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  v14 = sub_868430((int)a1 + 32, a3, a5, (unsigned int)&v52, (int)a1 + 2592, (_DWORD)a6);
  v15 = v14;
  if ( v14 == 1 )
  {
    ++*(_DWORD *)(a1 + 2364);
    return v7;
  }
  if ( !v14 )
  {
    if ( v52 == -1 )
    {
      v18 = *(__int64 **)(a1 + 200);
      v19 = *(_DWORD *)a5;
      if ( v18 )
      {
        v20 = &v18[*((unsigned int *)v18 - 1)];
        while ( v20 != v18 )
        {
          v21 = *v18++;
          sub_7EB550(a1, v21, v19);
        }
      }
      v22 = *(_DWORD *)(*(_QWORD *)(a5 + 16) + 20LL);
      v23 = (__int64 *)(a3 + 8LL * (unsigned int)(v22 - 1));
      if ( v22 )
      {
        do
        {
          sub_7EB550(a1, *v23, v19);
          v24 = v23--;
        }
        while ( v24 != (__int64 *)a3 );
      }
    }
    else if ( *(_DWORD *)(a1 + 2520) >= a4 )
    {
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  if ( a2 )
  {
    v47 = v14;
    v16 = sub_7E9510((_QWORD *)a1, v52, a4, a5, a3);
    sub_7EB1F0(a1, v47 == -1, v52, v16);
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 8);
    v26 = *(__int64 (**)(void))(*(_QWORD *)v25 + 432LL);
    v27 = (unsigned int)(8 * *(_DWORD *)(*(_QWORD *)(a5 + 16) + 20LL));
    if ( (char *)v26 == (char *)sub_79EFF0 )
    {
      v28 = v25 + 2144;
    }
    else
    {
      v51 = 8 * *(_DWORD *)(*(_QWORD *)(a5 + 16) + 20LL);
      v50 = v15;
      v44 = v26();
      v27 = v51;
      v15 = v50;
      v28 = v44;
    }
    v48 = v15;
    v29 = sub_180C100(v28, v27);
    v30 = v52;
    v31 = v29;
    v32 = *(_DWORD *)(*(_QWORD *)(a5 + 16) + 20LL);
    if ( v32 )
    {
      if ( v32 - 1 <= 2 || v29 == a3 + 8 )
      {
        v45 = 0;
        do
        {
          *(_QWORD *)(v31 + v45) = *(_QWORD *)(a3 + v45);
          v45 += 8;
        }
        while ( 8LL * v32 != v45 );
      }
      else
      {
        v33 = 0;
        do
        {
          *(__m128i *)(v31 + v33) = _mm_loadu_si128((const __m128i *)(a3 + v33));
          v33 += 16;
        }
        while ( 16LL * (v32 >> 1) != v33 );
        if ( (v32 & 1) != 0 )
          *(_QWORD *)(v31 + 8LL * (v32 & 0xFFFFFFFE)) = *(_QWORD *)(a3 + 8LL * (v32 & 0xFFFFFFFE));
      }
    }
    v34 = sub_7E9510((_QWORD *)a1, v30, a4, a5, v31);
    v35 = v52;
    v36 = *(_QWORD **)(a1 + 1248);
    v37 = v34;
    v38 = v48 == -1;
    if ( v36 )
    {
      v39 = *((unsigned int *)v36 - 1);
      if ( (_DWORD)v39 == *((_DWORD *)v36 - 2) )
      {
        v41 = 16 * ((unsigned int)(3 * v39 + 1) >> 1) + 8;
        if ( 16 * (int)v39 + 8 >= (unsigned int)v41 || (unsigned int)v39 >= (unsigned int)(3 * v39 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v53, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v53);
          sub_233E40((__int64)v53);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v49 = (unsigned int)(3 * v39 + 1) >> 1;
        v42 = (unsigned int *)sub_186B300(v36 - 1, v41);
        v36 = v42 + 2;
        *v42 = v49;
        v43 = v42[1];
        *(_QWORD *)(a1 + 1248) = v36;
        v40 = &v36[2 * v43];
      }
      else
      {
        v40 = &v36[2 * v39];
      }
    }
    else
    {
      v46 = (_QWORD *)sub_186B270(0x28u);
      v36 = v46 + 1;
      *v46 = 2;
      *(_QWORD *)(a1 + 1248) = v46 + 1;
      v40 = v46 + 1;
    }
    *(_BYTE *)v40 = v38;
    *((_DWORD *)v40 + 1) = v35;
    v40[1] = v37;
    ++*((_DWORD *)v36 - 1);
  }
  *a6 = 1;
  return v7;
}

