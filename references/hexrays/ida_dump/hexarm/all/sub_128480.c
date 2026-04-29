__int64 __fastcall sub_128480(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // r12
  char v11; // al
  unsigned int v12; // r14d
  _QWORD *v13; // rdx
  unsigned __int8 *v14; // rbp
  unsigned __int8 *i; // r12
  unsigned __int8 *v17; // rbp
  unsigned __int8 *v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  _QWORD *v22; // r15
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  _QWORD *v27; // r13
  char v28; // al
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // [rsp+0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+10h] [rbp-58h] BYREF
  __int128 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 56);
  v6 = *a2;
  v35 = __readfsqword(0x28u);
  if ( v5 == -1 )
  {
LABEL_4:
    if ( (v6 & 0xFB) == 1 || (unsigned __int8)v6 <= 0xFu && (v8 = 33344, _bittest64(&v8, v6)) )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v34 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      sub_127A20(v9, &v31, (__int64)a2, 0);
      v10 = *(_QWORD **)(a1 + 64);
      if ( (unsigned __int8)sub_64180(&v31, v10) || (v12 = 0, (unsigned __int8)sub_318830(&v33, v10 + 2)) )
      {
        v11 = *(_BYTE *)(a1 + 72);
        if ( a4 == v11 || !*(_QWORD *)(a1 + 48) )
          *(_QWORD *)(a1 + 48) = a2;
        v12 = a4 == v11;
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
      qfree(v31);
      return v12;
    }
    return 0;
  }
  if ( (_BYTE)v6 != 8 )
  {
    if ( v5 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) )
      return 0;
    goto LABEL_4;
  }
  v13 = *((_QWORD **)a2 + 1);
  v17 = (unsigned __int8 *)v13[3];
  v18 = &v17[80 * v13[4]];
  if ( v18 == v17 )
  {
LABEL_15:
    v14 = (unsigned __int8 *)v13[6];
    for ( i = &v14[16 * v13[7]]; i != v14; v14 += 16 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == *(_QWORD *)(a1 + 56) )
      {
        v24 = *v14;
        if ( (_BYTE)v24 == 4 )
        {
          v12 = sub_11E3F0((__int64)v14, a1, nullptr, 1);
          if ( v12 )
            return v12;
        }
        else if ( (v24 & 0xFB) == 1 || (unsigned __int8)v24 <= 0xFu && (v25 = 33344, _bittest64(&v25, v24)) )
        {
          v26 = *(_QWORD *)(a1 + 16);
          v34 = 0;
          v31 = 0;
          v32 = 0;
          v33 = 0;
          sub_127A20(v26, &v31, (__int64)v14, 0);
          v27 = *(_QWORD **)(a1 + 64);
          v28 = sub_64180(&v31, v27);
          v29 = v33;
          if ( v28 || (v30 = sub_318830(&v33, v27 + 2), v29 = v33, v30) )
          {
            if ( *(_BYTE *)(a1 + 72) )
            {
              *(_QWORD *)(a1 + 48) = v14;
              if ( v29 )
              {
                *(_QWORD *)&v34 = 0;
                qfree(v29);
              }
              goto LABEL_58;
            }
            if ( !*(_QWORD *)(a1 + 48) )
              *(_QWORD *)(a1 + 48) = v14;
          }
          if ( v29 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v29);
          }
          qfree(v31);
        }
      }
    }
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  while ( 1 )
  {
    if ( *((_QWORD *)v17 + 2) != v5 )
      goto LABEL_21;
    v19 = *v17;
    if ( (_BYTE)v19 != 4 )
      break;
    v12 = sub_11E3F0((__int64)v17, a1, nullptr, 0);
    if ( v12 )
      return v12;
LABEL_21:
    v17 += 80;
    if ( v18 == v17 )
    {
      v13 = *((_QWORD **)a2 + 1);
      goto LABEL_15;
    }
    v5 = *(_QWORD *)(a1 + 56);
  }
  if ( (v19 & 0xFB) != 1 )
  {
    if ( (unsigned __int8)v19 > 0xFu )
      goto LABEL_21;
    v20 = 33344;
    if ( !_bittest64(&v20, v19) )
      goto LABEL_21;
  }
  v21 = *(_QWORD *)(a1 + 16);
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  sub_127A20(v21, &v31, (__int64)v17, 0);
  v22 = *(_QWORD **)(a1 + 64);
  if ( !(unsigned __int8)sub_64180(&v31, v22) && !(unsigned __int8)sub_318830(&v33, v22 + 2) )
  {
    v23 = v33;
    if ( !v33 )
      goto LABEL_33;
LABEL_32:
    *(_QWORD *)&v34 = 0;
    qfree(v23);
    goto LABEL_33;
  }
  v23 = v33;
  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( !*(_QWORD *)(a1 + 48) )
    {
      *(_QWORD *)(a1 + 48) = v17;
      if ( !v23 )
        goto LABEL_33;
      goto LABEL_32;
    }
    if ( v33 )
      goto LABEL_32;
LABEL_33:
    qfree(v31);
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 48) = v17;
  if ( v23 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v23);
  }
LABEL_58:
  qfree(v31);
  return 1;
}
