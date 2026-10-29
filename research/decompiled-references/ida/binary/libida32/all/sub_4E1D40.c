__int64 __fastcall sub_4E1D40(__int64 *a1, __int64 *a2, int a3, __int64 a4, double a5, double a6, __m128 a7)
{
  __int64 *v8; // r15
  bool v9; // zf
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  unsigned int v19; // ebx
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  void *v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // r15
  __int64 *v29; // r15
  __int64 v30; // r8
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // rbp
  int v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  unsigned __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v54; // [rsp+18h] [rbp-50h]
  unsigned __int64 v55; // [rsp+28h] [rbp-40h]

  v8 = a2;
  v9 = *((_BYTE *)a2 + 24) == 0;
  v55 = __readfsqword(0x28u);
  if ( !v9 )
  {
    v11 = (_QWORD *)*a2;
    v12 = a2[1];
    v13 = *(_QWORD *)*a2;
    if ( v12 == 1 || (v14 = 2 * v12, v15 = v11 + 2, v16 = &v11[v14], v14 == 2) )
    {
LABEL_4:
      v8 = a1;
      goto LABEL_5;
    }
    while ( v13 == *v15 )
    {
      v15 += 2;
      if ( v15 == v16 )
        goto LABEL_4;
    }
  }
  if ( !*((_BYTE *)a1 + 24) )
    return 0;
  v20 = (_QWORD *)*a1;
  v21 = a1[1];
  v13 = *(_QWORD *)*a1;
  if ( v21 != 1 )
  {
    v22 = 2 * v21;
    v23 = v20 + 2;
    v24 = &v20[v22];
    if ( v22 != 2 )
    {
      while ( v13 == *v23 )
      {
        v23 += 2;
        if ( v23 == v24 )
          goto LABEL_5;
      }
      return 0;
    }
  }
LABEL_5:
  v17 = v8[1];
  ptr = nullptr;
  v54 = 0;
  if ( v17 )
  {
    v42 = a3;
    v26 = (void *)qvector_reserve(&ptr, 0, v17, 8);
    v27 = (__int64 *)*v8;
    v28 = v8[1];
    ptr = v26;
    v18 = v26;
    v29 = &v27[2 * v28];
    if ( v29 != v27 )
    {
      switch ( v42 )
      {
        case 0:
          while ( 1 )
          {
            v30 = v13 + *v27;
            if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
            {
              v27 += 2;
              v18[(_QWORD)v54] = v30;
              *(_QWORD *)&v54 = v54 + 1;
              if ( v29 == v27 )
                goto LABEL_6;
            }
            else
            {
              v43 = v13 + *v27;
              v27 += 2;
              ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
              *((_QWORD *)ptr + v54) = v43;
              *(_QWORD *)&v54 = v54 + 1;
              if ( v29 == v27 )
                goto LABEL_6;
            }
            v18 = ptr;
          }
        case 1:
LABEL_58:
          v37 = *v27 - v13;
          if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
          {
            v27 += 2;
            v18[(_QWORD)v54] = v37;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          else
          {
            v50 = *v27 - v13;
            v27 += 2;
            ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
            *((_QWORD *)ptr + v54) = v50;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          v18 = ptr;
          goto LABEL_58;
        case 2:
LABEL_53:
          v36 = v13 | *v27;
          if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
          {
            v27 += 2;
            v18[(_QWORD)v54] = v36;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          else
          {
            v49 = v13 | *v27;
            v27 += 2;
            ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
            *((_QWORD *)ptr + v54) = v49;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          v18 = ptr;
          goto LABEL_53;
        case 3:
LABEL_48:
          v35 = v13 & *v27;
          if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
          {
            v27 += 2;
            v18[(_QWORD)v54] = v35;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          else
          {
            v48 = v13 & *v27;
            v27 += 2;
            ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
            *((_QWORD *)ptr + v54) = v48;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          v18 = ptr;
          goto LABEL_48;
        case 4:
LABEL_43:
          v34 = v13 ^ *v27;
          if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
          {
            v27 += 2;
            v18[(_QWORD)v54] = v34;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          else
          {
            v47 = v13 ^ *v27;
            v27 += 2;
            ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
            *((_QWORD *)ptr + v54) = v47;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          v18 = ptr;
          goto LABEL_43;
        case 5:
          v38 = ~v13;
          while ( 2 )
          {
            v39 = v38 & *v27;
            if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
            {
              v51 = v38;
              v27 += 2;
              ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
              *((_QWORD *)ptr + v54) = v39;
              *(_QWORD *)&v54 = v54 + 1;
              if ( v29 != v27 )
              {
                v18 = ptr;
                v38 = v51;
                continue;
              }
            }
            else
            {
              v27 += 2;
              v18[(_QWORD)v54] = v39;
              *(_QWORD *)&v54 = v54 + 1;
              if ( v29 != v27 )
              {
                v18 = ptr;
                continue;
              }
            }
            break;
          }
          break;
        case 6:
LABEL_38:
          v33 = *v27 << v13;
          if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
          {
            v27 += 2;
            v18[(_QWORD)v54] = v33;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          else
          {
            v46 = *v27 << v13;
            v27 += 2;
            ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
            *((_QWORD *)ptr + v54) = v46;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          v18 = ptr;
          goto LABEL_38;
        case 7:
LABEL_33:
          v32 = (unsigned __int64)*v27 >> v13;
          if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
          {
            v27 += 2;
            v18[(_QWORD)v54] = v32;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          else
          {
            v45 = (unsigned __int64)*v27 >> v13;
            v27 += 2;
            ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
            *((_QWORD *)ptr + v54) = v45;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          v18 = ptr;
          goto LABEL_33;
        case 8:
LABEL_28:
          v31 = *v27 >> v13;
          if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
          {
            v27 += 2;
            v18[(_QWORD)v54] = v31;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          else
          {
            v44 = *v27 >> v13;
            v27 += 2;
            ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
            *((_QWORD *)ptr + v54) = v44;
            *(_QWORD *)&v54 = v54 + 1;
            if ( v29 == v27 )
              break;
          }
          v18 = ptr;
          goto LABEL_28;
        case 9:
          v40 = (unsigned int)((_DWORD)v13 << 16);
          while ( 2 )
          {
            v41 = v40 | *(unsigned __int16 *)v27;
            if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
            {
              v52 = v40;
              v27 += 2;
              ptr = (void *)qvector_reserve(&ptr, v18, v54 + 1, 8);
              *((_QWORD *)ptr + v54) = v41;
              *(_QWORD *)&v54 = v54 + 1;
              if ( v29 != v27 )
              {
                v18 = ptr;
                v40 = v52;
                continue;
              }
            }
            else
            {
              v27 += 2;
              v18[(_QWORD)v54] = v41;
              *(_QWORD *)&v54 = v54 + 1;
              if ( v29 != v27 )
              {
                v18 = ptr;
                continue;
              }
            }
            break;
          }
          break;
        default:
          v19 = 0;
          goto LABEL_7;
      }
    }
  }
LABEL_6:
  sub_4E1940(a1, (__int64)&ptr, a4, 0.0, a6, a7);
  v18 = ptr;
  v19 = 1;
LABEL_7:
  if ( v18 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v18);
  }
  return v19;
}

