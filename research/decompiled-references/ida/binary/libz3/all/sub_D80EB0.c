__int64 __fastcall sub_D80EB0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  const __m128i *v26; // rax
  __int64 v27; // r12
  int *v28; // rax
  int v29; // r14d
  int v30; // r13d
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // [rsp+0h] [rbp-A0h]
  int v39; // [rsp+8h] [rbp-98h]
  int v40; // [rsp+10h] [rbp-90h]
  int v41; // [rsp+18h] [rbp-88h]
  int v42; // [rsp+20h] [rbp-80h]
  __int64 v43; // [rsp+28h] [rbp-78h]
  __int64 v44; // [rsp+28h] [rbp-78h]
  int v45; // [rsp+30h] [rbp-70h]
  int v46[2]; // [rsp+38h] [rbp-68h] BYREF
  int v47[2]; // [rsp+40h] [rbp-60h] BYREF
  int v48[2]; // [rsp+48h] [rbp-58h] BYREF
  __m128i v49; // [rsp+50h] [rbp-50h] BYREF
  __int64 v50; // [rsp+60h] [rbp-40h] BYREF
  __int64 v51; // [rsp+68h] [rbp-38h]

  v9 = *(unsigned int *)(a1 + 536);
  v43 = a1;
  v10 = *(__int64 **)(a1 + 528);
  v11 = *(_DWORD *)(a2 + 12);
  v12 = v9 - 1;
  v9 *= 16;
  v13 = (__int64 *)((char *)v10 + v9);
  v14 = 16LL * (v11 & v12);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 != v9 )
  {
    v16 = &v10[(unsigned __int64)v14 / 8];
    while ( 1 )
    {
      v17 = *v16;
      if ( (unsigned __int64)*v16 > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v11 && a2 == v17 )
        {
LABEL_10:
          result = v16[1];
          v19 = result;
          if ( result )
            ++*(_DWORD *)(result + 8);
          v20 = *a3;
          if ( *a3 )
          {
            v21 = a3[1];
            v22 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( v22 )
              result = sub_15D7BC0(v21, v20);
          }
          *a3 = v19;
          return result;
        }
      }
      else if ( !v17 )
      {
        v43 = a1;
        goto LABEL_25;
      }
      v16 += 2;
      if ( v13 == v16 )
      {
        v43 = a1;
        break;
      }
    }
  }
  while ( v15 != v10 )
  {
    v23 = *v10;
    if ( (unsigned __int64)*v10 > 1 )
    {
      if ( *(_DWORD *)(v23 + 12) == v11 && a2 == v23 )
      {
        v16 = v10;
        goto LABEL_10;
      }
    }
    else if ( !v23 )
    {
      break;
    }
    v10 += 2;
  }
LABEL_25:
  v24 = v43;
  v25 = *(_QWORD *)(a2 + 40);
  v26 = (const __m128i *)sub_15DC610(
                           *(_QWORD *)(v43 + 8),
                           a2,
                           0,
                           0,
                           (int)v15,
                           a6,
                           *(_QWORD *)(v43 + 8),
                           v39,
                           v40,
                           v41,
                           v42,
                           v43,
                           v45,
                           v46[0],
                           v47[0],
                           *(void **)v48);
  sub_D56BF0(v49.m128i_i64, v24, v26);
  v27 = v49.m128i_i64[0];
  if ( v49.m128i_i64[0] && !*(_DWORD *)(v49.m128i_i64[0] + 8) )
    sub_15D7BC0(v49.m128i_i64[1], v49.m128i_i64[0]);
  v28 = *(int **)(*(_QWORD *)(sub_15D1F10(v27) + 24) + 8LL);
  if ( *((_BYTE *)v28 + 8) )
    sub_DBF6E(0);
  v29 = *v28;
  v30 = sub_15C5560(v44 + 432, v25);
  *(_QWORD *)v46 = v27;
  v49.m128i_i32[0] = v30 - 2;
  v49.m128i_i8[8] = 0;
  v31 = *(_QWORD *)(v44 + 240);
  v50 = 0;
  v51 = 0;
  sub_15DCAD0(v31, (int)v46, 0);
  sub_15D0DF0(&v50);
  sub_15D0DF0(&v49);
  *(_QWORD *)v47 = v27;
  v49.m128i_i32[0] = v29 - 2;
  v49.m128i_i8[8] = 0;
  v32 = *(_QWORD *)(v44 + 240);
  LODWORD(v50) = v30 - 1;
  LOBYTE(v51) = 0;
  sub_15DCAD0(v32, (int)v47, 0);
  sub_15D0DF0(&v50);
  sub_15D0DF0(&v49);
  *(_QWORD *)v48 = v27;
  v49.m128i_i32[0] = v29 - 1;
  v33 = *(_QWORD *)(v44 + 240);
  v49.m128i_i8[8] = 0;
  LODWORD(v50) = v29 - 1;
  LOBYTE(v51) = 0;
  sub_15DCAD0(v33, (int)v48, 0);
  sub_15D0DF0(&v50);
  sub_15D0DF0(&v49);
  v34 = sub_15E1BF0(*(_QWORD *)(v44 + 432));
  v35 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v36 = *a3;
  if ( *a3 )
  {
    v37 = a3[1];
    v22 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v37, v36);
  }
  *a3 = v35;
  v49.m128i_i64[0] = a2;
  v49.m128i_i64[1] = v35;
  sub_2FF2A0(v44 + 528, &v49);
  result = *a3;
  ++*(_DWORD *)(a2 + 8);
  if ( result )
    ++*(_DWORD *)(result + 8);
  v22 = (*(_DWORD *)(v27 + 8))-- == 1;
  if ( v22 )
    return sub_15D7BC0(v38, v27);
  return result;
}

