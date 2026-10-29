/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043A58
// Address: 0x0000000100043A58

//----- (0000000100043A58) ----------------------------------------------------
__int64 __fastcall sub_100043A58(__int64 a1, int16x4_t *a2)
{
  __int64 v2; // x21
  char v5; // w25
  _BYTE *i; // x8
  unsigned int v7; // w9
  unsigned __int64 v8; // x8
  __int64 v9; // x8
  int16x4_t v10; // x22
  unsigned int v11; // w9
  void *v12; // x27
  unsigned __int64 v13; // x28
  __int64 v14; // x24
  __int64 v15; // x0
  int v16; // w22
  __int64 v17; // x8
  __int64 v18; // x8
  const void *v19; // x23
  unsigned __int64 v20; // x8
  bool v21; // cc
  size_t v22; // x8
  unsigned __int64 v23; // x2
  void *v24; // x1
  unsigned int v25; // w8
  void *v26; // x8
  size_t v27; // x23
  _QWORD *v28; // x1
  int16x4_t v29; // x8
  bool v30; // cf
  __int64 v31; // x8
  __int64 v32; // x22
  unsigned __int64 v33; // x25
  int16x4_t v34; // x8
  __int64 v35; // x9
  char *v36; // x9
  char *v37; // x8
  int v38; // w0
  __int64 v39; // x0
  __int64 qerrno; // x0
  __int64 v41; // x22
  void *v42; // x0
  unsigned __int64 v44; // [xsp+8h] [xbp-C8h]
  size_t __len; // [xsp+10h] [xbp-C0h]
  size_t __lena[2]; // [xsp+10h] [xbp-C0h]
  void *__dst; // [xsp+38h] [xbp-98h] BYREF
  unsigned __int64 v48; // [xsp+40h] [xbp-90h]
  unsigned __int64 v49; // [xsp+48h] [xbp-88h]
  unsigned __int16 v50; // [xsp+50h] [xbp-80h]
  __int64 v51; // [xsp+58h] [xbp-78h]
  char v52; // [xsp+60h] [xbp-70h]
  __int64 v53; // [xsp+68h] [xbp-68h]
  __int64 v54; // [xsp+70h] [xbp-60h]

  v5 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v48 = 0;
  v49 = 0;
  __dst = nullptr;
  v50 = 0;
LABEL_2:
  while ( 2 )
  {
    for ( i = *(_BYTE **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = i )
    {
      v7 = (unsigned __int8)*i++;
      if ( v7 > 0x1F )
        break;
      if ( v7 - 9 >= 2 )
      {
        if ( !*(i - 1) )
        {
          v8 = *(_QWORD *)(a1 + 64);
          if ( v8 >= 2 )
          {
            v9 = *(_QWORD *)(a1 + 56) + 56 * v8;
            *(_QWORD *)a1 = *(_QWORD *)(v9 - 32);
            *(_QWORD *)(a1 + 8) = *(_QWORD *)(v9 - 24);
            *(_DWORD *)(a1 + 80) = *(_DWORD *)(v9 - 8);
            sub_10003F3C8((__int64 *)(a1 + 56));
            goto LABEL_2;
          }
        }
        goto LABEL_65;
      }
LABEL_4:
      ;
    }
    if ( v7 == 32 )
      goto LABEL_4;
    if ( v7 != 35 || *i != 35 )
      goto LABEL_65;
    v10 = 0;
    v11 = a2[3].u16[0];
    if ( v11 > 8 )
    {
      v12 = nullptr;
      v13 = 0;
    }
    else
    {
      v12 = nullptr;
      v13 = 0;
      if ( ((1 << v11) & 0x188) != 0 )
      {
        v12 = *(void **)(a1 + 32);
        v13 = *(_QWORD *)(a1 + 40);
        v10 = *(int16x4_t *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        *(_QWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 32) = 0;
      }
    }
    v14 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = i + 1;
    v15 = sub_100042C40(a1, (int16x4_t *)&__dst, *(_DWORD *)(a1 + 64), nullptr);
    if ( (_DWORD)v15 )
    {
      v16 = 1;
      v2 = v15;
      if ( !v12 )
        goto LABEL_49;
LABEL_48:
      qfree(v12);
      goto LABEL_49;
    }
    if ( v50 == 1 )
    {
LABEL_47:
      v16 = 3;
      if ( !v12 )
        goto LABEL_49;
      goto LABEL_48;
    }
    if ( v50 == 59 )
    {
      if ( (*(_BYTE *)(a1 + 612) & 8) == 0 )
        goto LABEL_46;
      goto LABEL_28;
    }
    if ( v50 != 47 )
    {
      v19 = *(const void **)(a1 + 24);
      if ( (unsigned int)v50 - 6 < 3 )
        goto LABEL_36;
      if ( v50 == 2 )
        goto LABEL_41;
      if ( v50 == 3 )
      {
LABEL_36:
        if ( !v19 || (v20 = *(_QWORD *)(a1 + 8), v21 = v20 > (unsigned __int64)v19, v22 = v20 - (_QWORD)v19, !v21) )
        {
LABEL_46:
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = v14;
          goto LABEL_47;
        }
        v48 = 0;
        __len = v22;
        v23 = v22 + 1;
        v24 = __dst;
        if ( v49 < v22 + 1 )
        {
          v44 = v22 + 1;
          v24 = qvector_reserve(&__dst, __dst, v23, 1u);
          __dst = v24;
          v23 = v44;
        }
        v48 = v23;
        *((_BYTE *)v24 + __len) = 0;
        memmove(__dst, v19, __len);
      }
      else if ( v50 <= 0x7Fu )
      {
        goto LABEL_46;
      }
LABEL_41:
      v25 = a2[3].u16[0];
      if ( v25 != 2 && v25 <= 0x7F )
      {
        if ( v13 <= 1 )
        {
          v2 = set_qerrno();
          v16 = 1;
          if ( v12 )
            goto LABEL_48;
          goto LABEL_49;
        }
        v26 = (void *)*a2;
        *a2 = (int16x4_t)v12;
        a2[1] = (int16x4_t)v13;
        a2[2] = v10;
        v12 = v26;
      }
      if ( v48 )
        v27 = v48 - 1;
      else
        v27 = 0;
      if ( v48 >= 2 )
      {
        v28 = (_QWORD *)*a2;
        v29 = a2[1];
        v30 = *(_QWORD *)&v29 != 0;
        v31 = *(_QWORD *)&v29 - 1LL;
        if ( v30 )
          v32 = v31;
        else
          v32 = 0;
        v33 = v32 + v27 + 1;
        if ( *(_QWORD *)&a2[2] < v33 )
        {
          v28 = qvector_reserve(a2, v28, v32 + v27 + 1, 1u);
          *a2 = (int16x4_t)v28;
        }
        a2[1] = (int16x4_t)v33;
        *((_BYTE *)v28 + v32 + v27) = 0;
        memcpy((void *)(*(_QWORD *)a2 + v32), __dst, v27);
      }
      v16 = 0;
      *(_QWORD *)(a1 + 16) = v14;
      v5 = 1;
      if ( v12 )
        goto LABEL_48;
      goto LABEL_49;
    }
    if ( a2[3].i16[0] != 47 || (*(_BYTE *)(a1 + 612) & 4) == 0 )
      goto LABEL_46;
LABEL_28:
    while ( 1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( !v18 )
        break;
      v17 = *(_QWORD *)(a1 + 56) + 56 * v18;
      *(_QWORD *)a1 = *(_QWORD *)(v17 - 32);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v17 - 24);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(v17 - 8);
      sub_10003F3C8((__int64 *)(a1 + 56));
    }
    v2 = 0;
    v16 = 1;
    a2[3].i16[0] = 1;
    if ( v12 )
      goto LABEL_48;
LABEL_49:
    if ( !v16 )
      continue;
    break;
  }
  if ( v16 != 3 )
    goto LABEL_85;
LABEL_65:
  if ( (v5 & 1) == 0 )
    goto LABEL_84;
  v34 = a2[1];
  if ( !*(_QWORD *)&v34 )
  {
    v35 = byte_1000A4AEC;
    if ( (byte_1000A4AEC & 0x8000000000000000LL) != 0 )
      goto LABEL_71;
LABEL_70:
    if ( (_DefaultRuneLocale.__runetype[v35] & 0x400) == 0 )
      goto LABEL_71;
LABEL_75:
    if ( v34 )
      v37 = (char *)*a2;
    else
      v37 = &byte_10007AE40;
    *(_OWORD *)__lena = *(_OWORD *)a1;
    v41 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v37;
    *(_QWORD *)(a1 + 8) = v37;
    v2 = sub_100042C40(a1, a2, 0, nullptr);
    *(_OWORD *)a1 = *(_OWORD *)__lena;
    *(_QWORD *)(a1 + 16) = v41;
    if ( (_DWORD)v2 )
      goto LABEL_85;
    goto LABEL_84;
  }
  v35 = **(char **)a2;
  if ( (v35 & 0x8000000000000000LL) == 0 )
    goto LABEL_70;
LABEL_71:
  if ( v34 )
    v36 = (char *)*a2;
  else
    v36 = &byte_1000A4AEC;
  if ( *v36 == 46 )
    goto LABEL_75;
  v38 = sub_10004295C(a1, 1, (void **)a2);
  if ( v38 != -1 )
  {
    if ( v38 == 1 )
    {
      v39 = sub_100042C40(a1, a2, 0, nullptr);
      v2 = v39;
      if ( *(_QWORD *)(a1 + 64) && !(_DWORD)v39 )
      {
        qerrno = sub_100043A58(a1, a2);
        goto LABEL_89;
      }
LABEL_85:
      v42 = __dst;
      if ( !__dst )
        return v2;
LABEL_86:
      v48 = 0;
      qfree(v42);
      return v2;
    }
LABEL_84:
    v2 = 0;
    goto LABEL_85;
  }
  qerrno = get_qerrno();
LABEL_89:
  v2 = qerrno;
  v42 = __dst;
  if ( __dst )
    goto LABEL_86;
  return v2;
}
// 100043F0C: variable 'v2' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A4AEC: using guessed type char byte_1000A4AEC;
