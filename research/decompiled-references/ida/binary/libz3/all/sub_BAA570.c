__int64 __fastcall sub_BAA570(__int64 a1, signed int a2, signed int a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **v6; // r12
  char **exception; // r12
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // edx
  __int64 v16; // r13
  unsigned int *v17; // rbx
  unsigned int *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r12d
  int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // ecx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rax
  int v28; // esi
  __int64 v29; // rdi
  __int64 v30; // rdx
  _QWORD *v32; // rax
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  _QWORD *v36; // rax
  unsigned int v37; // [rsp+Ch] [rbp-84h]
  __int64 v38; // [rsp+10h] [rbp-80h]
  unsigned int v39; // [rsp+18h] [rbp-78h]
  __int64 v40; // [rsp+20h] [rbp-70h]
  int v41; // [rsp+20h] [rbp-70h]
  int v42; // [rsp+20h] [rbp-70h]
  __int64 v44[10]; // [rsp+40h] [rbp-50h] BYREF

  v8 = a3;
  v9 = a2;
  if ( a2 <= a3 )
  {
    v8 = a2;
    v9 = a3;
  }
  v10 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 24));
  v11 = sub_966440(a1, v10);
  v12 = *(_QWORD *)(a1 + 16);
  v37 = v11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 7488) + 48LL))(
    *(_QWORD *)(v12 + 7488),
    *(_QWORD *)(*(_QWORD *)(v12 + 8840) + 8LL * (v11 >> 1)));
  *(double *)a4.m128_u64 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 7488) + 64LL))(*(_QWORD *)(v12 + 7488));
  sub_BA8A20((_QWORD *)a1, v8, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, v9, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, v8, a4, a5, a6);
  v38 = *(_QWORD *)(a1 + 200) + 16LL * v8;
  sub_BA8A20((_QWORD *)a1, v9, a4, a5, a6);
  v13 = *(_QWORD *)(v38 + 8);
  v14 = *(_QWORD *)(a1 + 200) + 16LL * v9;
  if ( v13 && (v15 = *(_DWORD *)(v13 - 4)) != 0 )
  {
    v16 = 8LL * (unsigned int)(v15 - 1);
    v17 = nullptr;
    while ( 1 )
    {
      v19 = sub_966380(a1, *(_DWORD **)(v13 + v16), *(_DWORD **)(*(_QWORD *)(v14 + 8) + v16));
      v20 = v19;
      v21 = v19 ^ 1;
      if ( v17 )
      {
        v22 = *(v17 - 1);
        if ( (_DWORD)v22 == *(v17 - 2) )
        {
          v23 = (unsigned int)(3 * v22 + 1) >> 1;
          v24 = 4 * v23 + 8;
          if ( 4 * (int)v22 + 8 >= (unsigned int)v24 || (unsigned int)v22 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v44, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v39 = (unsigned int)(3 * v22 + 1) >> 1;
          v41 = v21;
          v25 = (unsigned int *)sub_186B300(v17 - 2, v24);
          v17 = v25 + 2;
          v21 = v41;
          *v25 = v39;
          v18 = &v25[v25[1] + 2];
        }
        else
        {
          v18 = &v17[v22];
        }
      }
      else
      {
        v42 = v19 ^ 1;
        v32 = (_QWORD *)sub_186B270(0x10u);
        *v32 = 2;
        v18 = (unsigned int *)(v32 + 1);
        v21 = v42;
        v17 = v18;
      }
      *v18 = v21;
      ++*(v17 - 1);
      v40 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v40 + 7488) + 48LL))(
        *(_QWORD *)(v40 + 7488),
        *(_QWORD *)(*(_QWORD *)(v40 + 8840) + 8LL * (v20 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v40 + 7488) + 64LL))(*(_QWORD *)(v40 + 7488));
      sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v37 ^ 1, v20, 0, 0);
      v16 -= 8;
      if ( v16 == -8 )
        break;
      v13 = *(_QWORD *)(v38 + 8);
    }
    v26 = *(v17 - 1);
    if ( (_DWORD)v26 == *(v17 - 2) )
    {
      v33 = (unsigned int)(3 * v26 + 1) >> 1;
      v34 = 4 * v33 + 8;
      if ( 4 * (int)v26 + 8 >= (unsigned int)v34 || (unsigned int)v26 >= v33 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v44, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v44);
        sub_233E40((__int64)v44);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = (unsigned int *)sub_186B300(v17 - 2, v34);
      v17 = v35 + 2;
      *v35 = v33;
      v27 = &v35[v35[1] + 2];
    }
    else
    {
      v27 = &v17[v26];
    }
  }
  else
  {
    v36 = (_QWORD *)sub_186B270(0x10u);
    v17 = (unsigned int *)(v36 + 1);
    *v36 = 2;
    v27 = (unsigned int *)(v36 + 1);
  }
  v28 = *(_DWORD *)(a1 + 8);
  v29 = *(_QWORD *)(a1 + 16);
  *v27 = v37;
  v30 = *(v17 - 1) + 1;
  *(v17 - 1) = v30;
  sub_B69FE0(v29, v28, v30, v17, 0, 0, 1u);
  ++*(_DWORD *)(a1 + 496);
  return sub_186B220(v17 - 2);
}

