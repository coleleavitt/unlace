__int64 __fastcall sub_2138CE0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128 *v7; // rsi
  unsigned __int64 v8; // rdx
  __int16 v9; // ax
  unsigned int v10; // ebp
  const char *v11; // rax
  size_t v13; // r13
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // al
  char v21; // dl
  __int64 v22; // [rsp+0h] [rbp-78h]
  void *s2; // [rsp+8h] [rbp-70h]
  const char *v24; // [rsp+10h] [rbp-68h] BYREF
  __int16 v25; // [rsp+30h] [rbp-48h]

  v7 = *(__m128 **)(a1 + 320);
  if ( v7 == *(__m128 **)(a1 + 328) )
  {
    sub_212FB50(a1 + 312, (char *)v7, a1 + 300);
  }
  else
  {
    v8 = *(unsigned int *)(a1 + 300);
    v9 = *(_WORD *)(a1 + 304);
    v7 = (__m128 *)((char *)v7 + 8);
    v7[-1].m128_i32[2] = v8;
    v7[-1].m128_i16[6] = v9;
    *(_QWORD *)(a1 + 320) = v7;
  }
  v10 = *(unsigned __int8 *)(a1 + 305);
  *(_DWORD *)(a1 + 300) = 1;
  if ( (_BYTE)v10 )
  {
    v10 = 0;
    sub_21319B0(a1, (void **)v7, v8, a4, a5, a6);
    return v10;
  }
  if ( **(_DWORD **)(a1 + 48) != 3 )
    goto LABEL_5;
  v13 = 0;
  v14 = sub_2153C00(a1);
  v15 = *(_QWORD *)(v14 + 16);
  if ( v15 )
  {
    v13 = v15 - 1;
    if ( v15 != 1 )
      v13 = v15 - 2;
    v15 = 1;
  }
  v16 = *(_QWORD *)(v14 + 8);
  sub_2132C70(a1, v7);
  if ( **(_DWORD **)(a1 + 48) != 26 )
  {
    v11 = "expected comma after first string for '.ifeqs' directive";
    if ( !a2 )
      v11 = "expected comma after first string for '.ifnes' directive";
    goto LABEL_7;
  }
  sub_2132C70(a1, v7);
  if ( **(_DWORD **)(a1 + 48) != 3 )
  {
LABEL_5:
    v11 = "expected string parameter for '.ifeqs' directive";
    if ( !a2 )
      v11 = "expected string parameter for '.ifnes' directive";
LABEL_7:
    v24 = v11;
    v25 = 259;
    return (unsigned int)sub_21543E0(a1, &v24, 0, 0);
  }
  v17 = sub_2153C00(a1);
  v18 = sub_212C8F0(v17);
  v22 = v19;
  s2 = (void *)v18;
  sub_2132C70(a1, v7);
  if ( v13 == v22 )
  {
    if ( v13 )
    {
      v20 = memcmp((const void *)(v16 + v15), s2, v13) == 0;
      v21 = a2 ^ v20;
    }
    else
    {
      v20 = 1;
      v21 = a2 ^ 1;
    }
  }
  else
  {
    v21 = a2;
    v20 = 0;
  }
  *(_BYTE *)(a1 + 305) = v21;
  *(_BYTE *)(a1 + 304) = a2 == v20;
  return v10;
}
