unsigned __int64 __fastcall sub_11B60(__int64 a1, const char *a2)
{
  __int64 v3; // r12
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  char *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r14
  const char *v15; // rdi
  __int64 v16; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbp
  bool v25; // cc
  __int64 v26; // r12
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rax
  const char *v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+8h] [rbp-260h] BYREF
  char *v41; // [rsp+10h] [rbp-258h] BYREF
  __int128 v42; // [rsp+18h] [rbp-250h]
  char s1[72]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v44; // [rsp+78h] [rbp-1F0h]
  unsigned __int64 v45; // [rsp+238h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 88);
  v45 = __readfsqword(0x28u);
  if ( v3 && *(_QWORD *)(a1 + 96) )
  {
    v18 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 752) = v18;
    if ( v3 != qlseek(v18, v3, 0) )
      return v45 - __readfsqword(0x28u);
    goto LABEL_18;
  }
  if ( !a2 )
    return v45 - __readfsqword(0x28u);
  v41 = nullptr;
  v42 = 0;
  v4 = strlen(a2);
  v5 = v4 + 1;
  v6 = v4;
  v41 = (char *)qvector_reserve(&v41, 0, v4 + 1, 1, v7, v8);
  *(_QWORD *)&v42 = v5;
  memmove(v41, a2, v6);
  v41[v6] = 0;
  v11 = v42;
  if ( (_QWORD)v42 )
  {
    v14 = v42 + 7;
    v13 = v42 + 8;
    v12 = v41;
    v11 = v42 - 1;
    if ( *((_QWORD *)&v42 + 1) >= (unsigned __int64)(v42 + 8) )
      goto LABEL_6;
  }
  else
  {
    v12 = v41;
    v13 = 9;
    v14 = 8;
    if ( *((_QWORD *)&v42 + 1) >= 9u )
      goto LABEL_6;
  }
  v41 = (char *)qvector_reserve(&v41, v12, v13, 1, v9, v10);
  v12 = v41;
LABEL_6:
  *(_QWORD *)&v42 = v13;
  v15 = byte_190C8;
  v12[v14] = 0;
  *(_QWORD *)&v41[v11] = 0x736C6F626D79732ELL;
  if ( (_QWORD)v42 )
    v15 = v41;
  v16 = open_linput(v15, 0);
  *(_QWORD *)(a1 + 752) = v16;
  if ( v16 )
  {
    *(_BYTE *)(a1 + 775) = 1;
    if ( qlread(v16, s1, 512) == 512 )
    {
      if ( !strncmp(s1, (const char *)(a1 + 16), 0x10u) )
      {
        v3 = v44;
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
        if ( v3 != qlseek(*(_QWORD *)(a1 + 752), v3, 0) )
          return v45 - __readfsqword(0x28u);
LABEL_18:
        if ( qlread(*(_QWORD *)(a1 + 752), &v41, 24) == 24 )
        {
          v19 = DWORD1(v42);
          v20 = *(_QWORD *)(a1 + 752);
          v21 = v3 + (unsigned int)v42;
          *(_QWORD *)(a1 + 808) = v3 + (unsigned int)v41;
          *(_QWORD *)(a1 + 816) = HIDWORD(v41);
          v22 = sub_11AE0(v20, v21, v19, 1);
          v23 = DWORD2(v42);
          *(_QWORD *)(a1 + 824) = v22;
          *(_QWORD *)(a1 + 776) = v22;
          v24 = v3 + v23;
          v25 = *(_DWORD *)(a1 + 32) <= 0x187u;
          v26 = *(_QWORD *)(a1 + 752);
          v40 = HIDWORD(v42);
          if ( v25 )
          {
            if ( HIDWORD(v42) )
            {
              if ( v24 != -1 )
                qlseek(v26, v24, 0);
              sub_116F0(v26, &v40, 0xCu, (__int64)"local symbols size", v24, -1);
              v34 = v40;
              v35 = *(_QWORD *)(a1 + 712);
              if ( v35 < v40 )
              {
                v36 = *(_QWORD *)(a1 + 704);
                if ( *(_QWORD *)(a1 + 720) < v40 )
                {
                  v38 = qvector_reserve(a1 + 704, v36, v40, 12, v32, v33);
                  *(_QWORD *)(a1 + 704) = v38;
                  v36 = v38;
                  v35 = *(_QWORD *)(a1 + 712);
                }
                memset((void *)(v36 + 12 * v35), 0, 12 * (v34 - v35));
                *(_QWORD *)(a1 + 712) = v34;
              }
              else if ( v40 != v35 )
              {
                *(_QWORD *)(a1 + 712) = v40;
              }
              qlread(v26, *(_QWORD *)(a1 + 704), 12 * v34);
            }
          }
          else if ( HIDWORD(v42) )
          {
            if ( v24 != -1 )
              qlseek(v26, v24, 0);
            sub_116F0(v26, &v40, 0x10u, (__int64)"local symbols size", v24, -1);
            v29 = v40;
            v30 = *(_QWORD *)(a1 + 736);
            if ( v30 < v40 )
            {
              v37 = *(_QWORD *)(a1 + 728);
              if ( *(_QWORD *)(a1 + 744) < v40 )
              {
                v39 = qvector_reserve(a1 + 728, v37, v40, 16, v27, v28);
                *(_QWORD *)(a1 + 728) = v39;
                v37 = v39;
                v30 = *(_QWORD *)(a1 + 736);
              }
              memset((void *)(v37 + 16 * v30), 0, 16 * (v29 - v30));
              *(_QWORD *)(a1 + 736) = v29;
            }
            else if ( v40 != v30 )
            {
              *(_QWORD *)(a1 + 736) = v40;
            }
            qlread(v26, *(_QWORD *)(a1 + 728), 16 * v29);
          }
        }
        return v45 - __readfsqword(0x28u);
      }
      v31 = byte_190C8;
      if ( (_QWORD)v42 )
        v31 = v41;
      sub_7F80((__int64)"Error loading %s: magic does not match\n", v31);
    }
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  return v45 - __readfsqword(0x28u);
}
