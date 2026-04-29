__int64 __fastcall sub_3EEC80(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 that; // r14
  char *v7; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 ph; // rax
  int v14; // r10d
  int v15; // ecx
  char *v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 dtype_size; // rax
  __int64 v24; // [rsp+8h] [rbp-1C8h]
  char *v25; // [rsp+8h] [rbp-1C8h]
  int v26; // [rsp+14h] [rbp-1BCh]
  char *v27; // [rsp+18h] [rbp-1B8h]
  __int64 v28; // [rsp+18h] [rbp-1B8h]
  __int64 v29; // [rsp+20h] [rbp-1B0h]
  __int128 v30; // [rsp+28h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-198h]
  __int64 v32; // [rsp+40h] [rbp-190h]
  __int64 v33; // [rsp+48h] [rbp-188h]
  char v34; // [rsp+50h] [rbp-180h] BYREF
  char v35; // [rsp+51h] [rbp-17Fh] BYREF
  _QWORD v36[8]; // [rsp+190h] [rbp-40h] BYREF

  that = a2;
  v7 = &v34;
  v36[0] = __readfsqword(0x28u);
  v30 = -1;
  v9 = v36;
  v31 = -1;
  v32 = 0;
  v33 = 0;
  do
  {
    v10 = 0;
    v11 = 0;
    *(_WORD *)v7 = 0;
    v7 += 40;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *((_QWORD *)v7 - 2) = 0;
  }
  while ( v7 != (char *)v36 );
  v12 = 0;
  if ( a2 < a3 )
  {
    while ( !(unsigned int)decode_insn(&v30, that, v9, v10, v11, a6, 0.0) )
    {
LABEL_5:
      that = next_that(that, a3, sub_1B81D0, 0);
      if ( that >= a3 )
        return v12;
    }
    ph = get_ph(&v30);
    v14 = 0;
    v15 = *(_DWORD *)(ph + 104);
    if ( (unsigned __int16)v32 >= v15 && (unsigned __int16)v32 < *(int *)(ph + 108) )
      v14 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)v32 - v15) + 8);
    v16 = &v35;
    v17 = 0;
    while ( 1 )
    {
      while ( (dword_42EDA0[v17] & v14) == 0 )
      {
LABEL_22:
        ++v17;
        v16 += 40;
        if ( v17 == 8 )
          goto LABEL_5;
      }
      if ( *v16 == 4 )
      {
        if ( !v16[31] )
        {
          v18 = *(unsigned __int16 *)(v16 + 5);
LABEL_16:
          if ( v18 == 4 || v18 == 5 && (*(_BYTE *)(a1 + 16) & 0x10) != 0 )
          {
            v27 = v16;
            v26 = v14;
            v24 = v17;
            v19 = calc_stkvar_struc_offset(a1, &v30, (unsigned int)v17);
            v17 = v24;
            v14 = v26;
            v29 = v19;
            v16 = v27;
            if ( v19 != -1 )
            {
              v20 = (unsigned __int8)v27[4];
              v28 = v24;
              v25 = v16;
              dtype_size = get_dtype_size(v20);
              v17 = v28;
              v14 = v26;
              v16 = v25;
              if ( v12 < dtype_size + v29 )
                v12 = dtype_size + v29;
            }
          }
          goto LABEL_22;
        }
      }
      else if ( *v16 != 2 || !v16[31] )
      {
        goto LABEL_5;
      }
      v18 = v16[32] & 7;
      if ( (v32 & 0x1000000000LL) == 0 || (v33 & 0x100) == 0 )
        goto LABEL_16;
      ++v17;
      v16 += 40;
      if ( v17 == 8 )
        goto LABEL_5;
    }
  }
  return v12;
}
