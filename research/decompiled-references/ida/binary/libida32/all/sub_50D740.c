char __fastcall sub_50D740(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r13
  _QWORD *v6; // rax
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int i; // r12d
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r10
  __int64 v17; // r12
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
  char *v32; // r13
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
  __int64 v44; // [rsp+28h] [rbp-A0h] BYREF
  char *s1; // [rsp+30h] [rbp-98h] BYREF
  __int128 v46; // [rsp+38h] [rbp-90h]
  char *v47; // [rsp+50h] [rbp-78h] BYREF
  __int128 v48; // [rsp+58h] [rbp-70h]
  char *v49; // [rsp+70h] [rbp-58h] BYREF
  __int128 v50; // [rsp+78h] [rbp-50h]
  int v51[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v51 = __readfsqword(0x28u);
  sub_79BBF0(&v49, a2, "$ scriptsnippets", 0, 0);
  if ( (_DWORD)v49 == -1 )
    return 1;
  v5 = *(_QWORD *)(a2 + 1592);
  *(_QWORD *)v43 = a3[1];
  if ( !*(_DWORD *)(v5 + 64) )
    *(_DWORD *)(v5 + 64) = sub_50CCA0((__int64 *)v5);
  v6 = *(_QWORD **)(a2 + 1480);
  v44 = 0;
  sub_6141A0(*v6, 26, &v44, 8);
  v7 = *(_DWORD *)(v5 + 8);
  if ( v7 == -1 || !(unsigned __int8)sub_419E50(a2, v7, (unsigned int *)&v44) )
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
    sub_3573A0((char **)v10);
  }
  for ( i = 0; ; ++i )
  {
    v12 = sub_79B3A0(v5 + 8, a2, i, 65);
    if ( !v12 )
      break;
    if ( !(unsigned __int8)sub_419E50(a2, v12 - 1, (unsigned int *)&v44) )
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
      sub_3573A0((char **)v15);
    }
  }
  if ( *(_DWORD *)(v5 + 64) != 3 )
  {
    v16 = *(_QWORD *)(v5 + 16);
    v17 = v16 + (*(_QWORD *)(v5 + 24) << 6);
    if ( v16 != v17 )
    {
      v18 = *(_QWORD *)(v5 + 16);
      while ( 1 )
      {
        if ( (unsigned __int8)sub_419E50(a2, *(_DWORD *)(v18 + 56), (unsigned int *)&v44) )
        {
          if ( !*(_BYTE *)(v18 + 60) )
            goto LABEL_25;
LABEL_20:
          v18 += 64;
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
          sub_3573A0((char **)v21);
          if ( *(_BYTE *)(v18 + 60) )
            goto LABEL_20;
LABEL_25:
          s1 = nullptr;
          v46 = 0;
          sub_79B6F0(v18 + 56, a2, &s1, 0, 83);
          if ( *(_QWORD *)(v18 + 8) )
          {
            v22 = *(const char **)v18;
            v23 = (char *)haystack;
            if ( !(_QWORD)v46 )
              goto LABEL_28;
          }
          else
          {
            v22 = haystack;
            if ( !(_QWORD)v46 )
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
            sub_3573A0((char **)v26);
          }
LABEL_32:
          v47 = nullptr;
          v48 = 0;
          sub_79BAE0(v18 + 56, a2, &v47, 1, 0, 1112);
          if ( *(_QWORD *)(v18 + 40) )
          {
            v27 = *(const char **)(v18 + 32);
            v28 = (char *)haystack;
            if ( !(_QWORD)v48 )
              goto LABEL_35;
          }
          else
          {
            v27 = haystack;
            if ( !(_QWORD)v48 )
              goto LABEL_39;
          }
          v28 = v47;
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
            sub_3573A0((char **)v31);
          }
LABEL_39:
          v50 = 0;
          v49 = nullptr;
          sub_79B6F0(v18 + 56, a2, &v49, 1, 83);
          v32 = v49;
          if ( (unsigned __int64)v50 > 1 && strcmp(v49, *(const char **)(*(_QWORD *)(v18 + 24) + 16LL)) )
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
            sub_3573A0((char **)v38);
            v32 = v49;
          }
          if ( v32 )
          {
            *(_QWORD *)&v50 = 0;
            qfree(v32);
          }
          if ( v47 )
          {
            *(_QWORD *)&v48 = 0;
            qfree(v47);
          }
          if ( !s1 )
            goto LABEL_20;
          *(_QWORD *)&v46 = 0;
          v18 += 64;
          qfree(s1);
          if ( v17 == v18 )
            return a3[1] == v43[0];
        }
      }
    }
  }
  return a3[1] == v43[0];
}

