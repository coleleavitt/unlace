char __fastcall sub_525790(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 i; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r10
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  const char *v22; // rsi
  char *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  const char *v27; // rsi
  char *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  char *v32; // r12
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43[2]; // [rsp+10h] [rbp-B8h]
  __int64 v44; // [rsp+18h] [rbp-B0h]
  __int128 v45; // [rsp+20h] [rbp-A8h] BYREF
  char *s1; // [rsp+30h] [rbp-98h] BYREF
  __int128 v47; // [rsp+38h] [rbp-90h]
  char *v48; // [rsp+50h] [rbp-78h] BYREF
  __int128 v49; // [rsp+58h] [rbp-70h]
  char *v50; // [rsp+70h] [rbp-58h] BYREF
  __int128 v51; // [rsp+78h] [rbp-50h]
  int v52[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v52 = __readfsqword(0x28u);
  sub_7BEFF0(&v50, a2, "$ scriptsnippets", 0, 0);
  if ( v50 == (char *)-1LL )
    return 1;
  v5 = *(_QWORD *)(a2 + 1784);
  *(_QWORD *)v43 = a3[1];
  if ( !*(_DWORD *)(v5 + 64) )
    *(_DWORD *)(v5 + 64) = sub_524CE0((__int64 *)v5);
  v6 = *(_QWORD **)(a2 + 1672);
  v45 = 0;
  sub_630CA0(*v6, 26, &v45, 16);
  v7 = *(_QWORD *)(v5 + 8);
  if ( v7 == -1 || !(unsigned __int8)sub_42DA80(a2, v7, (unsigned __int64 *)&v45) )
  {
    v8 = a3[1];
    v9 = *a3;
    if ( a3[2] < (unsigned __int64)(v8 + 1) )
    {
      v42 = qvector_reserve(a3, v9, v8 + 1, 24);
      v8 = a3[1];
      *a3 = v42;
      v9 = v42;
    }
    v10 = v9 + 24 * v8;
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    ++a3[1];
    sub_35A790((char **)v10);
  }
  v44 = v5;
  for ( i = 0; ; ++i )
  {
    v12 = sub_7BE710(v5 + 8, a2, i, 65);
    if ( !v12 )
      break;
    if ( !(unsigned __int8)sub_42DA80(a2, v12 - 1, (unsigned __int64 *)&v45) )
    {
      v13 = a3[1];
      v14 = *a3;
      if ( a3[2] < (unsigned __int64)(v13 + 1) )
      {
        v34 = qvector_reserve(a3, v14, v13 + 1, 24);
        v13 = a3[1];
        *a3 = v34;
        v14 = v34;
      }
      v15 = v14 + 24 * v13;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      ++a3[1];
      sub_35A790((char **)v15);
    }
  }
  if ( *(_DWORD *)(v5 + 64) != 3 )
  {
    v16 = *(_QWORD *)(v5 + 16);
    v17 = v16 + 72LL * *(_QWORD *)(v5 + 24);
    if ( v16 != v17 )
    {
      v18 = *(_QWORD *)(v44 + 16);
      while ( 1 )
      {
        if ( (unsigned __int8)sub_42DA80(a2, *(_QWORD *)(v18 + 56), (unsigned __int64 *)&v45) )
        {
          if ( !*(_BYTE *)(v18 + 64) )
            goto LABEL_25;
LABEL_20:
          v18 += 72;
          if ( v17 == v18 )
            return a3[1] == v43[0];
        }
        else
        {
          v19 = a3[1];
          v20 = *a3;
          if ( a3[2] < (unsigned __int64)(v19 + 1) )
          {
            v35 = qvector_reserve(a3, v20, v19 + 1, 24);
            v19 = a3[1];
            *a3 = v35;
            v20 = v35;
          }
          v21 = v20 + 24 * v19;
          *(_QWORD *)v21 = 0;
          *(_OWORD *)(v21 + 8) = 0;
          ++a3[1];
          sub_35A790((char **)v21);
          if ( *(_BYTE *)(v18 + 64) )
            goto LABEL_20;
LABEL_25:
          s1 = nullptr;
          v47 = 0;
          sub_7BEA80(v18 + 56, a2, &s1, 0, 83);
          if ( *(_QWORD *)(v18 + 8) )
          {
            v22 = *(const char **)v18;
            v23 = (char *)haystack;
            if ( !(_QWORD)v47 )
              goto LABEL_28;
          }
          else
          {
            v22 = haystack;
            if ( !(_QWORD)v47 )
              goto LABEL_32;
          }
          v23 = s1;
LABEL_28:
          if ( strcmp(v23, v22) )
          {
            v24 = a3[1];
            v25 = *a3;
            if ( a3[2] < (unsigned __int64)(v24 + 1) )
            {
              v41 = qvector_reserve(a3, v25, v24 + 1, 24);
              *a3 = v41;
              v24 = a3[1];
              v25 = v41;
            }
            v26 = v25 + 24 * v24;
            *(_QWORD *)v26 = 0;
            *(_OWORD *)(v26 + 8) = 0;
            ++a3[1];
            sub_35A790((char **)v26);
          }
LABEL_32:
          v48 = nullptr;
          v49 = 0;
          sub_7BEED0(v18 + 56, a2, &v48, 1, 0, 1112);
          if ( *(_QWORD *)(v18 + 40) )
          {
            v27 = *(const char **)(v18 + 32);
            v28 = (char *)haystack;
            if ( !(_QWORD)v49 )
              goto LABEL_35;
          }
          else
          {
            v27 = haystack;
            if ( !(_QWORD)v49 )
              goto LABEL_39;
          }
          v28 = v48;
LABEL_35:
          if ( strcmp(v28, v27) )
          {
            v29 = a3[1];
            v30 = *a3;
            if ( a3[2] < (unsigned __int64)(v29 + 1) )
            {
              v40 = qvector_reserve(a3, v30, v29 + 1, 24);
              *a3 = v40;
              v29 = a3[1];
              v30 = v40;
            }
            v31 = v30 + 24 * v29;
            *(_QWORD *)v31 = 0;
            *(_OWORD *)(v31 + 8) = 0;
            ++a3[1];
            sub_35A790((char **)v31);
          }
LABEL_39:
          v51 = 0;
          v50 = nullptr;
          sub_7BEA80(v18 + 56, a2, &v50, 1, 83);
          v32 = v50;
          if ( (unsigned __int64)v51 > 1 && strcmp(v50, *(const char **)(*(_QWORD *)(v18 + 24) + 16LL)) )
          {
            v36 = a3[1];
            v37 = *a3;
            if ( a3[2] < (unsigned __int64)(v36 + 1) )
            {
              v39 = qvector_reserve(a3, v37, v36 + 1, 24);
              *a3 = v39;
              v36 = a3[1];
              v37 = v39;
            }
            v38 = v37 + 24 * v36;
            *(_QWORD *)v38 = 0;
            *(_OWORD *)(v38 + 8) = 0;
            ++a3[1];
            sub_35A790((char **)v38);
            v32 = v50;
          }
          if ( v32 )
          {
            *(_QWORD *)&v51 = 0;
            qfree(v32);
          }
          if ( v48 )
          {
            *(_QWORD *)&v49 = 0;
            qfree(v48);
          }
          if ( !s1 )
            goto LABEL_20;
          *(_QWORD *)&v47 = 0;
          v18 += 72;
          qfree(s1);
          if ( v17 == v18 )
            return a3[1] == v43[0];
        }
      }
    }
  }
  return a3[1] == v43[0];
}
