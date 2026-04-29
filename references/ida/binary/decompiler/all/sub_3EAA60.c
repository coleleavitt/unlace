__int64 __fastcall sub_3EAA60(__int64 a1, const __m128i *a2, __int64 a3)
{
  unsigned int v4; // r15d
  const char *v7; // r15
  __int64 v8; // rax
  const char *v9; // r15
  size_t v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r13
  const char *v13; // r15
  __int64 v14; // rax
  int v15; // r13d
  __int64 v16; // rbx
  char v17; // al
  int v18; // eax
  __int128 v19; // rdi
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // r9
  char v23; // al
  char v24; // al
  __int64 v25; // r9
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // [rsp+10h] [rbp-B8h]
  __int64 v29; // [rsp+10h] [rbp-B8h]
  __int64 v30; // [rsp+18h] [rbp-B0h]
  __int64 v31; // [rsp+20h] [rbp-A8h]
  __int64 v32; // [rsp+28h] [rbp-A0h]
  __int64 v33; // [rsp+28h] [rbp-A0h]
  __int64 v34; // [rsp+30h] [rbp-98h]
  __int64 v35; // [rsp+38h] [rbp-90h]
  __int64 v36; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int8 v37[16]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 10 )
    return 0;
  if ( *(_DWORD *)(a3 + 36) != 16 )
    return 0;
  if ( !(unsigned __int8)sub_11E120(*(_QWORD *)(a3 + 40), 0) )
    return 0;
  v7 = *(const char **)(*(_QWORD *)(a3 + 40) + 40LL);
  v28 = *(_QWORD *)(a3 + 40);
  if ( strncmp(v7, "_mm_cmp", 7u) )
    return 0;
  v8 = a3;
  v9 = v7 + 7;
  v10 = 5;
  v11 = 0;
  v12 = v8;
  while ( strncmp(v9, off_4E9120[v11], v10) )
  {
    if ( ++v11 == 7 )
      return 0;
    v10 = strlen(off_4E9120[v11]);
  }
  v13 = &v9[v10];
  v14 = v12;
  v15 = v11;
  v16 = v14;
  if ( *v13 != 95 || v13[1] != 115 )
    return 0;
  v17 = v13[2];
  if ( v17 == 115 )
  {
    v18 = 4;
  }
  else
  {
    if ( v17 != 100 )
      return 0;
    v18 = 8;
  }
  if ( !v13[3] && *(_DWORD *)(v16 + 68) == v18 )
  {
    v30 = v16 + 64;
    sub_121540((__int64)v37, (unsigned __int8 *)(v16 + 64));
    v4 = sub_128630((unsigned __int64)v37, *(_QWORD *)(a1 + 16), 16, 1);
    if ( !(_BYTE)v4 )
      goto LABEL_22;
    *((_QWORD *)&v19 + 1) = v37;
    *(_QWORD *)&v19 = a2;
    v36 = v16;
    v20 = sub_126F20(v19, (__int64)&v36, 1);
    if ( !v20 || *(_DWORD *)v20 != 4 )
      goto LABEL_22;
    v35 = v20;
    v34 = v20 + 64;
    v32 = *(_QWORD *)(a2[4].m128i_i64[0] + 1504);
    v31 = *(_QWORD *)(v28 + 72);
    if ( sub_123660((unsigned __int8 *)(v20 + 64), (__int64)v37, 0) )
    {
      v23 = sub_1230D0((unsigned __int8 *)(v35 + 32), v32, *(_QWORD *)(v31 + 24), 1u);
      v22 = v35;
      if ( v23 )
        goto LABEL_29;
      v24 = sub_1230D0((unsigned __int8 *)(v35 + 32), v32, *(_QWORD *)(v31 + 24) + 80LL, 1u);
      v25 = v35;
      if ( !v24 )
        goto LABEL_22;
    }
    else
    {
      if ( *(_DWORD *)(v35 + 68) != 8 || !(unsigned __int8)sub_12AA10(a2[4].m128i_i64[0], v30, v34, 0, 0, v35) )
        goto LABEL_22;
      v21 = sub_12DCD0(a2, v35, v35 + 32, v16, *(_QWORD *)(v31 + 24));
      v22 = v35;
      if ( v21 )
      {
LABEL_29:
        v29 = v22;
        sub_122C80(v30, v37);
        *(_DWORD *)v16 = 4;
        sub_11B160(v29);
        goto LABEL_23;
      }
      v27 = sub_12DCD0(a2, v35, v35 + 32, v16, *(_QWORD *)(v31 + 24) + 80LL);
      v25 = v35;
      if ( !v27 )
      {
LABEL_22:
        v4 = 0;
LABEL_23:
        sub_11A960((__int64)v37);
        return v4;
      }
    }
    v33 = v25;
    sub_11A5D0(*(char **)(v31 + 24), (char *)(*(_QWORD *)(v31 + 24) + 80LL));
    if ( (unsigned int)sub_32B5A0((unsigned int)(v15 + 31)) - 31 <= 6 )
    {
      qfree();
      qsnprintf();
      v26 = qstrdup();
      v22 = v33;
      *(_QWORD *)(v28 + 40) = v26;
      goto LABEL_29;
    }
    goto LABEL_22;
  }
  return 0;
}
