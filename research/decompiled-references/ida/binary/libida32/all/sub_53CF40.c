__int64 __fastcall sub_53CF40(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 tinfo_pdata; // rax
  char *v6; // r12
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r14
  char *v13; // rax
  int v14; // r15d
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rax
  char *v20; // [rsp+0h] [rbp-60h]
  char *s2; // [rsp+8h] [rbp-58h] BYREF
  __int128 v22; // [rsp+10h] [rbp-50h]
  unsigned __int64 v23; // [rsp+20h] [rbp-40h]

  v2 = 0;
  v3 = *a2;
  v23 = __readfsqword(0x28u);
  v22 = 0;
  s2 = nullptr;
  if ( (v3 & 0x100) == 0 )
    return v2;
  tinfo_pdata = get_tinfo_pdata(&s2, v3, 0);
  v6 = s2;
  if ( !tinfo_pdata )
    goto LABEL_21;
  v7 = *(_QWORD *)(qword_2CA1698 + 1464);
  v8 = *(__int64 **)(v7 + 16);
  v9 = &v8[*(_QWORD *)(v7 + 24)];
  if ( v8 == v9 )
    goto LABEL_21;
  while ( 1 )
  {
    v10 = *v8;
    if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(*v8 + 48) )
      break;
    if ( v9 == ++v8 )
      goto LABEL_20;
  }
  if ( !v10 )
  {
LABEL_20:
    v2 = 0;
    goto LABEL_21;
  }
  v2 = *(_DWORD *)(a1 + 136);
  if ( !v2 )
    goto LABEL_21;
  v11 = v22;
  v12 = *(_QWORD *)(v10 + 56);
  v13 = (char *)haystack;
  if ( (_QWORD)v22 )
    v13 = s2;
  v14 = 0;
  v20 = v13;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v12 + 8);
    if ( v11 )
    {
      v15 = v6;
      v16 = haystack;
      if ( !v19 )
        goto LABEL_14;
      goto LABEL_19;
    }
    if ( !v19 )
      break;
LABEL_19:
    v16 = *(const char **)v12;
    v15 = v20;
LABEL_14:
    v17 = strcmp(v16, v15);
    v18 = v14 + 1;
    if ( !v17 )
      goto LABEL_24;
    v12 += 24;
    if ( v2 == v18 )
      goto LABEL_20;
    ++v14;
  }
  v18 = v14 + 1;
LABEL_24:
  v2 = v18;
LABEL_21:
  if ( v6 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v6);
  }
  return v2;
}

