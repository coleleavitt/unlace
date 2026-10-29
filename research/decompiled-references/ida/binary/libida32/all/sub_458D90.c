unsigned __int64 __fastcall sub_458D90(__int64 a1, unsigned int *a2, unsigned int a3, signed int a4, char a5)
{
  __int64 v7; // rdi
  __int64 *v9; // rbp
  unsigned __int64 v10; // r13
  unsigned int v12; // r15d
  unsigned int i; // r14d
  unsigned int v14; // [rsp+4h] [rbp-104h]
  int v16; // [rsp+Ch] [rbp-FCh]
  int v17[4]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h]
  int v19[2]; // [rsp+38h] [rbp-D0h]
  __m128i v20[8]; // [rsp+40h] [rbp-C8h] BYREF
  int v21[2]; // [rsp+C8h] [rbp-40h]

  v7 = *(int *)(a1 + 4LL * a4 + 16);
  *(_QWORD *)v21 = __readfsqword(0x28u);
  v9 = *(__int64 **)(switch_dbctx(v7) + 1480);
  v10 = sub_3B9AA0((__int64)v9, a3, 0);
  v14 = sub_458A90(v9, a3, a5);
  if ( (v10 & 0x400) == 0 )
    goto LABEL_7;
  if ( (~(_WORD)v10 & 0x600) != 0 )
  {
    if ( (v10 & 0xF0000600) == 0x60000400 || (v10 & 0x70000600) == 0x50000400 )
    {
      v16 = 1;
      if ( !(unsigned __int8)sub_455D20(v20, a1, a4, a3, 0, v10) )
        goto LABEL_13;
LABEL_37:
      if ( (unsigned __int8)sub_456330(v9, v10, 0, (unsigned int *)v20, v14) )
        goto LABEL_38;
LABEL_13:
      v12 = 0;
      if ( (v10 & 0x600) == 0x400 && (v10 & 0xF0000000) == 0x60000000 )
      {
        sub_3CC010((_DWORD)v9, a3, 0);
        *(_OWORD *)v17 = 0;
        v18 = 0;
        *(_QWORD *)v19 = 0;
        sub_3CE970(v9, a3, &elf_gnu_hash_indexes[43], v14, -1, (const __m128i *)v17);
        if ( v18 )
          ((void (__fastcall *)(int *, int *, __int64))v18)(v17, v17, 3);
        v12 = 0;
        goto LABEL_15;
      }
      goto LABEL_14;
    }
    v16 = 1;
  }
  else
  {
    v16 = 2;
  }
  if ( (unsigned __int8)is_off(v10, 0)
    || (unsigned __int8)is_enum(v10, 0)
    || (unsigned __int8)is_stroff(v10, 0)
    || (unsigned __int8)is_custfmt(v10, 0) )
  {
    if ( !(unsigned __int8)sub_455D20(v20, a1, a4, a3, 0, v10) )
      goto LABEL_13;
    goto LABEL_37;
  }
LABEL_38:
  v12 = 0;
  while ( ++v12 != v16 && (v10 & 0xD000000) == 0x8000000 )
  {
    if ( (unsigned __int8)sub_455D20(v20, a1, a4, a3, v12, v10) )
    {
      v12 = 1;
      if ( (unsigned __int8)sub_456330(v9, v10, 1u, (unsigned int *)v20, v14) )
        continue;
    }
LABEL_14:
    sub_3CB3B0(v9, a3, v12);
LABEL_15:
    v10 = sub_3B9AA0((__int64)v9, a3, 0);
  }
  if ( (~(_WORD)v10 & 0x600) == 0 && ((unsigned __int8)is_off(v10, 15) || (unsigned __int8)is_custfmt(v10, 15)) )
  {
    for ( i = 1; i != 8; ++i )
    {
      if ( sub_3C4190(v9, v20, a3, i, v10) && !(unsigned __int8)sub_456330(v9, v10, i, (unsigned int *)v20, v14) )
      {
        sub_3C3D00(v9, a3, i, v10);
        sub_3CA660(v9, a3, 15LL << (4 * ((unsigned __int8)i + (i != 1) + 5)));
      }
    }
  }
LABEL_7:
  if ( a2 )
    *a2 = v14;
  return v10;
}

