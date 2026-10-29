__int64 __fastcall sub_B0B1B0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rax
  __int64 v6; // rdi
  __int64 v7; // r15
  int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rbp
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rcx
  unsigned int v23; // ebx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // [rsp+8h] [rbp-80h]
  __int64 v29; // [rsp+10h] [rbp-78h]
  _QWORD v30[3]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v31[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a1 + 72;
  v6 = *(_QWORD *)(a2 + 128);
  v29 = v3;
  v28 = a2 + 136;
  v30[0] = 0;
  v30[1] = 0;
  sub_182F200(v6, a2 + 136);
  *(_DWORD *)(a2 + 120) = 0;
  sub_182F200(*(_QWORD *)(a2 + 96), a2 + 104);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a2 + 8);
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a2 + 40LL * (v8 & 1) + 16);
    if ( !v10 || v9 >= *(_DWORD *)(v10 - 4) )
      break;
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 8848) + *(unsigned int *)(v10 + 40LL * v9)) == 0xFF )
    {
      ++v9;
    }
    else
    {
      sub_B08C10(a1, a2, v9);
      v11 = v29;
      v12 = a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1);
      if ( (*(_BYTE *)(v12 + 28) & 1) != 0 )
      {
        sub_182EA00(v29, v30, a2 + (-(*(_DWORD *)(a2 + 8) & 1) & 0x28) + 24);
        v11 = v29;
      }
      else
      {
        v13 = *(_DWORD *)(v12 + 24);
        BYTE4(v30[0]) &= ~1u;
        LODWORD(v30[0]) = v13;
      }
      sub_1839610(v11, v30, a2 + 104);
      if ( (*(_BYTE *)(a2 + 140) & 1) != 0 || (v30[0] & 0x100000000LL) != 0 )
      {
        v14 = sub_182EB00(*(_QWORD *)(a2 + 128), v28, v30);
        v7 = *(_QWORD *)(a1 + 16);
        ++v9;
        if ( v14 >= 0 )
          break;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 16);
        ++v9;
        if ( *(_DWORD *)(a2 + 136) >= SLODWORD(v30[0]) )
          break;
      }
      v8 = *(_DWORD *)(a2 + 8);
    }
  }
  v15 = (_QWORD *)sub_180C100(v7 + 8400, 24);
  v16 = *(_QWORD **)(v7 + 9456);
  v17 = v15;
  *v15 = off_1C56D50;
  v15[1] = a1;
  v15[2] = a2;
  if ( v16 )
  {
    v18 = *((_DWORD *)v16 - 1);
    if ( v18 == *((_DWORD *)v16 - 2) )
    {
      v23 = (3 * v18 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v24 || v18 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0(v31, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v31);
        sub_233E40((__int64)v31);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v16 - 1, v24);
      v26 = v25[1];
      v16 = v25 + 2;
      *(_QWORD *)(v7 + 9456) = v25 + 2;
      *v25 = v23;
      LODWORD(v25) = v26;
      v21 = &v16[v26];
      v20 = (_DWORD)v25 + 1;
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
    v27 = (_QWORD *)sub_186B270(0x18u);
    v16 = v27 + 1;
    *v27 = 2;
    v20 = 1;
    *(_QWORD *)(v7 + 9456) = v16;
    v21 = v16;
  }
  *v21 = v17;
  *((_DWORD *)v16 - 1) = v20;
  return sub_182EF00(v29, v30);
}

