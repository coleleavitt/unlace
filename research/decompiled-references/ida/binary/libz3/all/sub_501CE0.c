__int64 __fastcall sub_501CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  char **exception; // rbp
  char **v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // rax
  _QWORD *v11; // r8
  unsigned int v12; // ebx
  unsigned int v13; // eax
  char v14; // r14
  __int64 v15; // rbx
  unsigned int v16; // ebp
  __int64 v17; // rdx
  _QWORD *v18; // r8
  unsigned int v19; // ebx
  unsigned int v20; // eax
  char v21; // r14
  __int64 v22; // rbx
  unsigned int v23; // ebp
  unsigned int v25; // edx
  size_t v26; // rsi
  unsigned int v27; // r15d
  unsigned int *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r15
  unsigned int v32; // edx
  size_t v33; // rsi
  unsigned int v34; // r15d
  unsigned int *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r15
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned int v41; // [rsp+8h] [rbp-90h]
  unsigned int v42; // [rsp+Ch] [rbp-8Ch]
  unsigned int v43; // [rsp+Ch] [rbp-8Ch]
  unsigned int v45; // [rsp+18h] [rbp-80h]
  unsigned int v46; // [rsp+18h] [rbp-80h]
  _QWORD *v47; // [rsp+18h] [rbp-80h]
  _QWORD *v48; // [rsp+18h] [rbp-80h]
  unsigned int v50; // [rsp+28h] [rbp-70h]
  int v51; // [rsp+2Ch] [rbp-6Ch]
  __int64 v52[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a3 + 16);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 - 4);
    v41 = 0;
    *(_OWORD *)a1 = 0;
    v51 = v8;
    if ( v8 )
    {
      while ( 1 )
      {
        v50 = v41 >> 5;
        v10 = *a5;
        if ( *a5 && v50 < *(_DWORD *)(v10 - 4) && (*(_DWORD *)(v10 + 4LL * v50) & (1 << v41)) != 0 )
        {
          v42 = v41;
          v11 = *(_QWORD **)a1;
          while ( 1 )
          {
            v12 = v42;
            do
            {
              v13 = v12;
              v12 = *(_DWORD *)(*(_QWORD *)(a4 + 16) + 4LL * v12);
              v14 = v13;
            }
            while ( v13 != v12 );
            v15 = v12 >> 5;
            if ( !v11 )
              break;
            v16 = v15 + 1;
            v45 = *((_DWORD *)v11 - 1);
            if ( (unsigned int)v15 >= v45 )
              goto LABEL_26;
LABEL_11:
            *((_DWORD *)v11 + v15) |= 1 << v14;
            v42 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v42);
            if ( v41 == v42 )
              goto LABEL_12;
          }
          v16 = v15 + 1;
          v39 = (_QWORD *)sub_186B270(0x10u);
          v11 = v39 + 1;
          v45 = 0;
          *(_QWORD *)a1 = v39 + 1;
          *v39 = 2;
LABEL_26:
          while ( 1 )
          {
            v29 = *((_DWORD *)v11 - 2);
            if ( v29 >= v16 )
              break;
            v25 = (3 * v29 + 1) >> 1;
            v26 = 4 * v25 + 8;
            v27 = v25;
            if ( 4 * v29 + 8 >= (unsigned int)v26 || v29 >= v25 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v52, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v52);
              sub_233E40((__int64)v52);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v28 = (unsigned int *)sub_186B300(v11 - 1, v26);
            v11 = v28 + 2;
            *v28 = v27;
            *(_QWORD *)a1 = v28 + 2;
          }
          *((_DWORD *)v11 - 1) = v16;
          v30 = 4LL * v16;
          v31 = 4LL * v45;
          if ( v31 != v30 )
          {
            v47 = v11;
            memset((char *)v11 + v31, 0, v30 - v31);
            v11 = v47;
          }
          goto LABEL_11;
        }
LABEL_12:
        v17 = a5[1];
        if ( v17 )
        {
          if ( v50 < *(_DWORD *)(v17 - 4) && (*(_DWORD *)(v17 + 4LL * v50) & (1 << v41)) != 0 )
            break;
        }
LABEL_21:
        if ( v51 == ++v41 )
          return a1;
      }
      v43 = v41;
      v18 = *(_QWORD **)(a1 + 8);
      while ( 1 )
      {
        v19 = v43;
        do
        {
          v20 = v19;
          v19 = *(_DWORD *)(*(_QWORD *)(a4 + 16) + 4LL * v19);
          v21 = v20;
        }
        while ( v20 != v19 );
        v22 = v19 >> 5;
        if ( !v18 )
          break;
        v23 = v22 + 1;
        v46 = *((_DWORD *)v18 - 1);
        if ( (unsigned int)v22 >= v46 )
          goto LABEL_32;
LABEL_20:
        *((_DWORD *)v18 + v22) |= 1 << v21;
        v43 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v43);
        if ( v41 == v43 )
          goto LABEL_21;
      }
      v23 = v22 + 1;
      v40 = (_QWORD *)sub_186B270(0x10u);
      v18 = v40 + 1;
      v46 = 0;
      *(_QWORD *)(a1 + 8) = v40 + 1;
      *v40 = 2;
LABEL_32:
      while ( 1 )
      {
        v36 = *((_DWORD *)v18 - 2);
        if ( v36 >= v23 )
          break;
        v32 = (3 * v36 + 1) >> 1;
        v33 = 4 * v32 + 8;
        v34 = v32;
        if ( 4 * v36 + 8 >= (unsigned int)v33 || v36 >= v32 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v52, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v52);
          sub_233E40((__int64)v52);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v18 - 1, v33);
        v18 = v35 + 2;
        *v35 = v34;
        *(_QWORD *)(a1 + 8) = v35 + 2;
      }
      *((_DWORD *)v18 - 1) = v23;
      v37 = 4LL * v23;
      v38 = 4LL * v46;
      if ( v38 != v37 )
      {
        v48 = v18;
        memset((char *)v18 + v38, 0, v37 - v38);
        v18 = v48;
      }
      goto LABEL_20;
    }
  }
  else
  {
    *(_OWORD *)a1 = 0;
  }
  return a1;
}

