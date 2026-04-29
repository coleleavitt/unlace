unsigned __int64 __fastcall sub_688C0(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int *v8; // rax
  int *v9; // rbx
  unsigned int v10; // r12d
  int v11; // eax
  int v12; // r8d
  __int64 v13; // r12
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rbx
  _DWORD *v17; // rax
  int v18; // r9d
  _QWORD *v19; // r12
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rbx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  bool v36; // cf
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  _QWORD *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-78h]
  __int64 v55; // [rsp+0h] [rbp-78h]
  __int64 v56; // [rsp+0h] [rbp-78h]
  int v57; // [rsp+0h] [rbp-78h]
  unsigned __int64 v58; // [rsp+0h] [rbp-78h]
  int v59; // [rsp+0h] [rbp-78h]
  unsigned __int64 v60; // [rsp+0h] [rbp-78h]
  int v61; // [rsp+8h] [rbp-70h]
  int v62; // [rsp+8h] [rbp-70h]
  int v63; // [rsp+Ch] [rbp-6Ch]
  int v64; // [rsp+Ch] [rbp-6Ch]
  int v65; // [rsp+18h] [rbp-60h] BYREF
  int v66; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 *v67; // [rsp+20h] [rbp-58h] BYREF
  __int128 v68; // [rsp+28h] [rbp-50h]
  unsigned __int64 v69; // [rsp+38h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v68 = 0;
  v67 = nullptr;
  sub_5FF90(a1, a3);
  v30 = qvector_reserve(&v67, 0, v68 + 1, 8);
  v31 = v67;
  v32 = *((_QWORD *)&v68 + 1);
  *((_QWORD *)&v68 + 1) = 0;
  v33 = v68 - 1;
  if ( (__int64)v68 - 1 >= 0 )
  {
    v34 = v30;
    do
    {
      v35 = *v31;
      v34 += 8;
      ++v31;
      *(_QWORD *)(v34 - 8) = v35;
      v36 = v33-- == 0;
    }
    while ( !v36 );
    v31 = v67;
  }
  v54 = v32;
  qfree(v31);
  v67 = (__int64 *)v30;
  *((_QWORD *)&v68 + 1) = v54;
  v8 = (int *)(v30 + 8 * v68);
  *v8 = a3;
  v8[1] = 0;
  v15 = v68 + 1;
  *(_QWORD *)&v68 = v68 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = (int *)&v67[v15 - 1];
      v10 = v9[1];
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, (unsigned int)*v9);
      v12 = *v9;
      if ( v10 == v11 )
        break;
      v13 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 112LL))(
              a2,
              (unsigned int)v12,
              (unsigned int)v9[1]++);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 152LL))(
             a2,
             (unsigned int)*v9,
             v13) )
      {
        goto LABEL_13;
      }
      v14 = sub_5FF90(a1, v13);
      v15 = v68;
      if ( v14 )
      {
        if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
        {
          v55 = *((_QWORD *)&v68 + 1);
          v16 = qvector_reserve(&v67, 0, v68 + 1, 8);
          v37 = v67;
          v38 = *((_QWORD *)&v68 + 1);
          *((_QWORD *)&v68 + 1) = v55;
          v39 = v68 - 1;
          if ( (__int64)v68 - 1 >= 0 )
          {
            v40 = v16;
            do
            {
              v41 = *v37;
              v40 += 8;
              ++v37;
              *(_QWORD *)(v40 - 8) = v41;
              v36 = v39-- == 0;
            }
            while ( !v36 );
            v37 = v67;
          }
          v56 = v38;
          qfree(v37);
          v15 = v68;
          v67 = (__int64 *)v16;
          *((_QWORD *)&v68 + 1) = v56;
        }
        else
        {
          v16 = (__int64)v67;
        }
        v17 = (_DWORD *)(v16 + 8 * v15);
        *v17 = v13;
        v17[1] = 0;
        v15 = v68 + 1;
        *(_QWORD *)&v68 = v68 + 1;
      }
    }
    v18 = *(_DWORD *)(a4 + 16);
    v19 = *(_QWORD **)(a4 + 24);
    v20 = v18 + 1;
    if ( !(_QWORD)v68 )
      break;
    v15 = v68 - 1;
    *(_QWORD *)&v68 = v15;
    if ( !v15 )
      break;
    *(_DWORD *)(a4 + 16) = v20;
    v21 = v19[4];
    if ( v21 )
    {
LABEL_11:
      if ( v18 < 0 || (unsigned __int64)v18 >= v19[1] || v12 < 0 || (unsigned __int64)v12 >= v19[4] )
      {
LABEL_13:
        v15 = v68;
      }
      else
      {
        *(_DWORD *)(*v19 + 4LL * v18) = v12;
        *(_DWORD *)(v19[3] + 4LL * v12) = v18;
        v15 = v68;
      }
    }
    else
    {
      v44 = v19[1];
      v65 = -1;
      if ( v44 )
      {
        v45 = v19[3];
        v46 = v19[5];
        v47 = v19 + 3;
        if ( (unsigned __int64)&v65 < v45 || (unsigned __int64)&v65 >= v45 + 4 * v46 )
        {
          v50 = 0;
          if ( v46 >= v44
            || (v63 = v12,
                v61 = v18,
                v58 = v44,
                v51 = qvector_reserve(v47, v45, v44, 4),
                v19[3] = v51,
                v44 = v58,
                v45 = v51,
                v50 = v19[4],
                v18 = v61,
                v12 = v63,
                v50 < v58) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v45 + 4 * v50++) = -1;
              if ( v50 == v44 )
                break;
              v45 = v19[3];
            }
          }
        }
        else
        {
          v48 = 0;
          if ( v46 >= v44
            || (v64 = v12,
                v62 = v18,
                v60 = v44,
                v53 = qvector_reserve(v47, v45, v44, 4),
                v19[3] = v53,
                v44 = v60,
                v45 = v53,
                v48 = v19[4],
                v18 = v62,
                v12 = v64,
                v48 < v60) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v45 + 4 * v48++) = -1;
              if ( v48 == v44 )
                break;
              v45 = v19[3];
            }
          }
        }
        v19[4] = v44;
        do
        {
          v49 = *(int *)(*v19 + 4 * v21);
          if ( (_DWORD)v49 != -1 )
            *(_DWORD *)(v19[3] + 4 * v49) = v21;
          ++v21;
        }
        while ( v21 != v44 );
        goto LABEL_11;
      }
    }
  }
  *(_DWORD *)(a4 + 16) = v20;
  v22 = v19[4];
  if ( v22 )
    goto LABEL_15;
  v24 = v19[1];
  v66 = -1;
  if ( v24 )
  {
    v25 = v19[3];
    v26 = v19[5];
    v27 = v19 + 3;
    if ( (unsigned __int64)&v66 < v25 || (unsigned __int64)&v66 >= v25 + 4 * v26 )
    {
      v42 = 0;
      if ( v26 >= v24
        || (v57 = v18,
            v43 = qvector_reserve(v27, v25, v24, 4),
            v42 = v19[4],
            v18 = v57,
            v19[3] = v43,
            v25 = v43,
            v42 < v24) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v25 + 4 * v42++) = -1;
          if ( v24 == v42 )
            break;
          v25 = v19[3];
        }
      }
    }
    else
    {
      v28 = 0;
      if ( v26 >= v24
        || (v59 = v18,
            v52 = qvector_reserve(v27, v25, v24, 4),
            v19[3] = v52,
            v25 = v52,
            v28 = v19[4],
            v18 = v59,
            v28 < v24) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v25 + 4 * v28++) = -1;
          if ( v24 == v28 )
            break;
          v25 = v19[3];
        }
      }
    }
    v19[4] = v24;
    do
    {
      v29 = *(int *)(*v19 + 4 * v22);
      if ( (_DWORD)v29 != -1 )
        *(_DWORD *)(v19[3] + 4 * v29) = v22;
      ++v22;
    }
    while ( v24 != v22 );
LABEL_15:
    if ( v18 >= 0 && (unsigned __int64)v18 < v19[1] && a3 >= 0 && (unsigned __int64)a3 < v19[4] )
    {
      *(_DWORD *)(*v19 + 4LL * v18) = a3;
      *(_DWORD *)(v19[3] + 4LL * a3) = v18;
    }
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  return v69 - __readfsqword(0x28u);
}
