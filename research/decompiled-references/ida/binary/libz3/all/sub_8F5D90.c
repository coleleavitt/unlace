__int64 __fastcall sub_8F5D90(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  unsigned int *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // r12
  unsigned int v12; // eax
  _DWORD *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // r13
  unsigned int v30; // eax
  unsigned int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  _QWORD *v35; // rax
  unsigned int v36; // r15d
  unsigned int v37; // ecx
  unsigned int *v38; // rax
  _QWORD *v39; // rdx
  __int64 v40[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a3 + 8)
    || (v6 = (unsigned int *)sub_8E7230(a1, *(_DWORD **)a2, *(_DWORD **)a3),
        v6 == *(unsigned int **)(*(_QWORD *)(a1 + 104) + 864LL)) )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8832);
    if ( !v7 || (v8 = *v6, (unsigned int)v8 >= *(_DWORD *)(v7 - 4)) || (v9 = *(_DWORD *)(v7 + 4 * v8), v9 == 0x7FFFFFFF) )
    {
      if ( *((_WORD *)v6 + 2) || (v14 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL)) == nullptr || *v14 || v14[1] != 2 )
      {
        sub_B6F780(a1);
      }
      else
      {
        sub_B6C890(a1);
        v26 = *(unsigned int *)(*(_QWORD *)(a1 + 8832) + 4LL * *v6);
        *(_QWORD *)(16 * v26 + *(_QWORD *)(a1 + 8872) + 8) |= 0x80000010000000uLL;
        v27 = sub_180C100(a1 + 8400, 24);
        v28 = *(_QWORD **)(a1 + 9456);
        v29 = v27;
        *(_QWORD *)v27 = off_1C55BC0;
        *(_QWORD *)(v27 + 8) = a1;
        *(_DWORD *)(v27 + 16) = v26;
        if ( v28 )
        {
          v30 = *((_DWORD *)v28 - 1);
          if ( v30 == *((_DWORD *)v28 - 2) )
          {
            v36 = (3 * v30 + 1) >> 1;
            v37 = 8 * v36 + 8;
            if ( 8 * v30 + 8 >= v37 || v30 >= v36 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_8E4EB0(v40, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v40);
              sub_233E40((__int64)v40);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v38 = (unsigned int *)sub_186B300(v28 - 1, v37);
            v28 = v38 + 2;
            *v38 = v36;
            v30 = v38[1];
            *(_QWORD *)(a1 + 9456) = v28;
          }
        }
        else
        {
          v39 = (_QWORD *)sub_186B270(0x18u);
          *v39 = 2;
          v30 = 0;
          v28 = v39 + 1;
          *(_QWORD *)(a1 + 9456) = v28;
        }
        v28[v30] = v29;
        *((_DWORD *)v28 - 1) = v30 + 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 8872) + 16 * v26 + 11) |= 0x20u;
        v31 = *(unsigned int **)(sub_15D1F10(*((_QWORD *)v6 + 4)) + 24);
        if ( v31 )
        {
          v32 = *v31;
          if ( (_DWORD)v32 != -1 )
          {
            v33 = *(_QWORD *)(a1 + 8672);
            if ( v33 )
            {
              if ( (unsigned int)v32 < *(_DWORD *)(v33 - 4) )
              {
                v34 = *(_QWORD *)(v33 + 8 * v32);
                if ( v34 )
                  (*(void (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v34 + 24LL))(
                    v34,
                    v6,
                    (unsigned int)v26);
              }
            }
          }
        }
      }
      ++*(_DWORD *)(a1 + 80);
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *v6);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    v11 = 16LL * v9;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8872) + v11 + 11) & 0x20) == 0 )
    {
      v15 = sub_180C100(a1 + 8400, 24);
      v16 = *(_QWORD **)(a1 + 9456);
      v17 = v15;
      *(_QWORD *)v15 = off_1C55BC0;
      *(_QWORD *)(v15 + 8) = a1;
      *(_DWORD *)(v15 + 16) = v9;
      if ( v16 )
      {
        v18 = *((_DWORD *)v16 - 1);
        if ( v18 == *((_DWORD *)v16 - 2) )
        {
          v22 = (3 * v18 + 1) >> 1;
          v23 = 8 * v22 + 8;
          if ( 8 * v18 + 8 >= (unsigned int)v23 || v18 >= v22 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v40, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v40);
            sub_233E40((__int64)v40);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B300(v16 - 1, v23);
          v25 = v24[1];
          v16 = v24 + 2;
          *v24 = v22;
          *(_QWORD *)(a1 + 9456) = v24 + 2;
          LODWORD(v24) = v25;
          v21 = &v16[v25];
          v20 = (_DWORD)v24 + 1;
        }
        else
        {
          v19 = v18;
          v20 = v18 + 1;
          v21 = &v16[v19];
        }
      }
      else
      {
        v35 = (_QWORD *)sub_186B270(0x18u);
        v16 = v35 + 1;
        *v35 = 2;
        v20 = 1;
        *(_QWORD *)(a1 + 9456) = v16;
        v21 = v16;
      }
      *v21 = v17;
      *((_DWORD *)v16 - 1) = v20;
      *(_BYTE *)(*(_QWORD *)(a1 + 8872) + v11 + 11) |= 0x20u;
      v10 = 1;
    }
    LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + 2 * v9) == 0;
    LODWORD(v11) = v10 | v11;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
    if ( v12 > *(_DWORD *)(a1 + 184) )
      v12 = *(_DWORD *)(a1 + 184);
    if ( v12
      && !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 7488) + 56LL))(
            *(_QWORD *)(a1 + 7488),
            v6) )
    {
      LODWORD(v11) = 1;
      (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 7488) + 48LL))(*(_QWORD *)(a1 + 7488), v6);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
    }
  }
  return (unsigned int)v11;
}

