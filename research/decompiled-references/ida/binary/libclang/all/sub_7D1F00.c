__int64 __fastcall sub_7D1F00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r12d
  __int64 *v10; // r12
  __int64 result; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  char v16; // dl
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r15d
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  _BOOL4 v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r15d
  unsigned __int64 v34; // rcx
  _BOOL4 v35; // r15d
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  _BOOL4 v38; // r15d
  int v39; // r14d

  if ( (*(_BYTE *)(a1 + 23) & 0x40) != 0 && (v5 = *(_QWORD *)(a1 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) + 24)) != 0 )
  {
    v30 = *(unsigned int *)(a2 + 8);
    v7 = v30 + 1;
    if ( *(unsigned int *)(a2 + 12) >= (unsigned __int64)(v30 + 1) )
    {
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v30) = 1;
      ++*(_DWORD *)(a2 + 8);
LABEL_31:
      sub_AFCA50(v5, a2, a3, 1, 0);
      v8 = *(unsigned int *)(a2 + 8);
      goto LABEL_5;
    }
    v39 = 1;
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 8);
    v7 = v6 + 1;
    if ( *(unsigned int *)(a2 + 12) >= (unsigned __int64)(v6 + 1) )
    {
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v6) = 0;
      v8 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v8;
      goto LABEL_5;
    }
    v5 = 0;
    v39 = 0;
  }
  sub_25D6060(a2, a2 + 16, v7, 4);
  *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v39;
  v8 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v8;
  if ( v5 )
    goto LABEL_31;
LABEL_5:
  v9 = *(_DWORD *)(a1 + 20) & 0x1FFFFFFF;
  if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v8 + 1) )
  {
    sub_25D6060(a2, a2 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v8) = v9;
  v10 = (__int64 *)(a1 + 24);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  v12 = a1 + (unsigned int)(8 * *(_DWORD *)(a1 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a1 + 20) )
  {
    while ( 1 )
    {
      v13 = *v10;
      v14 = *(unsigned int *)(a2 + 12);
      v15 = result + 1;
      v16 = *(_BYTE *)(*v10 + 28) & 0x7F;
      if ( v16 == 45 )
      {
        if ( v14 < v15 )
        {
          sub_25D6060(a2, a2 + 16, v15, 4);
          result = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = 0;
        v17 = *(unsigned int *)(a2 + 12);
        v18 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v18;
        v19 = *(unsigned __int8 *)(v13 + 80);
        if ( v17 < v18 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v18 + 1, 4);
          v18 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v18) = v19;
        v20 = *(unsigned int *)(a2 + 12);
        v21 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v21;
        v22 = *(_QWORD *)&byte_8[*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v13 + 48) & 7LL;
        if ( v20 < v21 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v21 + 1, 4);
          v21 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v21) = v22;
        v23 = HIDWORD(v22);
        v24 = *(unsigned int *)(a2 + 12);
        v25 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v25;
        if ( v24 < v25 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v25 + 1, 4);
          v25 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v25) = v23;
        v26 = 0;
        ++*(_DWORD *)(a2 + 8);
        v27 = sub_B07C80(*(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        if ( v27 && *(_BYTE *)(v27 + 16) == 16 )
          v26 = *(_QWORD *)(v27 + 32) != 0;
        v28 = *(unsigned int *)(a2 + 8);
        if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v28 + 1) )
        {
          sub_25D6060(a2, a2 + 16, v28 + 1, 4);
          v28 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v28) = v26;
        ++*(_DWORD *)(a2 + 8);
        result = sub_B07C80(*(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        if ( result )
        {
          if ( *(_BYTE *)(result + 16) == 16 )
          {
            if ( *(_QWORD *)(result + 32) )
            {
              result = 16LL * *(unsigned int *)(v13 + 84);
              v29 = *(_QWORD *)(v13 + result + 88);
              if ( v29 )
                goto LABEL_26;
            }
          }
        }
      }
      else if ( v16 == 65 )
      {
        if ( v14 < v15 )
        {
          sub_25D6060(a2, a2 + 16, v15, 4);
          result = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = 1;
        v31 = *(unsigned int *)(a2 + 12);
        v32 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v32;
        v33 = (unsigned int)*(char *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 48) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 21LL) >> 31;
        if ( v31 < v32 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v32 + 1, 4);
          v32 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v32) = v33;
        v34 = *(unsigned int *)(a2 + 12);
        result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = result;
        v35 = (*(_BYTE *)(v13 + 60) & 2) != 0;
        if ( v34 < result + 1 )
        {
          sub_25D6060(a2, a2 + 16, result + 1, 4);
          result = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v35;
        ++*(_DWORD *)(a2 + 8);
        if ( (*(_BYTE *)(v13 + 60) & 4) != 0 )
        {
          v29 = *(_QWORD *)(v13 + 80);
LABEL_26:
          result = sub_AFCA50(v29, a2, a3, 1, 0);
        }
      }
      else
      {
        if ( v14 < v15 )
        {
          sub_25D6060(a2, a2 + 16, v15, 4);
          result = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = 2;
        v36 = *(unsigned int *)(a2 + 12);
        v37 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v37;
        v38 = (*(_BYTE *)(v13 + 80) & 2) != 0;
        if ( v36 < v37 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v37 + 1, 4);
          v37 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v37) = v38;
        ++*(_DWORD *)(a2 + 8);
        result = sub_7D1F00(*(_QWORD *)(v13 + 56), a2, a3);
      }
      if ( (__int64 *)v12 == ++v10 )
        return result;
      result = *(unsigned int *)(a2 + 8);
    }
  }
  return result;
}

