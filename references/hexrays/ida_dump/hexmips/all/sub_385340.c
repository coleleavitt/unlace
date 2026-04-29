unsigned __int64 __fastcall sub_385340(__int64 *a1, const char *a2, _QWORD *a3)
{
  char *v5; // rbx
  int v6; // r14d
  char v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  int *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // si
  int v16; // edx
  int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v23; // rax
  const char *v24; // [rsp+0h] [rbp-70h] BYREF
  _DWORD v25[2]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v26; // [rsp+18h] [rbp-58h] BYREF
  __int128 v27; // [rsp+20h] [rbp-50h]
  unsigned __int64 v28; // [rsp+30h] [rbp-40h]

  v24 = a2;
  v28 = __readfsqword(0x28u);
  v25[0] = 0;
  v26 = 0;
  v27 = 0;
  v5 = (char *)sub_382D00(&v26, &v24, v25, a3);
  if ( !v5 )
  {
    v21 = v26;
    if ( !v26 )
      return v28 - __readfsqword(0x28u);
    goto LABEL_24;
  }
  v6 = (_DWORD)v24 - v25[0];
  v24 -= v25[0];
  while ( 1 )
  {
    v7 = *(_BYTE *)tag_skipcodes(v5);
    if ( v7 == 41 || !v7 )
      break;
    while ( *v5 == 32 )
      ++v5;
    v8 = a1[1];
    v9 = a1[2];
    v10 = *a1;
    v25[1] = (_DWORD)v5 - v6;
    if ( v9 < v8 + 1 )
    {
      v23 = qvector_reserve(a1, v10, v8 + 1, 4);
      *a1 = v23;
      v10 = v23;
      v8 = a1[1];
    }
    *(_DWORD *)(v10 + 4 * v8) = (_DWORD)v5 - v6;
    v11 = a1[1] + 1;
    a1[1] = v11;
    if ( *v5 == 46 && v5[1] == 46 && v5[2] == 46 )
      goto LABEL_14;
    v5 = sub_380CF0(v5);
  }
  v11 = a1[1];
LABEL_14:
  v12 = (int *)*a1;
  v13 = *a1 + 4 * v11;
  if ( v13 != *a1 )
  {
    do
    {
      v14 = *v12;
      v15 = a2[v14];
      v16 = *v12;
      v17 = v14 + 2;
      if ( v15 == 2 )
      {
        while ( a2[v17 - 1] )
        {
          v18 = v17;
          *v12 = v17;
          v16 = v17;
          v17 += 2;
          v15 = a2[v18];
          if ( v15 != 2 )
            goto LABEL_20;
        }
        v15 = a2[*v12];
        v16 = *v12;
      }
LABEL_20:
      v19 = v16 + 1;
      if ( v15 == 32 )
      {
        do
        {
          v20 = v19;
          *v12 = v19++;
        }
        while ( a2[v20] == 32 );
      }
      ++v12;
    }
    while ( (int *)v13 != v12 );
  }
  v21 = v26;
  if ( v26 )
  {
LABEL_24:
    *(_QWORD *)&v27 = 0;
    qfree(v21);
  }
  return v28 - __readfsqword(0x28u);
}
