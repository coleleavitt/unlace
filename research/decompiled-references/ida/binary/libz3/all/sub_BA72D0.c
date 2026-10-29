void __fastcall sub_BA72D0(_QWORD *a1, char a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  __int64 *v5; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  _QWORD *v11; // rdi
  unsigned int v12; // r14d
  _QWORD *v13; // rdx
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 **v19; // rax
  unsigned __int64 *v20; // rbx
  unsigned __int64 v21; // r14
  _QWORD *v22; // rdx
  unsigned int v23; // edx
  size_t v24; // rsi
  unsigned int v25; // r15d
  unsigned int *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  _QWORD *v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // r14d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // rdi
  _QWORD *v39; // rdx
  unsigned int v40; // ecx
  size_t v41; // rsi
  unsigned int v42; // r15d
  unsigned int *v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  unsigned __int64 *v51; // [rsp+8h] [rbp-80h]
  __int64 v52; // [rsp+10h] [rbp-78h]
  __int64 v53; // [rsp+18h] [rbp-70h]
  __int64 *v54; // [rsp+20h] [rbp-68h]
  char *v56[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (__int64 *)a1[61];
  if ( v5 )
  {
    v54 = &v5[*((unsigned int *)v5 - 1)];
    if ( v54 != v5 )
    {
      v52 = (__int64)(a1 + 37);
      do
      {
        while ( 1 )
        {
          v7 = *v5;
          if ( *v5 )
            break;
LABEL_4:
          if ( v54 == ++v5 )
            return;
        }
        v8 = (_QWORD *)a1[41];
        v9 = *(_DWORD *)(v7 + 24);
        if ( v8 )
        {
          v10 = *((_DWORD *)v8 - 1);
          if ( v10 >= v9 )
            goto LABEL_8;
        }
        else
        {
          if ( !v9 )
            goto LABEL_10;
          v10 = 0;
          v50 = (_QWORD *)sub_186B270(0x18u);
          v8 = v50 + 1;
          *v50 = 2;
          a1[41] = v50 + 1;
        }
        while ( 1 )
        {
          v44 = *((_DWORD *)v8 - 2);
          if ( v44 >= v9 )
            break;
          v40 = (3 * v44 + 1) >> 1;
          v41 = 8 * v40 + 8;
          v42 = v40;
          if ( 8 * v44 + 8 >= (unsigned int)v41 || v44 >= v40 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_151CF2(v56);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v56);
            sub_233E40((__int64)v56);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v43 = (unsigned int *)sub_186B300(v8 - 1, v41);
          v8 = v43 + 2;
          *v43 = v42;
          a1[41] = v43 + 2;
        }
        *((_DWORD *)v8 - 1) = v9;
        v45 = 8LL * v10;
        v46 = &v8[(unsigned __int64)v45 / 8];
        v47 = v9;
        v9 = *(_DWORD *)(v7 + 24);
        v48 = 8 * v47;
        if ( v45 == v48 )
        {
LABEL_8:
          v11 = (_QWORD *)a1[42];
          if ( v11 )
            goto LABEL_9;
          goto LABEL_48;
        }
        memset(v46, 0, v48 - v45);
        v11 = (_QWORD *)a1[42];
        if ( v11 )
        {
LABEL_9:
          v12 = *((_DWORD *)v11 - 1);
          if ( v12 >= v9 )
            goto LABEL_10;
          goto LABEL_31;
        }
LABEL_48:
        if ( !v9 )
          goto LABEL_10;
        v12 = 0;
        v49 = (_QWORD *)sub_186B270(0x18u);
        *v49 = 2;
        v11 = v49 + 1;
        a1[42] = v49 + 1;
LABEL_31:
        while ( 1 )
        {
          v27 = *((_DWORD *)v11 - 2);
          if ( v27 >= v9 )
            break;
          v23 = (3 * v27 + 1) >> 1;
          v24 = 8 * v23 + 8;
          v25 = v23;
          if ( 8 * v27 + 8 >= (unsigned int)v24 || v27 >= v23 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_151CF2(v56);
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v56);
            sub_233E40((__int64)v56);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v26 = (unsigned int *)sub_186B300(v11 - 1, v24);
          v11 = v26 + 2;
          *v26 = v25;
          a1[42] = v26 + 2;
        }
        *((_DWORD *)v11 - 1) = v9;
        v28 = 8LL * v12;
        v29 = 8LL * v9;
        v30 = &v11[(unsigned __int64)v28 / 8];
        if ( v28 == v29 )
        {
LABEL_10:
          v13 = (_QWORD *)a1[44];
          v14 = *(_DWORD *)(v7 + 28);
          if ( v13 )
            goto LABEL_11;
          goto LABEL_34;
        }
        memset(v30, 0, v29 - v28);
        v13 = (_QWORD *)a1[44];
        v14 = *(_DWORD *)(v7 + 28);
        if ( v13 )
        {
LABEL_11:
          v15 = *((_DWORD *)v13 - 1);
          if ( v15 >= v14 )
            goto LABEL_12;
          goto LABEL_39;
        }
LABEL_34:
        if ( !v14 )
          goto LABEL_12;
        v15 = 0;
        v31 = (_QWORD *)sub_186B270(0x58u);
        v13 = v31 + 1;
        *v31 = 2;
        v32 = *(_DWORD *)v31;
        for ( a1[44] = v13; v32 < v14; v32 = *((_DWORD *)v13 - 2) )
        {
          v33 = (3 * v32 + 1) >> 1;
          v34 = 40 * v33 + 8;
          if ( 40 * v32 + 8 >= (unsigned int)v34 || v32 >= v33 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_151CF2(v56);
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v56);
            sub_233E40((__int64)v56);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v35 = (unsigned int *)sub_186B300(v13 - 1, v34);
          v13 = v35 + 2;
          *v35 = v33;
          a1[44] = v35 + 2;
LABEL_39:
          ;
        }
        *((_DWORD *)v13 - 1) = v14;
        v36 = 40LL * v15;
        v37 = 40LL * v14;
        v38 = &v13[(unsigned __int64)v36 / 8];
        v39 = &v13[(unsigned __int64)v37 / 8];
        if ( v36 != v37 )
          memset(v38, 0, 8 * ((unsigned __int64)((char *)(v39 - 5) - (char *)v38) >> 3) + 40);
LABEL_12:
        v16 = a1[1];
        v17 = *(_QWORD *)(v16 + 8696);
        v18 = **(_DWORD **)(v7 + 8) + 0x80000000;
        if ( v17 && (unsigned int)v18 < *(_DWORD *)(v17 - 4) )
          v19 = (unsigned __int64 **)(v17 + 8 * v18);
        else
          v19 = (unsigned __int64 **)(v16 + 8704);
        v20 = *v19;
        if ( !*v19 )
          goto LABEL_4;
        v51 = &v20[*((unsigned int *)v20 - 1)];
        if ( v51 == v20 )
          goto LABEL_4;
        if ( a2 )
        {
          do
          {
            v22 = (_QWORD *)*v20++;
            sub_BA46A0(v52, v7, (unsigned __int64)v22);
          }
          while ( v51 != v20 );
          goto LABEL_4;
        }
        while ( 1 )
        {
          v21 = *v20;
          v53 = *(_QWORD *)*v20;
          if ( !(unsigned int)sub_8E7030(v16)
            || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v16 + 7488) + 56LL))(
                 *(_QWORD *)(v16 + 7488),
                 v53) )
          {
            sub_BA46A0(v52, v7, v21);
          }
          if ( v51 == ++v20 )
            break;
          v16 = a1[1];
        }
        ++v5;
      }
      while ( v54 != v5 );
    }
  }
}

