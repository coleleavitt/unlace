/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491B78
// Address: 0x0000000000491B78

//----- (0000000000491B78) ----------------------------------------------------
__int64 __fastcall sub_491B78(unsigned __int8 a1)
{
  int v1; // w25
  FILE *v2; // x0
  FILE *v3; // x20
  _QWORD *v4; // x21
  unsigned __int64 v5; // x19
  _QWORD *v6; // x0
  unsigned __int64 v7; // x3
  __int64 v8; // x1
  __int64 v9; // x26
  char *v10; // x27
  char *v11; // x28
  char *v12; // x0
  __int64 v13; // x28
  __int64 v14; // x2
  int v15; // w3
  __int64 v16; // x1
  __int64 v17; // x0
  char *v18; // x0
  char *v19; // x26
  int v20; // w0
  int v21; // w0
  unsigned __int64 v22; // x0
  unsigned __int64 v23; // x28
  _QWORD *v24; // x26
  unsigned __int64 v25; // x2
  _DWORD *v26; // x19
  bool v27; // zf
  unsigned int v28; // w19
  unsigned __int64 v30; // x27
  _QWORD *v31; // x0
  unsigned __int64 v32; // x3
  __int64 v33; // x1
  __int64 v34; // x21
  char *v35; // x20
  int v36; // w0
  __int64 v37; // x1
  _DWORD *v38; // x7
  _DWORD *v39; // x6
  char *v40; // x9
  char *v41; // x0
  int v42; // w3
  int v43; // w4
  int v44; // w1
  char *v45; // x2
  bool v46; // cc
  _BOOL4 v47; // w1
  void *ptr; // [xsp+68h] [xbp-38h] BYREF
  unsigned __int64 v49; // [xsp+70h] [xbp-30h]
  unsigned __int64 v50; // [xsp+78h] [xbp-28h]
  char *s1; // [xsp+80h] [xbp-20h] BYREF
  __int64 v52; // [xsp+88h] [xbp-18h]
  __int64 v53; // [xsp+90h] [xbp-10h]

  v1 = a1;
  v2 = sub_48DCD0("/proc/cpuinfo", (unsigned __int8 *)"r");
  if ( !v2 )
    return (unsigned int)-1;
  v3 = v2;
  ptr = nullptr;
  v49 = 0;
  v50 = 0;
  v4 = sub_491288((__int64)&ptr, nullptr, 1u, 8u);
  v5 = v50;
  v6 = ptr;
  v7 = v49;
  v50 = 0;
  if ( (__int64)(v49 - 1) >= 0 )
  {
    v8 = 0;
    do
    {
      v4[v8] = v6[v8];
      ++v8;
    }
    while ( v8 != v7 );
    v6 = ptr;
  }
  j__free(v6);
  ptr = v4;
  v50 = v5;
  v4[v49] = -1;
  s1 = nullptr;
  v52 = 0;
  ++v49;
  v53 = 0;
  while ( (sub_490E28((__int64)&s1, v3) & 0x8000000000000000LL) == 0 )
  {
    v10 = s1;
    v9 = v52;
    if ( v52 )
      v11 = s1;
    else
      v11 = (char *)&qword_4B2D48;
    v12 = strchr(v11, 58);
    if ( !v12 || (v13 = v12 - v11, v14 = v13, v13 == -1) )
    {
      v22 = v49;
      v23 = v50;
      if ( v49 + 1 > v50 )
      {
        v24 = sub_491288((__int64)&ptr, nullptr, v49 + 1, 8u);
        v30 = v50;
        v31 = ptr;
        v32 = v49;
        v50 = v23;
        if ( (__int64)(v49 - 1) >= 0 )
        {
          v33 = 0;
          do
          {
            v24[v33] = v31[v33];
            ++v33;
          }
          while ( v33 != v32 );
          v31 = ptr;
        }
        j__free(v31);
        v22 = v49;
        ptr = v24;
        v50 = v30;
      }
      else
      {
        v24 = ptr;
      }
      v24[v22] = -1;
      ++v49;
    }
    else
    {
      if ( v13 <= 0 )
      {
        v17 = v13;
      }
      else
      {
        while ( 1 )
        {
          v16 = v14 - 1;
          v17 = v14 - 1;
          if ( !((v14 - 1) | v9) )
            break;
          v15 = (unsigned __int8)v10[v16];
          if ( v15 != 32 && v15 != 9 )
            goto LABEL_21;
          --v14;
          if ( !v16 )
            goto LABEL_79;
        }
        if ( byte_522118 == 32 )
          goto LABEL_22;
        if ( byte_522118 != 9 )
        {
LABEL_21:
          v17 = v14;
          goto LABEL_22;
        }
LABEL_79:
        v17 = 0;
      }
LABEL_22:
      if ( v9 | v17 )
        v18 = &s1[v17];
      else
        v18 = &byte_522118;
      *v18 = 0;
      if ( v52 )
      {
        v19 = s1;
        if ( !strcmp(s1, "processor") )
          goto LABEL_26;
LABEL_28:
        if ( !strcmp(v19, "core id") )
        {
          v21 = strtol(&v19[v13 + 1], nullptr, 10);
          *((_DWORD *)ptr + 2 * v49 - 1) = v21;
        }
      }
      else
      {
        v19 = (char *)&qword_4B2D48;
        if ( strcmp((const char *)&qword_4B2D48, "processor") )
          goto LABEL_28;
LABEL_26:
        v20 = strtol(&v19[v13 + 1], nullptr, 10);
        *((_DWORD *)ptr + 2 * v49 - 2) = v20;
      }
    }
  }
  sub_4906A0(v3);
  v26 = ptr;
  v25 = v49;
  if ( v49 )
    v27 = *((_DWORD *)ptr + 2 * v49 - 2) == -1;
  else
    v27 = 0;
  if ( v27 )
    v25 = --v49;
  if ( v1 )
  {
    v28 = v25;
    goto LABEL_41;
  }
  v34 = 8 * v25;
  v35 = (char *)ptr + 8 * v25;
  if ( ptr != v35 )
  {
    sub_4918F8((char *)ptr, v35, 2 * (63 - __clz(v34 >> 3)), 0);
    if ( v34 <= 128 )
    {
      sub_4916E8(v26, v35);
      goto LABEL_56;
    }
    sub_4916E8(v26, v26 + 32);
    if ( v35 == v40 )
    {
LABEL_56:
      v25 = v49;
    }
    else
    {
      do
      {
        v41 = v40;
        v42 = *(_DWORD *)v40;
        v43 = *((_DWORD *)v40 + 1);
        while ( 1 )
        {
          v44 = *((_DWORD *)v41 - 2);
          v45 = v41;
          v46 = v42 < v44;
          if ( v42 == v44 )
            v46 = v43 < *((_DWORD *)v41 - 1);
          v47 = v46;
          v41 -= 8;
          if ( !v47 )
            break;
          *((_QWORD *)v41 + 1) = *(_QWORD *)v41;
        }
        *(_DWORD *)v45 = v42;
        *((_DWORD *)v45 + 1) = v43;
        v40 += 8;
      }
      while ( v35 != v40 );
      v25 = v49;
    }
  }
  if ( v25 )
  {
    v36 = 0;
    v28 = 0;
    v37 = 0;
    do
    {
      if ( !v36 || (v38 = (char *)ptr + 8 * v37, v39 = (char *)ptr + 8 * v36 - 8, *v38 != *v39) || v38[1] != v39[1] )
        ++v28;
      v37 = ++v36;
    }
    while ( v36 < v25 );
  }
  else
  {
    v28 = 0;
  }
LABEL_41:
  if ( s1 )
  {
    v52 = 0;
    j__free(s1);
  }
  if ( ptr )
  {
    v49 = 0;
    j__free(ptr);
  }
  return v28;
}
// 491F8C: variable 'v40' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522118: using guessed type char byte_522118;
