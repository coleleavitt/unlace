__int64 __fastcall sub_1D55D0(__int64 a1)
{
  unsigned int v1; // r13d
  int *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // r12
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  int *v13; // rdi
  unsigned int v14; // eax
  unsigned __int64 v15; // rdi
  int flags; // eax
  __int64 v17; // r12
  unsigned int *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // ebp
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  int v36; // eax

  LOBYTE(v1) = *(_DWORD *)(a1 + 76) == 1 || *(_DWORD *)(a1 + 76) == 6;
  if ( (_BYTE)v1 || (*(_BYTE *)(a1 + 25) & 0x60) != 0 )
    return 1;
  v4 = *(int **)(a1 + 56);
  if ( v4 )
  {
    v5 = *v4;
    if ( (unsigned int)*v4 > 0x39 )
    {
      if ( v5 == 58 )
        return 1;
    }
    else if ( v5 > 0x37 )
    {
      if ( (unsigned __int8)sub_11C750(v4, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
        return 1;
    }
    else if ( v5 - 53 <= 2 )
    {
      return 1;
    }
  }
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_DWORD *)(a1 + 72) + 1;
  v8 = *(_DWORD *)(v6 + 64);
  if ( (int)v7 < v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 >= v8 )
          sub_1D36D0();
        v9 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8LL * v7);
        v10 = *(_DWORD *)(v9 + 76);
        if ( v10 == 1 || (v11 = *(_DWORD *)(v9 + 24), (v11 & 2) == 0) || (v11 & 8) != 0 || v10 == 6 )
        {
LABEL_23:
          v15 = *(_QWORD *)(a1 + 40);
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 + 76) != 1 )
              goto LABEL_51;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL) + 24LL) + 24LL) == 8 )
            {
              if ( v15 != -1 )
                goto LABEL_27;
            }
            else if ( !HIDWORD(v15) )
            {
              goto LABEL_27;
            }
LABEL_29:
            v17 = *(_QWORD *)(v9 + 16);
            goto LABEL_30;
          }
          v6 = *(_QWORD *)(a1 + 64);
LABEL_42:
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1496) + 24LL) + 24LL) == 8 )
          {
            if ( v15 == -1 )
              goto LABEL_44;
          }
          else if ( HIDWORD(v15) )
          {
            goto LABEL_44;
          }
          v9 = 0;
          goto LABEL_27;
        }
        v12 = *(_QWORD *)(a1 + 56);
        if ( v12 && *(_QWORD *)(v9 + 32) == *(_QWORD *)(v12 + 24) )
          return 1;
        v13 = *(int **)(v9 + 56);
        if ( v13 )
          break;
LABEL_22:
        v8 = *(_DWORD *)(v6 + 64);
        if ( (int)++v7 >= v8 )
          goto LABEL_23;
      }
      v14 = *v13;
      if ( (unsigned int)*v13 <= 0x39 )
      {
        if ( v14 <= 0x37 )
        {
          if ( v14 - 53 <= 2 )
            goto LABEL_41;
        }
        else
        {
          if ( (unsigned __int8)sub_11C750(v13, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
            goto LABEL_23;
          v6 = *(_QWORD *)(a1 + 64);
        }
        goto LABEL_22;
      }
      if ( v14 == 58 )
      {
LABEL_41:
        v15 = *(_QWORD *)(a1 + 40);
        if ( !v9 )
          goto LABEL_42;
LABEL_51:
        v28 = *(_QWORD *)(v9 + 32);
        if ( v28 != v15 )
        {
          v29 = *(_QWORD *)(a1 + 56);
          if ( !v29 || v28 != *(_QWORD *)(v29 + 24) )
          {
            v30 = 0x100000000LL;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL) + 24LL) + 24LL) == 8 )
              v30 = -1;
            if ( v15 >= v30 )
              goto LABEL_28;
LABEL_27:
            flags = get_flags_ex();
            if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
            {
LABEL_28:
              if ( !v9 )
                goto LABEL_44;
              goto LABEL_29;
            }
          }
        }
        return 1;
      }
      v8 = *(_DWORD *)(v6 + 64);
      if ( (int)++v7 >= v8 )
        goto LABEL_23;
    }
  }
  v35 = *(_QWORD *)(a1 + 40);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1496) + 24LL) + 24LL) == 8 )
  {
    if ( v35 == -1 )
      goto LABEL_44;
  }
  else if ( HIDWORD(v35) )
  {
    goto LABEL_44;
  }
  v36 = get_flags_ex();
  if ( (~(_WORD)v36 & 0x600) == 0 && (v36 & 0x10000000) != 0 )
    return 1;
LABEL_44:
  v17 = a1;
LABEL_30:
  v18 = *(unsigned int **)(v17 + 56);
  if ( v18 )
  {
    v19 = *((_QWORD *)v18 + 3);
    if ( (unsigned __int8)sub_32ED40(*v18, 1) )
    {
      v31 = sub_68FC0(*(_QWORD *)(a1 + 64), *(_DWORD *)(v17 + 72) + 1, v20, v21);
      *(_DWORD *)(v31 + 24) |= 2u;
      v17 = v31;
      if ( *(_DWORD *)(a1 + 76) )
        *(_DWORD *)(v31 + 76) = 3;
    }
  }
  else
  {
    v19 = *(_QWORD *)(v17 + 32);
  }
  v23 = (__int64)sub_670B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 40));
  if ( v23 || (v23 = sub_68FD0(*(_QWORD *)(a1 + 64), v19, *(_QWORD *)(a1 + 40), 1)) != 0 )
  {
    sub_B52C0((_QWORD *)v17, v19, *(unsigned int *)(v23 + 72), v22);
    if ( *(_DWORD *)(v17 + 76) )
    {
      sub_6B180(v17);
      v24 = *(_QWORD *)(v17 + 376);
      *(_DWORD *)(v17 + 76) = 3;
      if ( v24 )
      {
        if ( v24 != 1 )
          *(_QWORD *)(v17 + 376) = 1;
      }
      else
      {
        v32 = *(_QWORD *)(v17 + 368);
        if ( !*(_QWORD *)(v17 + 384) )
        {
          v34 = qvector_reserve(v17 + 368, v32, 1, 4);
          v24 = *(_QWORD *)(v17 + 376);
          *(_QWORD *)(v17 + 368) = v34;
          v32 = v34;
        }
        memset((void *)(v32 + 4 * v24), 0, 4 * (1 - v24));
        *(_QWORD *)(v17 + 376) = 1;
      }
      **(_DWORD **)(v17 + 368) = *(_DWORD *)(v23 + 72);
      v25 = *(_QWORD *)(v23 + 352);
      v26 = *(_DWORD *)(v17 + 72);
      v27 = *(_QWORD *)(v23 + 344);
      if ( *(_QWORD *)(v23 + 360) < (unsigned __int64)(v25 + 1) )
      {
        v33 = qvector_reserve(v23 + 344, v27, v25 + 1, 4);
        *(_QWORD *)(v23 + 344) = v33;
        v27 = v33;
        v25 = *(_QWORD *)(v23 + 352);
      }
      *(_DWORD *)(v27 + 4 * v25) = v26;
      ++*(_QWORD *)(v23 + 352);
    }
    return 1;
  }
  return v1;
}
