__int64 __fastcall sub_1BEA320(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        int a8,
        unsigned __int8 a9)
{
  __int64 v10; // rbp
  __int64 *v11; // rbp
  __int64 v12; // rcx
  unsigned int v13; // ebp
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // r13
  void **v18; // rax
  void **v19; // rbx
  void **v20; // rdi
  void **v21; // r12
  bool v23; // zf
  int v24; // r9d
  __int64 *v25; // [rsp+0h] [rbp-2B8h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-2B0h]
  __int64 v27; // [rsp+10h] [rbp-2A8h]
  __int64 v28; // [rsp+18h] [rbp-2A0h]
  int v29; // [rsp+20h] [rbp-298h]
  unsigned __int8 v30; // [rsp+24h] [rbp-294h]
  __int64 v31[2]; // [rsp+28h] [rbp-290h] BYREF
  __int64 v32; // [rsp+38h] [rbp-280h]
  _QWORD *v33; // [rsp+40h] [rbp-278h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-270h]
  unsigned __int64 v35; // [rsp+54h] [rbp-264h] BYREF
  char v36; // [rsp+5Ch] [rbp-25Ch]
  unsigned __int8 *v37; // [rsp+60h] [rbp-258h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-250h]
  void *v39[2]; // [rsp+80h] [rbp-238h] BYREF
  __m128 v40; // [rsp+90h] [rbp-228h] BYREF
  __m128 v41; // [rsp+A0h] [rbp-218h]
  __int64 v42; // [rsp+110h] [rbp-1A8h] BYREF
  void *v43[3]; // [rsp+118h] [rbp-1A0h] BYREF
  __int64 v44; // [rsp+130h] [rbp-188h]
  __int64 v45; // [rsp+138h] [rbp-180h] BYREF
  unsigned int v46; // [rsp+140h] [rbp-178h]
  void *v47[2]; // [rsp+1B8h] [rbp-100h] BYREF
  int v48; // [rsp+1C8h] [rbp-F0h]
  char v49; // [rsp+1CCh] [rbp-ECh]
  __int64 v50; // [rsp+1D0h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+1F0h] [rbp-C8h]
  void *ptr; // [rsp+1F8h] [rbp-C0h]
  __int64 v53; // [rsp+200h] [rbp-B8h]
  _DWORD v54[26]; // [rsp+208h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+270h] [rbp-48h]
  __int16 v56; // [rsp+278h] [rbp-40h]
  char v57; // [rsp+27Ah] [rbp-3Eh]

  v10 = a2;
  v31[0] = a3;
  v25 = a4;
  v29 = a8;
  v27 = a5;
  v30 = a9;
  v26 = HIDWORD(a7);
  if ( *(_DWORD *)(*(_QWORD *)(a1[31] + 17448LL) + 340LL) == 10 )
  {
    sub_1E63330(a1, a6, a2, 1, 0);
    a2 = a6;
    sub_1E63330(a1, a6, v31[0] & 0xFFFFFFFFFFFFFFF0LL, 1, 0);
  }
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *v11;
  if ( *(_BYTE *)(*v11 + 16) == 33 )
  {
    v32 = *v11;
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33
         || (v12 = sub_F63050(*v11, a2, a3, v12), (v32 = v12) == 0) )
  {
    v13 = 0;
    *(_DWORD *)v25 = 14;
    return v13;
  }
  if ( v30 != 1 || (v13 = 1, sub_1BC70C0(*(_QWORD *)(v12 + 32), *(_QWORD *)(v31[0] + 32))) )
  {
    v14 = sub_F61C10(v12);
    v15 = sub_F61C10(v31[0]);
    v33 = v14;
    v17 = v15;
    v34 = v15;
    if ( v30 == 1 )
    {
      v33 = v15;
      v34 = v14;
    }
    v42 = 0;
    v43[2] = nullptr;
    v44 = 1;
    v43[1] = v43;
    v43[0] = v43;
    v18 = (void **)&v45;
    do
    {
      *v18 = nullptr;
      v18 += 2;
    }
    while ( v47 != v18 );
    v13 = 2;
    v47[1] = &byte_4;
    v47[0] = &v50;
    ptr = v54;
    v53 = 0x400000000LL;
    v48 = 0;
    v49 = 1;
    v51 = 0;
    v54[24] = 0;
    v55 = 0;
    v56 = 257;
    v57 = 1;
    if ( !(unsigned __int8)sub_183BAC0((__int64)a1, a7, (__int64)v34, (__int64)v33, (__int64)&v42, v16) )
    {
LABEL_12:
      if ( ptr != v54 )
        free(ptr);
      if ( v49 )
      {
        if ( (v44 & 1) != 0 )
          goto LABEL_16;
      }
      else
      {
        free(v47[0]);
        if ( (v44 & 1) != 0 )
        {
LABEL_16:
          v19 = (void **)v43[0];
          if ( v43[0] != v43 )
          {
            while ( 1 )
            {
              v20 = (void **)v19[2];
              v21 = (void **)*v19;
              if ( v20 == v19 + 4 )
              {
                operator delete(v19);
                if ( v21 == v43 )
                  return v13;
              }
              else
              {
                free(v20);
                operator delete(v19);
                if ( v21 == v43 )
                  return v13;
              }
              v19 = v21;
            }
          }
          return v13;
        }
      }
      operator delete(v45, 16LL * v46, 8);
      goto LABEL_16;
    }
    if ( sub_B65DB0((__int64)&v42, *(_QWORD *)(v33[6] + 8LL)) )
    {
      v25 = a1 + 1;
      sub_168B9B0((__int64)&v37, (__int64)(a1 + 1), 2993);
      sub_AE9DF0(&v37, v30, 2u);
      sub_1BEA260(&v37, *(_QWORD *)(v32 + 40), v14);
      sub_1BEA260(&v37, *(_QWORD *)(v31[0] + 40), v17);
      sub_1841240((__int64)v39, (__int64)a1, &v42);
      sub_AEC220(&v37, (_BYTE *)v39[0], (signed __int64)v39[1]);
      v36 = 1;
      v35 = __PAIR64__(v26, a7);
      sub_AEC610((__int64 *)&v37, (__int64 *)&v35);
      if ( v39[0] != &v40 )
        operator delete(v39[0]);
      sub_168CDE0((__int64)v39, v25, a6, (__int64)&v37, 0);
      sub_15F7200(v39);
      if ( v37 && v38 )
        sub_1580C40(v38, (unsigned __int64)v37);
      v13 = 3;
      goto LABEL_12;
    }
    v28 = v51;
    if ( v51 )
    {
      sub_168B9B0((__int64)&v37, (__int64)(a1 + 1), 4159);
      sub_1BEA260(&v37, *(_QWORD *)(v32 + 40), v14);
      sub_1BEA260(&v37, *(_QWORD *)(v31[0] + 40), v17);
      sub_AE9DF0(&v37, v28 & 0xFFFFFFFFFFFFFFF0LL, 8u);
      LOBYTE(v39[1]) = 1;
      v39[0] = (void *)__PAIR64__(v26, a7);
      sub_AEC610((__int64 *)&v37, (__int64 *)v39);
      sub_168CDE0((__int64)v39, a1 + 1, a6, (__int64)&v37, 0);
      sub_15F7200(v39);
      if ( v37 && v38 )
        sub_1580C40(v38, (unsigned __int64)v37);
      v13 = 4;
      goto LABEL_12;
    }
    sub_183BF30((__int64)a1, (__int64)&v42, v27);
    if ( v30 == 1 )
    {
      v23 = (_BYTE)v29 == 0;
      *(_DWORD *)v25 = 16;
      if ( !v23 )
        goto LABEL_37;
      v24 = 5383;
      v25 = v31;
      *(__m128 *)v39 = _mm_loadh_ps((const double *)&v25);
      v25 = (__int64 *)&v37;
      v40 = _mm_loadh_ps((const double *)&v25);
      v25 = (__int64 *)&v33;
      v41 = _mm_loadh_ps((const double *)&v25);
    }
    else
    {
      v23 = (_BYTE)v29 == 0;
      *(_DWORD *)v25 = 15;
      if ( !v23 )
      {
LABEL_37:
        v13 = 0;
        goto LABEL_12;
      }
      v24 = 3705;
      v25 = v31;
      *(__m128 *)v39 = _mm_loadh_ps((const double *)&v25);
      v25 = (__int64 *)&v37;
      v40 = _mm_loadh_ps((const double *)&v25);
      v25 = (__int64 *)&v33;
      v41 = _mm_loadh_ps((const double *)&v25);
    }
    v13 = 5;
    if ( (unsigned int)sub_1663F70(
                         a1,
                         a6,
                         (__int64)v33,
                         (__int64)v34,
                         (__int64)v43[0] + 16,
                         v24,
                         (void (__fastcall *)(__int64, void **))sub_1BEA0C0,
                         (__int64)v39,
                         0,
                         0) != 1 )
      v13 = 0;
    goto LABEL_12;
  }
  return v13;
}
