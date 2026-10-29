__int64 __fastcall sub_6E9E50(__int64 *a1, __int64 *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int *v9; // rbp
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v28; // [rsp+8h] [rbp-F0h]
  __int64 v30; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v31; // [rsp+20h] [rbp-D8h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-D0h]
  __int64 v33; // [rsp+30h] [rbp-C8h]
  __int64 v34; // [rsp+38h] [rbp-C0h]
  __int64 v35; // [rsp+40h] [rbp-B8h]
  int v36; // [rsp+4Ch] [rbp-ACh]
  unsigned __int64 v37; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-98h] BYREF
  __int64 v39; // [rsp+68h] [rbp-90h] BYREF
  __int64 v40; // [rsp+70h] [rbp-88h] BYREF
  unsigned int *v41; // [rsp+78h] [rbp-80h] BYREF
  __m128 v42; // [rsp+80h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-68h] BYREF
  __int64 v44; // [rsp+98h] [rbp-60h]
  _QWORD v45[11]; // [rsp+A0h] [rbp-58h] BYREF

  v34 = a4;
  v35 = a5;
  if ( a3 )
  {
    v30 = a2[2];
    if ( !v30 )
    {
      sub_6E03A0(a2, "sup", a2 + 2);
      v30 = a2[2];
    }
  }
  else
  {
    v30 = *a2;
    if ( !*a2 )
    {
      sub_6E03A0(a2, "inf", a2);
      v30 = *a2;
    }
  }
  v6 = *a1;
  v45[1] = a1;
  v31 = v6;
  v40 = v6;
  v45[0] = off_1C53298;
  v45[2] = v30;
  v7 = a2[6];
  if ( !v7 )
  {
    v9 = nullptr;
    v8 = 0;
    if ( v34 )
    {
LABEL_24:
      v42 = _mm_loadh_ps((const double *)&v31);
      sub_6E27D0((__int64)v45, v34, (__int64 *)&v42);
      __SET_PAIR__(v31, v8, *(_OWORD *)&v42);
      v37 = v42.m128_u64[0];
      if ( v42.m128_u64[0] )
      {
        ++*(_DWORD *)(v42.m128_u64[0] + 8);
        sub_6DE970((unsigned int **)(a6 + 8), &v37);
        ++*(_DWORD *)(v8 + 8);
        v38 = v8;
      }
      else
      {
        sub_6DE970((unsigned int **)(a6 + 8), &v37);
        v38 = 0;
      }
      v41 = v9;
      sub_6DE920(&v41, &v38);
      v9 = v41;
      goto LABEL_27;
    }
    goto LABEL_53;
  }
  v8 = 0;
  v9 = nullptr;
  v10 = 0;
  v32 = &v43;
  while ( v10 < *(_DWORD *)(v7 - 4) )
  {
    if ( *(_DWORD *)(a2[8] + 4LL * v10) != 2 )
    {
      v11 = *a1;
      v12 = a2[7] + 16LL * v10;
      v43 = 0;
      v44 = v11;
      sub_6E2420(a1, v30, v12, v32);
      v28 = v43;
      v33 = v44;
      v17 = sub_6E15B0((_DWORD)a1, v43, v13, v14, v15, v16);
      v18 = v17;
      if ( v17 )
      {
        v19 = *(_DWORD *)(v17 + 8) + 1;
        *(_DWORD *)(v18 + 8) = v19;
        if ( v8 )
        {
          v20 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( !v20 )
          {
            v21 = v28;
            if ( !v28 || (v36 = *(_DWORD *)(v28 + 8), v20 = v36 == 1, *(_DWORD *)(v28 + 8) = v36 - 1, !v20) )
            {
LABEL_13:
              v19 = *(_DWORD *)(v18 + 8);
              goto LABEL_14;
            }
LABEL_46:
            sub_15D7BC0(v33, v21);
            goto LABEL_13;
          }
          sub_15D7BC0(v31, v8);
          if ( !v28 )
            goto LABEL_13;
LABEL_48:
          v36 = *(_DWORD *)(v28 + 8);
          v20 = v36 == 1;
          *(_DWORD *)(v28 + 8) = v36 - 1;
          if ( !v20 )
          {
LABEL_49:
            if ( v18 )
              goto LABEL_13;
            goto LABEL_15;
          }
LABEL_38:
          sub_15D7BC0(v33, v28);
          goto LABEL_49;
        }
        v21 = v28;
        if ( v28 )
        {
          v36 = *(_DWORD *)(v28 + 8);
          v20 = v36 == 1;
          *(_DWORD *)(v28 + 8) = v36 - 1;
          if ( !v20 )
            goto LABEL_13;
          goto LABEL_46;
        }
LABEL_14:
        *(_DWORD *)(v18 + 8) = v19 + 1;
      }
      else
      {
        if ( !v8 )
        {
          if ( v28 )
          {
            v36 = *(_DWORD *)(v28 + 8);
            v20 = v36 == 1;
            *(_DWORD *)(v28 + 8) = v36 - 1;
            if ( v20 )
              sub_15D7BC0(v33, v28);
          }
          goto LABEL_15;
        }
        v20 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( !v20 )
        {
          if ( !v28 )
            goto LABEL_15;
          v36 = *(_DWORD *)(v28 + 8);
          v20 = v36 == 1;
          *(_DWORD *)(v28 + 8) = v36 - 1;
          if ( !v20 )
            goto LABEL_15;
          goto LABEL_38;
        }
        sub_15D7BC0(v31, v8);
        if ( v28 )
          goto LABEL_48;
      }
LABEL_15:
      v22 = *(_QWORD *)(a6 + 8);
      if ( !v22 || (v23 = *(_DWORD *)(v22 - 4), v23 == *(_DWORD *)(v22 - 8)) )
      {
        sub_3A6B20((unsigned int **)(a6 + 8));
        v22 = *(_QWORD *)(a6 + 8);
        v23 = *(_DWORD *)(v22 - 4);
      }
      *(_QWORD *)(v22 + 8LL * v23) = v18;
      *(_DWORD *)(v22 - 4) = v23 + 1;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      if ( !v9 || (v24 = *(v9 - 1), v24 == *(v9 - 2)) )
      {
        v41 = v9;
        sub_23A6F0(&v41);
        v9 = v41;
        v24 = *(v41 - 1);
      }
      v8 = v18;
      *(_QWORD *)&v9[2 * v24] = v18;
      *(v9 - 1) = v24 + 1;
      v7 = a2[6];
    }
    ++v10;
    if ( !v7 )
      break;
  }
  if ( v34 )
    goto LABEL_24;
LABEL_27:
  if ( v9 )
  {
    v25 = *(v9 - 1);
    goto LABEL_29;
  }
LABEL_53:
  v25 = 0;
LABEL_29:
  v26 = sub_6E1880(a1, v25, v9);
  v39 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_6DE920((unsigned int **)(v35 + 8), &v39);
  sub_6DE2A0(v8, v31);
  v41 = v9;
  return sub_2334C0(&v40);
}

