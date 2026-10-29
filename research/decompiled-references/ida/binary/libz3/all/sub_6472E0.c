void __fastcall sub_6472E0(_QWORD *a1, _DWORD **a2)
{
  char **exception; // rbx
  _DWORD *v3; // rsi
  unsigned int v4; // edx
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  _QWORD *v8; // r8
  __int64 v9; // r12
  unsigned int v10; // ebp
  char v11; // cl
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  size_t v18; // rsi
  unsigned int v19; // r15d
  unsigned int *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r15
  _QWORD *v24; // rax
  _DWORD *i; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+0h] [rbp-78h]
  _QWORD *v29; // [rsp+0h] [rbp-78h]
  __int64 v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *a2;
  if ( !v3 )
    return;
  v4 = *(v3 - 1);
  v5 = 32 * v4;
  if ( !(32 * v4) || !v4 )
    return;
  v6 = *v3 & 1;
  if ( v6 )
  {
    v7 = 0;
LABEL_6:
    v8 = (_QWORD *)*a1;
    v9 = v7 >> 5;
    if ( !*a1 )
    {
      v10 = v9 + 1;
      v24 = (_QWORD *)sub_186B270(0x10u);
      v28 = 0;
      v8 = v24 + 1;
      *v24 = 2;
      *a1 = v24 + 1;
      goto LABEL_33;
    }
    while ( 1 )
    {
      v10 = v9 + 1;
      v28 = *((_DWORD *)v8 - 1);
      if ( (unsigned int)v9 >= v28 )
      {
LABEL_33:
        while ( 1 )
        {
          v21 = *((_DWORD *)v8 - 2);
          if ( v21 >= v10 )
            break;
          v17 = (3 * v21 + 1) >> 1;
          v18 = 4 * v17 + 8;
          v19 = v17;
          if ( 4 * v21 + 8 >= (unsigned int)v18 || v21 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v31, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v31);
            sub_233E40((__int64)v31);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = (unsigned int *)sub_186B300(v8 - 1, v18);
          v8 = v20 + 2;
          *v20 = v19;
          *a1 = v20 + 2;
        }
        *((_DWORD *)v8 - 1) = v10;
        v22 = 4LL * v10;
        v23 = 4LL * v28;
        if ( v23 != v22 )
        {
          v29 = v8;
          memset((char *)v8 + v23, 0, v22 - v23);
          v8 = v29;
        }
      }
      v11 = v7++;
      *((_DWORD *)v8 + v9) |= 1 << v11;
      v12 = *a2;
      if ( v7 == v5 )
      {
        if ( !v12 )
          return;
        v13 = v7 >> 5;
        if ( v7 >> 5 >= *(v12 - 1) )
          return;
LABEL_47:
        v14 = v12[v13];
        if ( !_bittest(&v14, v7) )
        {
          if ( v5 != v7 )
            goto LABEL_17;
          return;
        }
      }
      else
      {
        if ( !v12 )
        {
          while ( (v7 & 0x1F) != 0 )
          {
            if ( v5 == ++v7 )
            {
              v13 = v5 >> 5;
              goto LABEL_39;
            }
          }
          v13 = v7 >> 5;
LABEL_39:
          if ( v5 != v7 )
          {
            v14 = *(_DWORD *)(4LL * v13);
            goto LABEL_17;
          }
          return;
        }
        do
        {
          v13 = v7 >> 5;
          if ( v7 >> 5 < *(v12 - 1) && (v12[v13] & (1 << (v7 & 0x1F))) != 0 || (v7 & 0x1F) == 0 )
          {
            if ( v13 < *(v12 - 1) )
              goto LABEL_47;
            goto LABEL_13;
          }
          ++v7;
        }
        while ( v5 != v7 );
        v13 = v5 >> 5;
        if ( v5 >> 5 < *(v12 - 1) )
          goto LABEL_47;
LABEL_13:
        if ( v7 == v5 )
          return;
        while ( 1 )
        {
          v14 = v12[v13];
LABEL_17:
          if ( v14 )
            break;
          v7 += 32;
          ++v13;
          if ( v5 == v7 )
            return;
        }
        if ( v5 == v7 )
          return;
        v15 = v7 >> 5;
        if ( !v12 )
        {
          while ( v5 != ++v7 )
          {
            if ( (v7 & 0x1F) == 0 )
              goto LABEL_25;
          }
          return;
        }
        if ( ((unsigned int)v15 >= *(v12 - 1) || (v12[v15] & (1 << v7)) == 0) && v5 == ++v7 )
          return;
        while ( 1 )
        {
          v16 = v7 >> 5;
          if ( (unsigned int)v16 < *(v12 - 1) && (v12[v16] & (1 << (v7 & 0x1F))) != 0 )
            break;
          if ( (v7 & 0x1F) == 0 )
            break;
          if ( v5 == ++v7 )
            return;
        }
      }
LABEL_25:
      if ( v5 == v7 )
        return;
      v9 = v7 >> 5;
    }
  }
  for ( i = v3; !*i; ++i )
  {
    v6 += 32;
    if ( v6 == v5 )
      return;
  }
  if ( v5 != v6 )
  {
    v26 = v6 >> 5;
    if ( (unsigned int)v26 < v4 )
      v7 = ((v3[v26] & 1) == 0) + v6;
    else
      v7 = v6 + 1;
    while ( 1 )
    {
      v27 = v7 >> 5;
      if ( (unsigned int)v27 < v4 && (v3[v27] & (1 << (v7 & 0x1F))) != 0 )
        break;
      if ( (v7 & 0x1F) == 0 )
        break;
      if ( ++v7 == v5 )
        return;
    }
    if ( v5 == v7 )
      return;
    goto LABEL_6;
  }
}

