/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64D00
// Address: 0x0000000000064D00

//----- (0000000000064D00) ----------------------------------------------------
unsigned __int64 __fastcall sub_64D00(_QWORD *a1, const char *a2, int *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  int v5; // r12d
  unsigned __int64 v6; // rbx
  const char *v7; // rdi
  int v8; // ecx
  unsigned __int64 v9; // r13
  __int64 v10; // r12
  int v11; // ebp
  const char *v12; // rdi
  __int64 v13; // r13
  unsigned __int64 v14; // rbp
  _QWORD *v15; // r14
  const char *v16; // rdi
  __int64 v17; // rax
  int v18; // eax

  v3 = a1[15];
  if ( !v3 )
    goto LABEL_9;
  v4 = a1[14];
  v5 = 1;
  v6 = 0;
  while ( 1 )
  {
    v7 = s1;
    if ( *(_QWORD *)(v4 + 24 * v6 + 8) )
      v7 = *(const char **)(v4 + 24 * v6);
    if ( !strcmp(v7, a2) )
      break;
    v6 = v5++;
    if ( v3 <= v6 )
      goto LABEL_9;
  }
  v8 = 1;
  if ( v6 == -1 )
  {
LABEL_9:
    v9 = a1[18];
    if ( !v9 )
      goto LABEL_17;
    v10 = a1[17];
    v11 = 1;
    v6 = 0;
    while ( 1 )
    {
      v12 = s1;
      if ( *(_QWORD *)(v10 + 24 * v6 + 8) )
        v12 = *(const char **)(v10 + 24 * v6);
      if ( !strcmp(v12, a2) )
        break;
      v6 = v11++;
      if ( v9 <= v6 )
        goto LABEL_17;
    }
    v8 = 2;
    if ( v6 == -1 )
    {
LABEL_17:
      v13 = a1[13];
      v14 = *(_QWORD *)(v13 + 96);
      if ( v14 )
      {
        v15 = (_QWORD *)(*(_QWORD *)(v13 + 88) + 8LL);
        v6 = 0;
        while ( 1 )
        {
          v16 = s1;
          if ( *v15 )
            v16 = (const char *)*(v15 - 1);
          if ( !strcmp(v16, a2) )
            break;
          ++v6;
          v15 += 7;
          if ( v6 >= v14 )
            goto LABEL_23;
        }
        v8 = 3;
      }
      else
      {
LABEL_23:
        v17 = sub_6D660(v13, a2);
        v8 = 5;
        v6 = -1;
        if ( !v17 )
        {
          v18 = sub_6DD10((_QWORD *)a1[13], a2);
          v8 = 6;
          if ( v18 == 0x7FFFFFFF )
          {
            if ( off_154A60 )
              v8 = 4 * off_154A60((__int64)a2);
            else
              v8 = 0;
          }
        }
      }
    }
  }
  if ( a3 )
    *a3 = v8;
  return v6;
}
// 154A60: using guessed type bool (__fastcall *off_154A60)(__int64 a1);
