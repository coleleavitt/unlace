/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000384B4
// Address: 0x00000001000384B4

//----- (00000001000384B4) ----------------------------------------------------
__int64 __fastcall sub_1000384B4(
        _QWORD *a1,
        unsigned __int8 **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int8x16x2_t a9)
{
  __int64 v11; // x1
  __int64 v12; // x19
  _QWORD *v13; // x1
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v17; // x8
  void *v18; // x23
  unsigned __int8 *v19; // x20
  _QWORD *v20; // x1
  int v21; // w22
  __int64 v22; // x8
  _QWORD *v23; // x1
  __int64 v24; // x8
  unsigned __int8 *v25; // x0
  char *v26; // x23
  size_t v27; // x24
  void *v28; // x0
  _QWORD *v29; // x1
  __int64 v30; // x8
  unsigned __int8 *v31; // x0
  _QWORD *v32; // x8
  unsigned __int8 *v33; // x20
  char *__s; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v36; // [xsp+8h] [xbp-98h]
  __int64 v37; // [xsp+10h] [xbp-90h]
  unsigned __int8 v38[8]; // [xsp+18h] [xbp-88h] BYREF
  void *v39; // [xsp+20h] [xbp-80h] BYREF
  size_t v40; // [xsp+28h] [xbp-78h]
  __int64 v41; // [xsp+30h] [xbp-70h]
  unsigned __int8 v42[8]; // [xsp+38h] [xbp-68h] BYREF
  void *v43; // [xsp+40h] [xbp-60h]
  __int64 v44; // [xsp+48h] [xbp-58h]
  __int64 v45; // [xsp+50h] [xbp-50h]

  __s = nullptr;
  v36 = 0;
  v37 = 0;
  v11 = sub_1000378F0((__int64)a1, (__int64 *)&__s, a3, a4, a5, a6, a7, a8, a9);
  if ( v11 )
  {
    v12 = sub_100038894(a1, v11, &__s, a2);
    goto LABEL_38;
  }
  v13 = (_QWORD *)a1[3];
  v14 = a1[4];
  v15 = &v13[4 * v14];
  if ( *((_BYTE *)v15 - 32) == 2 && dword_1000A4A58 >= 1 )
  {
    v18 = (void *)*(v15 - 3);
    v19 = *a2;
    *a2 = nullptr;
    v20 = (_QWORD *)a1[9];
    v21 = *((_DWORD *)a1 + 8);
    v22 = a1[10];
    if ( a1[11] < (unsigned __int64)(v22 + 1) )
    {
      v20 = qvector_reserve(a1 + 9, v20, v22 + 1, 4u);
      a1[9] = v20;
      v22 = a1[10];
    }
    *((_DWORD *)v20 + v22) = v21;
    ++a1[10];
    v42[0] = 2;
    v44 = 0;
    v45 = 0;
    v43 = v18;
    v23 = (_QWORD *)a1[3];
    v24 = a1[4];
    if ( a1[5] < (unsigned __int64)(v24 + 1) )
    {
      v23 = qvector_reserve(a1 + 3, v23, v24 + 1, 0x20u);
      a1[3] = v23;
      v24 = a1[4];
    }
    v25 = (unsigned __int8 *)&v23[4 * v24];
    *v25 = 2;
    *((_QWORD *)v25 + 2) = 0;
    *((_QWORD *)v25 + 3) = 0;
    *((_QWORD *)v25 + 1) = 0;
    ++a1[4];
    move_idcv(v25, v42);
    if ( v36 )
    {
      v26 = __s;
      v38[0] = 7;
      v40 = 0;
      v41 = 0;
      v39 = nullptr;
      if ( !__s )
      {
LABEL_23:
        v29 = (_QWORD *)a1[3];
        v30 = a1[4];
        if ( a1[5] < (unsigned __int64)(v30 + 1) )
        {
          v29 = qvector_reserve(a1 + 3, v29, v30 + 1, 0x20u);
          a1[3] = v29;
          v30 = a1[4];
        }
        v31 = (unsigned __int8 *)&v29[4 * v30];
        *v31 = 2;
        *((_QWORD *)v31 + 2) = 0;
        *((_QWORD *)v31 + 3) = 0;
        *((_QWORD *)v31 + 1) = 0;
        ++a1[4];
        move_idcv(v31, v38);
        v12 = sub_100037FE0(a1, v19, nullptr, -dword_1000A4A58);
        if ( v38[0] == 5 )
        {
          sub_10003307C((__int64)v39, v38);
        }
        else if ( v38[0] == 7 && v39 )
        {
          v40 = 0;
          qfree(v39);
          v39 = nullptr;
          v41 = 0;
        }
        if ( v42[0] == 5 )
        {
          sub_10003307C((__int64)v43, v42);
        }
        else if ( v42[0] == 7 && v43 )
        {
          v44 = 0;
          qfree(v43);
        }
        goto LABEL_38;
      }
    }
    else
    {
      v38[0] = 7;
      v40 = 0;
      v41 = 0;
      v39 = nullptr;
      v26 = &byte_10007AE40;
    }
    v27 = strlen(v26);
    if ( v27 == -1 )
    {
      v28 = nullptr;
    }
    else
    {
      v28 = qvector_reserve(&v39, nullptr, v27 + 1, 1u);
      v39 = v28;
    }
    v40 = v27 + 1;
    memmove(v28, v26, v27);
    *((_BYTE *)v39 + v27) = 0;
    goto LABEL_23;
  }
  if ( !v14 )
  {
    if ( a1[5] )
    {
      v17 = 0;
    }
    else
    {
      v13 = qvector_reserve(a1 + 3, v13, 1u, 0x20u);
      a1[3] = v13;
      v17 = a1[4];
    }
    v32 = &v13[4 * v17];
    *(_BYTE *)v32 = 2;
    v32[2] = 0;
    v32[3] = 0;
    v32[1] = 0;
    v13 = (_QWORD *)a1[3];
    v14 = a1[4] + 1LL;
    a1[4] = v14;
  }
  v33 = (unsigned __int8 *)&v13[4 * v14 - 4];
  sub_1000368F0(v33);
  sub_100036528((__int64)a1, (__int64)v33);
  v12 = 0;
LABEL_38:
  if ( __s )
  {
    v36 = 0;
    qfree(__s);
  }
  return v12;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A4A58: using guessed type int dword_1000A4A58;
