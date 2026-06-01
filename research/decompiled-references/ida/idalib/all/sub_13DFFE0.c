void __fastcall sub_13DFFE0(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbp
  _BYTE *v4; // rbx
  char v6; // al
  int v7; // r9d
  __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 *v12; // r9
  __int64 i; // rdi
  char v14; // al
  unsigned __int8 *v15; // r9
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BYTE *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdi
  size_t v23; // r9
  unsigned __int64 v24; // rdx
  _BYTE *v25; // r10
  __int64 v26; // rax
  size_t v27; // r9
  unsigned __int64 v28; // rdx
  _BYTE *v29; // rax
  _BYTE *v30; // rdx
  _QWORD *v31; // r10
  __int64 v32; // rax
  size_t v33; // rbx
  unsigned __int64 v34; // rdx
  _BYTE *v35; // rdx
  _BYTE *v36; // rdx
  _BYTE *v37; // rdx
  unsigned __int8 *v38; // [rsp+10h] [rbp-C8h]
  size_t v39; // [rsp+10h] [rbp-C8h]
  size_t v40; // [rsp+10h] [rbp-C8h]
  _QWORD *v41; // [rsp+10h] [rbp-C8h]
  char v42; // [rsp+10h] [rbp-C8h]
  _BYTE *v43; // [rsp+10h] [rbp-C8h]
  unsigned __int8 *v44; // [rsp+10h] [rbp-C8h]
  size_t v45; // [rsp+18h] [rbp-C0h]
  size_t v46; // [rsp+18h] [rbp-C0h]
  _QWORD *v47; // [rsp+18h] [rbp-C0h]
  _BYTE v48[4]; // [rsp+24h] [rbp-B4h] BYREF
  _BYTE *src; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD *p_src; // [rsp+30h] [rbp-A8h] BYREF
  void *ptr; // [rsp+38h] [rbp-A0h]
  _BYTE v52[136]; // [rsp+50h] [rbp-88h] BYREF

  v3 = &a2[a3];
  if ( a2 != &a2[a3] )
  {
    v4 = a2;
    do
    {
      while ( 1 )
      {
        v9 = *v4;
        if ( *v4 == 92 )
          break;
        v10 = a1[1];
        if ( (unsigned __int64)(v10 + 1) > a1[2] )
        {
          v42 = *v4;
          sub_2236E10(a1, a1 + 3, v10 + 1, 1);
          v10 = a1[1];
          v9 = v42;
        }
        ++v4;
        *(_BYTE *)(*a1 + v10) = v9;
        ++a1[1];
        if ( v3 == v4 )
          return;
      }
      v6 = v4[1];
      if ( v6 == 117 )
      {
        v7 = 4;
        if ( v4[2] == 123 )
        {
          v11 = (unsigned __int8)v4[3];
          v12 = v4 + 3;
          for ( i = 0; (_BYTE)v11 != 125; v11 = *v12 )
          {
            ++v12;
            i = (unsigned int)(word_23E43C0[v11] + 16 * i);
          }
          v38 = v12;
          p_src = &src;
          v14 = sub_2219190(i, &p_src);
          v15 = v38;
          if ( v14 )
          {
            v31 = p_src;
            v32 = a1[1];
            v33 = (char *)p_src - (char *)&src;
            v34 = (char *)p_src - (char *)&src + v32;
            if ( v34 > a1[2] )
            {
              v47 = p_src;
              sub_2236E10(a1, a1 + 3, v34, 1);
              v32 = a1[1];
              v31 = v47;
              v15 = v38;
            }
            if ( v31 != &src )
            {
              v44 = v15;
              memcpy((void *)(*a1 + v32), &src, v33);
              v32 = a1[1];
              v15 = v44;
            }
            a1[1] = v33 + v32;
          }
          v4 = v15 + 1;
          continue;
        }
      }
      else
      {
        v7 = 8;
        if ( v6 == 78 )
        {
          v16 = v4 + 3;
          v17 = v3 - (v4 + 3);
          if ( v17 >> 2 > 0 )
          {
            if ( v4[3] == 125 )
            {
              v4 += 4;
              v17 = 0;
            }
            else if ( v4[4] == 125 )
            {
              v36 = v4 + 4;
              v4 += 5;
              v17 = v36 - v16;
            }
            else if ( v4[5] == 125 )
            {
              v35 = v4 + 5;
              v4 += 6;
              v17 = v35 - v16;
            }
            else
            {
              v18 = (__int64)&v4[4 * (v17 >> 2) + 3];
              v19 = v4 + 3;
              if ( v4[6] == 125 )
              {
                v37 = v4 + 6;
                v4 += 7;
                v17 = v37 - v16;
              }
              else
              {
                while ( 1 )
                {
                  v4 = v19 + 4;
                  if ( (_BYTE *)v18 == v19 + 4 )
                  {
                    v20 = v3 - v4;
                    goto LABEL_32;
                  }
                  if ( v19[4] == 125 )
                  {
                    v17 = v4 - v16;
                    v4 = v19 + 5;
                    goto LABEL_36;
                  }
                  if ( v19[5] == 125 )
                  {
                    v4 = v19 + 6;
                    v17 = v19 + 5 - v16;
                    goto LABEL_36;
                  }
                  if ( v19[6] == 125 )
                  {
                    v4 = v19 + 7;
                    v17 = v19 + 6 - v16;
                    goto LABEL_36;
                  }
                  if ( v19[7] == 125 )
                    break;
                  v19 += 4;
                }
                v4 = v19 + 8;
                v17 = v19 + 7 - v16;
              }
            }
            goto LABEL_36;
          }
          v20 = v3 - (v4 + 3);
          v4 += 3;
LABEL_32:
          if ( v20 != 2 )
          {
            if ( v20 != 3 )
            {
              if ( v20 != 1 )
                goto LABEL_35;
              goto LABEL_56;
            }
            v29 = v4 + 1;
            if ( *v4 == 125 )
            {
              v17 = v4 - v16;
              ++v4;
            }
            else
            {
LABEL_55:
              v4 = v29 + 1;
              if ( *v29 == 125 )
              {
                v17 = v29 - v16;
              }
              else
              {
LABEL_56:
                if ( *v4 == 125 )
                {
                  v30 = v4++;
                  v17 = v30 - v16;
                }
                else
                {
LABEL_35:
                  v4 = v3 + 1;
                }
              }
            }
LABEL_36:
            sub_2255DD0(&p_src, v16, v17);
            src = v48;
            if ( (unsigned __int8)sub_2219190((unsigned int)p_src, &src) )
            {
              v25 = src;
              v26 = a1[1];
              v27 = src - v48;
              v28 = src - v48 + v26;
              if ( v28 > a1[2] )
              {
                v46 = src - v48;
                v43 = src;
                sub_2236E10(a1, a1 + 3, v28, 1);
                v26 = a1[1];
                v27 = v46;
                v25 = v43;
              }
              if ( v25 != v48 )
              {
                v40 = v27;
                memcpy((void *)(*a1 + v26), v48, v27);
                v26 = a1[1];
                v27 = v40;
              }
              a1[1] = v26 + v27;
            }
            if ( v52[64] && ptr != v52 )
              free(ptr);
            continue;
          }
          v29 = v4;
          goto LABEL_55;
        }
      }
      v8 = (unsigned int)(16
                        * (16 * (16 * word_23E43C0[(unsigned __int8)v4[2]] + word_23E43C0[(unsigned __int8)v4[3]])
                         + word_23E43C0[(unsigned __int8)v4[4]])
                        + word_23E43C0[(unsigned __int8)v4[5]]);
      if ( v7 != 4 )
        v8 = (unsigned int)(16
                          * (16
                           * (16 * (16 * v8 + word_23E43C0[(unsigned __int8)v4[6]])
                            + word_23E43C0[(unsigned __int8)v4[7]])
                           + word_23E43C0[(unsigned __int8)v4[8]])
                          + word_23E43C0[(unsigned __int8)v4[9]]);
      v4 += (unsigned int)(v7 - 1) + 3;
      p_src = &src;
      if ( (unsigned __int8)sub_2219190(v8, &p_src) )
      {
        v21 = p_src;
        v22 = a1[1];
        v23 = (char *)p_src - (char *)&src;
        v24 = (char *)p_src - (char *)&src + v22;
        if ( v24 > a1[2] )
        {
          v45 = (char *)p_src - (char *)&src;
          v41 = p_src;
          sub_2236E10(a1, a1 + 3, v24, 1);
          v22 = a1[1];
          v23 = v45;
          v21 = v41;
        }
        if ( v21 != &src )
        {
          v39 = v23;
          memcpy((void *)(*a1 + v22), &src, v23);
          v22 = a1[1];
          v23 = v39;
        }
        a1[1] = v22 + v23;
      }
    }
    while ( v3 != v4 );
  }
}
