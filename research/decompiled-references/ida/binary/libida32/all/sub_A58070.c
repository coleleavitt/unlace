__int64 __fastcall sub_A58070(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  char v7; // dl
  __int64 v8; // rax
  __int64 *v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax

  if ( (a2[29] & 1) == 0 )
    goto LABEL_2;
  v8 = sub_B68690(a2);
  v9 = *(__int64 **)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( *(_QWORD *)v8 < v10 )
  {
    v17 = *(__int64 **)v8;
    while ( *(_WORD *)(*v17 + 36) != 197 )
    {
      if ( (__int64 *)v10 == ++v17 )
        goto LABEL_14;
    }
    if ( (__int64 *)v10 == v17 )
    {
LABEL_14:
      if ( (a2[29] & 1) == 0 )
        goto LABEL_2;
      v13 = sub_B68690(a2);
      v14 = *(_QWORD *)v13;
      v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
      if ( *(_QWORD *)v13 >= v15 )
      {
        if ( v14 == v15 )
          goto LABEL_2;
        while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 195 )
        {
          v15 += 8LL;
          if ( v14 == v15 )
            goto LABEL_2;
        }
      }
      else
      {
        v16 = *(_QWORD *)v13;
        while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 195 )
        {
          v16 += 8;
          if ( v15 == v16 )
            goto LABEL_2;
        }
        if ( v15 == v16 )
        {
LABEL_2:
          v5 = *(_QWORD *)(a1 + 2320);
          if ( (*(_BYTE *)(v5 + 60) & 0x10) == 0 || (*(_BYTE *)(v5 + 89) & 4) == 0 )
            return a3;
          if ( (a2[29] & 1) == 0 )
            goto LABEL_6;
          v18 = sub_B68690(a2);
          v19 = *(_QWORD *)v18;
          v20 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
          if ( *(_QWORD *)v18 >= v20 )
          {
            if ( v19 == v20 )
              goto LABEL_6;
            while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 163 )
            {
              v20 += 8LL;
              if ( v19 == v20 )
                goto LABEL_6;
            }
          }
          else
          {
            v21 = *(_QWORD *)v18;
            while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 163 )
            {
              v21 += 8;
              if ( v20 == v21 )
                goto LABEL_6;
            }
            if ( v20 == v21 )
              goto LABEL_6;
          }
          if ( (a3 & 0xFFFFFFFD) == 0 )
            return 4;
LABEL_6:
          v7 = sub_A57ED0(a1, a2);
          result = 3;
          if ( v7 )
            return result;
          return a3;
        }
      }
      if ( a3 != 2 )
        return a3;
      return 4;
    }
  }
  else
  {
    if ( v9 == (__int64 *)v10 )
      goto LABEL_14;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 197 )
    {
      v11 = (__int64 *)(v10 + 8);
      while ( v9 != v11 )
      {
        v12 = *v11++;
        if ( *(_WORD *)(v12 + 36) == 197 )
          goto LABEL_27;
      }
      goto LABEL_14;
    }
  }
LABEL_27:
  result = 1;
  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    return a3;
  return result;
}

