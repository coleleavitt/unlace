unsigned __int64 __fastcall sub_59D1B0(unsigned int *a1, unsigned __int8 *a2, __int64 a3)
{
  int v3; // r12d
  unsigned int v5; // eax
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  char v8; // al
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // al
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // al
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  char v23; // al
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned __int8 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  void *v34; // rdi
  unsigned __int64 v36; // rsi
  int v37; // eax
  char v38; // al
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r12
  char v43; // al
  unsigned __int8 **v44; // rdi
  unsigned __int64 v45; // rsi
  unsigned __int16 v46; // ax
  __int64 v47; // r14
  __int64 v48; // r14
  __int64 v49; // r13
  unsigned int v50; // eax
  bool v51; // zf
  unsigned __int16 v52; // ax
  __int64 v53; // rdx
  __int64 v54; // r14
  __int64 v55; // r14
  __int64 v56; // r13
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int8 *v60; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v61; // [rsp+8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+18h] [rbp-40h]

  v3 = 1;
  v62 = __readfsqword(0x28u);
  v60 = a2;
  v61 = (unsigned __int64)&a2[a3];
  if ( *((char *)a1 + 2) < 0 )
    v3 = a1[20];
  v5 = unpack_dd(&v60);
  v6 = v61;
  *a1 = v5;
  *((_WORD *)a1 + 2) = unpack_dw(&v60, v6);
  v8 = is_cvt64(&v60, v6, v7);
  v9 = v61;
  if ( v8 )
  {
    v10 = (unsigned int)unpack_dd(&v60);
    v11 = -1;
    if ( (unsigned int)v10 == 0xFFFFFFFFLL )
      v10 = -1;
  }
  else
  {
    v10 = unpack_dq(&v60);
  }
  *((_QWORD *)a1 + 1) = v10;
  v12 = is_cvt64(&v60, v9, v11);
  v13 = v61;
  if ( v12 )
  {
    v14 = (unsigned int)unpack_dd(&v60);
    v15 = -1;
    if ( (unsigned int)v14 == 0xFFFFFFFFLL )
      v14 = -1;
  }
  else
  {
    v14 = unpack_dq(&v60);
  }
  *((_QWORD *)a1 + 2) = v14;
  v16 = is_cvt64(&v60, v13, v15);
  v17 = v61;
  if ( v16 )
  {
    v18 = (unsigned int)unpack_dd(&v60);
    v19 = -1;
    if ( (unsigned int)v18 == 0xFFFFFFFFLL )
      v18 = -1;
  }
  else
  {
    v18 = unpack_dq(&v60);
  }
  *((_QWORD *)a1 + 3) = v18;
  if ( (unsigned __int8)is_cvt64(&v60, v17, v19) )
  {
    v20 = (unsigned int)unpack_dd(&v60);
    if ( (unsigned int)v20 == 0xFFFFFFFFLL )
      v20 = -1;
  }
  else
  {
    v20 = unpack_dq(&v60);
  }
  *((_QWORD *)a1 + 4) = v20;
  v21 = v61;
  a1[10] = unpack_dd(&v60);
  v23 = is_cvt64(&v60, v21, v22);
  v24 = v61;
  if ( v23 )
  {
    v50 = unpack_dd(&v60);
    v26 = v50;
    v51 = v50 == -1;
    v25 = -1;
    if ( !v51 )
      v25 = v26;
  }
  else
  {
    v25 = unpack_dq(&v60);
  }
  *((_QWORD *)a1 + 6) = v25;
  if ( (unsigned __int8)is_cvt64(&v60, v24, v26) )
  {
    v27 = (unsigned int)unpack_dd(&v60);
    if ( (unsigned int)v27 == 0xFFFFFFFFLL )
      v27 = -1;
  }
  else
  {
    v27 = unpack_dq(&v60);
  }
  *((_QWORD *)a1 + 7) = v27;
  v28 = v61;
  v29 = unpack_dd(&v60);
  v30 = 0;
  a1[16] = v29;
  v31 = v60;
  if ( (unsigned __int64)v60 < v61 )
  {
    v30 = *v60;
    v31 = v60 + 1;
  }
  *((_BYTE *)a1 + 68) = v30;
  v60 = v31;
  if ( (unsigned __int8)is_cvt64(&v60, v28, v30) )
  {
    v32 = (unsigned int)unpack_dd(&v60);
    if ( (unsigned int)v32 == 0xFFFFFFFFLL )
      v32 = -1;
  }
  else
  {
    v32 = unpack_dq(&v60);
  }
  *((_QWORD *)a1 + 9) = v32;
  if ( v3 > 1 )
  {
    LODWORD(v33) = *a1;
    if ( (*a1 & 0x800000) != 0
      && (v36 = v61, v37 = unpack_dd(&v60), v33 = *a1, a1[20] = v37, (v33 & 0x800000) != 0)
      && v37 > 1 )
    {
      v38 = is_cvt64(&v60, v36, v33);
      v39 = v61;
      if ( v38 )
      {
        v40 = (unsigned int)unpack_dd(&v60) - 1;
        v41 = -1;
        if ( v40 == 0xFFFFFFFFLL )
          v40 = -1;
      }
      else
      {
        v40 = unpack_dq(&v60) - 1;
      }
      *((_QWORD *)a1 + 11) = v40;
      v42 = *((_QWORD *)a1 + 4);
      v43 = is_cvt64(&v60, v39, v41);
      v44 = &v60;
      v45 = v61;
      if ( v43 )
      {
        v52 = unpack_dw(&v60, v61);
        v54 = v52;
        if ( *((_QWORD *)a1 + 14) < (unsigned __int64)v52 )
        {
          v45 = *((_QWORD *)a1 + 12);
          v44 = (unsigned __int8 **)(a1 + 24);
          v59 = qvector_reserve(a1 + 24, v45, v52, 8);
          *((_QWORD *)a1 + 13) = v54;
          *((_QWORD *)a1 + 12) = v59;
        }
        else
        {
          *((_QWORD *)a1 + 13) = v52;
          if ( !v52 )
            return v62 - __readfsqword(0x28u);
        }
        v55 = 8 * v54;
        v56 = 0;
        do
        {
          v57 = is_cvt64(v44, v45, v53);
          v45 = v61;
          v44 = &v60;
          if ( v57 )
          {
            v42 = (unsigned int)unpack_dd(&v60) + (unsigned int)v42;
            if ( (unsigned int)v42 == 0xFFFFFFFFLL )
              v42 = -1;
          }
          else
          {
            v42 += unpack_dq(&v60);
          }
          *(_QWORD *)(*((_QWORD *)a1 + 12) + v56) = v42;
          v56 += 8;
        }
        while ( v55 != v56 );
      }
      else
      {
        v46 = unpack_dw(&v60, v61);
        v47 = v46;
        if ( *((_QWORD *)a1 + 14) < (unsigned __int64)v46 )
        {
          v58 = qvector_reserve(a1 + 24, *((_QWORD *)a1 + 12), v46, 8);
          *((_QWORD *)a1 + 13) = v47;
          *((_QWORD *)a1 + 12) = v58;
        }
        else
        {
          *((_QWORD *)a1 + 13) = v46;
          if ( !v46 )
            return v62 - __readfsqword(0x28u);
        }
        v48 = 8 * v47;
        v49 = 0;
        do
        {
          v42 += unpack_dq(&v60);
          *(_QWORD *)(*((_QWORD *)a1 + 12) + v49) = v42;
          v49 += 8;
        }
        while ( v49 != v48 );
      }
    }
    else
    {
      v34 = *((void **)a1 + 12);
      a1[20] = 2;
      *((_QWORD *)a1 + 11) = -1;
      *a1 = v33 & 0xFF7FFFEF | 0x800000;
      if ( v34 )
      {
        *((_QWORD *)a1 + 13) = 0;
        qfree(v34);
        *((_QWORD *)a1 + 12) = 0;
        *((_QWORD *)a1 + 14) = 0;
      }
    }
  }
  return v62 - __readfsqword(0x28u);
}
