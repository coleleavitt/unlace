__int64 __fastcall sub_64E5C0(__int64 a1, __int64 a2)
{
  const char *v2; // rbx
  unsigned int v3; // ebx
  int v5; // r13d
  size_t v6; // rax
  const char *v7; // r12
  size_t i; // rdx
  char v9; // cl
  char v10; // si
  char *v11; // rdx
  char v12; // al
  int v13; // ecx
  size_t v14; // rax
  _QWORD *v15; // rsi
  size_t v16; // r14
  size_t v17; // r15
  const char *v18; // rax
  const char *v19; // r12
  size_t v20; // rax
  __int64 v21; // r13
  size_t v22; // r14
  size_t v23; // r15
  _QWORD *v24; // rsi
  size_t v25; // rdx
  unsigned __int64 v26; // rdx
  char *v27; // rsi
  const char *v28; // r12
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE v34[8]; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v35[16]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v36[88]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) <= 1u )
    return 0;
  v2 = *(const char **)a2;
  if ( **(_BYTE **)a2 != 95 )
    return 0;
  for ( ; v2[1] == 95; ++v2 )
    ;
  v5 = strncmp(v2, "_real@", 6u);
  if ( v5 )
    return 0;
  v6 = strlen(v2 + 6);
  if ( v6 == 8 )
  {
    v7 = "FLOAT_";
    goto LABEL_10;
  }
  v7 = "DOUBLE_";
  if ( v6 != 16 )
    return 0;
LABEL_10:
  for ( i = 0; i < v6; ++i )
  {
    v10 = v2[i + 6];
    v9 = v10 - 48;
    if ( (unsigned __int8)(v10 - 48) > 9u )
    {
      if ( (unsigned __int8)(v10 - 97) <= 5u )
      {
        v9 = v10 - 87;
      }
      else
      {
        if ( (unsigned __int8)(v10 - 65) > 5u )
          return 0;
        v9 = v10 - 55;
      }
    }
    v35[i] = v9;
  }
  v11 = v35;
  v3 = v6 >> 1;
  do
  {
    v12 = *v11;
    v11 += 2;
    v13 = v3 - 1 - v5++;
    v34[v13] = *(v11 - 1) | (16 * v12);
  }
  while ( (int)v3 > v5 );
  if ( !(unsigned __int8)print_fpval(v36, 80, v34, v3) )
    return 0;
  strrpl(v36, 46, 95);
  strrpl(v36, 45, 78);
  if ( a1 )
  {
    v14 = strlen(v7);
    v15 = *(_QWORD **)a1;
    v16 = v14;
    v17 = v14 + 1;
    if ( *(_QWORD *)(a1 + 16) < v14 + 1 )
    {
      v32 = qvector_reserve(a1, v15, v14 + 1, 1);
      *(_QWORD *)a1 = v32;
      v15 = (_QWORD *)v32;
    }
    *(_QWORD *)(a1 + 8) = v17;
    if ( (unsigned int)v16 >= 8 )
    {
      *v15 = *(_QWORD *)v7;
      *(_QWORD *)((char *)v15 + (unsigned int)v16 - 8) = *(_QWORD *)&v7[(unsigned int)v16 - 8];
      v26 = (unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v27 = (char *)v15 - v26;
      v28 = (const char *)(v7 - v27);
      if ( (((_DWORD)v16 + (_DWORD)v27) & 0xFFFFFFF8) >= 8 )
      {
        v29 = (v16 + (_DWORD)v27) & 0xFFFFFFF8;
        v30 = 0;
        do
        {
          v31 = v30;
          v30 += 8;
          *(_QWORD *)(v26 + v31) = *(_QWORD *)&v28[v31];
        }
        while ( v30 < v29 );
      }
    }
    else if ( (v16 & 4) != 0 )
    {
      *(_DWORD *)v15 = *(_DWORD *)v7;
      *(_DWORD *)((char *)v15 + (unsigned int)v16 - 4) = *(_DWORD *)&v7[(unsigned int)v16 - 4];
    }
    else if ( (_DWORD)v16 )
    {
      *(_BYTE *)v15 = *v7;
      if ( (v16 & 2) != 0 )
        *(_WORD *)((char *)v15 + (unsigned int)v16 - 2) = *(_WORD *)&v7[(unsigned int)v16 - 2];
    }
    *(_BYTE *)(*(_QWORD *)a1 + v16) = 0;
    v18 = (const char *)skip_spaces(v36);
    v19 = v18;
    if ( v18 )
    {
      v20 = strlen(v18);
      v21 = *(_QWORD *)(a1 + 8);
      v22 = v20;
      v23 = v20;
      if ( v21 )
      {
        --v21;
        v23 = v20 + v21;
      }
      v24 = *(_QWORD **)a1;
      v25 = v23 + 1;
      if ( *(_QWORD *)(a1 + 16) < v23 + 1 )
      {
        v33 = qvector_reserve(a1, v24, v25, 1);
        v25 = v23 + 1;
        *(_QWORD *)a1 = v33;
        v24 = (_QWORD *)v33;
      }
      *(_QWORD *)(a1 + 8) = v25;
      *((_BYTE *)v24 + v23) = 0;
      memmove((void *)(v21 + *(_QWORD *)a1), v19, v22);
    }
  }
  return v3;
}
