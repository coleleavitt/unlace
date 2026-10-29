__int64 __fastcall sub_109A520(
        __int64 *a1,
        __int64 *a2,
        const void *a3,
        size_t a4,
        _BYTE *a5,
        signed __int64 a6,
        _BYTE *a7,
        signed __int64 a8)
{
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  void *v16; // rdi
  void **v17; // rbp
  unsigned __int64 v18; // rax
  void **v19; // r12
  void **v20; // rbx
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // rbx
  void **v24; // r12
  __int64 v25; // rdx
  void *v28; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+30h] [rbp-78h]
  void *v31; // [rsp+40h] [rbp-68h]
  _BYTE v32[16]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v33; // [rsp+60h] [rbp-48h]

  v10 = a1[1];
  v11 = *a1;
  v12 = (v10 - *a1) >> 7;
  v13 = (v10 - *a1) >> 5;
  if ( v12 > 0 )
  {
    v14 = v11 + (v12 << 7);
    while ( *(_QWORD *)(v11 + 8) != a4 || a4 && memcmp(*(const void **)v11, a3, a4) )
    {
      if ( *(_QWORD *)(v11 + 40) == a4 && (!a4 || !memcmp(*(const void **)(v11 + 32), a3, a4)) )
      {
        v11 += 32;
        goto LABEL_16;
      }
      if ( *(_QWORD *)(v11 + 72) == a4 && (!a4 || !memcmp(*(const void **)(v11 + 64), a3, a4)) )
      {
        v11 += 64;
        goto LABEL_16;
      }
      if ( *(_QWORD *)(v11 + 104) == a4 && (!a4 || !memcmp(*(const void **)(v11 + 96), a3, a4)) )
      {
        v11 += 96;
        goto LABEL_16;
      }
      v11 += 128;
      if ( v14 == v11 )
      {
        v13 = (v10 - v11) >> 5;
        goto LABEL_38;
      }
    }
    goto LABEL_16;
  }
LABEL_38:
  if ( v13 == 2 )
    goto LABEL_48;
  if ( v13 == 3 )
  {
    if ( *(_QWORD *)(v11 + 8) == a4 && (!a4 || !memcmp(*(const void **)v11, a3, a4)) )
      goto LABEL_16;
    v11 += 32;
LABEL_48:
    if ( *(_QWORD *)(v11 + 8) == a4 && (!a4 || !memcmp(*(const void **)v11, a3, a4)) )
      goto LABEL_16;
    v11 += 32;
    goto LABEL_52;
  }
  if ( v13 != 1 )
    return 0;
LABEL_52:
  if ( a4 != *(_QWORD *)(v11 + 8) )
    return 0;
  if ( a4 && memcmp(*(const void **)v11, a3, a4) )
    return 0;
LABEL_16:
  result = 0;
  if ( v10 == v11 )
    return result;
  sub_FC70B0((__int64)&v28, *a2, 0, 52);
  sub_AEC220((unsigned __int8 **)&v28, a5, a6);
  sub_AEC220((unsigned __int8 **)&v28, a7, a8);
  if ( !(_BYTE)v33 )
  {
    v16 = v31;
    if ( v31 == v32 )
      goto LABEL_20;
    goto LABEL_19;
  }
  sub_FC7790(v30, (__int64 *)&v28, SHIBYTE(v33));
  v16 = v31;
  v30 = 0;
  v33 = 0;
  if ( v31 != v32 )
LABEL_19:
    operator delete(v16);
LABEL_20:
  v17 = (void **)v28;
  if ( v28 )
  {
    v18 = v29;
    if ( v29 )
    {
      if ( (unsigned __int64)v28 >= v29 && (unsigned __int64)v28 <= v29 + 14848 )
      {
        v25 = *(unsigned int *)(v29 + 14976);
        *(_DWORD *)(v29 + 14976) = v25 + 1;
        *(_QWORD *)(v18 + 8 * v25 + 14848) = v17;
      }
      else
      {
        v19 = *((void ***)v28 + 66);
        v20 = &v19[8 * (unsigned __int64)*((unsigned int *)v28 + 134)];
        if ( v19 != v20 )
        {
          do
          {
            while ( 1 )
            {
              v20 -= 8;
              v21 = (void **)v20[3];
              if ( v21 == v20 + 5 )
                break;
              operator delete(v21);
              if ( v19 == v20 )
                goto LABEL_27;
            }
          }
          while ( v19 != v20 );
LABEL_27:
          v20 = (void **)v17[66];
        }
        if ( v20 != v17 + 68 )
          free(v20);
        v22 = (void **)v17[52];
        v23 = v17 + 52;
        if ( v22 != v17 + 54 )
          free(v22);
        v24 = v17 + 12;
        do
        {
          while ( 1 )
          {
            v23 -= 4;
            if ( *v23 == v23 + 2 )
              break;
            operator delete(*v23);
            if ( v24 == v23 )
              goto LABEL_35;
          }
        }
        while ( v24 != v23 );
LABEL_35:
        operator delete(v17, 0x3A0u);
      }
    }
  }
  return 1;
}
