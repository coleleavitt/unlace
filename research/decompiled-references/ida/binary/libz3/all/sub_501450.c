void __fastcall sub_501450(__int64 a1, __int64 *a2, _QWORD *a3)
{
  char **exception; // rbx
  _DWORD *v4; // rdi
  unsigned int v6; // esi
  int v7; // r15d
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  _QWORD *v11; // r8
  unsigned int v12; // r12d
  unsigned int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // r15
  unsigned int v18; // edx
  size_t v19; // rsi
  unsigned int v20; // ebx
  unsigned int *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _DWORD *i; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned int v33; // [rsp+0h] [rbp-88h]
  _QWORD *v34; // [rsp+0h] [rbp-88h]
  unsigned int v35; // [rsp+8h] [rbp-80h]
  unsigned int v36; // [rsp+8h] [rbp-80h]
  unsigned int v37; // [rsp+Ch] [rbp-7Ch]
  __int64 *v39; // [rsp+18h] [rbp-70h]
  __int64 v40[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = (_DWORD *)*a2;
  if ( !*a2 )
    return;
  v6 = *(v4 - 1);
  v7 = 32 * v6;
  if ( !(32 * v6) || !v6 )
    return;
  v9 = *v4 & 1;
  if ( v9 )
  {
    v10 = 0;
LABEL_6:
    v39 = a2;
    v11 = (_QWORD *)*a3;
    v12 = 32 * *(v4 - 1);
    while ( 1 )
    {
      v13 = v10;
      do
      {
        v14 = v13;
        v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) + 4LL * v13);
      }
      while ( v14 != v13 );
      v15 = v13 >> 5;
      v16 = v15;
      if ( v11 )
      {
        if ( v15 < *((_DWORD *)v11 - 1) )
          goto LABEL_18;
        v35 = v10;
        v17 = v15 + 1;
        v33 = v15;
        v37 = *((_DWORD *)v11 - 1);
      }
      else
      {
        v33 = v15;
        v17 = v15 + 1;
        v29 = (_QWORD *)sub_186B270(0x10u);
        v35 = v10;
        v11 = v29 + 1;
        v37 = 0;
        *v29 = 2;
        *a3 = v29 + 1;
      }
      while ( 1 )
      {
        v22 = *((_DWORD *)v11 - 2);
        if ( v22 >= (unsigned int)v17 )
          break;
        v18 = (3 * v22 + 1) >> 1;
        v19 = 4 * v18 + 8;
        v20 = v18;
        if ( 4 * v22 + 8 >= (unsigned int)v19 || v22 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v40, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v11 - 1, v19);
        v11 = v21 + 2;
        *v21 = v20;
        *a3 = v21 + 2;
      }
      v10 = v35;
      *((_DWORD *)v11 - 1) = v17;
      v16 = v33;
      v23 = 4LL * v37;
      if ( v23 != 4 * v17 )
      {
        v34 = v11;
        v36 = v16;
        memset((char *)v11 + v23, 0, 4 * v17 - v23);
        v11 = v34;
        v16 = v36;
      }
LABEL_18:
      ++v10;
      *((_DWORD *)v11 + v16) |= 1 << v14;
      v24 = *v39;
      if ( v10 == v12 )
      {
        if ( !v24 )
          return;
        v25 = v10 >> 5;
        if ( v10 >> 5 >= *(_DWORD *)(v24 - 4) )
          return;
LABEL_48:
        v26 = *(_DWORD *)(v24 + 4LL * v25);
        if ( (v26 & (1 << v10)) == 0 )
        {
          if ( v12 != v10 )
            goto LABEL_27;
          return;
        }
      }
      else
      {
        if ( !v24 )
        {
          while ( (v10 & 0x1F) != 0 )
          {
            if ( v12 == ++v10 )
            {
              v25 = v12 >> 5;
              goto LABEL_40;
            }
          }
          v25 = v10 >> 5;
LABEL_40:
          if ( v12 != v10 )
          {
            v26 = *(_DWORD *)(4LL * v25);
            goto LABEL_27;
          }
          return;
        }
        do
        {
          v25 = v10 >> 5;
          if ( v10 >> 5 < *(_DWORD *)(v24 - 4) && (*(_DWORD *)(v24 + 4LL * v25) & (1 << (v10 & 0x1F))) != 0
            || (v10 & 0x1F) == 0 )
          {
            if ( v25 < *(_DWORD *)(v24 - 4) )
              goto LABEL_48;
            goto LABEL_23;
          }
          ++v10;
        }
        while ( v12 != v10 );
        v25 = v12 >> 5;
        if ( v12 >> 5 < *(_DWORD *)(v24 - 4) )
          goto LABEL_48;
LABEL_23:
        if ( v10 == v12 )
          return;
        while ( 1 )
        {
          v26 = *(_DWORD *)(v24 + 4LL * v25);
LABEL_27:
          if ( v26 )
            break;
          v10 += 32;
          ++v25;
          if ( v12 == v10 )
            return;
        }
        if ( v12 == v10 )
          return;
        v27 = v10 >> 5;
        if ( !v24 )
        {
          while ( v12 != ++v10 )
          {
            if ( (v10 & 0x1F) == 0 )
              goto LABEL_35;
          }
          return;
        }
        if ( ((unsigned int)v27 >= *(_DWORD *)(v24 - 4) || (*(_DWORD *)(v24 + 4 * v27) & (1 << v10)) == 0)
          && v12 == ++v10 )
        {
          return;
        }
        while ( 1 )
        {
          v28 = v10 >> 5;
          if ( (unsigned int)v28 < *(_DWORD *)(v24 - 4) && (*(_DWORD *)(v24 + 4 * v28) & (1 << (v10 & 0x1F))) != 0 )
            break;
          if ( (v10 & 0x1F) == 0 )
            break;
          if ( ++v10 == v12 )
            return;
        }
      }
LABEL_35:
      if ( v12 == v10 )
        return;
    }
  }
  for ( i = v4; !*i; ++i )
  {
    v9 += 32;
    if ( v9 == v7 )
      return;
  }
  if ( v7 != v9 )
  {
    v31 = v9 >> 5;
    if ( (unsigned int)v31 < v6 )
      v10 = ((v4[v31] & 1) == 0) + v9;
    else
      v10 = v9 + 1;
    while ( 1 )
    {
      v32 = v10 >> 5;
      if ( (unsigned int)v32 < v6 && (v4[v32] & (1 << (v10 & 0x1F))) != 0 )
        break;
      if ( (v10 & 0x1F) == 0 )
        break;
      if ( ++v10 == v7 )
        return;
    }
    if ( v7 == v10 )
      return;
    goto LABEL_6;
  }
}

