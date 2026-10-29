char **__fastcall sub_21C4EC0(char **a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  void **v4; // rcx
  char *v5; // r8
  unsigned __int64 v6; // rax
  _QWORD *v7; // rcx
  char *v8; // rax
  __m128 v10; // xmm1
  __m128 v11; // xmm1
  __int64 v12; // rbp
  double v13[2]; // [rsp+8h] [rbp-D0h] BYREF
  void *v14; // [rsp+18h] [rbp-C0h] BYREF
  char **v15; // [rsp+20h] [rbp-B8h] BYREF
  __int16 v16; // [rsp+40h] [rbp-98h]
  char *v17[4]; // [rsp+50h] [rbp-88h] BYREF
  char v18; // [rsp+70h] [rbp-68h]
  __m128 v19; // [rsp+78h] [rbp-60h] BYREF
  _OWORD v20[2]; // [rsp+88h] [rbp-50h] BYREF
  __m128 v21; // [rsp+A8h] [rbp-30h] BYREF
  __m128 *v22; // [rsp+B8h] [rbp-20h]

  v4 = (void **)(a3 + a4);
  v5 = (char *)*v4;
  v6 = (unsigned __int64)*v4 - 2;
  v14 = *v4;
  if ( v6 > 2 )
  {
    v18 = 1;
    v17[2] = (char *)&v21;
    v17[1] = (_BYTE *)(&qword_48 + 7);
    *(_QWORD *)&v13[0] = &unk_26F7240;
    v17[0] = "MemProf version {} not supported; requires version between {} and {}, inclusive";
    v17[3] = (_BYTE *)(&dword_0 + 3);
    v10 = _mm_loadh_ps(v13);
    *(_QWORD *)&v13[0] = &unk_26F7248;
    v19 = v10;
    v15 = v17;
    v11 = _mm_loadh_ps(v13);
    *(_QWORD *)&v13[0] = &v14;
    v20[0] = v11;
    v20[1] = _mm_loadh_ps(v13);
    *(_QWORD *)&v13[0] = v20;
    v22 = &v19;
    v16 = 263;
    v21 = _mm_loadh_ps(v13);
    v12 = operator new(0x30u);
    *(_DWORD *)(v12 + 8) = 5;
    *(_QWORD *)v12 = &off_2C74C70;
    sub_2253560(v12 + 16, &v15);
    *a1 = (char *)v12;
    return a1;
  }
  else
  {
    v7 = v4 + 1;
    *a2 = v5;
    if ( (unsigned __int64)(v5 - 3) > 1 )
    {
      sub_21C4990(v17, (__int64)a2, a3, v7);
      v8 = v17[0];
      if ( v17[0] )
        goto LABEL_4;
    }
    else
    {
      sub_21C3F80(v17, (__int64)a2, a3, v7, v5);
      v8 = v17[0];
      if ( v17[0] )
      {
LABEL_4:
        *a1 = v8;
        return a1;
      }
    }
    *a1 = nullptr;
    return a1;
  }
}
