__int64 __fastcall sub_3F5630(__int64 a1, const __m128i *a2, __int64 a3)
{
  unsigned int v4; // r15d
  const char *v7; // r15
  __int64 v8; // rax
  const char *v9; // r15
  size_t v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rdx
  const char *v14; // r15
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // rbx
  char v18; // al
  int v19; // eax
  __int128 v20; // rdi
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // r9
  char v24; // al
  char v25; // al
  __int64 v26; // r9
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // [rsp+10h] [rbp-B8h]
  __int64 v30; // [rsp+10h] [rbp-B8h]
  __int64 v31; // [rsp+18h] [rbp-B0h]
  __int64 v32; // [rsp+20h] [rbp-A8h]
  __int64 v33; // [rsp+28h] [rbp-A0h]
  __int64 v34; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v35; // [rsp+30h] [rbp-98h]
  __int64 v36; // [rsp+38h] [rbp-90h]
  __int64 v37; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int8 v38[16]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 10 )
    return 0;
  if ( *(_DWORD *)(a3 + 36) != 16 )
    return 0;
  if ( !(unsigned __int8)sub_120560(*(_QWORD *)(a3 + 40), nullptr) )
    return 0;
  v7 = *(const char **)(*(_QWORD *)(a3 + 40) + 40LL);
  v29 = *(_QWORD *)(a3 + 40);
  if ( strncmp(v7, "_mm_cmp", 7u) )
    return 0;
  v8 = a3;
  v9 = v7 + 7;
  v10 = 5;
  v11 = 0;
  v12 = v8;
  while ( strncmp(v9, off_4EA0A0[v11], v10) )
  {
    if ( ++v11 == 7 )
      return 0;
    v10 = strlen(off_4EA0A0[v11]);
  }
  v14 = &v9[v10];
  v15 = v12;
  v16 = v11;
  v17 = v15;
  if ( *v14 != 95 || v14[1] != 115 )
    return 0;
  v18 = v14[2];
  if ( v18 == 115 )
  {
    v19 = 4;
  }
  else
  {
    if ( v18 != 100 )
      return 0;
    v19 = 8;
  }
  if ( !v14[3] && *(_DWORD *)(v17 + 68) == v19 )
  {
    v31 = v17 + 64;
    sub_123A40((__int64)v38, (unsigned __int8 *)(v17 + 64), v13, a1);
    v4 = sub_12AB50(v38, *(_QWORD *)(a1 + 16), 16, 1);
    if ( !(_BYTE)v4 )
      goto LABEL_22;
    *((_QWORD *)&v20 + 1) = v38;
    *(_QWORD *)&v20 = a2;
    v37 = v17;
    v21 = sub_129440(v20, (__int64)&v37, 1);
    if ( !v21 || *(_DWORD *)v21 != 4 )
      goto LABEL_22;
    v36 = v21;
    v35 = (unsigned __int8 *)(v21 + 64);
    v33 = *(_QWORD *)(a2[4].m128i_i64[0] + 1504);
    v32 = *(_QWORD *)(v29 + 72);
    if ( sub_125B60((unsigned __int8 *)(v21 + 64), (__int64)v38, 0) )
    {
      v24 = sub_1255D0((unsigned __int8 *)(v36 + 32), v33, *(_QWORD *)(v32 + 24), 1);
      v23 = v36;
      if ( v24 )
        goto LABEL_29;
      v25 = sub_1255D0((unsigned __int8 *)(v36 + 32), v33, *(_QWORD *)(v32 + 24) + 80LL, 1);
      v26 = v36;
      if ( !v25 )
        goto LABEL_22;
    }
    else
    {
      if ( *(_DWORD *)(v36 + 68) != 8 || !(unsigned __int8)sub_12CF30(a2[4].m128i_i64[0], v31, v35, 0, 0, v36) )
        goto LABEL_22;
      v22 = sub_1301F0(a2, v36, v36 + 32, v17, *(_QWORD *)(v32 + 24));
      v23 = v36;
      if ( v22 )
      {
LABEL_29:
        v30 = v23;
        sub_125180(v31, v38);
        *(_DWORD *)v17 = 4;
        sub_11D5A0(v30);
        goto LABEL_23;
      }
      v28 = sub_1301F0(a2, v36, v36 + 32, v17, *(_QWORD *)(v32 + 24) + 80LL);
      v26 = v36;
      if ( !v28 )
      {
LABEL_22:
        v4 = 0;
LABEL_23:
        sub_11CDA0((__int64)v38);
        return v4;
      }
    }
    v34 = v26;
    sub_11CA10(*(char **)(v32 + 24), (char *)(*(_QWORD *)(v32 + 24) + 80LL));
    if ( (unsigned int)sub_32EA00(v16 + 31) - 31 <= 6 )
    {
      qfree(*(_QWORD *)(v29 + 40));
      qsnprintf();
      v27 = qstrdup();
      v23 = v34;
      *(_QWORD *)(v29 + 40) = v27;
      goto LABEL_29;
    }
    goto LABEL_22;
  }
  return 0;
}
