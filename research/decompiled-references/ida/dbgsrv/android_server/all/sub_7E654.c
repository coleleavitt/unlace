/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E654
// Address: 0x000000000007E654

//----- (000000000007E654) ----------------------------------------------------
__int64 __fastcall sub_7E654(__int64 a1, char *s)
{
  size_t v4; // x0
  size_t v5; // x21
  char *v6; // x23
  size_t v7; // x24
  pthread_mutex_t *v8; // x21
  __int64 **v9; // x0
  int v10; // w2
  int v11; // w3
  int v12; // w4
  int v13; // w5
  int v14; // w6
  int v15; // w7
  __int64 v16; // x8
  __int64 align; // x0
  __int64 v18; // x8
  char v20[8]; // [xsp+0h] [xbp-60h] BYREF
  int v21[2]; // [xsp+8h] [xbp-58h]
  void *ptr; // [xsp+10h] [xbp-50h]
  __int64 v23; // [xsp+18h] [xbp-48h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)v20 = 0;
  *(_QWORD *)v21 = 0;
  ptr = nullptr;
  v4 = strlen(s);
  if ( v4 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_86648();
  v5 = v4;
  if ( v4 >= 0x17 )
  {
    v7 = (v4 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v6 = (char *)operator new(v7);
    *(_QWORD *)v21 = v5;
    ptr = v6;
    *(_QWORD *)v20 = v7 | 1;
    goto LABEL_6;
  }
  v6 = &v20[1];
  v20[0] = 2 * v4;
  if ( v4 )
LABEL_6:
    memcpy(v6, s, v5);
  v6[v5] = 0;
  v8 = (pthread_mutex_t *)sub_7E7D0(a1 + 632, (unsigned __int8 *)v20);
  if ( (v20[0] & 1) != 0 )
    operator delete(ptr);
  v9 = sub_7DB0C(a1, s);
  if ( v9 )
  {
    sub_7EADC(v8, (__int64)v9, v10, v11, v12, v13, v14, v15, v20[0], v21[0], ptr);
  }
  else
  {
    v16 = *(&v8->__align + 1);
    if ( *(&v8->__align + 2) >= (unsigned __int64)(v16 + 1) )
    {
      align = v8->__align;
    }
    else
    {
      align = (__int64)qvector_reserve(v8, (void *)v8->__align, v16 + 1, 0x20u);
      v16 = *(&v8->__align + 1);
      v8->__align = align;
    }
    v18 = align + 32 * v16;
    *(_QWORD *)v18 = 0;
    *(_QWORD *)(v18 + 8) = 0;
    *(_WORD *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 16) = 0;
    ++*(&v8->__align + 1);
  }
  return 0;
}
// 7E728: variable 'v10' is possibly undefined
// 7E728: variable 'v11' is possibly undefined
// 7E728: variable 'v12' is possibly undefined
// 7E728: variable 'v13' is possibly undefined
// 7E728: variable 'v14' is possibly undefined
// 7E728: variable 'v15' is possibly undefined
