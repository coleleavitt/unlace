__int64 __fastcall sub_5AFFF0(__int64 a1, __int64 *a2, __m128i a3)
{
  __int64 *v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 *v15; // r14
  void *v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rax
  void *v19; // r15
  __int64 v20; // r13
  unsigned int v22; // r8d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  char **exception; // r12
  __int64 v28; // [rsp+0h] [rbp-80h]
  __int64 v29; // [rsp+8h] [rbp-78h]
  void *ptr; // [rsp+10h] [rbp-70h]
  unsigned int ptra; // [rsp+10h] [rbp-70h]
  __int64 v33[10]; // [rsp+30h] [rbp-50h] BYREF

  v29 = a2[13];
  sub_5A3680((__int64)a2, 0, a3);
  v4 = (__int64 *)a2[14];
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = *v4;
      v7 = 8 * v5;
      if ( *v4 )
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(*v4);
      v8 = 0;
      v9 = (_QWORD *)sub_186B270(0x18u);
      v10 = 1;
      *v9 = 2;
      v11 = v9 + 1;
      v4 = v11;
      while ( 1 )
      {
        v8 += 8;
        *v11 = v6;
        *((_DWORD *)v4 - 1) = v10;
        if ( v7 == v8 )
          break;
        while ( 1 )
        {
          v6 = *(_QWORD *)(a2[14] + v8);
          if ( v6 )
            v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6);
          v12 = *((_DWORD *)v4 - 1);
          if ( v12 == *((_DWORD *)v4 - 2) )
            break;
          v13 = v12;
          v8 += 8;
          v10 = v12 + 1;
          v4[v13] = v6;
          *((_DWORD *)v4 - 1) = v10;
          if ( v7 == v8 )
            goto LABEL_11;
        }
        v22 = (3 * v12 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v23 || v12 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ptra = (3 * v12 + 1) >> 1;
        v24 = (unsigned int *)sub_186B300(v4 - 1, v23);
        v4 = (__int64 *)(v24 + 2);
        *v24 = ptra;
        v25 = v24[1];
        v26 = v25;
        v11 = &v4[v25];
        v10 = (unsigned int)(v26 + 1);
      }
LABEL_11:
      if ( !*(_BYTE *)(a1 + 40) && (_DWORD)v10 )
      {
        v14 = v4;
        v15 = &v4[v10];
        do
        {
          v16 = (void *)*v14;
          if ( *v14 )
          {
            v17 = *(_QWORD *)(a1 + 32);
            if ( !v17 )
            {
              v18 = sub_4C5CF0(*(_QWORD *)(a2[1] + 24), *v14, *(unsigned int **)(a1 + 48));
              v17 = *(_QWORD *)(a1 + 32);
              if ( v18 != v17 )
              {
                if ( v17 )
                {
                  ptr = *(void **)(a1 + 32);
                  v28 = v18;
                  (**(void (***)(void))v17)();
                  sub_186B220(ptr);
                  v18 = v28;
                }
                *(_QWORD *)(a1 + 32) = v18;
                v17 = v18;
              }
            }
            *v14 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v17 + 16LL))(v17, v16);
            sub_4D63B0(v16);
          }
          ++v14;
        }
        while ( v14 != v15 );
      }
    }
    else
    {
      v4 = nullptr;
    }
  }
  v19 = *(void **)(a1 + 24);
  if ( v19 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v19 + 16LL))(*(_QWORD *)(a1 + 24), v29);
    v19 = (void *)v29;
  }
  v20 = sub_186B270(0xA0u);
  sub_5A4AC0(v20, a2[1], (__int64 *)(a1 + 8), *(char **)(a1 + 56), *(__int64 **)(v29 + 8), a2[11], -1);
  v33[0] = (__int64)v4;
  sub_5A3D20(v20, v29, v33, 0, a3);
  if ( v19 )
    sub_4D63E0(v19);
  if ( v4 )
    sub_186B220(v4 - 1);
  return v20;
}

