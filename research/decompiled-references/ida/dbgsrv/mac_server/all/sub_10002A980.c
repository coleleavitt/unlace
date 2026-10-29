/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002A980
// Address: 0x000000010002A980

//----- (000000010002A980) ----------------------------------------------------
unsigned __int64 __fastcall sub_10002A980(__int64 *a1, const char *a2, int *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rbx
  int v5; // r12d
  unsigned __int64 v6; // r15
  const char *v7; // rdi
  int v8; // ecx
  unsigned __int64 v9; // r13
  __int64 v10; // rbx
  int v11; // r12d
  const char *v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // r12
  const char *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v20; // [rsp+8h] [rbp-38h]

  v3 = a1[15];
  if ( !v3 )
    goto LABEL_9;
  v4 = a1[14];
  v5 = 1;
  v6 = 0;
  while ( 1 )
  {
    v7 = _s1;
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
      v12 = _s1;
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
      v20 = a1[13];
      v13 = *(_QWORD *)(v20 + 96);
      if ( v13 )
      {
        v14 = (_QWORD *)(*(_QWORD *)(v20 + 88) + 8LL);
        v6 = 0;
        while ( 1 )
        {
          v15 = _s1;
          if ( *v14 )
            v15 = (const char *)*(v14 - 1);
          if ( !strcmp(v15, a2) )
            break;
          ++v6;
          v14 += 7;
          if ( v13 == v6 )
            goto LABEL_23;
        }
        v8 = 3;
      }
      else
      {
LABEL_23:
        v16 = sub_100034160(v20, a2);
        v8 = 5;
        v6 = -1;
        if ( !v16 )
        {
          v17 = sub_1000347E0(a1[13], a2);
          v8 = 6;
          if ( v17 == 0x7FFFFFFF )
          {
            if ( off_1000AC120 )
              v8 = 4 * off_1000AC120((__int64)a2);
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
// 1000AC120: using guessed type bool (__fastcall *off_1000AC120)(__int64 a1);
