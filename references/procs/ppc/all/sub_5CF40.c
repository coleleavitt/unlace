__int64 __fastcall sub_5CF40(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  unsigned __int64 v4; // rbp
  __int64 v6; // rbp
  __int16 v7; // ax
  char *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdi
  const char *v12; // rsi
  bool v13; // dl
  _QWORD *v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  const char *v22; // rsi
  char v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-1E0h]
  char v27[2]; // [rsp+1Eh] [rbp-1CAh] BYREF
  _QWORD *v28; // [rsp+20h] [rbp-1C8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-1C0h]
  char v30; // [rsp+38h] [rbp-1B0h]
  __int128 v31; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-198h]
  __int64 v33; // [rsp+58h] [rbp-190h]
  __int64 v34; // [rsp+60h] [rbp-188h]
  char v35; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int16 v36; // [rsp+6Eh] [rbp-17Ah]
  unsigned __int16 v37; // [rsp+96h] [rbp-152h]
  _QWORD v38[8]; // [rsp+1A8h] [rbp-40h] BYREF

  v2 = a1 + 16;
  v4 = *(_QWORD *)(a1 + 24) + a2[1];
  v38[0] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 32) < v4 )
    *(_QWORD *)(a1 + 16) = qvector_reserve(a1 + 16, *(_QWORD *)(a1 + 16), v4, 8);
  v26 = a1 + 40;
  if ( *(_QWORD *)(a1 + 56) < v4 )
    *(_QWORD *)(a1 + 40) = qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), v4, 1);
  v6 = *a2;
  if ( !(24 * a2[1]) )
    return 1;
  while ( 1 )
  {
    v7 = sub_35600(*(unsigned __int16 *)(v6 + 16));
    if ( v7 == -1 )
      return 0;
    if ( (v7 & 0x400) == 0 )
      return 0;
    if ( (v7 & 0xF) != 1 )
      return 0;
    if ( (v7 & 0x800) == 0 )
      return 0;
    v9 = &v35;
    v32 = -1;
    v33 = 0;
    v34 = 0;
    v31 = -1;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 40;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *((_QWORD *)v9 - 2) = 0;
    }
    while ( v9 != (char *)v38 );
    if ( (int)decode_insn(&v31, *(_QWORD *)(v6 + 8), v38, 0.0) <= 0 )
      return 0;
    if ( (*(_BYTE *)(v6 + 18) & 1) != 0 )
      v10 = v36;
    else
      v10 = v37;
    v11 = *(_QWORD *)a1;
    v12 = (const char *)&v28;
    v28 = nullptr;
    v30 = 0;
    v29 = 0;
    v13 = sub_5B9B0(v11, (__int64 *)&v28, v32, v10, 0, 10);
    v14 = v28;
    if ( !v13 || (unsigned __int8)(v30 - 10) > 1u )
      goto LABEL_23;
    v15 = *v28;
    if ( (_QWORD)v29 != 1 )
    {
      v16 = v28 + 3;
      if ( 24LL * (_QWORD)v29 != 24 )
      {
        while ( *v16 == v15 )
        {
          v16 += 3;
          if ( v16 == &v28[3 * (_QWORD)v29] )
            goto LABEL_25;
        }
LABEL_23:
        if ( v14 )
          qfree(v14, v12);
        return 0;
      }
    }
LABEL_25:
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( *(_QWORD *)(a1 + 144) != v15 )
        goto LABEL_23;
    }
    else
    {
      *(_QWORD *)(a1 + 144) = v15;
    }
    v12 = v27;
    if ( !(unsigned __int8)sub_5C850((__int64 *)a1, v27, (__int64)&v28) )
      goto LABEL_23;
    v17 = *(_QWORD *)(a1 + 24);
    if ( v17 )
    {
      if ( *(_BYTE *)(a1 + 152) != v27[0] )
        goto LABEL_23;
    }
    else
    {
      *(_BYTE *)(a1 + 152) = v27[0];
    }
    v18 = *(_QWORD *)(v6 + 8);
    v19 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v17 + 1) )
    {
      v25 = qvector_reserve(v2, v19, v17 + 1, 8);
      *(_QWORD *)(a1 + 16) = v25;
      v17 = *(_QWORD *)(a1 + 24);
      v19 = v25;
    }
    *(_QWORD *)(v19 + 8 * v17) = v18;
    v20 = *(_QWORD *)(a1 + 48);
    ++*(_QWORD *)(a1 + 24);
    v21 = *(_QWORD *)(a1 + 56);
    v22 = *(const char **)(a1 + 40);
    v23 = *(_BYTE *)(v6 + 18) & 1;
    v27[1] = v23;
    if ( v21 < v20 + 1 )
    {
      v24 = qvector_reserve(v26, v22, v20 + 1, 1);
      *(_QWORD *)(a1 + 40) = v24;
      v22 = (const char *)v24;
      v20 = *(_QWORD *)(a1 + 48);
    }
    v22[v20] = v23;
    ++*(_QWORD *)(a1 + 48);
    if ( v14 )
      qfree(v14, v22);
    v6 += 24;
    if ( v6 == *a2 + 24 * a2[1] )
      return 1;
  }
}
