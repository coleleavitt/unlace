__int64 __fastcall sub_BFD90(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        char a5,
        double a6,
        double a7)
{
  unsigned __int64 v9; // rbx
  __m128i *v10; // rdi
  unsigned __int64 *v11; // rax
  __int64 v12; // r11
  unsigned __int64 *v13; // rdx
  const char *v14; // r13
  unsigned __int64 *v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  const char *v18; // rax
  _QWORD *next_seg; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // r15
  unsigned __int64 *v22; // rax
  char v26[520]; // [rsp+40h] [rbp-248h] BYREF
  unsigned __int64 v27; // [rsp+248h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0;
  v9 = *a3;
  v10 = *(__m128i **)a1;
  v11 = sub_B8CF0((unsigned __int64 *)v10, *(_QWORD *)(a1 + 8), *a3, a4);
  if ( v11 && (v13 = (unsigned __int64 *)v10 + 3 * v12, v11 < v13) )
  {
    while ( *((_BYTE *)v11 + 16) )
    {
      v11 += 3;
      if ( v11 >= v13 )
        goto LABEL_41;
    }
    v14 = (const char *)*v11;
    if ( a4 <= *v11 )
      v14 = (const char *)a4;
  }
  else
  {
LABEL_41:
    v14 = (const char *)a4;
  }
  v15 = sub_B8D40((unsigned __int64 *)v10, v12, v9, (unsigned __int64)v14);
  if ( !v15 || (unsigned int)sub_B9940((__int64)v15, a2) == -1 )
    return 0;
  v16 = getseg();
  if ( !*(_QWORD *)(v16 + 16) )
  {
    if ( !sub_B7B50((__int64)v26, 512, a2) )
      return 0;
    set_segm_name();
  }
  v17 = *(_QWORD *)v16;
  v18 = *(const char **)(v16 + 8);
  if ( *(_QWORD *)v16 == *a3 )
  {
    if ( v14 == v18 )
    {
LABEL_37:
      *a3 = (unsigned __int64)v14;
      return 1;
    }
LABEL_20:
    while ( v18 < v14 )
    {
      next_seg = (_QWORD *)get_next_seg();
      if ( !next_seg || *next_seg >= (unsigned __int64)v14 )
      {
        v18 = *(const char **)(v16 + 8);
        break;
      }
      if ( !(unsigned __int8)move_segm_start() )
        return 0;
      v16 = getseg();
      v18 = *(const char **)(v16 + 8);
    }
    if ( v14 < v18
      && !a5
      && *(_QWORD *)(a2 + 80) < (unsigned __int64)v18
      && *(_BYTE *)(a2 + 152) == *(_BYTE *)(v16 + 43) )
    {
      v20 = *(_QWORD *)(a2 + 144);
      if ( v20 == get_segm_base() && !(unsigned __int8)sub_BFA40(0, a2 + 80, v14, *(_QWORD *)(v16 + 8), a6, a7) )
        return 0;
    }
    if ( !(unsigned __int8)set_segm_end() )
      return 0;
    getseg();
    v21 = *a3;
    if ( *a3 < v17 )
      goto LABEL_32;
  }
  else
  {
    if ( v14 != v18 )
      goto LABEL_20;
    if ( *a3 >= v17 )
      goto LABEL_39;
    do
    {
LABEL_32:
      sub_B9340((const __m128i **)a1);
      v21 = *a3;
      if ( !sub_B8D40(*(unsigned __int64 **)a1, *(_QWORD *)(a1 + 8), *a3, v17) )
        break;
      if ( !(unsigned __int8)move_segm_start() )
        return 0;
      v22 = (unsigned __int64 *)getseg();
      v21 = *a3;
      v17 = *v22;
    }
    while ( *a3 < *v22 );
  }
  if ( v17 == v21 )
  {
LABEL_34:
    if ( (dword_245190 & 1) != 0 )
    {
      getseg();
      get_segm_name();
      sub_8F740((__int64)"%a: updated segment %s, end: %a\n", 0.0, (const char *)*a3, a7);
    }
    sub_B9340((const __m128i **)a1);
    goto LABEL_37;
  }
LABEL_39:
  if ( (unsigned __int8)move_segm_start() )
    goto LABEL_34;
  return 0;
}

