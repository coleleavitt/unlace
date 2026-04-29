unsigned __int64 __fastcall sub_1CCDC0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  _BYTE *v13; // r13
  unsigned int v14; // r12d
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // [rsp-8h] [rbp-238h]
  __int128 *v18; // [rsp+0h] [rbp-230h]
  __int128 *v19; // [rsp+8h] [rbp-228h]
  __int64 flags; // [rsp+10h] [rbp-220h]
  _BYTE *v21; // [rsp+18h] [rbp-218h]
  _BYTE v22[4]; // [rsp+34h] [rbp-1FCh] BYREF
  __int128 v23; // [rsp+38h] [rbp-1F8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-1E8h]
  __int64 v25; // [rsp+50h] [rbp-1E0h] BYREF
  int v26; // [rsp+58h] [rbp-1D8h]
  __int128 v27; // [rsp+60h] [rbp-1D0h]
  __int64 v28; // [rsp+70h] [rbp-1C0h]
  char v29; // [rsp+78h] [rbp-1B8h]
  __int128 v30; // [rsp+88h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+98h] [rbp-198h]
  __int64 v32; // [rsp+A0h] [rbp-190h]
  __int64 v33; // [rsp+A8h] [rbp-188h]
  _BYTE v34[320]; // [rsp+B0h] [rbp-180h] BYREF
  unsigned __int64 v35; // [rsp+1F0h] [rbp-40h] BYREF

  v35 = __readfsqword(0x28u);
  v5 = (unsigned __int64 *)v34;
  *a2 = 0;
  v31 = -1;
  v32 = 0;
  v33 = 0;
  v21 = v34;
  v30 = -1;
  *a3 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v35 != v5 );
  v6 = *(__int64 **)(a1 + 8);
  v26 = -1;
  v24 = -1;
  v25 = 0;
  v28 = -1;
  v29 = 1;
  v23 = 0;
  v27 = 0;
  if ( v6 )
  {
    v28 = *v6;
    if ( (unsigned __int8)func_tail_iterator_set(&v25, v6, -1) )
    {
      v29 = 0;
      v19 = &v23;
      sub_3328A0(&v23, a1 + 16);
LABEL_6:
      v18 = &v30;
      while ( 1 )
      {
        v11 = v29 ? v24 : v28;
        if ( (unsigned int)decode_insn(v18, v11, v7, v8, v9, v10, 0.0, v17, v18, v19, flags, v21) )
          break;
LABEL_10:
        if ( v29 )
        {
LABEL_13:
          if ( !(unsigned __int8)sub_3328C0(v19) )
            goto LABEL_14;
        }
        else if ( !(unsigned __int8)func_item_iterator_next(&v25, sub_1B7C10, 0) )
        {
          v29 = 1;
          goto LABEL_13;
        }
      }
      flags = get_flags_ex(v11, 0);
      v13 = v21;
      v14 = 0;
      while ( 1 )
      {
        v15 = v13[1];
        if ( !v15 )
          goto LABEL_10;
        if ( (unsigned __int8)(v15 - 4) <= 1u )
        {
          if ( (unsigned __int8)is_stkvar(flags, v14) || !(unsigned int)sub_CF9B0(0x2Eu, v22, v18, v13) )
          {
            if ( v13[1] != 5 )
              goto LABEL_24;
LABEL_32:
            v16 = *((_QWORD *)v13 + 1);
LABEL_25:
            if ( *a2 > v16 )
              *a2 = v16;
            if ( *a3 < v16 )
              *a3 = v16;
            goto LABEL_19;
          }
          if ( (v22[0] & 1) != 0 )
          {
            if ( v13[1] == 5 )
              goto LABEL_32;
LABEL_24:
            v16 = *((_QWORD *)v13 + 2);
            goto LABEL_25;
          }
        }
LABEL_19:
        ++v14;
        v13 += 40;
        if ( v14 == 8 )
          goto LABEL_10;
      }
    }
  }
  v19 = &v23;
  if ( (unsigned __int8)sub_3328A0(&v23, a1 + 16) )
    goto LABEL_6;
LABEL_14:
  if ( v25 )
    lock_func_range(v25, 0);
  return v35 - __readfsqword(0x28u);
}
