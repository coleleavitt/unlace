unsigned __int64 __fastcall sub_F091A0(
        _QWORD *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  char *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rcx
  __int64 *v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 *v27; // rbx

  v9 = (char *)a2[2];
  if ( (*((_BYTE *)a1 + 28) & 0x40) != 0 )
  {
    if ( (*(_WORD *)v9 & 0x1FF) == 0x62 && (*(_QWORD *)v9 & 0x80000LL) != 0 )
      goto LABEL_11;
  }
  else if ( !v9 )
  {
    sub_F049C0(a1);
    goto LABEL_5;
  }
  sub_F05430(a1, v9, a3, a4, a5, a6, a7);
LABEL_5:
  v12 = a2[2];
  if ( (*(_WORD *)v12 & 0x1FF) != 0x2E
    || (v13 = *(_QWORD *)(v12 + 24), (*(_BYTE *)(v13 + 28) & 0x7Fu) - 49 > 2)
    || !(unsigned __int8)sub_B78060(v13, (__int64)v9, v12, v10, v11) )
  {
    v9 = (char *)"->";
    if ( (*a2 & 0x80000) == 0 )
      v9 = ".";
    sub_995540(*a1, v9);
  }
LABEL_11:
  v14 = a2[3];
  if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 49 <= 2 )
  {
    result = sub_B78060(v14, (__int64)v9, a3, a4, a5);
    if ( (_BYTE)result )
      return result;
  }
  v16 = *a2;
  v17 = *a1;
  if ( (*a2 & 0x100000) != 0 )
  {
    a6 = a2[6];
    if ( a6 )
    {
      v9 = (char *)*a1;
      sub_E90250(a2[6], *a1, (const __m128i *)(a1 + 3), 0, 1);
      v17 = *a1;
      v16 = *a2;
    }
  }
  v18 = v16 >> 16;
  if ( (v18 & 0x40) != 0 && LODWORD(a2[2 * ((v18 & 0x10) != 0) + 7 + ((v18 & 0x20) != 0)]) )
  {
    v9 = "template ";
    sub_995540(v17, "template ");
    v17 = *a1;
  }
  sub_B86AA0(v17, (__int64)v9, a2[4], *((unsigned int *)a2 + 10), a5, a6, *(_QWORD *)(a2[3] + 40));
  v19 = a2[3];
  v20 = *(_BYTE *)(v19 + 28) & 0x7F;
  if ( (unsigned int)(v20 - 34) > 5 )
  {
    if ( (unsigned int)(v20 - 41) <= 1 )
    {
      v21 = *(_QWORD *)(sub_BBFE00(v19) + 56);
      result = *a2;
      goto LABEL_20;
    }
LABEL_35:
    result = *a2;
    goto LABEL_19;
  }
  result = *a2;
  if ( (BYTE2(*a2) & 0x80u) == 0 )
  {
    v26 = sub_B77AF0(v19);
    if ( v26 )
    {
      v21 = *(_QWORD *)(v26 + 56);
      result = *a2;
      goto LABEL_20;
    }
    goto LABEL_35;
  }
LABEL_19:
  v21 = 0;
LABEL_20:
  if ( (result & 0x400000) != 0 )
  {
    v22 = (result & 0x200000) != 0;
    if ( LODWORD(a2[2 * ((result & 0x100000) != 0) + 6 + v22]) )
    {
      v23 = a1 + 3;
      v24 = (__int64 *)&a2[2 * ((result & 0x100000) != 0) + 6 + 2 * (unsigned __int64)((result & 0x400000) != 0) + v22];
      v25 = result >> 16;
      if ( (v25 & 0x40) != 0
        && (v27 = (__int64 *)&a2[2 * ((v25 & 0x10) != 0) + ((v25 & 0x20) != 0)], *((_DWORD *)v27 + 12)) )
      {
        return sub_F79380(*a1, v24, *((unsigned int *)v27 + 15), v23, v21);
      }
      else
      {
        return sub_F79380(*a1, v24, 0, v23, v21);
      }
    }
  }
  return result;
}
