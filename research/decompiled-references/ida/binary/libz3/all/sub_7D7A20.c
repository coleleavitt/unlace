__int64 __fastcall sub_7D7A20(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v5; // r9
  int v6; // esi
  __int64 *v7; // rdi
  unsigned int v8; // r10d
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // r10
  __int64 *v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // rbp
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // ebx
  unsigned int v32; // ecx
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  __int64 v36; // [rsp+8h] [rbp-110h]
  __int64 v37[4]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v38[216]; // [rsp+40h] [rbp-D8h] BYREF

  v5 = *(unsigned int *)(a1 + 3128);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(__int64 **)(a1 + 3120);
  v8 = v5 - 1;
  v9 = 16 * v5;
  v10 = &v7[(unsigned __int64)v9 / 8];
  v11 = 16LL * (v6 & v8);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 == v9 )
  {
    v13 = v7;
    if ( v7 != v12 )
    {
      while ( 1 )
      {
LABEL_31:
        v29 = *v13;
        if ( (unsigned __int64)*v13 > 1 )
        {
          if ( *(_DWORD *)(v29 + 12) == v6 && a2 == v29 )
            return v13[1];
        }
        else if ( !v29 )
        {
          if ( *(_DWORD *)(a1 + 3132) )
            goto LABEL_10;
LABEL_9:
          sub_7D4DE0(a1);
          v15 = *(unsigned int *)(a1 + 3128);
          v6 = *(_DWORD *)(a2 + 12);
          v7 = *(__int64 **)(a1 + 3120);
          v16 = v15 - 1;
          v9 = 16 * v15;
          v10 = &v7[(unsigned __int64)v9 / 8];
          v11 = 16LL * (v6 & v16);
          v12 = &v7[(unsigned __int64)v11 / 8];
LABEL_10:
          if ( v11 == v9 )
            goto LABEL_38;
LABEL_11:
          v13 = v12;
          while ( 1 )
          {
            v17 = *v13;
            if ( (unsigned __int64)*v13 > 1 )
            {
              if ( *(_DWORD *)(v17 + 12) == v6 && a2 == v17 )
                return v13[1];
            }
            else if ( !v17 )
            {
              goto LABEL_17;
            }
            v13 += 2;
            if ( v10 == v13 )
              goto LABEL_38;
          }
        }
        v13 += 2;
        if ( v12 == v13 )
        {
LABEL_8:
          if ( !*(_DWORD *)(a1 + 3132) )
            goto LABEL_9;
          goto LABEL_10;
        }
      }
    }
    if ( !*(_DWORD *)(a1 + 3132) )
      goto LABEL_9;
LABEL_38:
    while ( v12 != v7 )
    {
      v30 = *v7;
      if ( (unsigned __int64)*v7 > 1 )
      {
        if ( *(_DWORD *)(v30 + 12) == v6 && a2 == v30 )
        {
          v13 = v7;
          return v13[1];
        }
      }
      else if ( !v30 )
      {
        break;
      }
      v7 += 2;
    }
  }
  else
  {
    v13 = &v7[(unsigned __int64)v11 / 8];
    do
    {
      v14 = *v13;
      if ( (unsigned __int64)*v13 > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v6 && a2 == v14 )
          return v13[1];
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
      v13 += 2;
    }
    while ( v10 != v13 );
    if ( v7 != v12 )
    {
      v13 = v7;
      goto LABEL_31;
    }
    if ( !*(_DWORD *)(a1 + 3132) )
      goto LABEL_9;
    if ( v9 )
      goto LABEL_11;
  }
LABEL_17:
  sub_1373200(v38, *(_QWORD *)(a1 + 72));
  v18 = sub_1372E30(v38, a2);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  ++*(_DWORD *)(a2 + 8);
  v20 = *(_QWORD *)(a1 + 80);
  v21 = a1 + 3120;
  v36 = *(_QWORD *)(a1 + 72);
  v22 = (_QWORD *)sub_180C100(v20 + 2144, 40);
  *v22 = off_1C549D0;
  v22[1] = v36;
  v23 = *(_QWORD **)(v20 + 2128);
  v22[2] = v21;
  v22[3] = a2;
  v22[4] = v19;
  if ( v23 )
  {
    v24 = *((_DWORD *)v23 - 1);
    if ( v24 == *((_DWORD *)v23 - 2) )
    {
      v31 = (3 * v24 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v24 + 8 >= v32 || v24 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v37, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v37);
        sub_233E40((__int64)v37);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v23 - 1, v32);
      v34 = v33[1];
      v23 = v33 + 2;
      *(_QWORD *)(v20 + 2128) = v33 + 2;
      *v33 = v31;
      LODWORD(v33) = v34;
      v27 = &v23[v34];
      v26 = (_DWORD)v33 + 1;
    }
    else
    {
      v25 = v24;
      v26 = v24 + 1;
      v27 = &v23[v25];
    }
  }
  else
  {
    v35 = (_QWORD *)sub_186B270(0x18u);
    *v35 = 2;
    v26 = 1;
    v23 = v35 + 1;
    *(_QWORD *)(v20 + 2128) = v23;
    v27 = v23;
  }
  *v27 = v22;
  *((_DWORD *)v23 - 1) = v26;
  sub_1372EF0(v38);
  return v19;
}

