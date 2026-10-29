void __fastcall sub_52E800(_DWORD **a1, __int64 *a2)
{
  _DWORD *v2; // rdx
  unsigned int v4; // esi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  _QWORD *v8; // r12
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int *v12; // rax
  unsigned int v13; // eax
  int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  size_t v21; // rsi
  unsigned int *v22; // rax
  _QWORD *v23; // rax
  _DWORD *i; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char **exception; // rbp
  unsigned int v28; // [rsp+0h] [rbp-6Ch]
  __int64 v29[11]; // [rsp+14h] [rbp-58h] BYREF

  v2 = *a1;
  if ( !*a1 )
    return;
  v4 = *(v2 - 1);
  v5 = 32 * v4;
  if ( !(32 * v4) || !v4 )
    return;
  v6 = *v2 & 1;
  if ( v6 )
  {
    v7 = 0;
LABEL_6:
    v8 = nullptr;
    while ( 1 )
    {
      v9 = *a2;
      v10 = v7 >> 5;
      if ( !*a2 || v10 >= *(_DWORD *)(v9 - 4) || (*(_DWORD *)(v9 + 4LL * v10) & (1 << v7)) == 0 )
      {
        if ( v8 )
        {
          v11 = *((unsigned int *)v8 - 1);
          if ( (_DWORD)v11 == *((_DWORD *)v8 - 2) )
          {
            v20 = (unsigned int)(3 * v11 + 1) >> 1;
            v21 = 4 * v20 + 8;
            if ( 4 * (int)v11 + 8 >= (unsigned int)v21 || (unsigned int)v11 >= v20 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v29, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v29);
              sub_233E40((__int64)v29);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v28 = (unsigned int)(3 * v11 + 1) >> 1;
            v22 = (unsigned int *)sub_186B300(v8 - 1, v21);
            v8 = v22 + 2;
            *v22 = v28;
            v2 = *a1;
            v12 = &v22[v22[1] + 2];
          }
          else
          {
            v12 = (unsigned int *)v8 + v11;
          }
        }
        else
        {
          v23 = (_QWORD *)sub_186B270(0x10u);
          v8 = v23 + 1;
          *v23 = 2;
          v2 = *a1;
          v12 = (unsigned int *)(v23 + 1);
        }
        *v12 = v7;
        ++*((_DWORD *)v8 - 1);
      }
      if ( ++v7 == v5 )
      {
        if ( !v2 )
          goto LABEL_26;
        v13 = v7 >> 5;
        if ( v7 >> 5 >= *(v2 - 1) )
          goto LABEL_26;
      }
      else
      {
        if ( !v2 )
        {
          while ( (v7 & 0x1F) != 0 )
          {
            if ( v5 == ++v7 )
            {
              v13 = v5 >> 5;
              goto LABEL_37;
            }
          }
          v13 = v7 >> 5;
LABEL_37:
          if ( v5 == v7 )
            goto LABEL_26;
          if ( !*(_DWORD *)(4LL * v13) )
            goto LABEL_24;
          goto LABEL_39;
        }
        do
        {
          v13 = v7 >> 5;
          if ( v7 >> 5 < *(v2 - 1) && (v2[v13] & (1 << (v7 & 0x1F))) != 0 || (v7 & 0x1F) == 0 )
            goto LABEL_18;
          ++v7;
        }
        while ( v5 != v7 );
        v13 = v5 >> 5;
LABEL_18:
        if ( v13 >= *(v2 - 1) )
        {
          while ( 1 )
          {
            if ( v5 == v7 )
              goto LABEL_26;
            v14 = v2[v13];
LABEL_23:
            if ( v14 )
              break;
LABEL_24:
            ++v13;
            v7 += 32;
          }
LABEL_39:
          if ( v5 == v7 )
            goto LABEL_26;
          v18 = v7 >> 5;
          if ( !v2 )
          {
            while ( v5 != ++v7 )
            {
              if ( (v7 & 0x1F) == 0 )
                goto LABEL_54;
            }
            goto LABEL_26;
          }
          if ( ((unsigned int)v18 >= *(v2 - 1) || (v2[v18] & (1 << v7)) == 0) && v5 == ++v7 )
            goto LABEL_26;
          while ( 1 )
          {
            v19 = v7 >> 5;
            if ( (unsigned int)v19 < *(v2 - 1) && (v2[v19] & (1 << (v7 & 0x1F))) != 0 )
              goto LABEL_54;
            if ( (v7 & 0x1F) == 0 )
              goto LABEL_54;
            if ( v5 == ++v7 )
              goto LABEL_26;
          }
        }
      }
      v14 = v2[v13];
      if ( (v14 & (1 << v7)) == 0 )
      {
        if ( v5 != v7 )
          goto LABEL_23;
LABEL_26:
        if ( v8 )
        {
          for ( LODWORD(v15) = *((_DWORD *)v8 - 1); (_DWORD)v15; *((_DWORD *)v8 - 1) = v15 )
          {
            v15 = (unsigned int)(v15 - 1);
            v16 = *((_DWORD *)v8 + v15);
            v17 = v16 >> 5;
            if ( v2 )
            {
              if ( (unsigned int)v17 < *(v2 - 1) )
              {
                v2[v17] &= __ROL4__(-2, v16);
                LODWORD(v15) = *((_DWORD *)v8 - 1) - 1;
              }
            }
          }
          sub_186B220(v8 - 1);
        }
        return;
      }
LABEL_54:
      if ( v5 == v7 )
        goto LABEL_26;
    }
  }
  for ( i = *a1; !*i; ++i )
  {
    v6 += 32;
    if ( v6 == v5 )
      return;
  }
  if ( v5 != v6 )
  {
    v25 = v6 >> 5;
    if ( (unsigned int)v25 < v4 )
      v7 = ((v2[v25] & 1) == 0) + v6;
    else
      v7 = v6 + 1;
    while ( 1 )
    {
      v26 = v7 >> 5;
      if ( (unsigned int)v26 < v4 && (v2[v26] & (1 << (v7 & 0x1F))) != 0 )
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

