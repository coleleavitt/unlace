unsigned __int64 __fastcall sub_88260(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  const char *v21; // rax
  int v22; // eax
  _QWORD *v23; // rcx
  int v24; // edx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rbp
  _QWORD *v27; // rsi
  __int64 v28; // r9
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  _QWORD *v31; // rax
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v36; // [rsp+8h] [rbp-D0h]
  __int64 v39; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+40h] [rbp-98h] BYREF
  __int64 v41; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 *v44; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 *v45; // [rsp+68h] [rbp-70h] BYREF
  __int64 v46; // [rsp+70h] [rbp-68h] BYREF
  __int64 v47; // [rsp+78h] [rbp-60h] BYREF
  __int128 v48; // [rsp+80h] [rbp-58h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 160);
  v46 = a2;
  v39 = 0;
  v40 = 0;
  v47 = 0;
  v48 = 0;
  v36 = v8;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 256LL);
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v9 + 32))(a3, &v39, &v40) )
  {
    v10 = v39;
    while ( 1 )
    {
      v11 = v48;
      v12 = v47;
      v13 = v48 + 1;
      if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
      {
        v47 = qvector_reserve(&v47, v47, v13, 16);
        v12 = v47;
        v11 = v48;
        v13 = v48 + 1;
      }
      v14 = (_QWORD *)(16 * v11 + v12);
      *(_QWORD *)&v48 = v13;
      *v14 = v10;
      v14[1] = 8;
      sub_88260(a1, a2, v39, a4, a5, a6);
      v41 = 0;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64 *, __int64 *))(v9 + 24))(
             v36,
             v39,
             a4,
             &v41,
             &v40) )
      {
        goto LABEL_30;
      }
      if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64 *))(v9 + 104))(v41, &v42) )
        break;
LABEL_25:
      v10 = v41;
      v39 = v41;
    }
    if ( !*(_QWORD *)(a1 + 128) )
    {
      v33 = operator new(0x30u);
      *(_DWORD *)(v33 + 8) = 0;
      *(_QWORD *)(v33 + 16) = 0;
      *(_QWORD *)(v33 + 24) = v33 + 8;
      *(_QWORD *)(v33 + 32) = v33 + 8;
      *(_QWORD *)(v33 + 40) = 0;
      *(_QWORD *)(a1 + 128) = v33;
    }
    v15 = v48;
    v16 = v41;
    v17 = v47;
    v18 = v48 + 1;
    if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
    {
      v47 = qvector_reserve(&v47, v47, v18, 16);
      v17 = v47;
      v15 = v48;
      v18 = v48 + 1;
    }
    *(_QWORD *)&v48 = v18;
    v19 = (_QWORD *)(16 * v15 + v17);
    *v19 = v16;
    v20 = v39;
    v19[1] = 8;
    v45 = nullptr;
    if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 **))(v9 + 64))(v20, &v43, &v45) )
    {
      v21 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64 *))(v9 + 464))(v45);
      sub_1D740((__int64)"ERROR: %s\n", v21);
    }
    if ( v42 < a5 || v42 >= a6 )
    {
      v23 = *(_QWORD **)(a1 + 128);
LABEL_32:
      v34 = (_QWORD *)v23[2];
      if ( v34 )
      {
        v31 = v23 + 1;
        do
        {
          if ( v34[4] >= v43 )
          {
            v31 = v34;
            v34 = (_QWORD *)v34[2];
          }
          else
          {
            v34 = (_QWORD *)v34[3];
          }
        }
        while ( v34 );
        if ( v31 == v23 + 1 || v43 < v31[4] )
        {
LABEL_28:
          v45 = &v43;
          v31 = sub_7F740(v23, v31, &v45);
        }
        v31[5] = 0;
        goto LABEL_30;
      }
      v31 = v23 + 1;
      goto LABEL_28;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *, __int64 *))(v9 + 40))(
            v36,
            v42,
            a4,
            &v41,
            &v40);
    v23 = *(_QWORD **)(a1 + 128);
    v24 = v22;
    v25 = (_QWORD *)v23[2];
    if ( v24 )
      goto LABEL_32;
    v26 = v42;
    if ( v25 )
    {
      v27 = v23 + 1;
      do
      {
        while ( 1 )
        {
          v28 = v25[2];
          v29 = v25[3];
          if ( v25[4] < v43 )
            break;
          v27 = v25;
          v25 = (_QWORD *)v25[2];
          if ( !v28 )
            goto LABEL_21;
        }
        v25 = (_QWORD *)v25[3];
      }
      while ( v29 );
LABEL_21:
      if ( v27 != v23 + 1 && v43 >= v27[4] )
        goto LABEL_24;
    }
    else
    {
      v27 = v23 + 1;
    }
    v30 = *(_QWORD **)(a1 + 128);
    v44 = &v43;
    v27 = sub_7F740(v30, v27, &v44);
LABEL_24:
    v27[5] = v26;
    goto LABEL_25;
  }
LABEL_30:
  sub_84510((__int64)&v46);
  return v49 - __readfsqword(0x28u);
}
