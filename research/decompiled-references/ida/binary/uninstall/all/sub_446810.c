__int64 __fastcall sub_446810(
        _DWORD *a1,
        unsigned __int8 *a2,
        int a3,
        char a4,
        int *a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  unsigned __int64 v10; // r15
  int v11; // edx
  unsigned __int64 v13; // r13
  unsigned __int8 *v14; // rbp
  int v15; // ebx
  __int64 v16; // r12
  unsigned int v17; // r8d
  int v18; // r12d
  unsigned int v19; // ebx
  unsigned int v20; // eax
  int v21; // r11d
  int v22; // r10d
  bool i; // cc
  unsigned int v24; // eax
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  unsigned int *v29; // [rsp+8h] [rbp-90h]
  unsigned __int64 v30; // [rsp+10h] [rbp-88h]
  int v31; // [rsp+18h] [rbp-80h]
  int v32; // [rsp+20h] [rbp-78h]
  int v33; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v34; // [rsp+30h] [rbp-68h]
  int v35; // [rsp+34h] [rbp-64h]
  __int64 v36; // [rsp+38h] [rbp-60h]
  __int64 v37; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  _DWORD *v39; // [rsp+50h] [rbp-48h]

  v10 = (unsigned __int64)&a2[a3];
  v11 = 0;
  v13 = a6;
  v14 = a2;
  v39 = a1 + 11;
  if ( (a4 & 1) == 0 )
    v11 = *a5;
  v34 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v32 = (int)a2;
  v31 = a6;
  v35 = v11;
  v30 = a7 + a6 - 3;
  v33 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_4:
        if ( (unsigned __int64)v14 >= v10 )
          goto LABEL_26;
LABEL_5:
        if ( v13 > v30 )
        {
          v34 = -4;
          goto LABEL_26;
        }
        v15 = *v14;
        v16 = *v14;
        if ( *((_BYTE *)v39 + v16) )
          break;
        if ( !v36 )
        {
          v36 = sub_446780((__int64)a1, v35);
          v28 = *(_QWORD *)(v36 + 40);
          v38 = v28 + 4;
          v37 = *(_QWORD *)(v28 + 264);
        }
        v26 = 0;
        v27 = v15;
        if ( *(_BYTE *)(v16 + v38) )
        {
          if ( (unsigned __int64)++v14 >= v10 )
          {
            LODWORD(v14) = (_DWORD)v14 - 1;
LABEL_41:
            v34 = -1;
            goto LABEL_26;
          }
          v27 = *v14;
          v26 = v15;
        }
        ++v14;
        ++v33;
        v13 += (int)sub_49BA90(*(unsigned __int16 *)(*(_QWORD *)(v37 + 8LL * v26) + 2LL * v27), v13);
      }
      v17 = a1[1];
      v18 = 0;
      v19 = v10 - (_DWORD)v14;
      if ( v17 > (int)v10 - (int)v14 )
        break;
      LOBYTE(v18) = 1;
      if ( !v17 || memcmp(v14, a1 + 2, v17) )
        break;
      v14 += v17;
    }
    v20 = a1[6];
    if ( v20 > v17 )
      v17 = a1[6];
    if ( v20 > v19 )
      break;
    ++v18;
    if ( !v20 || memcmp(v14, a1 + 7, v20) )
      break;
    v14 += v20;
  }
  v21 = a1[75];
  v22 = 0;
  v29 = a1 + 76;
  for ( i = v21 <= 0; !i; i = v21 <= v22 )
  {
    v24 = *v29;
    if ( *v29 > v17 )
      v17 = *v29;
    if ( v24 <= v19 )
    {
      ++v18;
      if ( v24 )
      {
        if ( !memcmp(v14, v29 + 1, v24) )
        {
          v14 += v24;
          v35 = v22;
          v36 = 0;
          goto LABEL_4;
        }
      }
    }
    ++v22;
    v29 += 16;
  }
  if ( !v29 )
    goto LABEL_4;
  if ( v21 + 2 != v18 && (a4 & 2) == 0 )
    goto LABEL_41;
  if ( (a4 & 4) != 0 )
  {
    v34 = -2;
  }
  else
  {
    v14 += v17;
    if ( (unsigned __int64)v14 < v10 )
      goto LABEL_5;
  }
LABEL_26:
  *(_QWORD *)a5 = v35;
  *a8 = (_DWORD)v14 - v32;
  *a9 = v13 - v31;
  *a10 = v33;
  return v34;
}

