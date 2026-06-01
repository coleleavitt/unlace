__int64 __fastcall sub_A6EC0(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // r10
  unsigned __int8 *v3; // r11
  unsigned __int8 *v4; // r8
  unsigned int v5; // r15d
  __int64 v6; // r9
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbx
  char v14; // cl
  unsigned __int64 i; // rcx
  char *v16; // r12
  int v17; // ecx
  char v18; // bl
  unsigned __int8 *v19; // r10
  __int64 result; // rax
  unsigned int v21; // r12d
  int v22; // ebx
  __int64 v23; // r13
  char v24; // cl
  unsigned __int64 j; // rcx
  __int64 v26; // rbp
  int v27; // ecx
  unsigned __int8 v28; // bl
  int v29; // r13d
  int v30; // ebp
  char v31; // cl
  unsigned __int8 v32; // cl
  int v33; // ebx
  int v34; // r15d
  unsigned int v35; // r15d
  unsigned int v36; // r13d
  unsigned int v37; // ebx
  unsigned int v38; // r13d
  unsigned __int8 *v39; // rcx
  __int64 v40; // rbx
  __int64 m; // rcx
  __int64 v42; // rbx
  __int64 v43; // rbp
  __int64 v44; // rbx
  char v45; // cl
  unsigned __int8 v46; // bl
  __int64 v47; // r13
  __int64 ii; // rbx
  unsigned __int8 *k; // rcx
  __int64 v50; // r15
  __int64 v51; // r13
  __int64 n; // rbx
  unsigned __int64 v53; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v54; // [rsp+8h] [rbp-80h]
  __int64 v55; // [rsp+10h] [rbp-78h]
  __int64 v56; // [rsp+18h] [rbp-70h]
  int v57; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v58; // [rsp+28h] [rbp-60h]
  unsigned int v59; // [rsp+30h] [rbp-58h]
  unsigned int v60; // [rsp+34h] [rbp-54h]
  int v61; // [rsp+38h] [rbp-50h]
  int v62; // [rsp+3Ch] [rbp-4Ch]
  __int64 v63; // [rsp+40h] [rbp-48h]
  __int64 v64; // [rsp+50h] [rbp-38h]

  v2 = *a1;
  v3 = a1[7];
  v4 = a1[3];
  v5 = *((_DWORD *)v3 + 17);
  v6 = *((_QWORD *)v3 + 13);
  v7 = *((_QWORD *)v3 + 14);
  v53 = (unsigned __int64)&(*a1)[*((_DWORD *)a1 + 2) - 5];
  v8 = *((_DWORD *)a1 + 8);
  v61 = *((_DWORD *)v3 + 15);
  v54 = &v4[v8 - 257];
  v57 = (_DWORD)v4 - (a2 - v8);
  v56 = (unsigned int)((1 << *((_DWORD *)v3 + 31)) - 1);
  v9 = *((_DWORD *)v3 + 22);
  v60 = *((_DWORD *)v3 + 16);
  v62 = v61 + v5;
  v63 = v5 - 1;
  v58 = *((unsigned __int8 **)v3 + 9);
  v10 = *((_QWORD *)v3 + 10);
  v55 = (unsigned int)((1 << *((_DWORD *)v3 + 30)) - 1);
  v59 = v5;
  while ( 2 )
  {
    if ( v9 <= 0xE )
    {
      v11 = v2[1];
      v12 = *v2;
      v2 += 2;
      v13 = v11 << ((unsigned __int8)v9 + 8);
      v14 = v9;
      v9 += 16;
      v10 += (v12 << v14) + v13;
    }
    for ( i = v10 & v55; ; i = *((unsigned __int16 *)v16 + 1)
                             + (unsigned __int64)((unsigned int)v10 & ((1 << *v16) - 1)) )
    {
      v16 = (char *)(v6 + 4 * i);
      v17 = (unsigned __int8)v16[1];
      v10 >>= v17;
      v9 -= v17;
      v18 = *v16;
      if ( !*v16 )
      {
        *v4++ = *((_WORD *)v16 + 1);
        goto LABEL_10;
      }
      if ( (v18 & 0x10) != 0 )
        break;
      if ( (v18 & 0x40) != 0 )
      {
        if ( (v18 & 0x20) != 0 )
        {
          *((_DWORD *)v3 + 2) = 16191;
        }
        else
        {
          a1[6] = "invalid literal/length code";
          *((_DWORD *)v3 + 2) = 16209;
        }
        goto LABEL_12;
      }
    }
    v21 = *((unsigned __int16 *)v16 + 1);
    v22 = v18 & 0xF;
    if ( v22 )
    {
      if ( (unsigned __int8)v22 > v9 )
      {
        v23 = *v2;
        v24 = v9;
        ++v2;
        v9 += 8;
        v10 += v23 << v24;
      }
      v9 -= (unsigned __int8)v22;
      v21 += v10 & ~(-1 << v22);
      v10 >>= v22;
    }
    if ( v9 <= 0xE )
    {
      v42 = v2[1];
      v43 = *v2;
      v2 += 2;
      v44 = v42 << ((unsigned __int8)v9 + 8);
      v45 = v9;
      v9 += 16;
      v10 += (v43 << v45) + v44;
    }
    for ( j = v10 & v56;
          ;
          j = *(unsigned __int16 *)(v26 + 2) + (unsigned __int64)((unsigned int)v10 & ((1 << *(_BYTE *)v26) - 1)) )
    {
      v26 = v7 + 4 * j;
      v27 = *(unsigned __int8 *)(v26 + 1);
      v10 >>= v27;
      v9 -= v27;
      if ( (*(_BYTE *)v26 & 0x10) != 0 )
        break;
      if ( (*(_BYTE *)v26 & 0x40) != 0 )
      {
        a1[6] = "invalid distance code";
        *((_DWORD *)v3 + 2) = 16209;
        goto LABEL_12;
      }
    }
    v28 = *(_BYTE *)v26 & 0xF;
    v29 = *(unsigned __int16 *)(v26 + 2);
    v30 = v28;
    if ( v28 > v9 )
    {
      v31 = v9 + 8;
      v10 += (unsigned __int64)*v2 << v9;
      if ( v28 > v9 + 8 )
      {
        v50 = v2[1];
        v9 += 16;
        v2 += 2;
        v10 += v50 << v31;
      }
      else
      {
        ++v2;
        v9 += 8;
      }
    }
    v32 = v28;
    v33 = (_DWORD)v4 - v57;
    v9 -= v30;
    v34 = v10 & ~(-1 << v32);
    v10 >>= v32;
    v35 = v29 + v34;
    if ( v35 <= (int)v4 - v57 )
    {
      for ( k = &v4[-v35]; ; k += 3 )
      {
        v21 -= 3;
        *v4 = *k;
        v4[1] = k[1];
        v4[2] = k[2];
        if ( v21 <= 2 )
          break;
        v4 += 3;
      }
      if ( v21 )
      {
        v4[3] = k[3];
        if ( v21 == 2 )
        {
          v4 += 5;
          *(v4 - 1) = k[4];
        }
        else
        {
          v4 += 4;
        }
      }
      else
      {
        v4 += 3;
      }
      goto LABEL_10;
    }
    v36 = v35 - v33;
    if ( v60 < v35 - v33 && *((_DWORD *)v3 + 1786) )
    {
      a1[6] = "invalid distance too far back";
      *((_DWORD *)v3 + 2) = 16209;
      break;
    }
    v37 = v33 - v35;
    if ( v59 )
    {
      if ( v59 < v36 )
      {
        v38 = v36 - v59;
        v39 = &v58[v37 + v62];
        if ( v21 > v38 )
        {
          v21 += v37 + v59;
          v40 = 0;
          do
          {
            v4[v40] = v39[v40];
            ++v40;
          }
          while ( v38 != v40 );
          v4 += v38;
          v39 = v58;
          if ( v59 < v21 )
          {
            v21 -= v59;
            for ( m = 0; ; ++m )
            {
              v4[m] = v58[m];
              if ( v63 == m )
                break;
            }
            v4 += v63 + 1;
            v39 = &v4[-v35];
          }
        }
        goto LABEL_44;
      }
      v39 = &v58[v37 + v59];
      if ( v21 > v36 )
      {
        v51 = v36 - 1;
        v21 += v37;
        v64 = v51 + 1;
        for ( n = 0; ; ++n )
        {
          v4[n] = v39[n];
          if ( v51 == n )
            break;
        }
LABEL_52:
        v4 += v64;
        v39 = &v4[-v35];
      }
    }
    else
    {
      v39 = &v58[v37 + v61];
      if ( v21 > v36 )
      {
        v47 = v36 - 1;
        v21 += v37;
        v64 = v47 + 1;
        for ( ii = 0; ; ++ii )
        {
          v4[ii] = v39[ii];
          if ( v47 == ii )
            break;
        }
        goto LABEL_52;
      }
    }
LABEL_44:
    while ( v21 > 2 )
    {
      v46 = *v39;
      v39 += 3;
      v4 += 3;
      v21 -= 3;
      *(v4 - 3) = v46;
      *(v4 - 2) = *(v39 - 2);
      *(v4 - 1) = *(v39 - 1);
    }
    if ( v21 )
    {
      *v4 = *v39;
      if ( v21 == 2 )
      {
        v4 += 2;
        *(v4 - 1) = v39[1];
      }
      else
      {
        ++v4;
      }
    }
LABEL_10:
    if ( (unsigned __int64)v2 < v53 && v4 < v54 )
      continue;
    break;
  }
LABEL_12:
  a1[3] = v4;
  v19 = &v2[-(v9 >> 3)];
  *a1 = v19;
  result = ((1 << (v9 & 7)) - 1) & (unsigned int)v10;
  *((_DWORD *)a1 + 2) = v53 - (_DWORD)v19 + 5;
  *((_DWORD *)a1 + 8) = (_DWORD)v54 - (_DWORD)v4 + 257;
  *((_QWORD *)v3 + 10) = result;
  *((_DWORD *)v3 + 22) = v9 & 7;
  return result;
}

