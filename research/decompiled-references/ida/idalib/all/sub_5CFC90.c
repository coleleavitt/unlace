__int64 __fastcall sub_5CFC90(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  int v8; // esi
  unsigned __int64 *v9; // rax
  int v10; // esi
  unsigned __int64 *v11; // r13
  unsigned __int64 *v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // esi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // rsi
  char *v18; // rdi
  char *v19; // rsi
  const char *v20; // rdi
  int v21; // eax
  char *s1; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+8h] [rbp-A0h]
  void *ptr; // [rsp+18h] [rbp-90h]
  __int128 v25; // [rsp+20h] [rbp-88h]
  char *s2; // [rsp+30h] [rbp-78h] BYREF
  __int128 v27; // [rsp+38h] [rbp-70h]
  char *v28; // [rsp+48h] [rbp-60h]
  __int128 v29; // [rsp+50h] [rbp-58h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v3 = 1;
  v30 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_46B590(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 12), a3) )
    return v3;
  v8 = *(_DWORD *)(a1 + 8);
  s1 = nullptr;
  ptr = nullptr;
  v23 = 0;
  v25 = 0;
  v9 = sub_5C7FE0((void **)&s1, v8, a3, 0);
  v10 = *(_DWORD *)(a2 + 8);
  v11 = v9;
  v27 = 0;
  s2 = nullptr;
  v28 = nullptr;
  v29 = 0;
  v12 = sub_5C7FE0((void **)&s2, v10, a3, 0);
  v13 = (__int64)v12;
  v14 = 5;
  if ( (v11[2] & 0x8000000000000000LL) == 0LL && (v12[2] & 0x8000000000000000LL) == 0LL )
    v14 = 1;
  if ( *v11 < *v12 )
    goto LABEL_21;
  if ( *v12 < *v11 )
    goto LABEL_21;
  v15 = v11[1];
  v16 = *(_QWORD *)(v13 + 8);
  if ( v15 < v16
    || v16 < v15
    || (unsigned int)sub_5C8180(
                       (__int64)v11,
                       v13,
                       v14,
                       *(_QWORD *)(a1 + 32),
                       *(_DWORD *)(a1 + 12),
                       *(_DWORD *)(a2 + 12)) )
  {
    goto LABEL_21;
  }
  if ( (_QWORD)v27 )
  {
    v17 = s2;
    v18 = (char *)haystack;
    if ( !(_QWORD)v23 )
      goto LABEL_14;
  }
  else
  {
    v17 = (char *)haystack;
    if ( !(_QWORD)v23 )
      goto LABEL_15;
  }
  v18 = s1;
LABEL_14:
  if ( strcmp(v18, v17) )
    goto LABEL_21;
LABEL_15:
  if ( (_QWORD)v29 )
  {
    v19 = v28;
    v20 = haystack;
    if ( !(_QWORD)v25 )
      goto LABEL_17;
    goto LABEL_31;
  }
  v19 = (char *)haystack;
  if ( (_QWORD)v25 )
  {
LABEL_31:
    v20 = (const char *)ptr;
LABEL_17:
    if ( !strcmp(v20, v19) )
      goto LABEL_18;
LABEL_21:
    v3 = 1;
    goto LABEL_22;
  }
LABEL_18:
  v21 = *(_DWORD *)(a1 + 12);
  if ( v21 )
  {
    if ( v21 != 1 || *(_DWORD *)(a2 + 12) )
      goto LABEL_20;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
LABEL_36:
    v11[2] |= 0x8000000000000000LL;
    *(_QWORD *)(v13 + 16) |= 0x8000000000000000LL;
  }
LABEL_20:
  v3 = 0;
LABEL_22:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( s2 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(s2);
  }
  if ( ptr )
  {
    *(_QWORD *)&v25 = 0;
    qfree(ptr);
  }
  if ( s1 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(s1);
  }
  return v3;
}
