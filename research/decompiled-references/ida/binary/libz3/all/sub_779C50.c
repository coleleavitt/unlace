__int64 __fastcall sub_779C50(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // r14
  __int64 *v9; // r13
  __int64 *v10; // r15
  _QWORD *v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  unsigned int v14; // eax
  __int64 *v15; // rdx
  __int64 *v16; // r12
  __int64 v17; // r14
  __int64 *v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 *v21; // r15
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 *v26; // r15
  __int64 *v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 *v31; // r14
  int v32; // eax
  __int64 *v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v37; // edx
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // ecx
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  char **exception; // rbp
  unsigned int v50; // [rsp+4h] [rbp-74h]
  unsigned int v51; // [rsp+4h] [rbp-74h]
  unsigned int v52; // [rsp+4h] [rbp-74h]
  __int64 v53[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = sub_186B270(0x50u);
  v4 = (__int64 *)a1[5];
  v5 = v3;
  v6 = a2[1];
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_BYTE *)(v5 + 24) = 1;
  *(_QWORD *)v5 = &off_1C6A3B8;
  *(_QWORD *)(v5 + 32) = v6;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = v6;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = v6;
  *(_QWORD *)(v5 + 72) = 0;
  if ( v4 )
  {
    v7 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v7 )
    {
      v8 = *v4;
      v9 = v4;
      if ( v6 == *a2 )
      {
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
      }
      else
      {
        v10 = nullptr;
        v8 = sub_15CFF50(a2, *v4);
        if ( v8 )
          goto LABEL_9;
      }
LABEL_5:
      v11 = (_QWORD *)sub_186B270(0x18u);
      v10 = v11 + 1;
      *v11 = 2;
      v12 = 1;
      *(_QWORD *)(v5 + 40) = v10;
      v13 = v10;
LABEL_6:
      ++v9;
      *v13 = v8;
      *((_DWORD *)v10 - 1) = v12;
      while ( v7 != v9 )
      {
        v8 = *v9;
        if ( a2[1] == *a2 )
        {
          if ( !v8 )
            goto LABEL_11;
        }
        else
        {
          v8 = sub_15CFF50(a2, *v9);
          if ( !v8 )
            goto LABEL_10;
        }
LABEL_9:
        ++*(_DWORD *)(v8 + 8);
LABEL_10:
        if ( !v10 )
          goto LABEL_5;
LABEL_11:
        v14 = *((_DWORD *)v10 - 1);
        if ( v14 == *((_DWORD *)v10 - 2) )
        {
          v45 = (3 * v14 + 1) >> 1;
          v46 = 8 * v45 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v46 || v14 >= v45 )
          {
LABEL_59:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v53, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = (3 * v14 + 1) >> 1;
          v47 = (unsigned int *)sub_186B300(v10 - 1, v46);
          v10 = (__int64 *)(v47 + 2);
          *v47 = v52;
          v48 = v47[1];
          *(_QWORD *)(v5 + 40) = v47 + 2;
          LODWORD(v47) = v48;
          v13 = &v10[v48];
          v12 = (_DWORD)v47 + 1;
          goto LABEL_6;
        }
        ++v9;
        v10[v14] = v8;
        *((_DWORD *)v10 - 1) = v14 + 1;
      }
    }
  }
  v15 = (__int64 *)a1[7];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v16 != v15 )
    {
      v17 = *v15;
      v18 = (__int64 *)a1[7];
      if ( *a2 == a2[1] )
      {
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
      }
      else
      {
        v19 = sub_15CFF50(a2, *v15);
        v17 = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
      }
LABEL_18:
      v20 = (_QWORD *)sub_186B270(0x18u);
      v21 = v20 + 1;
      *v20 = 2;
      v22 = 1;
      *(_QWORD *)(v5 + 56) = v21;
      v23 = v21;
      while ( 1 )
      {
        ++v18;
        *v23 = v17;
        *((_DWORD *)v21 - 1) = v22;
        if ( v16 == v18 )
          break;
        while ( 1 )
        {
          v17 = *v18;
          if ( a2[1] == *a2 )
          {
            if ( v17 )
              ++*(_DWORD *)(v17 + 8);
          }
          else
          {
            v24 = sub_15CFF50(a2, *v18);
            v17 = v24;
            if ( v24 )
            {
              ++*(_DWORD *)(v24 + 8);
              if ( !v21 )
                goto LABEL_18;
            }
          }
          v25 = *((_DWORD *)v21 - 1);
          if ( v25 == *((_DWORD *)v21 - 2) )
            break;
          ++v18;
          v21[v25] = v17;
          *((_DWORD *)v21 - 1) = v25 + 1;
          if ( v16 == v18 )
            goto LABEL_25;
        }
        v41 = (3 * v25 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v42 || v25 >= v41 )
          goto LABEL_59;
        v51 = (3 * v25 + 1) >> 1;
        v43 = (unsigned int *)sub_186B300(v21 - 1, v42);
        v21 = (__int64 *)(v43 + 2);
        *v43 = v51;
        v44 = v43[1];
        *(_QWORD *)(v5 + 56) = v43 + 2;
        LODWORD(v43) = v44;
        v23 = &v21[v44];
        v22 = (_DWORD)v43 + 1;
      }
    }
  }
LABEL_25:
  v26 = (__int64 *)a1[9];
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v27 != v26 )
    {
      v28 = *v26;
      if ( *a2 == a2[1] )
      {
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
      }
      else
      {
        v29 = sub_15CFF50(a2, *v26);
        v28 = v29;
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
      }
LABEL_30:
      v30 = (_QWORD *)sub_186B270(0x18u);
      v31 = v30 + 1;
      *v30 = 2;
      v32 = 1;
      *(_QWORD *)(v5 + 72) = v31;
      v33 = v31;
      while ( 1 )
      {
        ++v26;
        *v33 = v28;
        *((_DWORD *)v31 - 1) = v32;
        if ( v27 == v26 )
          break;
        while ( 1 )
        {
          v28 = *v26;
          if ( a2[1] == *a2 )
          {
            if ( v28 )
              ++*(_DWORD *)(v28 + 8);
          }
          else
          {
            v34 = sub_15CFF50(a2, *v26);
            v28 = v34;
            if ( v34 )
            {
              ++*(_DWORD *)(v34 + 8);
              if ( !v31 )
                goto LABEL_30;
            }
          }
          v35 = *((_DWORD *)v31 - 1);
          if ( v35 == *((_DWORD *)v31 - 2) )
            break;
          ++v26;
          v31[v35] = v28;
          *((_DWORD *)v31 - 1) = v35 + 1;
          if ( v27 == v26 )
            return v5;
        }
        v37 = (3 * v35 + 1) >> 1;
        v38 = 8 * v37 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v38 || v35 >= v37 )
          goto LABEL_59;
        v50 = (3 * v35 + 1) >> 1;
        v39 = (unsigned int *)sub_186B300(v31 - 1, v38);
        v31 = (__int64 *)(v39 + 2);
        *v39 = v50;
        v40 = v39[1];
        *(_QWORD *)(v5 + 72) = v39 + 2;
        LODWORD(v39) = v40;
        v33 = &v31[v40];
        v32 = (_DWORD)v39 + 1;
      }
    }
  }
  return v5;
}

