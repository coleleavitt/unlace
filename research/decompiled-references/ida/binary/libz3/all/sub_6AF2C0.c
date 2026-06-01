__int64 __fastcall sub_6AF2C0(__int64 a1, __int64 a2, __int64 *a3)
{
  char **v3; // r12
  char **exception; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  unsigned int v14; // r15d
  __int64 v15; // r14
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  _QWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  unsigned int v30; // r15d
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // r15
  _QWORD *v34; // rax
  __int64 v35; // rbx
  _QWORD *v36; // rdx
  __int64 *v37; // rax
  __int64 *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 *v42; // r14
  __int64 *v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // [rsp+0h] [rbp-78h]
  __int64 *v50; // [rsp+0h] [rbp-78h]
  _DWORD *v51; // [rsp+8h] [rbp-70h]
  _QWORD *v52; // [rsp+10h] [rbp-68h]
  unsigned int v53; // [rsp+1Ch] [rbp-5Ch]
  __int64 v54[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 == *(_DWORD *)(v8 - 8) )
    {
      v30 = (unsigned int)(3 * v9 + 1) >> 1;
      v53 = v30;
      v31 = 32 * v30 + 8;
      if ( 32 * (int)v9 + 8 >= (unsigned int)v31 || (unsigned int)v9 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0(v54, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v54);
        sub_233E40((__int64)v54);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = sub_186B270(v31);
      v33 = *(__int64 **)(a1 + 16);
      v51 = (_DWORD *)v32;
      v34 = (_QWORD *)(v32 + 8);
      v52 = v34;
      if ( v33 )
      {
        v35 = *((unsigned int *)v33 - 1);
        v36 = v34;
        v51[1] = v35;
        v37 = v33;
        v38 = &v33[4 * v35];
        if ( v33 != v38 )
        {
          do
          {
            v39 = *v37;
            v37 += 4;
            v36 += 4;
            *(v36 - 4) = v39;
            v40 = *(v37 - 3);
            *(v37 - 3) = 0;
            *(v36 - 3) = v40;
            *(v36 - 2) = *(v37 - 2);
            v41 = *(v37 - 1);
            *(v37 - 1) = 0;
            *(v36 - 1) = v41;
          }
          while ( v38 != v37 );
        }
        v50 = &v33[4 * v35];
        if ( (_DWORD)v35 )
        {
          do
          {
            sub_2334C0(v33 + 2);
            v42 = (__int64 *)v33[1];
            if ( v42 )
            {
              v43 = &v42[*((unsigned int *)v42 - 1)];
              if ( v42 >= v43 )
                goto LABEL_41;
              do
              {
                while ( 1 )
                {
                  v44 = *v42;
                  if ( *v42 )
                  {
                    v45 = *v33;
                    if ( (*(_DWORD *)(v44 + 8))-- == 1 )
                      break;
                  }
                  if ( ++v42 >= v43 )
                    goto LABEL_40;
                }
                sub_15D7BC0(v45, v44);
                ++v42;
              }
              while ( v42 < v43 );
LABEL_40:
              v42 = (__int64 *)v33[1];
              if ( v42 )
LABEL_41:
                sub_186B220(v42 - 1);
            }
            v33 += 4;
          }
          while ( v33 != v50 );
          v33 = *(__int64 **)(a1 + 16);
        }
        sub_186B220(v33 - 1);
        v34 = v52;
        v10 = &v52[4 * (unsigned int)v51[1]];
      }
      else
      {
        v10 = v34;
        v51[1] = 0;
      }
      *(_QWORD *)(a1 + 16) = v34;
      *v51 = v53;
    }
    else
    {
      v10 = (_QWORD *)(32 * v9 + v8);
    }
  }
  else
  {
    v48 = (_QWORD *)sub_186B270(0x48u);
    v10 = v48 + 1;
    *v48 = 2;
    *(_QWORD *)(a1 + 16) = v48 + 1;
  }
  v11 = *a3;
  v10[1] = 0;
  v12 = a3[1];
  *v10 = v11;
  if ( v12 )
  {
    v13 = nullptr;
    v14 = 0;
    do
    {
      if ( v14 >= *(_DWORD *)(v12 - 4) )
        break;
      v15 = *(_QWORD *)(v12 + 8LL * v14);
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      if ( v13 )
      {
        v16 = *((_DWORD *)v13 - 1);
        if ( v16 == *((_DWORD *)v13 - 2) )
        {
          v27 = (3 * v16 + 1) >> 1;
          v28 = 8 * v27 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v28 || v16 >= v27 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_6A99E0(v54, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v54);
            sub_233E40((__int64)v54);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v49 = (3 * v16 + 1) >> 1;
          v29 = (unsigned int *)sub_186B300(v13 - 1, v28);
          v13 = v29 + 2;
          v10[1] = v29 + 2;
          *v29 = v49;
          LODWORD(v29) = v29[1];
          v19 = &v13[(unsigned int)v29];
          v12 = a3[1];
          v18 = (_DWORD)v29 + 1;
        }
        else
        {
          v17 = v16;
          v18 = v16 + 1;
          v19 = &v13[v17];
        }
      }
      else
      {
        v47 = (_QWORD *)sub_186B270(0x18u);
        v13 = v47 + 1;
        *v47 = 2;
        v18 = 1;
        v10[1] = v13;
        v19 = v13;
        v12 = a3[1];
      }
      *v19 = v15;
      ++v14;
      *((_DWORD *)v13 - 1) = v18;
    }
    while ( v12 );
  }
  v20 = a3[2];
  v10[3] = 0;
  v10[2] = v20;
  v21 = a3[3];
  if ( v21 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= *(_DWORD *)(v21 - 4) )
        break;
      v23 = *(_QWORD *)(v21 + 8LL * v22);
      v54[0] = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      sub_6ACBA0(v10 + 3, v54);
      v21 = a3[3];
      ++v22;
    }
    while ( v21 );
  }
  ++*(_DWORD *)(*(_QWORD *)(a1 + 16) - 4LL);
  v54[0] = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_6ACBA0((_QWORD *)(a1 + 8), v54);
  v24 = *(_QWORD *)(a1 + 16);
  v25 = 0x1FFFFFFFE0LL;
  if ( v24 )
    v25 = 32LL * (unsigned int)(*(_DWORD *)(v24 - 4) - 1);
  return sub_6AF090((_QWORD *)(v25 + v24));
}

