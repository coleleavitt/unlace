__int64 __fastcall sub_2050780(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  _QWORD *v9; // rbx
  _QWORD *v10; // r10
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // r13
  __int64 v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // r14
  _BYTE *v20; // r15
  _BYTE *v21; // r15
  _BYTE *v22; // r15
  _BYTE *v23; // r15
  int v24; // edx
  _BYTE *v25; // r14
  _BYTE *v26; // r14
  _BYTE *v27; // r14
  unsigned __int128 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  size_t v30; // [rsp+28h] [rbp-40h]

  if ( !a5 )
    return a2;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = a4;
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 8) - 17 > 1 )
  {
    v10 = &a4[a5];
    if ( a4 != v10 )
    {
      v11 = *(_QWORD *)(*a4 + 8LL);
      v12 = *(unsigned __int8 *)(v11 + 8);
      if ( (unsigned int)(v12 - 17) > 1 )
      {
        v14 = a4;
        while ( v10 != ++v14 )
        {
          v11 = *(_QWORD *)(*v14 + 8LL);
          v12 = *(unsigned __int8 *)(v11 + 8);
          a6 = (unsigned int)(v12 - 17);
          if ( (unsigned int)a6 <= 1 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        v29 = a5;
        BYTE4(v30) = (_BYTE)v12 == 18;
        LODWORD(v30) = *(_DWORD *)(v11 + 32);
        v28 = __PAIR128__((unsigned __int64)a4, a3);
        v13 = sub_20C5270(v8, v30, a3, a4, a5, a6);
        a4 = *((_QWORD **)&v28 + 1);
        a3 = v28;
        v8 = v13;
        a5 = v29;
      }
    }
  }
  if ( *(_BYTE *)a2 == 1 )
    return sub_2058290(v8);
  if ( *(_BYTE *)a2 <= 1u )
    return sub_2057E60(v8);
  if ( *(_BYTE *)(a3 + 32) )
    return 0;
  v15 = 8 * a5;
  v16 = &a4[a5];
  v17 = (8 * a5) >> 5;
  v18 = v15 >> 3;
  if ( v17 > 0 )
  {
    v19 = &a4[4 * v17];
    while ( 1 )
    {
      v23 = (_BYTE *)*v9;
      if ( !(unsigned __int8)sub_20510E0(*v9) && *v23 > 1u )
        goto LABEL_26;
      v20 = (_BYTE *)v9[1];
      if ( !(unsigned __int8)sub_20510E0(v20) && *v20 > 1u )
      {
        ++v9;
        goto LABEL_26;
      }
      v21 = (_BYTE *)v9[2];
      if ( !(unsigned __int8)sub_20510E0(v21) && *v21 > 1u )
      {
        v9 += 2;
        goto LABEL_26;
      }
      v22 = (_BYTE *)v9[3];
      if ( !(unsigned __int8)sub_20510E0(v22) && *v22 > 1u )
      {
        v9 += 3;
        goto LABEL_26;
      }
      v9 += 4;
      if ( v19 == v9 )
      {
        v18 = v16 - v9;
        break;
      }
    }
  }
  switch ( v18 )
  {
    case 2LL:
      goto LABEL_45;
    case 3LL:
      v26 = (_BYTE *)*v9;
      if ( !(unsigned __int8)sub_20510E0(*v9) && *v26 > 1u )
        goto LABEL_26;
      ++v9;
LABEL_45:
      v27 = (_BYTE *)*v9;
      if ( !(unsigned __int8)sub_20510E0(*v9) && *v27 > 1u )
        goto LABEL_26;
      ++v9;
      goto LABEL_39;
    case 1LL:
LABEL_39:
      v25 = (_BYTE *)*v9;
      if ( (unsigned __int8)sub_20510E0(*v9) || *v25 <= 1u )
        break;
LABEL_26:
      if ( v16 == v9 )
        break;
      return 0;
  }
  v24 = *(unsigned __int8 *)(v8 + 8);
  if ( (unsigned int)(v24 - 17) > 1 || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 8LL) - 17 <= 1 )
    return a2;
  BYTE4(v30) = (_BYTE)v24 == 18;
  LODWORD(v30) = *(_DWORD *)(v8 + 32);
  return sub_205EF10(v30);
}
