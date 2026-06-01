__int64 __fastcall sub_36C270(__int64 a1, char *a2, __int64 a3)
{
  char *v3; // r13
  bool v4; // zf
  unsigned int idcv_attr; // ebx
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __m128i si128; // xmm1
  char v11[8]; // [rsp+8h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+10h] [rbp-C0h]
  __int64 v13; // [rsp+20h] [rbp-B0h]
  char v14[8]; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-A0h]
  __int64 v16; // [rsp+40h] [rbp-90h]
  char v17[8]; // [rsp+48h] [rbp-88h] BYREF
  _BYTE v18[24]; // [rsp+50h] [rbp-80h] BYREF
  char v19[8]; // [rsp+68h] [rbp-68h] BYREF
  __int128 v20; // [rsp+70h] [rbp-60h]
  __int64 v21; // [rsp+80h] [rbp-50h]
  unsigned __int64 v22; // [rsp+90h] [rbp-40h]

  v3 = a2;
  v4 = *a2 == 7;
  v22 = __readfsqword(0x28u);
  v11[0] = 2;
  v13 = 0;
  v12 = 0;
  if ( !v4 )
  {
LABEL_5:
    v14[0] = 2;
    v16 = 0;
    v15 = 0;
    idcv_attr = get_idcv_attr();
    if ( !idcv_attr )
    {
      idcv_attr = idcv_int64(v14, v3);
      if ( !idcv_attr )
      {
        copy_tinfo_t(a1);
        if ( !a3 )
        {
LABEL_14:
          idcv_attr = 0;
          free_idcv(v14);
          goto LABEL_7;
        }
        v17[0] = 2;
        memset(v18, 0, sizeof(v18));
        idcv_attr = get_idcv_attr();
        if ( !idcv_attr )
        {
          if ( v17[0] == 7 )
          {
            v8 = _mm_loadu_si128((const __m128i *)(a3 + 8));
            v9 = *(_QWORD *)v18;
            si128 = _mm_load_si128((const __m128i *)&v18[8]);
            *(_QWORD *)v18 = *(_QWORD *)a3;
            *(_QWORD *)a3 = v9;
            *(__m128i *)(a3 + 8) = si128;
            *(__m128i *)&v18[8] = v8;
          }
          free_idcv(v17);
          goto LABEL_14;
        }
        free_idcv(v17);
      }
    }
    free_idcv(v14);
    goto LABEL_7;
  }
  v17[0] = 2;
  v19[0] = 2;
  v21 = 0;
  memset(v18, 0, sizeof(v18));
  v20 = 0;
  copy_idcv(v17);
  free_idcv(v19);
  v19[0] = 2;
  LODWORD(v20) = 2;
  sub_36C110((__int64)v17, (__int64)v11);
  if ( v11[0] == 5 )
  {
    free_idcv(v19);
    v3 = v11;
    free_idcv(v17);
    goto LABEL_5;
  }
  free_idcv(v19);
  idcv_attr = 0;
  free_idcv(v17);
LABEL_7:
  free_idcv(v11);
  return idcv_attr;
}

