__int64 __fastcall sub_5B4C10(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  int v7; // edx
  int v10; // esi
  unsigned int *v11; // rax
  int v12; // esi
  __int64 v13; // r13
  unsigned int *v14; // rax
  __int64 v15; // rbp
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // edx
  char *v19; // rsi
  char *v20; // rdi
  char *v21; // rsi
  const char *v22; // rdi
  int v23; // eax
  char *s1; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+8h] [rbp-A0h]
  void *ptr; // [rsp+18h] [rbp-90h]
  __int128 v27; // [rsp+20h] [rbp-88h]
  char *s2; // [rsp+30h] [rbp-78h] BYREF
  __int128 v29; // [rsp+38h] [rbp-70h]
  char *v30; // [rsp+48h] [rbp-60h]
  __int128 v31; // [rsp+50h] [rbp-58h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v3 = 1;
  v7 = *(_DWORD *)(a2 + 12);
  v32 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_457190(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), v7, a3) )
    return v3;
  v10 = *(_DWORD *)(a1 + 8);
  s1 = nullptr;
  ptr = nullptr;
  v25 = 0;
  v27 = 0;
  v11 = sub_5AD4A0((void **)&s1, v10, a3, 0);
  v12 = *(_DWORD *)(a2 + 8);
  v13 = (__int64)v11;
  v29 = 0;
  s2 = nullptr;
  v30 = nullptr;
  v31 = 0;
  v14 = sub_5AD4A0((void **)&s2, v12, a3, 0);
  v15 = (__int64)v14;
  v16 = 5;
  if ( *(__int64 *)(v13 + 8) >= 0 && *((__int64 *)v14 + 1) >= 0 )
    v16 = 1;
  if ( *(_DWORD *)v13 < *v14 )
    goto LABEL_21;
  if ( *v14 < *(_DWORD *)v13 )
    goto LABEL_21;
  v17 = *(_DWORD *)(v13 + 4);
  v18 = *(_DWORD *)(v15 + 4);
  if ( v17 < v18
    || v18 < v17
    || (unsigned int)sub_5AD640(v13, v15, v16, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 12)) )
  {
    goto LABEL_21;
  }
  if ( (_QWORD)v29 )
  {
    v19 = s2;
    v20 = (char *)haystack;
    if ( !(_QWORD)v25 )
      goto LABEL_14;
  }
  else
  {
    v19 = (char *)haystack;
    if ( !(_QWORD)v25 )
      goto LABEL_15;
  }
  v20 = s1;
LABEL_14:
  if ( strcmp(v20, v19) )
    goto LABEL_21;
LABEL_15:
  if ( (_QWORD)v31 )
  {
    v21 = v30;
    v22 = haystack;
    if ( !(_QWORD)v27 )
      goto LABEL_17;
    goto LABEL_31;
  }
  v21 = (char *)haystack;
  if ( (_QWORD)v27 )
  {
LABEL_31:
    v22 = (const char *)ptr;
LABEL_17:
    if ( !strcmp(v22, v21) )
      goto LABEL_18;
LABEL_21:
    v3 = 1;
    goto LABEL_22;
  }
LABEL_18:
  v23 = *(_DWORD *)(a1 + 12);
  if ( v23 )
  {
    if ( v23 != 1 || *(_DWORD *)(a2 + 12) )
      goto LABEL_20;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
LABEL_36:
    *(_QWORD *)(v13 + 8) |= 0x8000000000000000LL;
    *(_QWORD *)(v15 + 8) |= 0x8000000000000000LL;
  }
LABEL_20:
  v3 = 0;
LABEL_22:
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( s2 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(s2);
  }
  if ( ptr )
  {
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
  }
  if ( s1 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(s1);
  }
  return v3;
}

