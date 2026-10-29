__int64 __fastcall sub_13BF410(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v2; // al
  size_t v3; // rcx
  size_t v4; // r8
  char *v5; // r9
  unsigned int v6; // r8d
  char *v8; // r10
  size_t v9; // rax
  int v10; // eax
  __int64 v11; // rax
  size_t v12; // rdx
  const void *v13; // rax
  size_t v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rax
  unsigned int v17; // eax
  unsigned int *v18; // rdx
  size_t n; // [rsp+0h] [rbp-148h]
  size_t na; // [rsp+0h] [rbp-148h]
  unsigned __int8 nb; // [rsp+0h] [rbp-148h]
  char *s2; // [rsp+8h] [rbp-140h]
  void *s2a; // [rsp+8h] [rbp-140h]
  size_t v24; // [rsp+10h] [rbp-138h]
  char *v25; // [rsp+10h] [rbp-138h]
  char *v26; // [rsp+18h] [rbp-130h]
  size_t v27; // [rsp+18h] [rbp-130h]
  _BYTE v28[16]; // [rsp+20h] [rbp-128h] BYREF
  void *s1; // [rsp+30h] [rbp-118h]
  size_t v30; // [rsp+38h] [rbp-110h]
  _BYTE v31[48]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v32[16]; // [rsp+80h] [rbp-C8h] BYREF
  void *v33; // [rsp+90h] [rbp-B8h]
  size_t v34; // [rsp+98h] [rbp-B0h]
  _BYTE v35[48]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+E8h] [rbp-60h]
  __int16 v38; // [rsp+100h] [rbp-48h]

  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    v15 = *a2;
    v38 = 261;
    v36 = v15;
    v37 = a2[1];
    if ( !(unsigned __int8)sub_228B020(&v36, 0) )
    {
      v16 = *(__int64 **)a1;
      v38 = 261;
      v36 = *v16;
      v37 = v16[1];
      sub_228E8C0(&v36, a2);
    }
  }
  sub_228F0B0(a2, 1, 0);
  sub_22892D0(v28, **(_QWORD **)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), 0);
  sub_2289320(v31, **(_QWORD **)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
  sub_22892D0(v32, *a2, a2[1], 0);
  sub_2289320(v35, *a2, a2[1]);
  while ( 1 )
  {
    if ( (unsigned __int8)sub_22895C0(v28, v31) )
      return 0;
    v2 = sub_22895C0(v32, v35);
    if ( v2 )
      break;
    v3 = v30;
    v4 = v34;
    v5 = (char *)s1;
    if ( v30 == 1 )
    {
      if ( v34 != 1 )
        return 0;
      if ( (unsigned __int8)sub_228ACA0((unsigned int)*(char *)s1, 0)
        && (unsigned __int8)sub_228ACA0((unsigned int)*(char *)v33, 0) )
      {
        goto LABEL_24;
      }
      v4 = v34;
      v3 = v30;
      v5 = (char *)s1;
    }
    v8 = (char *)v33;
    if ( v3 > 3 && *(_DWORD *)&v5[v3 - 4] == 1801745198 )
    {
      v26 = (char *)v33;
      v24 = v4;
      s2 = v5;
      n = v3;
      v9 = j__strlen(".sdk");
      v4 = v24;
      v3 = n;
      v5 = s2;
      v8 = v26;
      if ( v9 <= v24 )
      {
        if ( !v9
          || (v27 = v24, v25 = v8, v10 = memcmp(&v8[v4 - v9], ".sdk", v9), v8 = v25, v4 = v27, v3 = n, v5 = s2, !v10) )
        {
          v11 = sub_228AAA0(s1, v30, 0);
          na = v12;
          s2a = (void *)v11;
          v13 = (const void *)sub_228AAA0(v33, v34, 0);
          if ( na <= v14 && (!na || !memcmp(v13, s2a, na)) )
            goto LABEL_24;
          v3 = v30;
          v4 = v34;
          v5 = (char *)s1;
          v8 = (char *)v33;
        }
      }
    }
    if ( v3 != v4 || v3 && memcmp(v5, v8, v3) )
      return 0;
LABEL_24:
    sub_2289340(v28);
    sub_2289340(v32);
  }
  nb = v2;
  sub_22892D0(&v36, **(_QWORD **)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), 0);
  v17 = sub_22895E0(v28, &v36);
  v18 = *(unsigned int **)(a1 + 16);
  v6 = nb;
  if ( *v18 >= v17 )
    return 0;
  *v18 = v17;
  return v6;
}
