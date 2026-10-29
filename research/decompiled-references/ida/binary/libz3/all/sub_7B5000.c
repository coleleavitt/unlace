__int64 __fastcall sub_7B5000(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // r12
  unsigned int *v11; // rax
  int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rdx
  unsigned int *v15; // r10
  __int64 v16; // rdx
  int v17; // r11d
  int v18; // r13d
  int v19; // r9d
  __int64 v20; // rdi
  unsigned int v21; // esi
  __int64 v22; // rcx
  unsigned int v23; // eax
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rcx
  unsigned int v30; // r13d
  unsigned int v31; // ecx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v36; // [rsp+10h] [rbp-78h] BYREF
  int v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+1Ch] [rbp-6Ch]
  __int64 v39[11]; // [rsp+30h] [rbp-58h] BYREF

  v36 = (_QWORD *)(*(_QWORD *)(a1 + 944) + 16LL * a3);
  if ( *v36 )
    v8 = *(_DWORD *)(*v36 - 4LL);
  else
    v8 = 0;
  v37 = v8;
  v38 = 0;
  ((void (*)(void))sub_11F1D70)();
  v9 = 0;
  if ( v37 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*v36 + 8LL * v9);
      if ( (*(_BYTE *)(v10 + 16) & 2) != 0 )
        goto LABEL_15;
      v11 = (unsigned int *)(v10 + 20);
      v12 = *(_DWORD *)(a2 + 32);
      v13 = *(_DWORD *)(a2 + 60);
      v14 = 4LL * *(unsigned int *)(v10 + 4);
      v15 = (unsigned int *)(v10 + 20 + v14);
      if ( v14 )
        break;
      v23 = *(_DWORD *)(a2 + 32);
LABEL_14:
      if ( v23 < v13 )
      {
        v25 = (_QWORD *)*a4;
        if ( *a4 )
        {
          v26 = *((_DWORD *)v25 - 1);
          if ( v26 == *((_DWORD *)v25 - 2) )
          {
            v30 = (3 * v26 + 1) >> 1;
            v31 = 8 * v30 + 8;
            if ( 8 * v26 + 8 >= v31 || v26 >= v30 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v39, "Overflow encountered when expanding vector", v5);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v39);
              sub_233E40((__int64)v39);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v32 = (unsigned int *)sub_186B300(v25 - 1, v31);
            v33 = v32[1];
            v25 = v32 + 2;
            *v32 = v30;
            LODWORD(v32) = v33;
            *a4 = v25;
            v29 = &v25[v33];
            v28 = (_DWORD)v32 + 1;
          }
          else
          {
            v27 = v26;
            v28 = v26 + 1;
            v29 = &v25[v27];
          }
        }
        else
        {
          v34 = (_QWORD *)sub_186B270(0x18u);
          *v34 = 2;
          v25 = v34 + 1;
          *a4 = v34 + 1;
          v29 = v34 + 1;
          v28 = 1;
        }
        *v29 = v10;
        *((_DWORD *)v25 - 1) = v28;
        ++*(_DWORD *)(a1 + 192);
        sub_7B33B0(a1, a2);
        v9 = v38;
      }
LABEL_15:
      ++HIDWORD(v38);
      LODWORD(v38) = v9 + 1;
      sub_11F1D70(&v36);
      v9 = v38;
      if ( (_DWORD)v38 == v37 )
        return sub_11F1DD0(&v36);
    }
    v16 = *(_QWORD *)(a1 + 24);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = *(_QWORD *)(v16 + 3840);
    v21 = *(_DWORD *)(v16 + 3848);
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = *v11;
        if ( v21 >= *(_DWORD *)(v20 + 4 * v22) )
          break;
        ++v19;
LABEL_8:
        if ( v15 == ++v11 )
          goto LABEL_12;
      }
      if ( v21 >= *(_DWORD *)(v20 + 4LL * ((unsigned int)v22 ^ 1)) )
      {
        ++v17;
        goto LABEL_8;
      }
      ++v11;
      ++v18;
      if ( v15 == v11 )
      {
LABEL_12:
        v23 = v12 - v19;
        if ( !v18 || v12 + v17 - v18 >= v13 + 1 )
          goto LABEL_14;
        goto LABEL_15;
      }
    }
  }
  return sub_11F1DD0(&v36);
}

