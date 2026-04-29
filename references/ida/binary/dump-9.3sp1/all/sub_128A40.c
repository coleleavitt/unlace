__int64 __fastcall sub_128A40(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4, int a5, int a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r12
  char v12; // al
  unsigned int v13; // r14d
  _QWORD *v14; // rdx
  unsigned __int8 *v15; // rbp
  unsigned __int8 *i; // r12
  unsigned __int8 *v18; // rbp
  unsigned __int8 *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r15
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r13
  char v27; // al
  __int64 v28; // rdi
  char v29; // al
  __int64 v30; // [rsp+0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  __int128 v32; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 56);
  v8 = *a2;
  v33 = __readfsqword(0x28u);
  if ( v7 == -1 )
  {
LABEL_4:
    if ( (v8 & 0xFB) == 1 || (unsigned __int8)v8 <= 0xFu && (v10 = 33344, _bittest64(&v10, v8)) )
    {
      sub_127FE0(*(_QWORD *)(a1 + 16), (__int64)&v30, (__int64)a2, 0, a5, a6, 0, 0, 0, 0, 0);
      v11 = *(_QWORD **)(a1 + 64);
      if ( (unsigned __int8)sub_64780(&v30, v11) || (v13 = 0, (unsigned __int8)sub_318470(&v31, v11 + 2)) )
      {
        v12 = *(_BYTE *)(a1 + 72);
        if ( a4 == v12 || !*(_QWORD *)(a1 + 48) )
          *(_QWORD *)(a1 + 48) = a2;
        v13 = a4 == v12;
      }
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      qfree(v30);
      return v13;
    }
    return 0;
  }
  if ( (_BYTE)v8 != 8 )
  {
    if ( v7 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) )
      return 0;
    goto LABEL_4;
  }
  v14 = *((_QWORD **)a2 + 1);
  v18 = (unsigned __int8 *)v14[3];
  v19 = &v18[80 * v14[4]];
  if ( v19 == v18 )
  {
LABEL_15:
    v15 = (unsigned __int8 *)v14[6];
    for ( i = &v15[16 * v14[7]]; i != v15; v15 += 16 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == *(_QWORD *)(a1 + 56) )
      {
        v24 = *v15;
        if ( (_BYTE)v24 == 4 )
        {
          v13 = sub_11E9B0((__int64)v15, a1, 0, 1);
          if ( v13 )
            return v13;
        }
        else if ( (v24 & 0xFB) == 1 || (unsigned __int8)v24 <= 0xFu && (v25 = 33344, _bittest64(&v25, v24)) )
        {
          sub_127FE0(*(_QWORD *)(a1 + 16), (__int64)&v30, (__int64)v15, 0, a5, a6, 0, 0, 0, 0, 0);
          v26 = *(_QWORD **)(a1 + 64);
          v27 = sub_64780(&v30, v26);
          v28 = v31;
          if ( v27 || (v29 = sub_318470(&v31, v26 + 2), v28 = v31, v29) )
          {
            if ( *(_BYTE *)(a1 + 72) )
            {
              *(_QWORD *)(a1 + 48) = v15;
              if ( v28 )
              {
                *(_QWORD *)&v32 = 0;
                qfree(v28);
              }
              goto LABEL_58;
            }
            if ( !*(_QWORD *)(a1 + 48) )
              *(_QWORD *)(a1 + 48) = v15;
          }
          if ( v28 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v28);
          }
          qfree(v30);
        }
      }
    }
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  while ( 1 )
  {
    if ( *((_QWORD *)v18 + 2) != v7 )
      goto LABEL_21;
    v20 = *v18;
    if ( (_BYTE)v20 != 4 )
      break;
    v13 = sub_11E9B0((__int64)v18, a1, 0, 0);
    if ( v13 )
      return v13;
LABEL_21:
    v18 += 80;
    if ( v19 == v18 )
    {
      v14 = *((_QWORD **)a2 + 1);
      goto LABEL_15;
    }
    v7 = *(_QWORD *)(a1 + 56);
  }
  if ( (v20 & 0xFB) != 1 )
  {
    if ( (unsigned __int8)v20 > 0xFu )
      goto LABEL_21;
    v21 = 33344;
    if ( !_bittest64(&v21, v20) )
      goto LABEL_21;
  }
  sub_127FE0(*(_QWORD *)(a1 + 16), (__int64)&v30, (__int64)v18, 0, a5, a6, 0, 0, 0, 0, 0);
  v22 = *(_QWORD **)(a1 + 64);
  if ( !(unsigned __int8)sub_64780(&v30, v22) && !(unsigned __int8)sub_318470(&v31, v22 + 2) )
  {
    v23 = v31;
    if ( !v31 )
      goto LABEL_33;
LABEL_32:
    *(_QWORD *)&v32 = 0;
    qfree(v23);
    goto LABEL_33;
  }
  v23 = v31;
  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( !*(_QWORD *)(a1 + 48) )
    {
      *(_QWORD *)(a1 + 48) = v18;
      if ( !v23 )
        goto LABEL_33;
      goto LABEL_32;
    }
    if ( v31 )
      goto LABEL_32;
LABEL_33:
    qfree(v30);
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 48) = v18;
  if ( v23 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v23);
  }
LABEL_58:
  qfree(v30);
  return 1;
}
