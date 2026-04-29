unsigned __int64 __fastcall sub_6D40(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rax
  _BYTE *v5; // rcx
  int v6; // eax
  _BYTE *v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  size_t v14; // rbx
  void *v16; // rbp
  void *src; // [rsp+8h] [rbp-1E8h] BYREF
  size_t n[3]; // [rsp+10h] [rbp-1E0h]
  unsigned __int64 v19[2]; // [rsp+28h] [rbp-1C8h] BYREF
  size_t v20; // [rsp+38h] [rbp-1B8h]
  size_t v21; // [rsp+40h] [rbp-1B0h]
  __int128 v22; // [rsp+48h] [rbp-1A8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-198h]
  __int64 v24; // [rsp+60h] [rbp-190h]
  __int64 v25; // [rsp+68h] [rbp-188h]
  char v26; // [rsp+70h] [rbp-180h] BYREF
  _BYTE v27[319]; // [rsp+71h] [rbp-17Fh] BYREF
  _QWORD v28[8]; // [rsp+1B0h] [rbp-40h] BYREF

  v28[0] = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( (get_flags_ex(a2, 4) & 0xC000) == 0x4000 )
    get_ea_name(&src, a2, 1, 0);
  v23 = -1;
  v4 = &v26;
  v24 = 0;
  v25 = 0;
  v22 = -1;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v4 != (char *)v28 );
  decode_insn(&v22, a3, v28, 0.0);
  v5 = v27;
  v6 = 0;
  v7 = v27;
  while ( *v7 )
  {
    ++v6;
    v7 += 40;
    if ( v6 == 8 )
    {
      v8 = 8;
      goto LABEL_9;
    }
  }
  v8 = v6;
  if ( !v6 )
    goto LABEL_18;
LABEL_9:
  v9 = 0;
  while ( *v5 != 2 && (unsigned __int8)(*v5 - 6) > 1u )
  {
    ++v9;
    v5 += 40;
    if ( v9 == v8 )
      goto LABEL_18;
  }
  v10 = (char)v27[40 * (int)v9 + 1];
  if ( v9 < v8 - 1 )
    v11 = (char)v27[40 * (int)v9 + 41];
  else
    v11 = SBYTE2(v24);
  if ( (char)v11 > (char)v10 )
  {
    v12 = a3 + (char)v10;
    v13 = (unsigned int)(v11 - (char)v10 - 1) + v12 + 1;
    do
    {
      v19[0] = v12;
      sub_6C00((_QWORD *)(a1 + 40), v19);
      ++v12;
    }
    while ( v13 != v12 );
  }
  v14 = n[0];
  if ( n[0] > 1 )
  {
    v20 = 0;
    v19[0] = a3 + v10;
    v16 = (void *)qalloc_or_throw(n[0]);
    v21 = v14;
    memcpy(v16, src, v14);
    v20 = v14;
    v19[1] = (unsigned __int64)v16;
    sub_48E0((__int64 *)(a1 + 88), (__int64)v19);
    if ( v16 )
      qfree(v16);
  }
LABEL_18:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v28[0] - __readfsqword(0x28u);
}
