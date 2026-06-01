__int64 __fastcall sub_F44410(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rbp
  unsigned __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r15
  size_t v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  size_t v40; // rax
  __int64 v41; // r14
  size_t v42; // rax

  v5 = a2;
  v6 = a1;
  if ( *(_BYTE *)(a1 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    v6 = sub_F3F130(a1);
    if ( !v6 )
      return 0;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 35 > 1 )
  {
    v7 = sub_F3F130(v7);
    v8 = *(unsigned __int8 *)(v7 + 19);
    LOBYTE(v8) = (unsigned __int8)v8 >> 2;
    if ( (_BYTE)v8 )
      goto LABEL_6;
  }
  else
  {
    v8 = *(unsigned __int8 *)(v7 + 19);
    LOBYTE(v8) = (unsigned __int8)v8 >> 2;
    if ( (_BYTE)v8 )
      goto LABEL_6;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) != 13
    || (v8 = *(unsigned __int16 *)(v9 + 18),
        result = 1,
        LOWORD(v8) = ((unsigned __int16)v8 >> 3) & 0x1FF,
        (_WORD)v8 != 489) )
  {
LABEL_6:
    v11 = sub_A3AA80(v6, (__int64)a2, v8, a4, a5);
    v15 = sub_9A4000(v11, (__int64)a2, v12, v13, v14);
    if ( !v15 )
    {
      v37 = sub_A3AA80(v6, (__int64)a2, v16, v17, v18);
      v16 = *(unsigned __int8 *)(v37 + 19);
      LOBYTE(v16) = (unsigned __int8)v16 >> 2;
      if ( (_BYTE)v16 )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v38 + 16) == 13 && ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) == 0x1E9 )
        {
LABEL_10:
          v22 = sub_A3AA80(v6, (__int64)a2, v16, v17, v18);
          v23 = *(_BYTE *)(v22 + 19) >> 2;
          v24 = v23 + ((*(_WORD *)(v22 + 18) >> 3) & 0x7F);
          v25 = v22 + 8 * v24 + 48;
          v27 = sub_A3AA80(v6, (__int64)a2, v24, v23, v26);
          v28 = v27 + (*(_WORD *)(v27 + 18) & 0x3F8) + 48;
          if ( v25 == v28 )
            return 1;
          while ( 1 )
          {
            v34 = *(_QWORD *)v28;
            v31 = *(_QWORD *)(*(_QWORD *)v28 + 40LL);
            if ( (v31 & 7) != 0 )
            {
              v29 = *((_QWORD *)v5 + 194);
              if ( v29 )
                goto LABEL_15;
            }
            else
            {
              v29 = v31 & 0xFFFFFFFFFFFFFFF8LL;
              v30 = *((_QWORD *)v5 + 194);
              if ( v30 )
                goto LABEL_13;
            }
            v35 = *((_QWORD *)v5 + 2188);
            v36 = j__strlen("NSObject");
            v30 = sub_6D2E30(v35, "NSObject", v36);
            *((_QWORD *)v5 + 194) = v30;
LABEL_13:
            if ( v29 != v30 )
            {
              v31 = *(_QWORD *)(v34 + 40);
LABEL_15:
              if ( (v31 & 7) != 0 )
              {
                v32 = *((_QWORD *)v5 + 195);
                if ( v32 )
                  return 0;
              }
              else
              {
                v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
                v33 = *((_QWORD *)v5 + 195);
                if ( v33 )
                  goto LABEL_17;
              }
              v41 = *((_QWORD *)v5 + 2188);
              v42 = j__strlen("NSCopying");
              v33 = sub_6D2E30(v41, "NSCopying", v42);
              *((_QWORD *)v5 + 195) = v33;
LABEL_17:
              if ( v32 != v33 )
                return 0;
            }
            v28 += 8;
            if ( v25 == v28 )
              return 1;
          }
        }
      }
      return 0;
    }
    v19 = *(_QWORD *)(v15 + 40);
    if ( (v19 & 7) != 0 )
    {
      v20 = *((_QWORD *)a2 + 194);
      if ( v20 )
        return 0;
    }
    else
    {
      v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      v21 = *((_QWORD *)a2 + 194);
      if ( v21 )
        goto LABEL_9;
    }
    v39 = *((_QWORD *)a2 + 2188);
    v40 = j__strlen("NSObject");
    a2 = "NSObject";
    v21 = sub_6D2E30(v39, "NSObject", v40);
    *((_QWORD *)v5 + 194) = v21;
LABEL_9:
    if ( v21 == v20 )
      goto LABEL_10;
    return 0;
  }
  return result;
}

