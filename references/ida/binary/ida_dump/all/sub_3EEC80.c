__int64 __fastcall sub_3EEC80(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v3; // rax
  __int64 v5; // r15
  __int64 ph; // rax
  int v7; // r10d
  int v8; // ecx
  char *v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 dtype_size; // rax
  __int64 v15; // [rsp+8h] [rbp-1C8h]
  char *v16; // [rsp+8h] [rbp-1C8h]
  int v17; // [rsp+14h] [rbp-1BCh]
  char *v18; // [rsp+18h] [rbp-1B8h]
  __int64 v19; // [rsp+18h] [rbp-1B8h]
  __int64 v20; // [rsp+20h] [rbp-1B0h]
  char v21; // [rsp+50h] [rbp-180h] BYREF
  char v22; // [rsp+51h] [rbp-17Fh] BYREF
  unsigned __int64 v23; // [rsp+190h] [rbp-40h] BYREF

  v3 = (unsigned __int64 *)&v21;
  v23 = __readfsqword(0x28u);
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v3 != &v23 );
  v5 = 0;
  if ( a2 < a3 )
  {
    while ( !(unsigned int)decode_insn() )
    {
LABEL_5:
      if ( next_that() >= a3 )
        return v5;
    }
    ph = get_ph();
    v7 = 0;
    v8 = *(_DWORD *)(ph + 104);
    if ( v8 <= 0 && *(int *)(ph + 108) > 0 )
      v7 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * -v8 + 8);
    v9 = &v22;
    v10 = 0;
    while ( (dword_42EDA0[v10] & v7) == 0 )
    {
LABEL_22:
      ++v10;
      v9 += 40;
      if ( v10 == 8 )
        goto LABEL_5;
    }
    if ( *v9 == 4 )
    {
      if ( !v9[31] )
      {
        v11 = *(unsigned __int16 *)(v9 + 5);
        goto LABEL_16;
      }
    }
    else if ( *v9 != 2 || !v9[31] )
    {
      goto LABEL_5;
    }
    v11 = v9[32] & 7;
LABEL_16:
    if ( v11 == 4 || v11 == 5 && (*(_BYTE *)(a1 + 16) & 0x10) != 0 )
    {
      v18 = v9;
      v17 = v7;
      v15 = v10;
      v12 = calc_stkvar_struc_offset();
      v10 = v15;
      v7 = v17;
      v20 = v12;
      v9 = v18;
      if ( v12 != -1 )
      {
        v19 = v15;
        v16 = v9;
        dtype_size = get_dtype_size();
        v10 = v19;
        v7 = v17;
        v9 = v16;
        if ( v5 < dtype_size + v20 )
          v5 = dtype_size + v20;
      }
    }
    goto LABEL_22;
  }
  return v5;
}
