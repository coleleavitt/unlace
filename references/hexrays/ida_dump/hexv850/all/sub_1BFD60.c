__int64 __fastcall sub_1BFD60(int *a1, unsigned __int64 a2, int *a3, unsigned __int64 a4)
{
  __int64 v4; // r13
  int v8; // eax
  int v10; // edx
  __m128 v11; // xmm1
  char v13; // r14
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  char v18; // di
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r9
  _QWORD *v25; // [rsp+8h] [rbp-110h] BYREF
  __int64 v26; // [rsp+10h] [rbp-108h] BYREF
  __int64 v27; // [rsp+18h] [rbp-100h]
  unsigned __int64 v28; // [rsp+20h] [rbp-F8h] BYREF
  char v29; // [rsp+28h] [rbp-F0h]
  int v30; // [rsp+2Ch] [rbp-ECh]
  _QWORD v31[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v33; // [rsp+48h] [rbp-D0h]
  _QWORD v34[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+78h] [rbp-A0h]
  __m128i v37; // [rsp+90h] [rbp-88h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-78h]
  __int128 v39; // [rsp+A8h] [rbp-70h]
  __int64 v40; // [rsp+B8h] [rbp-60h]
  int v41; // [rsp+C0h] [rbp-58h]
  __int64 v42; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+D8h] [rbp-40h]

  v8 = *a1;
  v43 = __readfsqword(0x28u);
  if ( (unsigned int)(v8 - 3) > 1 )
    goto LABEL_3;
  v10 = *a3;
  if ( (unsigned int)(*a3 - 3) > 1 )
    goto LABEL_3;
  v14 = a3[2];
  v15 = a1[2];
  if ( v8 == 4 )
  {
    v16 = (unsigned __int16)v15;
    v17 = HIWORD(v15);
    v18 = a2 & 1 | (a2 <= 1);
    if ( v10 == 4 )
    {
      v20 = (unsigned __int16)v14;
      if ( !v18 )
      {
        a2 >>= 1;
        goto LABEL_42;
      }
    }
    else if ( !v18 )
    {
      a2 >>= 1;
      if ( !a4 )
        goto LABEL_3;
      v19 = a2 - 1;
      v20 = (int)v14;
      v21 = -1;
      v22 = v16 + a2 - 1;
      if ( v22 < (int)v14 )
        goto LABEL_33;
      goto LABEL_31;
    }
    if ( !under_debugger )
      sub_37CFE0(50659);
LABEL_64:
    BUG();
  }
  v16 = (int)v15;
  if ( v10 != 4 )
  {
    LOBYTE(v4) = a4 != 0 && a2 != 0;
    if ( (_BYTE)v4 && (int)v15 + a2 - 1 >= (int)v14 && (int)v14 + a4 - 1 >= (int)v15 )
      return (unsigned int)v4;
    goto LABEL_3;
  }
  v20 = (unsigned __int16)v14;
  v17 = -1;
LABEL_42:
  if ( a4 <= 1 || (a4 & 1) != 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(50660);
    goto LABEL_64;
  }
  a4 >>= 1;
  if ( !a2 )
    goto LABEL_3;
  v19 = a2 - 1;
  v22 = a2 - 1 + v16;
  v21 = HIWORD(v14);
  if ( v22 < v20 )
  {
    if ( (_DWORD)v17 == -1 )
      goto LABEL_38;
    goto LABEL_33;
  }
LABEL_31:
  if ( v20 + a4 - 1 >= v16 )
    goto LABEL_40;
  if ( (_DWORD)v17 == -1 )
  {
    if ( (_DWORD)v21 == -1 )
      goto LABEL_3;
    goto LABEL_38;
  }
LABEL_33:
  v23 = v17 + v19;
  if ( v23 >= v20 )
  {
    v24 = a4 - 1;
    if ( a4 - 1 + v20 >= v17 )
      goto LABEL_40;
    if ( (_DWORD)v21 == -1 )
      goto LABEL_3;
    if ( v23 < v21 )
      goto LABEL_38;
  }
  else
  {
    if ( (_DWORD)v21 == -1 )
      goto LABEL_3;
    if ( v23 < v21 )
      goto LABEL_38;
    v24 = a4 - 1;
  }
  if ( v21 + v24 >= v17 )
  {
LABEL_40:
    LODWORD(v4) = 1;
    return (unsigned int)v4;
  }
LABEL_38:
  if ( v22 >= v21 && v21 + a4 - 1 >= v16 )
    goto LABEL_40;
LABEL_3:
  v26 = -1;
  v27 = 0;
  if ( (unsigned __int8)sub_1BE390((__int64)a1, (__int64)&v26, a2) )
  {
    v13 = v27;
    v4 = SHIDWORD(v27);
    v29 = 0;
    v25 = (_QWORD *)v26;
    v28 = -1;
    v30 = 0;
    if ( (unsigned __int8)sub_1BE390((__int64)a3, (__int64)&v28, a4) )
    {
      if ( v29 == v13 && v4 && v30 && (unsigned __int64)v25 + v4 - 1 >= v28 )
      {
        LOBYTE(v4) = v30 + v28 - 1 >= (unsigned __int64)v25;
        return (unsigned int)v4;
      }
      goto LABEL_20;
    }
  }
  if ( *a1 != 2 && *a3 != 2 )
  {
LABEL_20:
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  v25 = v31;
  v33 = 0;
  v36 = 0;
  v11 = _mm_loadh_ps((const double *)&v25);
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v34[0] = 0;
  v34[1] = 0;
  v35 = 0;
  v38 = 0;
  v40 = 0;
  v41 = -1;
  v42 = 0;
  v37 = (__m128i)v11;
  v39 = 0;
  for_all_arglocs(&v37, a1, (unsigned int)a2, 0);
  v37.m128i_i64[0] = (__int64)off_4B2220;
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  v38 = 0;
  v40 = 0;
  v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4B2220, (__m128i)(unsigned __int64)v34);
  v41 = -1;
  v42 = 0;
  v39 = 0;
  for_all_arglocs(&v37, a3, (unsigned int)a4, 0);
  v37.m128i_i64[0] = (__int64)off_4B2220;
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  LODWORD(v4) = sub_5FD00(v25, v34);
  if ( !(_BYTE)v4 )
    LODWORD(v4) = sub_312BB0(&v32, &v35);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  qfree(v34[0]);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  qfree(v31[0]);
  return (unsigned int)v4;
}
