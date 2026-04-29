__int64 __fastcall sub_178230(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5, unsigned int a6)
{
  __int64 v7; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  void *v21; // rax
  const void *v22; // rsi
  __int64 n; // [rsp+0h] [rbp-80h]
  __int64 v24; // [rsp+8h] [rbp-78h]
  __int64 v27; // [rsp+18h] [rbp-68h]
  __int64 v28[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  __int128 v30; // [rsp+38h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 64);
  if ( a6 >= *(_DWORD *)(v7 + 64) )
    sub_1733C0();
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * a6);
  if ( a2 )
  {
    sub_64000(v28, (__int64)a3);
    v11 = a3[3];
    v29 = 0;
    v30 = 0;
    v27 = v11;
    if ( v11 )
    {
      n = 16 * v11;
      v21 = (void *)qalloc_or_throw(16 * v11, (__int64)a3, 16 * v11, v10);
      v22 = (const void *)a3[2];
      v29 = (__int64)v21;
      *((_QWORD *)&v30 + 1) = v27;
      memcpy(v21, v22, n);
      *(_QWORD *)&v30 = v27;
    }
    if ( sub_A9D90(a1, v28, a2, 0, 1u) )
    {
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree(v29);
      }
      goto LABEL_8;
    }
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29);
    }
    qfree(v28[0]);
  }
  v13 = (_QWORD *)*a4;
  if ( !*a4 )
    return 1;
  if ( !a4[1] )
    return 1;
  v14 = v13[1];
  if ( v13 == (_QWORD *)v14 )
    return 1;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    v28[0] = 0;
    v28[1] = 0;
    v29 = 0;
    v30 = 0;
    sub_103D60(v14 + 24, v15, (__int64)v28);
    if ( !(unsigned __int8)sub_64780(v28, a3) && !(unsigned __int8)sub_318470(&v29, a3 + 2) )
      goto LABEL_20;
    v16 = *(_QWORD *)(v14 + 32);
    if ( v16 > 1 )
      goto LABEL_30;
    if ( v16 )
      break;
    if ( (*(_BYTE *)(a1 + 25) & 2) == 0 )
      goto LABEL_30;
LABEL_20:
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29);
    }
    qfree(v28[0]);
    if ( (*(_QWORD *)v14 & 2) != 0 )
      goto LABEL_25;
    v17 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
      v18 = (_QWORD *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL);
      v19 = *v18;
      if ( (*v18 & 2) == 0 && v18[2] == v14 )
      {
        do
        {
          v14 = v19 & 0xFFFFFFFFFFFFFFFCLL;
          v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v19 & 2) != 0 )
            goto LABEL_25;
          v20 = v18;
          v18 = (_QWORD *)v14;
        }
        while ( *(_QWORD **)(v14 + 16) == v20 );
      }
      v14 = (unsigned __int64)v18;
      if ( (_QWORD *)*a4 == v18 )
        return 1;
    }
    else
    {
      do
      {
        v14 = v17;
        v17 = *(_QWORD *)(v17 + 8);
      }
      while ( (*(_BYTE *)v17 & 2) == 0 );
LABEL_25:
      if ( *a4 == v14 )
        return 1;
    }
  }
  if ( **(_DWORD **)(v14 + 24) == a6 && (unsigned __int8)sub_1778B0(v24, v28, *(_QWORD *)(v24 + 48), 0, 0, nullptr, a5) )
    goto LABEL_20;
LABEL_30:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
LABEL_8:
  qfree(v28[0]);
  return 0;
}
