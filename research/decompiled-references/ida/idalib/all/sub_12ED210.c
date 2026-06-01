void __fastcall sub_12ED210(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 *v4; // r15
  __int64 *v6; // rsi
  _QWORD *v7; // rdi
  char v8; // al
  char *v9; // rbp
  char *v10; // r13
  char *v11; // rdi
  bool v12; // zf
  __m128i v13; // xmm0
  __int64 v14; // rbx
  __int64 i; // rbp
  __int64 v16; // rbx
  void *v17; // rdi
  __int64 v18; // r13
  void *v19; // rdi
  _QWORD *v20; // rax
  __m128i v21; // [rsp+0h] [rbp-B8h] BYREF
  char v22; // [rsp+1Fh] [rbp-99h] BYREF
  _QWORD *v23; // [rsp+20h] [rbp-98h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-90h] BYREF
  _QWORD *v25[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v26; // [rsp+50h] [rbp-68h]

  v3 = a1 + 344;
  v4 = *(__int64 **)(a1 + 344);
  if ( (__int64 *)(a1 + 344) == v4 )
    goto LABEL_21;
  v21.m128i_i64[0] = (__int64)&v23;
  v21.m128i_i64[1] = (__int64)&v22;
  do
  {
    while ( 1 )
    {
      v8 = *((_BYTE *)v4 + 96);
      if ( a2 )
        break;
      if ( v8 )
      {
        v6 = v4 + 6;
        if ( v4[8] )
        {
          v26 = 260;
          v25[0] = v4 + 2;
          sub_22905D0(&v24, v6, v25);
          if ( !v24 )
            goto LABEL_8;
          sub_FC70B0((__int64)v25, *(_QWORD *)(a1 + 32), 0, 79);
          sub_AEC220((unsigned __int8 **)v25, (_BYTE *)v4[7], v4[8]);
          sub_AEC220((unsigned __int8 **)v25, (_BYTE *)v4[2], v4[3]);
          sub_FC6B40((unsigned __int8 **)v25, (__int64 *)&v24);
          sub_AEA040((__int64)v25);
          v26 = 260;
          v25[0] = v4 + 7;
          sub_228BF70(v25, 1);
          v7 = v24;
          if ( !v24 )
            goto LABEL_8;
        }
        else
        {
          sub_2290280(v21.m128i_i64[0], v6);
          v20 = v23;
          v23 = nullptr;
          v24 = v20;
          sub_A05760(v25, &v24);
          if ( v24 )
            (*(void (__fastcall **)(_QWORD *))(*v24 + 8LL))(v24);
          v7 = v23;
          if ( !v23 )
            goto LABEL_8;
        }
        (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      }
LABEL_8:
      v4 = (__int64 *)*v4;
      if ( (__int64 *)v3 == v4 )
        goto LABEL_13;
    }
    if ( v8 )
    {
      sub_2290280(v25, v4 + 6);
      sub_A0E8E0(v25);
      if ( v25[0] )
        (*(void (__fastcall **)(_QWORD *))(*v25[0] + 8LL))(v25[0]);
    }
    if ( !v4[3] )
      goto LABEL_8;
    v26 = 260;
    v25[0] = v4 + 2;
    sub_228BF70(v25, 1);
    v4 = (__int64 *)*v4;
  }
  while ( (__int64 *)v3 != v4 );
LABEL_13:
  v9 = *(char **)(a1 + 344);
  if ( v9 != (char *)v3 )
  {
    while ( 1 )
    {
      v10 = *(char **)v9;
      if ( v9[96] )
        sub_228DAE0(v9 + 48);
      v11 = *((char **)v9 + 2);
      if ( v11 == v9 + 32 )
      {
        operator delete(v9);
        if ( (char *)v3 == v10 )
          break;
      }
      else
      {
        operator delete(v11);
        operator delete(v9);
        if ( (char *)v3 == v10 )
          break;
      }
      v9 = v10;
    }
  }
LABEL_21:
  v12 = *(_BYTE *)(a1 + 304) == 0;
  v21.m128i_i64[0] = v3;
  v13 = _mm_loadl_epi64(&v21);
  *(_QWORD *)(a1 + 360) = 0;
  *(__m128i *)(a1 + 344) = _mm_unpacklo_epi64(v13, v13);
  if ( !v12 )
  {
    v14 = *(_QWORD *)(a1 + 280);
    for ( i = a1 + 264; i != v14; v14 = std::_Rb_tree_increment(v14, (_BYTE *)&dword_0 + 1) )
    {
      v26 = 260;
      v25[0] = (_QWORD *)(v14 + 64);
      sub_228BF70(v25, 1);
    }
    v16 = *(_QWORD *)(a1 + 272);
    if ( v16 )
    {
      while ( 1 )
      {
        sub_12DC6A0(a1 + 256, *(_QWORD **)(v16 + 24));
        v17 = *(void **)(v16 + 64);
        v18 = *(_QWORD *)(v16 + 16);
        if ( v17 != (void *)(v16 + 80) )
          operator delete(v17);
        v19 = *(void **)(v16 + 32);
        if ( v19 == (void *)(v16 + 48) )
        {
          operator delete((void *)v16);
          if ( !v18 )
            break;
        }
        else
        {
          operator delete(v19);
          operator delete((void *)v16);
          if ( !v18 )
            break;
        }
        v16 = v18;
      }
    }
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 280) = i;
    *(_QWORD *)(a1 + 288) = i;
    *(_QWORD *)(a1 + 296) = 0;
  }
}
