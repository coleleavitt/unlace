void __fastcall sub_647690(_QWORD *a1, _DWORD **a2, _QWORD *a3)
{
  char **exception; // rbx
  _DWORD *v4; // rsi
  unsigned int v6; // edx
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // r15d
  _QWORD *v10; // r9
  __int64 v11; // rbp
  unsigned int v12; // ebx
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  size_t v19; // rsi
  unsigned int v20; // r12d
  unsigned int *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r12
  _QWORD *v25; // rax
  _DWORD *i; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+4h] [rbp-84h]
  unsigned int v30; // [rsp+8h] [rbp-80h]
  _QWORD *v31; // [rsp+8h] [rbp-80h]
  __int64 v33[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *a2;
  if ( !v4 )
    return;
  v6 = *(v4 - 1);
  v7 = 32 * v6;
  if ( !(32 * v6) || !v6 )
    return;
  v8 = *v4 & 1;
  if ( v8 )
  {
    v9 = 0;
LABEL_6:
    v10 = (_QWORD *)*a3;
    v29 = *(_DWORD *)(*a1 + 4LL * v9);
    v11 = v29 >> 5;
    if ( !*a3 )
    {
      v12 = v11 + 1;
      v25 = (_QWORD *)sub_186B270(0x10u);
      v30 = 0;
      v10 = v25 + 1;
      *v25 = 2;
      *a3 = v25 + 1;
      goto LABEL_33;
    }
    while ( 1 )
    {
      v12 = v11 + 1;
      v30 = *((_DWORD *)v10 - 1);
      if ( (unsigned int)v11 >= v30 )
      {
LABEL_33:
        while ( 1 )
        {
          v22 = *((_DWORD *)v10 - 2);
          if ( v22 >= v12 )
            break;
          v18 = (3 * v22 + 1) >> 1;
          v19 = 4 * v18 + 8;
          v20 = v18;
          if ( 4 * v22 + 8 >= (unsigned int)v19 || v22 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v33, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = (unsigned int *)sub_186B300(v10 - 1, v19);
          v10 = v21 + 2;
          *v21 = v20;
          *a3 = v21 + 2;
        }
        *((_DWORD *)v10 - 1) = v12;
        v23 = 4LL * v12;
        v24 = 4LL * v30;
        if ( v24 != v23 )
        {
          v31 = v10;
          memset((char *)v10 + v24, 0, v23 - v24);
          v10 = v31;
        }
      }
      ++v9;
      *((_DWORD *)v10 + v11) |= 1 << v29;
      v13 = *a2;
      if ( v9 == v7 )
      {
        if ( !v13 )
          return;
        v14 = v9 >> 5;
        if ( v9 >> 5 >= *(v13 - 1) )
          return;
LABEL_47:
        v15 = v13[v14];
        if ( !_bittest(&v15, v9) )
        {
          if ( v7 != v9 )
            goto LABEL_17;
          return;
        }
      }
      else
      {
        if ( !v13 )
        {
          while ( (v9 & 0x1F) != 0 )
          {
            if ( v7 == ++v9 )
            {
              v14 = v7 >> 5;
              goto LABEL_39;
            }
          }
          v14 = v9 >> 5;
LABEL_39:
          if ( v7 != v9 )
          {
            v15 = *(_DWORD *)(4LL * v14);
            goto LABEL_17;
          }
          return;
        }
        do
        {
          v14 = v9 >> 5;
          if ( v9 >> 5 < *(v13 - 1) && (v13[v14] & (1 << (v9 & 0x1F))) != 0 || (v9 & 0x1F) == 0 )
          {
            if ( v14 < *(v13 - 1) )
              goto LABEL_47;
            goto LABEL_13;
          }
          ++v9;
        }
        while ( v7 != v9 );
        v14 = v7 >> 5;
        if ( v7 >> 5 < *(v13 - 1) )
          goto LABEL_47;
LABEL_13:
        if ( v9 == v7 )
          return;
        while ( 1 )
        {
          v15 = v13[v14];
LABEL_17:
          if ( v15 )
            break;
          v9 += 32;
          ++v14;
          if ( v7 == v9 )
            return;
        }
        if ( v7 == v9 )
          return;
        v16 = v9 >> 5;
        if ( !v13 )
        {
          while ( v7 != ++v9 )
          {
            if ( (v9 & 0x1F) == 0 )
              goto LABEL_25;
          }
          return;
        }
        if ( ((unsigned int)v16 >= *(v13 - 1) || (v13[v16] & (1 << v9)) == 0) && v7 == ++v9 )
          return;
        while ( 1 )
        {
          v17 = v9 >> 5;
          if ( (unsigned int)v17 < *(v13 - 1) && (v13[v17] & (1 << (v9 & 0x1F))) != 0 )
            break;
          if ( (v9 & 0x1F) == 0 )
            break;
          if ( ++v9 == v7 )
            return;
        }
      }
LABEL_25:
      if ( v7 == v9 )
        return;
      v29 = *(_DWORD *)(*a1 + 4LL * v9);
      v11 = v29 >> 5;
    }
  }
  for ( i = v4; !*i; ++i )
  {
    v8 += 32;
    if ( v8 == v7 )
      return;
  }
  if ( v7 != v8 )
  {
    v27 = v8 >> 5;
    if ( (unsigned int)v27 < v6 )
      v9 = ((v4[v27] & 1) == 0) + v8;
    else
      v9 = v8 + 1;
    while ( 1 )
    {
      v28 = v9 >> 5;
      if ( (unsigned int)v28 < v6 && (v4[v28] & (1 << (v9 & 0x1F))) != 0 )
        break;
      if ( (v9 & 0x1F) == 0 )
        break;
      if ( ++v9 == v7 )
        return;
    }
    if ( v7 == v9 )
      return;
    goto LABEL_6;
  }
}

