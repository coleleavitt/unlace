__int64 __fastcall sub_7E3280(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rax
  int v4; // r8d
  int v5; // r9d
  char *v6; // r13
  char *v7; // r14
  __int64 v8; // rsi
  char *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 *v12; // rcx
  __int64 v13; // r9
  int v14; // edi
  __int64 v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *i; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r14d
  __int64 v23; // r13
  __int64 *v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdi
  __int64 *v29; // r8
  __int64 *j; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  void *ptr; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v35; // [rsp+8h] [rbp-1C0h]
  int v36; // [rsp+10h] [rbp-1B8h]
  __int64 v37; // [rsp+18h] [rbp-1B0h]
  _DWORD v38[6]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 *v39; // [rsp+38h] [rbp-190h]
  unsigned int v40; // [rsp+40h] [rbp-188h]
  int v41; // [rsp+48h] [rbp-180h]
  __int64 *v42; // [rsp+50h] [rbp-178h]
  unsigned int v43; // [rsp+58h] [rbp-170h]
  int v44; // [rsp+60h] [rbp-168h]
  __int64 v45; // [rsp+68h] [rbp-160h]
  __int64 v46; // [rsp+70h] [rbp-158h]
  __int64 v47; // [rsp+78h] [rbp-150h]
  _BYTE v48[264]; // [rsp+C0h] [rbp-108h] BYREF

  sub_1373200(v38, *(_QWORD *)(a1 + 72));
  sub_D8DFF0(v48, *(_QWORD *)(a1 + 72), a1 + 128);
  v3 = (_OWORD *)sub_186B270(0x40u);
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  ptr = v3;
  v35 = 8;
  v36 = 0;
  sub_D91C40(v48, a2, v38, &ptr);
  sub_D95A50(
    (unsigned int)v48,
    a2,
    (unsigned int)v38,
    (unsigned int)&ptr,
    v4,
    v5,
    (__int64)ptr,
    v35,
    v36,
    v37,
    v38[0],
    v38[2],
    v38[4],
    (_DWORD)v39,
    v40,
    v41,
    (_DWORD)v42,
    v43,
    v44,
    v45,
    v46);
  v6 = (char *)ptr;
  v7 = (char *)ptr + 8 * (unsigned int)v35;
  if ( ptr != v7 )
  {
    while ( *(_QWORD *)v6 <= 1u )
    {
      v6 += 8;
      if ( v7 == v6 )
        goto LABEL_12;
    }
    if ( v7 != v6 )
    {
      v8 = *(_QWORD *)v6;
      do
      {
        sub_135EA20(a2, v8);
        v9 = v6 + 8;
        if ( v7 == v6 + 8 )
          break;
        while ( 1 )
        {
          v8 = *(_QWORD *)v9;
          v6 = v9;
          if ( *(_QWORD *)v9 > 1u )
            break;
          v9 += 8;
          if ( v7 == v9 )
            goto LABEL_12;
        }
      }
      while ( v7 != v9 );
    }
  }
LABEL_12:
  v10 = v46;
  if ( v46 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= *(_DWORD *)(v10 - 4) )
        break;
      v12 = v39;
      v13 = *(_QWORD *)(v10 + 8LL * v11);
      v14 = *(_DWORD *)(v13 + 12);
      v15 = 24LL * v40;
      v16 = &v39[(unsigned __int64)v15 / 8];
      v17 = 24LL * (v14 & (v40 - 1));
      v18 = &v39[(unsigned __int64)v17 / 8];
      if ( v17 != v15 )
      {
        for ( i = &v39[(unsigned __int64)v17 / 8]; v16 != i; i += 3 )
        {
          v20 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v20 + 12) == v14 && v13 == v20 )
              goto LABEL_38;
          }
          else if ( !v20 )
          {
            goto LABEL_22;
          }
        }
      }
      if ( v39 == v18 )
      {
LABEL_47:
        v20 = 0;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v20 = *v12;
            if ( (unsigned __int64)*v12 > 1 )
              break;
            if ( !v20 )
              goto LABEL_22;
            v12 += 3;
            if ( v18 == v12 )
              goto LABEL_47;
          }
          if ( *(_DWORD *)(v20 + 12) == v14 && v13 == v20 )
            break;
          v12 += 3;
          if ( v18 == v12 )
            goto LABEL_47;
        }
        i = v12;
LABEL_38:
        v20 = i[2];
      }
LABEL_22:
      sub_135F9B0(a2, v13, v20);
      v10 = v46;
      ++v11;
    }
    while ( v46 );
  }
  v21 = v47;
  if ( v47 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= *(_DWORD *)(v21 - 4) )
        break;
      v23 = *(_QWORD *)(v21 + 8LL * v22);
      v24 = v42;
      v25 = *(unsigned int *)(v23 + 12);
      v26 = 16LL * v43;
      v27 = &v42[(unsigned __int64)v26 / 8];
      v28 = 16LL * ((unsigned int)v25 & (v43 - 1));
      v29 = &v42[(unsigned __int64)v28 / 8];
      if ( v28 != v26 )
      {
        for ( j = &v42[(unsigned __int64)v28 / 8]; v27 != j; j += 2 )
        {
          v31 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v31 + 12) == (_DWORD)v25 && v23 == v31 )
              goto LABEL_49;
          }
          else if ( !v31 )
          {
            goto LABEL_33;
          }
        }
      }
      if ( v42 == v29 )
      {
LABEL_58:
        v31 = 0;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = *v24;
            if ( (unsigned __int64)*v24 > 1 )
              break;
            if ( !v31 )
              goto LABEL_33;
            v24 += 2;
            if ( v29 == v24 )
              goto LABEL_58;
          }
          if ( *(_DWORD *)(v31 + 12) == (_DWORD)v25 && v23 == v31 )
            break;
          v24 += 2;
          if ( v29 == v24 )
            goto LABEL_58;
        }
        j = v24;
LABEL_49:
        v31 = j[1];
      }
LABEL_33:
      v32 = sub_13495F0(v31, v25, v24, v27, v29);
      sub_135F980(a2, v23, v32);
      v21 = v47;
      ++v22;
    }
    while ( v47 );
  }
  if ( ptr )
    sub_186B220(ptr);
  sub_D96340(v48);
  return sub_1372EF0(v38);
}

