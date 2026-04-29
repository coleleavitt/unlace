__int64 __fastcall sub_3F5630(__int64 a1, const __m128i *a2, __int64 a3)
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
  char v17; // r14
  char v18; // al
  int v19; // eax
  __int128 v20; // rdi
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // r9
  char v24; // al
  char v25; // al
  __int64 v26; // r9
  unsigned int v27; // ebp
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // [rsp+10h] [rbp-B8h]
  __int64 v31; // [rsp+10h] [rbp-B8h]
  __int64 v32; // [rsp+18h] [rbp-B0h]
  __int64 v33; // [rsp+20h] [rbp-A8h]
  __int64 v34; // [rsp+28h] [rbp-A0h]
  __int64 v35; // [rsp+28h] [rbp-A0h]
  __int64 v36; // [rsp+30h] [rbp-98h]
  __int64 v37; // [rsp+38h] [rbp-90h]
  __int64 v38; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int8 v39[16]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v40[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 10 )
    return 0;
  if ( *(_DWORD *)(a3 + 36) != 16 )
    return 0;
  if ( !(unsigned __int8)sub_120560(*(_QWORD *)(a3 + 40), nullptr) )
    return 0;
  v7 = *(const char **)(*(_QWORD *)(a3 + 40) + 40LL);
  v30 = *(_QWORD *)(a3 + 40);
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
  v13 = &v9[v10];
  v14 = v12;
  v15 = v11;
  v16 = v14;
  if ( *v13 != 95 )
    return 0;
  v17 = v13[1];
  if ( v17 != 115 )
    return 0;
  v18 = v13[2];
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
  if ( !v13[3] && *(_DWORD *)(v16 + 68) == v19 )
  {
    v32 = v16 + 64;
    sub_123A40((__int64)v39, (unsigned __int8 *)(v16 + 64));
    v4 = sub_12AB50((unsigned __int64)v39, *(_QWORD *)(a1 + 16), 16, 1);
    if ( !(_BYTE)v4 )
      goto LABEL_22;
    *((_QWORD *)&v20 + 1) = v39;
    *(_QWORD *)&v20 = a2;
    v38 = v16;
    v21 = sub_129440(v20, (__int64)&v38, 1);
    if ( !v21 || *(_DWORD *)v21 != 4 )
      goto LABEL_22;
    v37 = v21;
    v36 = v21 + 64;
    v34 = *(_QWORD *)(a2[4].m128i_i64[0] + 1504);
    v33 = *(_QWORD *)(v30 + 72);
    if ( sub_125B60((unsigned __int8 *)(v21 + 64), (__int64)v39, 0) )
    {
      v24 = sub_1255D0((unsigned __int8 *)(v37 + 32), v34, *(_QWORD *)(v33 + 24), 1u);
      v23 = v37;
      if ( v24 )
        goto LABEL_29;
      v25 = sub_1255D0((unsigned __int8 *)(v37 + 32), v34, *(_QWORD *)(v33 + 24) + 80LL, 1u);
      v26 = v37;
      if ( !v25 )
        goto LABEL_22;
    }
    else
    {
      if ( *(_DWORD *)(v37 + 68) != 8 || !(unsigned __int8)sub_12CF30(a2[4].m128i_i64[0], v32, v36, 0, 0, v37) )
        goto LABEL_22;
      v22 = sub_1301F0(a2, v37, v37 + 32, v16, *(_QWORD *)(v33 + 24));
      v23 = v37;
      if ( v22 )
      {
LABEL_29:
        v31 = v23;
        sub_125180(v32, v39);
        *(_DWORD *)v16 = 4;
        sub_11D5A0(v31);
        goto LABEL_23;
      }
      v29 = sub_1301F0(a2, v37, v37 + 32, v16, *(_QWORD *)(v33 + 24) + 80LL);
      v26 = v37;
      if ( !v29 )
      {
LABEL_22:
        v4 = 0;
LABEL_23:
        sub_11CDA0((__int64)v39);
        return v4;
      }
    }
    v35 = v26;
    sub_11CA10(*(char **)(v33 + 24), (char *)(*(_QWORD *)(v33 + 24) + 80LL));
    v27 = sub_32EA00(v15 + 31) - 31;
    if ( v27 <= 6 )
    {
      qfree(*(_QWORD *)(v30 + 40));
      if ( *(_DWORD *)(v16 + 68) != 4 )
        v17 = 100;
      qsnprintf(v40, 32, "_mm_cmp%s_s%c", off_4EA0A0[v27], (unsigned int)v17);
      v28 = qstrdup(v40);
      v23 = v35;
      *(_QWORD *)(v30 + 40) = v28;
      goto LABEL_29;
    }
    goto LABEL_22;
  }
  return 0;
}
