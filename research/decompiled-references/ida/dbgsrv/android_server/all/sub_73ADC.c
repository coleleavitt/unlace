/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73ADC
// Address: 0x0000000000073ADC

//----- (0000000000073ADC) ----------------------------------------------------
__int64 __fastcall sub_73ADC(__int64 a1, unsigned __int8 **a2)
{
  __int64 v4; // x20
  __int64 v5; // x23
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x1
  char v10; // w19
  void *v11; // x0
  __int64 v12; // x8
  __int64 v13; // x9
  unsigned __int8 *v14; // x20
  void *v15; // x24
  __int64 v16; // x8
  int v17; // w21
  pthread_mutex_t *v18; // x0
  _DWORD *align; // x0
  void **v20; // x21
  __int64 v21; // x8
  char *v22; // x0
  char *v23; // x0
  char *v24; // x1
  __int64 v25; // x8
  char *v26; // x0
  char *v27; // x0
  void *v29; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v30; // [xsp+8h] [xbp-98h]
  __int64 v31; // [xsp+10h] [xbp-90h]
  unsigned __int8 v32[8]; // [xsp+18h] [xbp-88h] BYREF
  void *ptr[3]; // [xsp+20h] [xbp-80h] BYREF
  unsigned __int8 v34[8]; // [xsp+38h] [xbp-68h] BYREF
  void *v35; // [xsp+40h] [xbp-60h]
  __int64 v36; // [xsp+48h] [xbp-58h]
  __int64 v37; // [xsp+50h] [xbp-50h]
  __int64 v38; // [xsp+58h] [xbp-48h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v30 = 0;
  v31 = 0;
  v29 = nullptr;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32) - 1LL;
  if ( !(unsigned int)idcv_string(v4 + 32 * v5) )
  {
    v6 = v4 + 32 * v5;
    v29 = *(void **)(v6 + 8);
    v30 = *(_QWORD *)(v6 + 16);
    v31 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    sub_731E8(a1);
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 32) - 1LL;
    if ( *(_BYTE *)(v7 + 32 * v8) == 5 )
    {
      v9 = *(_QWORD *)(v7 + 32 * v8 + 8);
      if ( v9 )
      {
        v10 = sub_73EF8(a1, v9, (__int64)&v29, a2);
        v11 = v29;
        if ( !v29 )
          return v10 & 1;
        goto LABEL_35;
      }
    }
    else
    {
      set_qerrno(0x5FCu);
    }
  }
  v12 = *(_QWORD *)(a1 + 24);
  v13 = *(_QWORD *)(a1 + 32) - 1LL;
  if ( *(_BYTE *)(v12 + 32 * v13) != 2 || dword_164A80 < 1 )
  {
    sub_71E4C(a1);
    v10 = 0;
    v11 = v29;
    if ( !v29 )
      return v10 & 1;
    goto LABEL_35;
  }
  v14 = *a2;
  v15 = *(void **)(v12 + 32 * v13 + 8);
  *a2 = nullptr;
  v16 = *(_QWORD *)(a1 + 80);
  v17 = *(_DWORD *)(a1 + 32);
  v18 = (pthread_mutex_t *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v16 + 1) )
  {
    align = (_DWORD *)v18->__align;
  }
  else
  {
    align = qvector_reserve(v18, (void *)v18->__align, v16 + 1, 4u);
    v16 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 72) = align;
  }
  align[v16] = v17;
  v20 = (void **)(a1 + 24);
  ++*(_QWORD *)(a1 + 80);
  v34[0] = 2;
  v36 = 0;
  v37 = 0;
  v35 = v15;
  v21 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v21 + 1) )
  {
    v22 = (char *)*v20;
  }
  else
  {
    v22 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 24), *v20, v21 + 1, 0x20u);
    v21 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v22;
  }
  v23 = &v22[32 * v21];
  *v23 = 2;
  *((_QWORD *)v23 + 1) = 0;
  *((_QWORD *)v23 + 2) = 0;
  *((_QWORD *)v23 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v23, v34);
  if ( v30 )
    v24 = (char *)v29;
  else
    v24 = &byte_F154B;
  v32[0] = 7;
  sub_39140(ptr, v24);
  v25 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v25 + 1) )
  {
    v26 = (char *)*v20;
  }
  else
  {
    v26 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 24), *v20, v25 + 1, 0x20u);
    v25 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v26;
  }
  v27 = &v26[32 * v25];
  *v27 = 2;
  *((_QWORD *)v27 + 1) = 0;
  *((_QWORD *)v27 + 2) = 0;
  *((_QWORD *)v27 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v27, v32);
  v10 = sub_73704((_QWORD *)a1, (__int64)v14, 0, -dword_164A80);
  if ( v32[0] == 5 )
  {
    sub_6F17C((__int64)ptr[0], v32);
  }
  else if ( v32[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  if ( v34[0] == 5 )
  {
    sub_6F17C((__int64)v35, v34);
  }
  else if ( v34[0] == 7 && v35 )
  {
    v36 = 0;
    qfree(v35);
    v35 = nullptr;
    v37 = 0;
    v11 = v29;
    if ( !v29 )
      return v10 & 1;
    goto LABEL_35;
  }
  v11 = v29;
  if ( v29 )
  {
LABEL_35:
    v30 = 0;
    qfree(v11);
    v29 = nullptr;
    v31 = 0;
  }
  return v10 & 1;
}
// 71E4C: using guessed type __int64 __fastcall sub_71E4C(_QWORD);
// F154B: using guessed type char byte_F154B;
// 164A80: using guessed type int dword_164A80;
