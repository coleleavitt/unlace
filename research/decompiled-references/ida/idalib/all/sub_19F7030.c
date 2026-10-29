__int16 __fastcall sub_19F7030(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v10; // rdi
  __int64 i; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax

  v6 = *(_QWORD *)(a2 + 48);
  v7 = *(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v7 & 8) != 0 )
  {
    v8 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
    if ( (v8 & 0xFFFFFE00) != 0 )
      return v8;
  }
  v8 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v8 + 17) & 4) != 0 )
    return v8;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v12 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
    a3 = *v12;
    a4 = *v12 + 8LL * *((unsigned int *)v12 + 2);
    if ( *v12 >= a4 )
    {
      if ( a3 == a4 )
        goto LABEL_4;
      while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 229 )
      {
        a4 += 8LL;
        if ( a3 == a4 )
          goto LABEL_4;
      }
    }
    else
    {
      v13 = (__int64 *)*v12;
      while ( 1 )
      {
        a3 = *v13;
        if ( *(_WORD *)(*v13 + 36) == 229 )
          break;
        if ( (__int64 *)a4 == ++v13 )
          goto LABEL_4;
      }
      if ( (__int64 *)a4 == v13 )
        goto LABEL_4;
    }
    v8 = sub_A70E70(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v6, 23);
    *(_QWORD *)(a2 + 48) = v8;
    return v8;
  }
LABEL_4:
  v10 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 13
    || (LOWORD(v8) = (*(_WORD *)(v8 + 18) >> 3) & 0x1FF, (_WORD)v8 != 492) && (_WORD)v8 != 435 )
  {
    for ( i = sub_F63050(v10, a2, a3, a4); (unsigned int)*(unsigned __int8 *)(i + 16) - 2 <= 1; i = sub_F649E0(i) )
      ;
    v8 = sub_F63500(i, a2);
    if ( !v8 )
    {
      if ( (*(_BYTE *)(a2 + 96) & 7) == 2 )
        goto LABEL_18;
      LOWORD(v8) = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (_BYTE)v8 != 43 )
      {
        v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v8 = *(_QWORD *)v8;
        LOWORD(v8) = (*(_BYTE *)(v8 + 8) + 70) & 0x7F;
        if ( (unsigned __int8)v8 <= 3u )
        {
LABEL_18:
          v8 = sub_A70E70(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v6, 21);
          *(_QWORD *)(a2 + 48) = v8;
        }
      }
    }
  }
  return v8;
}
