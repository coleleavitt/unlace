/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_732B0
// Address: 0x00000000000732B0

//----- (00000000000732B0) ----------------------------------------------------
__int64 __fastcall sub_732B0(__int64 a1, _DWORD *a2, unsigned int a3, __int64 a4, unsigned __int8 *a5, char a6)
{
  __int64 v12; // x8
  unsigned __int64 v13; // x9
  int v14; // w25
  pthread_mutex_t *v15; // x0
  _DWORD *align; // x0
  char v17; // w19
  __int64 v18; // x8
  void **v19; // x23
  char *v20; // x0
  char *v21; // x0
  size_t v22; // x25
  __int64 v23; // x8
  char *v24; // x0
  char *v25; // x0
  char v26; // w0
  unsigned __int8 v28[8]; // [xsp+8h] [xbp-B8h] BYREF
  void *ptr; // [xsp+10h] [xbp-B0h]
  __int64 v30; // [xsp+18h] [xbp-A8h]
  __int64 v31; // [xsp+20h] [xbp-A0h]
  unsigned __int8 v32[8]; // [xsp+28h] [xbp-98h] BYREF
  void *v33; // [xsp+30h] [xbp-90h]
  size_t v34; // [xsp+38h] [xbp-88h]
  size_t v35; // [xsp+40h] [xbp-80h]
  unsigned __int8 v36[8]; // [xsp+48h] [xbp-78h] BYREF
  void *v37; // [xsp+50h] [xbp-70h]
  __int64 v38; // [xsp+58h] [xbp-68h]
  __int64 v39; // [xsp+60h] [xbp-60h]
  __int64 v40; // [xsp+68h] [xbp-58h]

  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a3 & 0x80000000) != 0 )
  {
    if ( a3 == -1 || qword_164A28 <= (unsigned __int64)-a3 )
      goto LABEL_8;
  }
  else if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= (unsigned __int64)(int)a3 )
  {
LABEL_8:
    set_error_string(nullptr, "?");
    set_qerrno(0x58u);
    sub_71E4C(a1);
    v17 = 0;
    return v17 & 1;
  }
  v12 = *(_QWORD *)(a1 + 80);
  v13 = *(_QWORD *)(a1 + 88);
  v14 = *(_DWORD *)(a1 + 32);
  v15 = (pthread_mutex_t *)(a1 + 72);
  if ( v13 >= v12 + 1 )
  {
    align = (_DWORD *)v15->__align;
  }
  else
  {
    align = qvector_reserve(v15, *(void **)(a1 + 72), v12 + 1, 4u);
    v12 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 72) = align;
  }
  align[v12] = v14;
  ++*(_QWORD *)(a1 + 80);
  v38 = 0;
  v39 = 0;
  v36[0] = 5;
  v37 = a2;
  ++a2[6];
  v18 = *(_QWORD *)(a1 + 32);
  v19 = (void **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v18 + 1) )
  {
    v20 = (char *)*v19;
  }
  else
  {
    v20 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 24), *v19, v18 + 1, 0x20u);
    v18 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v20;
  }
  v21 = &v20[32 * v18];
  *v21 = 2;
  *((_QWORD *)v21 + 1) = 0;
  *((_QWORD *)v21 + 2) = 0;
  *((_QWORD *)v21 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v21, v36);
  v32[0] = 7;
  v34 = 0;
  v35 = 0;
  v33 = nullptr;
  v22 = *(_QWORD *)(a4 + 8);
  if ( v22 )
  {
    v33 = qalloc_or_throw(*(_QWORD *)(a4 + 8));
    v35 = v22;
    memcpy(v33, *(const void **)a4, v22);
    v34 = v22;
  }
  v23 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v23 + 1) )
  {
    v24 = (char *)*v19;
  }
  else
  {
    v24 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 24), *v19, v23 + 1, 0x20u);
    v23 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v24;
  }
  v25 = &v24[32 * v23];
  *v25 = 2;
  *((_QWORD *)v25 + 1) = 0;
  *((_QWORD *)v25 + 2) = 0;
  *((_QWORD *)v25 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v25, v32);
  if ( (a6 & 1) != 0 )
  {
    v26 = sub_73704((_QWORD *)a1, (__int64)a5, 0, a3);
  }
  else
  {
    v28[0] = 2;
    v30 = 0;
    v31 = 0;
    ptr = nullptr;
    copy_idcv(v28, a5);
    sub_65CA4((pthread_mutex_t *)(a1 + 24), v28);
    if ( v28[0] == 5 )
    {
      sub_6F17C((__int64)ptr, v28);
    }
    else if ( v28[0] == 7 && ptr )
    {
      v30 = 0;
      qfree(ptr);
      ptr = nullptr;
      v31 = 0;
    }
    v26 = sub_73704((_QWORD *)a1, 0, 0, a3);
  }
  v17 = v26;
  if ( v32[0] == 5 )
  {
    sub_6F17C((__int64)v33, v32);
  }
  else if ( v32[0] == 7 && v33 )
  {
    v34 = 0;
    qfree(v33);
    v33 = nullptr;
    v35 = 0;
  }
  if ( v36[0] == 5 )
  {
    sub_6F17C((__int64)v37, v36);
  }
  else if ( v36[0] == 7 && v37 )
  {
    v38 = 0;
    qfree(v37);
    v37 = nullptr;
    v39 = 0;
  }
  return v17 & 1;
}
// 71E4C: using guessed type __int64 __fastcall sub_71E4C(_QWORD);
// 164A28: using guessed type __int64 qword_164A28;
