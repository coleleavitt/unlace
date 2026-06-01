/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DD30
// Address: 0x000000000007DD30

//----- (000000000007DD30) ----------------------------------------------------
__int64 __fastcall sub_7DD30(__int64 a1, char *s, _BYTE *a3, unsigned int a4, char a5, bool *a6)
{
  void *v12; // x25
  __int64 v13; // x24
  __int64 v14; // x29
  size_t v15; // x0
  size_t v16; // x25
  char *v17; // x26
  size_t v19; // x27
  pthread_mutex_t *v20; // x23
  char v21; // w25
  bool v22; // w26
  size_t v23; // x0
  unsigned __int64 v24; // x24
  size_t v25; // x22
  void *align; // x0
  __int64 v27; // [xsp+0h] [xbp-80h] BYREF
  size_t v28; // [xsp+8h] [xbp-78h]
  void *ptr; // [xsp+10h] [xbp-70h]
  __int64 v30; // [xsp+18h] [xbp-68h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 672) )
  {
    *(_BYTE *)(a1 + 672) = 0;
    v12 = operator new(0x28u);
    sub_7DF50((__int64)v12, *(_QWORD *)(a1 + 624));
    *(_QWORD *)(a1 + 624) = v12;
  }
  if ( !s || a4 > 0x7F || !*s )
    return set_qerrno(0x26u);
  v13 = *(_QWORD *)(a1 + 624);
  v14 = *(_QWORD *)(v13 + 24);
  v27 = 0;
  v28 = 0;
  ptr = nullptr;
  v15 = strlen(s);
  if ( v15 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_86648();
  v16 = v15;
  if ( v15 >= 0x17 )
  {
    v19 = (v15 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v17 = (char *)operator new(v19);
    v28 = v16;
    ptr = v17;
    v27 = v19 | 1;
  }
  else
  {
    v17 = (char *)&v27 + 1;
    LOBYTE(v27) = 2 * v15;
    if ( !v15 )
      goto LABEL_13;
  }
  memcpy(v17, s, v16);
LABEL_13:
  v17[v16] = 0;
  v20 = (pthread_mutex_t *)sub_7E30C(v13, (unsigned __int8 *)&v27);
  v21 = a5 & 1;
  if ( (v27 & 1) != 0 )
    operator delete(ptr);
  v22 = *(_QWORD *)(v13 + 24) != v14;
  if ( a3 && *a3 && (v23 = strlen(a3)) != 0 )
  {
    v24 = v23 + 1;
    v25 = v23;
    if ( *(&v20->__align + 2) >= v23 + 1 )
    {
      align = (void *)v20->__align;
    }
    else
    {
      align = qvector_reserve(v20, (void *)v20->__align, v24, 1u);
      v20->__align = (__int64)align;
    }
    *(&v20->__align + 1) = v24;
    memmove(align, a3, v25);
    *(_BYTE *)(v20->__align + v25) = 0;
  }
  else
  {
    *(&v20->__align + 1) = 0;
  }
  v20->__size[24] = a4;
  v20->__size[25] = v21;
  if ( a6 )
    *a6 = v22;
  return 0;
}
