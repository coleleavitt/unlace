__int64 __fastcall sub_E0B690(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r8
  __int64 v5; // r9
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // edx
  void (***v14)(); // rbp
  void (*v15)(); // rax
  __int64 v16; // rsi
  __int64 v17; // r11
  __int64 v18; // rdi
  __int64 i; // rax
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r14d
  _QWORD *v26; // rax
  _QWORD *v27; // r12
  _QWORD *v28; // r13
  void *v29; // rdi
  void (*v30)(); // rax
  int v31; // edx
  int v32; // edx
  __int64 v33; // rax

  v3 = *a2;
  v5 = *(_QWORD *)(a1 + 512);
  result = *(unsigned int *)(a1 + 520);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v7 = v3 >> 3;
    else
      LODWORD(v7) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v7) = -1640531495;
  }
  v8 = result - 1;
  v9 = 24 * result;
  v10 = v5 + 24 * result;
  v11 = 24LL * ((unsigned int)v7 & ((_DWORD)result - 1));
  v12 = v5 + v11;
  if ( v11 == 24 * result )
  {
LABEL_38:
    if ( v5 == v12 )
      return result;
    result = v5;
    while ( 1 )
    {
      v31 = *(_DWORD *)(result + 4);
      if ( v31 != 2 )
        break;
      if ( (_DWORD)v7 == *(_DWORD *)result )
      {
        if ( *(_QWORD *)(result + 8) == v3 )
          goto LABEL_11;
        result += 24;
        if ( v12 == result )
          return result;
      }
      else
      {
LABEL_41:
        result += 24;
        if ( v12 == result )
          return result;
      }
    }
    if ( !v31 )
      return result;
    goto LABEL_41;
  }
  result = v5 + v11;
  while ( 1 )
  {
    v13 = *(_DWORD *)(result + 4);
    if ( v13 != 2 )
    {
      if ( !v13 )
        return result;
      goto LABEL_7;
    }
    if ( (_DWORD)v7 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v3 )
      break;
LABEL_7:
    result += 24;
    if ( v10 == result )
      goto LABEL_38;
  }
LABEL_11:
  v14 = *(void (****)())(result + 16);
  v15 = (*v14)[3];
  if ( v15 != nullsub_127 )
  {
    ((void (__fastcall *)(void (***)(), __int64, void (*)(), __int64))v15)(v14, a1, nullsub_127, v10);
    v33 = *(unsigned int *)(a1 + 520);
    v5 = *(_QWORD *)(a1 + 512);
    v3 = *a2;
    v8 = v33 - 1;
    v9 = 24 * v33;
    v10 = v5 + 24 * v33;
  }
  if ( v3 )
  {
    if ( (v3 & 7) == 1 )
      v16 = v3 >> 3;
    else
      v16 = *(unsigned int *)(v3 - 8);
  }
  else
  {
    v16 = 2654435801LL;
  }
  v17 = (unsigned int)v16 & v8;
  v18 = v5 + 24 * v17;
  if ( 24 * v17 != v9 )
  {
    for ( i = v5 + 24 * v17; i != v10; i += 24 )
    {
      v20 = *(_DWORD *)(i + 4);
      if ( v20 == 2 )
      {
        if ( (_DWORD)v16 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v3 )
        {
LABEL_23:
          v21 = i + 24;
          v22 = *(unsigned int *)(a1 + 524);
          if ( i + 24 == v10 )
            v21 = v5;
          v10 = (unsigned int)(v22 - 1);
          if ( *(_DWORD *)(v21 + 4) )
          {
            *(_DWORD *)(i + 4) = 1;
            v23 = *(_DWORD *)(a1 + 528);
            *(_DWORD *)(a1 + 524) = v10;
            v24 = v23 + 1;
            *(_DWORD *)(a1 + 528) = v24;
            if ( (unsigned int)v10 < v24 && v24 > 0x40 && !(unsigned __int8)sub_186AF10(v22) )
            {
              v25 = *(_DWORD *)(a1 + 520);
              v26 = (_QWORD *)sub_186B270(24LL * v25);
              v27 = v26;
              v28 = &v26[3 * v25];
              if ( v25 )
              {
                do
                {
                  *v26 = 0;
                  v26 += 3;
                  *(v26 - 2) = 0;
                }
                while ( v26 != v28 );
              }
              v16 = *(unsigned int *)(a1 + 520);
              sub_E103E0(*(_QWORD *)(a1 + 512), v16, v27, v16);
              v29 = *(void **)(a1 + 512);
              if ( v29 )
                sub_186B220(v29);
              *(_QWORD *)(a1 + 512) = v27;
              *(_DWORD *)(a1 + 528) = 0;
            }
          }
          else
          {
            *(_DWORD *)(i + 4) = 0;
            *(_DWORD *)(a1 + 524) = v10;
          }
          goto LABEL_34;
        }
      }
      else if ( !v20 )
      {
        goto LABEL_34;
      }
    }
  }
  if ( v18 != v5 )
  {
    for ( i = v5; v18 != i; i += 24 )
    {
      v32 = *(_DWORD *)(i + 4);
      if ( v32 == 2 )
      {
        if ( (_DWORD)v16 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v3 )
          goto LABEL_23;
      }
      else if ( !v32 )
      {
        break;
      }
    }
  }
LABEL_34:
  v30 = **v14;
  if ( v30 != nullsub_131 )
    ((void (__fastcall *)(void (***)(), __int64, void (*)(), __int64))v30)(v14, v16, nullsub_131, v10);
  return sub_186B220(v14);
}

