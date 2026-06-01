/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DD3C
// Address: 0x000000000008DD3C

//----- (000000000008DD3C) ----------------------------------------------------
void __fastcall sub_8DD3C(__int64 a1, pthread_mutex_t *a2, unsigned __int64 *a3)
{
  int v5; // w21
  char *v6; // x19
  const char *v7; // x23
  int i; // w29
  double v9; // d0
  const char *v10; // x26
  _BYTE *v11; // x9
  char *v13; // x25
  size_t v14; // x0
  unsigned __int64 v15; // x28
  size_t v16; // x27
  void *v17; // x0
  int v18; // w0
  unsigned __int64 v19; // x1
  unsigned __int8 *v20; // x8
  unsigned __int64 v21; // x26
  int v22; // t1
  unsigned __int64 v23; // x8
  void **v24; // x27
  char *v25; // x0
  unsigned __int64 v26; // x9
  void *v27; // x0
  const void *v28; // x1
  unsigned __int64 v29; // x0
  int v30; // w0
  unsigned int v31; // w21
  pthread_mutex_t *v32; // x0
  pthread_mutex_t *v33; // x0
  char *v34; // x8
  char *v35; // x20
  size_t v36; // x0
  void *ptr; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v39; // [xsp+20h] [xbp-A0h]
  __int64 v40; // [xsp+28h] [xbp-98h]
  unsigned int v41; // [xsp+34h] [xbp-8Ch] BYREF
  void *v42[3]; // [xsp+38h] [xbp-88h] BYREF
  pthread_mutex_t src; // [xsp+50h] [xbp-70h] BYREF

  *(&src.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(v42, 0, sizeof(v42));
  v5 = unpack_dd(a3, a3[1]);
  sub_8E160((__int64)v42, v5);
  if ( v5 < 1 )
    goto LABEL_34;
  v6 = (char *)v42[0];
  v7 = nullptr;
  for ( i = 0; i < v5; ++i )
  {
    v6[424] = 0;
    v7 = &v7[unpack_dq(a3, a3[1]) - 1];
    *(_QWORD *)v6 = v7;
    v10 = (const char *)*a3;
    v11 = (_BYTE *)*a3;
    do
    {
      if ( (unsigned __int64)v11 >= a3[1] )
      {
        v13 = v6 + 8;
LABEL_11:
        *((_QWORD *)v6 + 2) = 0;
        goto LABEL_12;
      }
    }
    while ( *v11++ );
    v13 = v6 + 8;
    *a3 = (unsigned __int64)v11;
    if ( !v10 )
      goto LABEL_11;
    v14 = strlen(v10);
    if ( !v14 )
      goto LABEL_11;
    v15 = v14 + 1;
    v16 = v14;
    if ( *((_QWORD *)v6 + 3) >= v14 + 1 )
    {
      v17 = *(void **)v13;
    }
    else
    {
      v17 = qvector_reserve((pthread_mutex_t *)(v6 + 8), *(void **)v13, v15, 1u);
      *(_QWORD *)v13 = v17;
    }
    *((_QWORD *)v6 + 2) = v15;
    memmove(v17, v10, v16);
    *(_BYTE *)(*((_QWORD *)v6 + 1) + v16) = 0;
LABEL_12:
    if ( *((_QWORD *)v13 + 1) >= 2u )
    {
      *((_DWORD *)v6 + 107) = 0;
      v18 = unpack_dd(a3, a3[1]);
      *((_DWORD *)v6 + 8) = v18;
      if ( v18 != 4 )
        *((_DWORD *)v6 + 107) = unpack_dd(a3, a3[1]);
      v20 = (unsigned __int8 *)*a3;
      v19 = a3[1];
      if ( *a3 < v19 )
      {
        v22 = *v20;
        v21 = *v20;
        *a3 = (unsigned __int64)(v20 + 1);
        if ( v22 )
        {
          v23 = *((_QWORD *)v6 + 6);
          v24 = (void **)(v6 + 40);
          if ( v23 >= v21 )
          {
            if ( v23 != v21 )
            {
              LOBYTE(ptr) = 0;
              sub_5BBF4((pthread_mutex_t *)v6 + 1, v21, (char *)&ptr);
            }
          }
          else
          {
            if ( *((_QWORD *)v6 + 7) >= v21 )
            {
              v25 = (char *)*v24;
            }
            else
            {
              v25 = (char *)qvector_reserve((pthread_mutex_t *)v6 + 1, *v24, v21, 1u);
              v23 = *((_QWORD *)v6 + 6);
              *((_QWORD *)v6 + 5) = v25;
            }
            memset(&v25[v23], 0, v21 - v23);
            *((_QWORD *)v6 + 6) = v21;
          }
          v19 = a3[1];
          v26 = *a3 + v21;
          if ( v26 >= *a3 && v26 <= v19 )
          {
            v27 = *v24;
            v28 = (const void *)*a3;
            *a3 = v26;
            memcpy(v27, v28, v21);
            v19 = a3[1];
          }
        }
      }
      v29 = unpack_dq(a3, v19);
      *((_QWORD *)v6 + 10) = v29 - 1;
      if ( v29 )
        j_deserialize_insn(v6 + 64, a3);
    }
    if ( *(_BYTE *)(a1 + 184) )
      sub_39FA0((__int64)"update_lowcnd(ea=%a cnd=%s)\n", v9, v7);
    v6 += 432;
  }
LABEL_34:
  v39 = 0;
  v40 = 0;
  ptr = nullptr;
  v30 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *, _QWORD, void **))(**(_QWORD **)(a1 + 440) + 352LL))(
          *(_QWORD *)(a1 + 440),
          &v41,
          v42[0],
          (unsigned int)v5,
          &ptr);
  v31 = v30;
  if ( *(_BYTE *)(a1 + 184) )
    sub_39FA0((__int64)"  update_lowcnds => %d\n", v30);
  v32 = pack_dd(&src, (unsigned __int64)&src.__align + 5, v31);
  sub_545E8(a2, &src, (char *)v32 - (char *)&src);
  v33 = pack_dd(&src, (unsigned __int64)&src.__align + 5, v41);
  sub_545E8(a2, &src, (char *)v33 - (char *)&src);
  if ( v31 != 1 )
  {
    if ( v39 )
      v34 = (char *)ptr;
    else
      v34 = &byte_F154B;
    if ( v34 )
      v35 = v34;
    else
      v35 = "";
    v36 = strlen(v35);
    sub_545E8(a2, v35, v36 + 1);
  }
  if ( ptr )
  {
    v39 = 0;
    qfree(ptr);
    ptr = nullptr;
    v40 = 0;
  }
  if ( v42[0] )
  {
    sub_9814C((__int64 *)v42, 0);
    qfree(v42[0]);
  }
}
// 8DF8C: variable 'v9' is possibly undefined
// A09D0: using guessed type __int64 __fastcall j_deserialize_insn(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
