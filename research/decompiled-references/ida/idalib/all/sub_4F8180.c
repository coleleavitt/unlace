__int64 __fastcall sub_4F8180(__int64 *a1, __int64 *a2, int a3, __int64 a4, double a5, double a6, __m128 a7)
{
  __int64 *v8; // r15
  bool v9; // zf
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  unsigned int v19; // ebx
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 *v26; // rbx
  __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rbp
  __int64 v38; // r8
  __int64 v39; // rbp
  int v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+8h] [rbp-60h]
  unsigned __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v52; // [rsp+18h] [rbp-50h]
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v8 = a2;
  v9 = *((_BYTE *)a2 + 24) == 0;
  v53 = __readfsqword(0x28u);
  if ( !v9 )
  {
    v11 = (_QWORD *)*a2;
    v12 = a2[1];
    v13 = *(_QWORD *)*a2;
    if ( v12 == 1 || (v14 = v11 + 3, v15 = 3 * v12, v16 = &v11[v15], v15 == 3) )
    {
LABEL_4:
      v8 = a1;
      goto LABEL_5;
    }
    while ( v13 == *v14 )
    {
      v14 += 3;
      if ( v14 == v16 )
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
    v22 = v20 + 3;
    v23 = 3 * v21;
    v24 = &v20[v23];
    if ( v23 != 3 )
    {
      while ( v13 == *v22 )
      {
        v22 += 3;
        if ( v22 == v24 )
          goto LABEL_5;
      }
      return 0;
    }
  }
LABEL_5:
  v17 = v8[1];
  ptr = nullptr;
  v52 = 0;
  if ( v17 )
  {
    v40 = a3;
    ptr = (void *)qvector_reserve(&ptr, 0, v17, 8);
    v18 = ptr;
    v26 = (__int64 *)*v8;
    v27 = *v8 + 24 * v8[1];
    if ( (__int64 *)v27 != v26 )
    {
      switch ( v40 )
      {
        case 0:
          while ( 1 )
          {
            v28 = v13 + *v26;
            if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
            {
              v26 += 3;
              v18[(_QWORD)v52] = v28;
              *(_QWORD *)&v52 = v52 + 1;
              if ( (__int64 *)v27 == v26 )
                goto LABEL_6;
            }
            else
            {
              v41 = v13 + *v26;
              v26 += 3;
              ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
              *((_QWORD *)ptr + v52) = v41;
              *(_QWORD *)&v52 = v52 + 1;
              if ( (__int64 *)v27 == v26 )
                goto LABEL_6;
            }
            v18 = ptr;
          }
        case 1:
LABEL_58:
          v35 = *v26 - v13;
          if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
          {
            v26 += 3;
            v18[(_QWORD)v52] = v35;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          else
          {
            v48 = *v26 - v13;
            v26 += 3;
            ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
            *((_QWORD *)ptr + v52) = v48;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          v18 = ptr;
          goto LABEL_58;
        case 2:
LABEL_53:
          v34 = v13 | *v26;
          if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
          {
            v26 += 3;
            v18[(_QWORD)v52] = v34;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          else
          {
            v47 = v13 | *v26;
            v26 += 3;
            ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
            *((_QWORD *)ptr + v52) = v47;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          v18 = ptr;
          goto LABEL_53;
        case 3:
LABEL_48:
          v33 = v13 & *v26;
          if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
          {
            v26 += 3;
            v18[(_QWORD)v52] = v33;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          else
          {
            v46 = v13 & *v26;
            v26 += 3;
            ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
            *((_QWORD *)ptr + v52) = v46;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          v18 = ptr;
          goto LABEL_48;
        case 4:
LABEL_43:
          v32 = v13 ^ *v26;
          if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
          {
            v26 += 3;
            v18[(_QWORD)v52] = v32;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          else
          {
            v45 = v13 ^ *v26;
            v26 += 3;
            ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
            *((_QWORD *)ptr + v52) = v45;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          v18 = ptr;
          goto LABEL_43;
        case 5:
          v36 = ~v13;
          while ( 2 )
          {
            v37 = v36 & *v26;
            if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
            {
              v49 = v36;
              v26 += 3;
              ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
              *((_QWORD *)ptr + v52) = v37;
              *(_QWORD *)&v52 = v52 + 1;
              if ( (__int64 *)v27 != v26 )
              {
                v18 = ptr;
                v36 = v49;
                continue;
              }
            }
            else
            {
              v26 += 3;
              v18[(_QWORD)v52] = v37;
              *(_QWORD *)&v52 = v52 + 1;
              if ( (__int64 *)v27 != v26 )
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
          v31 = *v26 << v13;
          if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
          {
            v26 += 3;
            v18[(_QWORD)v52] = v31;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          else
          {
            v44 = *v26 << v13;
            v26 += 3;
            ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
            *((_QWORD *)ptr + v52) = v44;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          v18 = ptr;
          goto LABEL_38;
        case 7:
LABEL_33:
          v30 = (unsigned __int64)*v26 >> v13;
          if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
          {
            v26 += 3;
            v18[(_QWORD)v52] = v30;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          else
          {
            v43 = (unsigned __int64)*v26 >> v13;
            v26 += 3;
            ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
            *((_QWORD *)ptr + v52) = v43;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          v18 = ptr;
          goto LABEL_33;
        case 8:
LABEL_28:
          v29 = *v26 >> v13;
          if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 1) )
          {
            v26 += 3;
            v18[(_QWORD)v52] = v29;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          else
          {
            v42 = *v26 >> v13;
            v26 += 3;
            ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
            *((_QWORD *)ptr + v52) = v42;
            *(_QWORD *)&v52 = v52 + 1;
            if ( (__int64 *)v27 == v26 )
              break;
          }
          v18 = ptr;
          goto LABEL_28;
        case 9:
          v38 = (unsigned int)((_DWORD)v13 << 16);
          while ( 2 )
          {
            v39 = v38 | *(unsigned __int16 *)v26;
            if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
            {
              v50 = v38;
              v26 += 3;
              ptr = (void *)qvector_reserve(&ptr, v18, v52 + 1, 8);
              *((_QWORD *)ptr + v52) = v39;
              *(_QWORD *)&v52 = v52 + 1;
              if ( (__int64 *)v27 != v26 )
              {
                v18 = ptr;
                v38 = v50;
                continue;
              }
            }
            else
            {
              v26 += 3;
              v18[(_QWORD)v52] = v39;
              *(_QWORD *)&v52 = v52 + 1;
              if ( (__int64 *)v27 != v26 )
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
  sub_4F7DC0(a1, (__int64)&ptr, a4, 0.0, a6, a7);
  v18 = ptr;
  v19 = 1;
LABEL_7:
  if ( v18 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v18);
  }
  return v19;
}
