__int64 __fastcall sub_BF680(
        unsigned int **a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int a4,
        char a5,
        double a6,
        double a7)
{
  unsigned int v9; // ebx
  unsigned int *v10; // rdi
  unsigned int *v11; // rax
  __int64 v12; // r11
  unsigned int *v13; // rdx
  unsigned int v14; // r13d
  unsigned int *v15; // rax
  __int64 v16; // r14
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned int *next_seg; // rax
  int v20; // r15d
  unsigned int v21; // r15d
  unsigned int *v22; // rax
  _BYTE v26[520]; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int64 v27; // [rsp+238h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0;
  v9 = *a3;
  v10 = *a1;
  v11 = sub_B87B0(v10, (__int64)a1[1], *a3, a4);
  if ( v11 && (v13 = &v10[3 * v12], v11 < v13) )
  {
    while ( *((_BYTE *)v11 + 8) )
    {
      v11 += 3;
      if ( v11 >= v13 )
        goto LABEL_41;
    }
    v14 = *v11;
    if ( a4 <= *v11 )
      v14 = a4;
  }
  else
  {
LABEL_41:
    v14 = a4;
  }
  v15 = sub_B8800(v10, v12, v9, v14);
  if ( !v15 || (unsigned int)sub_B9320((__int64)v15, a2) == -1 )
    return 0;
  v16 = getseg();
  if ( !*(_DWORD *)(v16 + 8) )
  {
    if ( !sub_B74F0((__int64)v26, 512, a2) )
      return 0;
    set_segm_name();
  }
  v17 = *(_DWORD *)v16;
  v18 = *(_DWORD *)(v16 + 4);
  if ( *(_DWORD *)v16 == *a3 )
  {
    if ( v14 == v18 )
    {
LABEL_37:
      *a3 = v14;
      return 1;
    }
LABEL_20:
    while ( v18 < v14 )
    {
      next_seg = (unsigned int *)get_next_seg();
      if ( !next_seg || *next_seg >= v14 )
      {
        v18 = *(_DWORD *)(v16 + 4);
        break;
      }
      if ( !(unsigned __int8)move_segm_start() )
        return 0;
      v16 = getseg();
      v18 = *(_DWORD *)(v16 + 4);
    }
    if ( v14 < v18 && !a5 && *(_DWORD *)(a2 + 64) < v18 && *(_BYTE *)(a2 + 124) == *(_BYTE *)(v16 + 23) )
    {
      v20 = *(_DWORD *)(a2 + 120);
      if ( v20 == (unsigned int)get_segm_base()
        && !(unsigned __int8)sub_BF360(0, a2 + 64, v14, *(_DWORD *)(v16 + 4), a6, a7) )
      {
        return 0;
      }
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
      sub_B8DE0(a1);
      v21 = *a3;
      if ( !sub_B8800(*a1, (__int64)a1[1], *a3, v17) )
        break;
      if ( !(unsigned __int8)move_segm_start() )
        return 0;
      v22 = (unsigned int *)getseg();
      v21 = *a3;
      v17 = *v22;
    }
    while ( *a3 < *v22 );
  }
  if ( v17 == v21 )
  {
LABEL_34:
    if ( (dword_24412C & 1) != 0 )
    {
      getseg();
      get_segm_name();
      sub_8F660((__int64)"%a: updated segment %s, end: %a\n", 0.0, (const char *)*a3, a7);
    }
    sub_B8DE0(a1);
    goto LABEL_37;
  }
LABEL_39:
  if ( (unsigned __int8)move_segm_start() )
    goto LABEL_34;
  return 0;
}

