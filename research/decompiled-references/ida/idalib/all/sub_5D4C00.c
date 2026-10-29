__int64 __fastcall sub_5D4C00(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // rbx
  __int64 v6; // r12
  signed int v7; // r13d
  __int64 v8; // rbp
  unsigned __int64 *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbp
  const char *v13; // r13
  char *v14; // rdi
  const char *v15; // rsi
  char *v16; // rdi
  __int64 v17; // r14
  const char *v18; // rdx
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+8h] [rbp-60h]
  char *v21; // [rsp+18h] [rbp-50h]
  __int128 v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+30h] [rbp-38h]
  int v24[2]; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+40h] [rbp-28h]

  *(_QWORD *)v24 = __readfsqword(0x28u);
  if ( *(__int64 *)(a4 + 16) < 0 )
    return 0;
  v4 = *(_QWORD *)a4;
  v5 = (unsigned __int64 *)a4;
  if ( *(_QWORD *)a4 != **(_QWORD **)(a1 + 16) )
  {
LABEL_3:
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 32);
    v8 = switch_dbctx(*(int *)(v6 + 4LL * v7 + 16));
    sub_459560(v6, 3u, v7, 0xFFFFFFFF, v5);
    sub_5D4180(*(_QWORD *)(v8 + 1672), (__int64)s1, v20, SDWORD2(v20), v21, v22, SDWORD2(v22), v23, v24[0], v25);
    return 0;
  }
  s1 = nullptr;
  v21 = nullptr;
  v20 = 0;
  v22 = 0;
  v10 = sub_5C7FE0((void **)&s1, a2, v4, 0);
  v11 = *(_QWORD **)(a1 + 16);
  v5 = v10;
  if ( *v10 != *v11
    || v10[1] != v11[1]
    || (unsigned int)sub_5C8180(
                       (__int64)v10,
                       (__int64)v11,
                       1u,
                       *(_QWORD *)(a1 + 8),
                       *(_DWORD *)(a1 + 32),
                       *(_DWORD *)(a1 + 36)) )
  {
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21);
    }
    if ( s1 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(s1);
    }
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v12 + 8) )
  {
    v13 = *(const char **)v12;
    v14 = (char *)haystack;
    if ( !(_QWORD)v20 )
      goto LABEL_15;
  }
  else
  {
    v13 = haystack;
    if ( !(_QWORD)v20 )
      goto LABEL_16;
  }
  v14 = s1;
LABEL_15:
  if ( strcmp(v14, v13) )
  {
LABEL_25:
    v17 = qword_2CCB598;
    sub_5083D0((__int64 *)(*(_QWORD *)(qword_2CCB598 + 1672) + 1704LL), v5, v13, 0);
    v18 = haystack;
    if ( *(_QWORD *)(v12 + 32) )
      v18 = *(const char **)(v12 + 24);
    sub_5083D0((__int64 *)(*(_QWORD *)(v17 + 1672) + 1704LL), v5, v18, 1u);
    goto LABEL_20;
  }
LABEL_16:
  if ( *(_QWORD *)(v12 + 32) )
  {
    v15 = *(const char **)(v12 + 24);
    v16 = (char *)haystack;
    if ( !(_QWORD)v22 )
      goto LABEL_19;
  }
  else
  {
    v15 = haystack;
    if ( !(_QWORD)v22 )
      goto LABEL_20;
  }
  v16 = v21;
LABEL_19:
  if ( strcmp(v16, v15) )
    goto LABEL_25;
LABEL_20:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  if ( s1 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(s1);
  }
  return 1;
}
