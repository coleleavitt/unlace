__int64 __fastcall c_ekkrwct(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11)
{
  int v11; // edx
  __int64 result; // rax
  int v14; // r14d
  int v15; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r15
  int v22; // ebx
  int v23; // r8d
  _DWORD *v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // r10
  __int64 v32; // xmm0_8
  int v33; // r8d
  int v34; // edi
  __int64 v35; // r10
  __int64 v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // xmm0_8
  __int64 *v40; // r8
  __int64 *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // xmm0_8
  _QWORD *v44; // rcx
  _QWORD *v47; // [rsp+10h] [rbp-88h]
  int v48; // [rsp+20h] [rbp-78h]
  __int64 v49; // [rsp+30h] [rbp-68h]
  __int64 v50; // [rsp+50h] [rbp-48h]
  int v51; // [rsp+5Ch] [rbp-3Ch]
  _QWORD *v52; // [rsp+60h] [rbp-38h]

  v11 = *(_DWORD *)(a1 + 240);
  result = a10;
  v14 = v11 - *(_DWORD *)(a1 + 296);
  if ( v11 > 0 )
  {
    v15 = v14 + 7;
    if ( v14 >= 0 )
      v15 = v11 - *(_DWORD *)(a1 + 296);
    v48 = v11 + 1;
    v51 = v15 >> 3;
    v17 = (unsigned int)((v15 >> 3) - 1);
    v18 = a9 + 8 + ((v17 + 1) << 6);
    v19 = a9 + (v17 << 6) + 72;
    if ( v51 <= 0 )
      v18 = a9 + 8;
    v47 = (_QWORD *)v18;
    v52 = (_QWORD *)v19;
    v20 = (unsigned int)((v14 >> 3) - 1);
    v21 = a9 + (v20 << 6) + 72;
    v50 = (v20 + 1) << 6;
    v22 = 1;
    while ( 1 )
    {
      v23 = *(_DWORD *)(a5 + 4 * result);
      v24 = (_DWORD *)(a4 + 4 * result);
      v25 = 8 * result;
      v26 = *v24 - 1;
      if ( *(int *)(a7 + v25 + 4) < 0 )
      {
        a11 -= v23;
        if ( v26 != a11 )
        {
          *v24 = a11 + 1;
          if ( v23 > 0 )
          {
            v27 = a11 + (__int64)v23;
            v28 = v26 - (__int64)a11;
            v49 = 8 * v27;
            v29 = a2 + 8 * v27;
            v30 = a3 + 4 * v27;
            v31 = a2 - 8 + v49 - 8LL * (unsigned int)(v23 - 1);
            do
            {
              v32 = *(_QWORD *)(v29 + 8 * v28);
              v33 = *(_DWORD *)(v30 + 4 * v28);
              v29 -= 8;
              v30 -= 4;
              *(_QWORD *)(v29 + 8) = v32;
              *(_DWORD *)(v30 + 4) = v33;
            }
            while ( v31 != v29 );
          }
        }
        goto LABEL_12;
      }
      v34 = a11 - v14;
      *v24 = a11 - v14 + 1;
      if ( v14 )
        break;
      if ( v23 <= 0 )
      {
LABEL_12:
        ++v22;
        result = *(int *)(a6 + v25 + 4);
        if ( v22 == v48 )
          return result;
      }
      else
      {
LABEL_16:
        v35 = a2 + 8LL * v26;
        v36 = a3 + 4LL * v26;
        v37 = 1;
        do
        {
          v38 = *(int *)(v36 + 4 * v37);
          v39 = *(_QWORD *)(v35 + 8 * v37++);
          *(_QWORD *)(a9 + 8LL * *(__int16 *)(a8 + 2 * v38)) = v39;
        }
        while ( v23 >= (int)v37 );
LABEL_18:
        v40 = (__int64 *)(a2 + 8LL * v34 + 8);
        if ( v14 )
        {
          v41 = (__int64 *)(a9 + 8);
          if ( (__int64 *)(a9 + 8) != v40 )
          {
            if ( v14 >> 3 > 0 )
            {
              v42 = a2 + 8LL * v34 + 8;
              do
              {
                v43 = *v41;
                v41 += 8;
                v42 += 64;
                *(_QWORD *)(v42 - 64) = v43;
                *(_QWORD *)(v42 - 56) = *(v41 - 7);
                *(_QWORD *)(v42 - 48) = *(v41 - 6);
                *(_QWORD *)(v42 - 40) = *(v41 - 5);
                *(_QWORD *)(v42 - 32) = *(v41 - 4);
                *(_QWORD *)(v42 - 24) = *(v41 - 3);
                *(_QWORD *)(v42 - 16) = *(v41 - 2);
                *(_QWORD *)(v42 - 8) = *(v41 - 1);
              }
              while ( v41 != (__int64 *)v21 );
              v40 = (__int64 *)((char *)v40 + v50);
              v41 = (__int64 *)(v50 + a9 + 8);
            }
            switch ( v14 % 8 )
            {
              case 1:
                goto LABEL_31;
              case 2:
                goto LABEL_30;
              case 3:
                goto LABEL_29;
              case 4:
                goto LABEL_28;
              case 5:
                goto LABEL_27;
              case 6:
                goto LABEL_26;
              case 7:
                v40[6] = v41[6];
LABEL_26:
                v40[5] = v41[5];
LABEL_27:
                v40[4] = v41[4];
LABEL_28:
                v40[3] = v41[3];
LABEL_29:
                v40[2] = v41[2];
LABEL_30:
                v40[1] = v41[1];
LABEL_31:
                ++v22;
                a11 = v34;
                result = *(int *)(a6 + v25 + 4);
                *v40 = *v41;
                if ( v22 == v48 )
                  return result;
                continue;
              default:
                break;
            }
          }
        }
        ++v22;
        a11 = v34;
        result = *(int *)(a6 + v25 + 4);
        if ( v22 == v48 )
          return result;
      }
    }
    if ( v51 > 0 )
    {
      v44 = (_QWORD *)(a9 + 8);
      do
      {
        *v44 = 0;
        v44[1] = 0;
        v44 += 8;
        *(v44 - 6) = 0;
        *(v44 - 5) = 0;
        *(v44 - 4) = 0;
        *(v44 - 3) = 0;
        *(v44 - 2) = 0;
        *(v44 - 1) = 0;
      }
      while ( v44 != v52 );
    }
    switch ( v14 % 8 )
    {
      case 1:
        goto LABEL_45;
      case 2:
        goto LABEL_44;
      case 3:
        goto LABEL_43;
      case 4:
        goto LABEL_42;
      case 5:
        goto LABEL_41;
      case 6:
        goto LABEL_40;
      case 7:
        v47[6] = 0;
LABEL_40:
        v47[5] = 0;
LABEL_41:
        v47[4] = 0;
LABEL_42:
        v47[3] = 0;
LABEL_43:
        v47[2] = 0;
LABEL_44:
        v47[1] = 0;
LABEL_45:
        *v47 = 0;
        break;
      default:
        break;
    }
    if ( v23 <= 0 )
      goto LABEL_18;
    goto LABEL_16;
  }
  return result;
}

