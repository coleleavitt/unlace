__int64 __fastcall sub_40FE90(__int64 a1, __int64 a2, double a3)
{
  char **exception; // rbx
  _QWORD **v5; // rbp
  _QWORD **i; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rbx
  unsigned int v10; // r15d
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _QWORD *v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // r9d
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // r11
  int v22; // eax
  bool v23; // zf
  __int64 result; // rax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  _DWORD *v27; // rbp
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rsi
  unsigned int *v31; // rsi
  void (***v32)(void); // rdi
  void *v33; // rdi
  __int64 v34; // rdi
  unsigned int v35; // r13d
  unsigned int v36; // ecx
  unsigned int *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  _QWORD **v40; // [rsp+8h] [rbp-70h]
  __int64 v41; // [rsp+10h] [rbp-68h]
  __int64 v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD ***)(a2 + 192);
  v41 = a2;
  v40 = (_QWORD **)(a1 + 176);
  if ( v5 )
  {
    for ( i = &v5[*((unsigned int *)v5 - 1)]; i != v5; ++v5 )
    {
      v7 = sub_186B270(0x70u);
      v8 = (__int64)*v5;
      v9 = (_QWORD *)v7;
      v10 = *((_DWORD *)*v5 + 24);
      sub_407990(*v5, a2, v11, v12, v13, v14);
      sub_400BE0((__int64)v9, *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL), *(_QWORD *)(v8 + 16), v10);
      v19 = v9[7];
      ++*(_DWORD *)v9;
      if ( v19 )
      {
        v20 = *(_DWORD *)(v19 - 4);
        if ( v20 )
        {
          v17 = v9[9];
          v21 = (__int64)*v5;
          if ( v17 && (v18 = *(_DWORD *)(v17 - 4)) != 0 )
          {
            v16 = 0;
            while ( 1 )
            {
              v15 = *(_QWORD **)(v21 + 72);
              v22 = 0;
              while ( *(_QWORD *)(v17 + 8LL * (v22 + v16)) == *v15 )
              {
                ++v22;
                ++v15;
                if ( v20 == v22 )
                  goto LABEL_11;
              }
              if ( v22 == v20 )
                break;
              v16 += v20;
              if ( v16 >= v18 )
                goto LABEL_25;
            }
          }
          else
          {
LABEL_25:
            sub_3EE030((__int64)(v9 + 8), v21 + 64);
          }
        }
      }
LABEL_11:
      a2 = (__int64)v9;
      sub_40F760(v40, (__int64)v9, (__int64)v15, v16, v17, v18, a3);
      v23 = (*(_DWORD *)v9)-- == 1;
      if ( v23 )
      {
        v32 = (void (***)(void))v9[11];
        if ( v32 )
        {
          v23 = (*((_DWORD *)v32 + 4))-- == 1;
          if ( v23 )
          {
            (**v32)();
            sub_186B220(v32);
          }
        }
        v33 = (void *)v9[10];
        if ( v33 )
          sub_41CD50(v33);
        sub_2B4F40(v9 + 8);
        sub_2B4F40(v9 + 6);
        sub_2334C0(v9 + 4);
        a2 = v9[2];
        if ( a2 )
        {
          v34 = v9[3];
          v23 = (*(_DWORD *)(a2 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v34, a2);
        }
        sub_186B220(v9);
      }
    }
  }
  *(_BYTE *)(a1 + 212) = 0;
  result = v41;
  v25 = *(_QWORD *)(v41 + 200);
  if ( v25 )
  {
    v26 = 0;
    do
    {
      if ( v26 >= *(_DWORD *)(v25 - 4) )
        break;
      v27 = *(_DWORD **)(v25 + 8LL * v26);
      if ( v27 )
        ++*v27;
      v28 = *(_QWORD **)(a1 + 200);
      if ( v28 )
      {
        v29 = *((_DWORD *)v28 - 1);
        if ( v29 == *((_DWORD *)v28 - 2) )
        {
          v35 = (3 * v29 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v29 + 8 >= v36 || v29 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3FCFD0(v42, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v42);
            sub_233E40((__int64)v42);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v37 = (unsigned int *)sub_186B300(v28 - 1, v36);
          v38 = v37[1];
          v28 = v37 + 2;
          *v37 = v35;
          *(_QWORD *)(a1 + 200) = v37 + 2;
          v31 = &v37[2 * v38 + 2];
          result = (unsigned int)(v38 + 1);
          v25 = *(_QWORD *)(v41 + 200);
        }
        else
        {
          v30 = v29;
          result = v29 + 1;
          v31 = (unsigned int *)&v28[v30];
        }
      }
      else
      {
        v39 = (_QWORD *)sub_186B270(0x18u);
        *v39 = 2;
        result = 1;
        v28 = v39 + 1;
        *(_QWORD *)(a1 + 200) = v28;
        v31 = (unsigned int *)v28;
        v25 = *(_QWORD *)(v41 + 200);
      }
      *(_QWORD *)v31 = v27;
      ++v26;
      *((_DWORD *)v28 - 1) = result;
    }
    while ( v25 );
  }
  return result;
}

