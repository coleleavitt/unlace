unsigned __int64 __fastcall sub_1CD380(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 *v5; // rax
  __int64 *v6; // rsi
  bool (__fastcall *v7)(__int16); // r12
  bool (__fastcall *v8)(__int16); // rsi
  _BYTE *v10; // r13
  unsigned int v11; // r12d
  char v12; // al
  __int64 v13; // rax
  char v14; // [rsp+34h] [rbp-1FCh] BYREF
  __int128 v15; // [rsp+38h] [rbp-1F8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-1E8h]
  __int64 v17; // [rsp+50h] [rbp-1E0h]
  int v18; // [rsp+58h] [rbp-1D8h]
  __int128 v19; // [rsp+60h] [rbp-1D0h]
  __int64 v20; // [rsp+70h] [rbp-1C0h]
  char v21; // [rsp+78h] [rbp-1B8h]
  __int128 v22; // [rsp+88h] [rbp-1A8h]
  __int64 v23; // [rsp+98h] [rbp-198h]
  __int64 v24; // [rsp+A0h] [rbp-190h]
  __int64 v25; // [rsp+A8h] [rbp-188h]
  _BYTE v26[320]; // [rsp+B0h] [rbp-180h] BYREF
  unsigned __int64 v27; // [rsp+1F0h] [rbp-40h] BYREF

  v27 = __readfsqword(0x28u);
  v5 = (unsigned __int64 *)v26;
  *a2 = 0;
  v23 = -1;
  v24 = 0;
  v25 = 0;
  v22 = -1;
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
  while ( &v27 != v5 );
  v6 = *(__int64 **)(a1 + 8);
  v18 = -1;
  v16 = -1;
  v17 = 0;
  v20 = -1;
  v21 = 1;
  v15 = 0;
  v19 = 0;
  if ( v6 )
  {
    v20 = *v6;
    if ( (unsigned __int8)func_tail_iterator_set() )
    {
      v21 = 0;
      sub_332560(&v15, a1 + 16);
LABEL_6:
      while ( 1 )
      {
        v7 = (bool (__fastcall *)(__int16))(v21 ? v16 : v20);
        v8 = v7;
        if ( (unsigned int)decode_insn() )
          break;
LABEL_9:
        if ( v21 )
        {
LABEL_12:
          if ( !(unsigned __int8)sub_332580(&v15, v8) )
            goto LABEL_13;
        }
        else
        {
          v8 = sub_1B81D0;
          if ( !(unsigned __int8)func_item_iterator_next() )
          {
            v21 = 1;
            goto LABEL_12;
          }
        }
      }
      v8 = nullptr;
      get_flags_ex();
      v10 = v26;
      v11 = 0;
      while ( 1 )
      {
        v12 = v10[1];
        if ( !v12 )
          goto LABEL_9;
        if ( (unsigned __int8)(v12 - 4) <= 1u )
        {
          v8 = (bool (__fastcall *)(__int16))v11;
          if ( (unsigned __int8)is_stkvar() || (v8 = (bool (__fastcall *)(__int16))&v14, !(unsigned int)sub_CFF70()) )
          {
            if ( v10[1] != 5 )
              goto LABEL_23;
LABEL_31:
            v13 = *((_QWORD *)v10 + 1);
LABEL_24:
            if ( *a2 > v13 )
              *a2 = v13;
            if ( *a3 < v13 )
              *a3 = v13;
            goto LABEL_18;
          }
          if ( (v14 & 1) != 0 )
          {
            if ( v10[1] == 5 )
              goto LABEL_31;
LABEL_23:
            v13 = *((_QWORD *)v10 + 2);
            goto LABEL_24;
          }
        }
LABEL_18:
        ++v11;
        v10 += 40;
        if ( v11 == 8 )
          goto LABEL_9;
      }
    }
  }
  if ( (unsigned __int8)sub_332560(&v15, a1 + 16) )
    goto LABEL_6;
LABEL_13:
  if ( v17 )
    lock_func_range();
  return v27 - __readfsqword(0x28u);
}
