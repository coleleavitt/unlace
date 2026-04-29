__int64 __fastcall sub_3D960(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  __int16 v5; // ax
  const char *v6; // r15
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r13
  __int64 v10; // rax
  const char *v11; // r12
  _QWORD *v12; // r15
  unsigned __int64 v13; // r13
  __int64 i; // r14
  __int64 v15; // r14
  size_t v16; // r15
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdx
  char *v20; // rax
  char *v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  size_t v25; // r12
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  size_t v33; // r9
  char *v34; // r8
  __int64 v35; // rdi
  char *v36; // [rsp+0h] [rbp-E8h]
  char *v37; // [rsp+0h] [rbp-E8h]
  char *v38; // [rsp+8h] [rbp-E0h]
  size_t v39; // [rsp+10h] [rbp-D8h]
  char *v40; // [rsp+10h] [rbp-D8h]
  size_t v41; // [rsp+18h] [rbp-D0h]
  unsigned __int16 v42; // [rsp+2Eh] [rbp-BAh]
  void *src; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+38h] [rbp-B0h]
  void *v45; // [rsp+50h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+58h] [rbp-90h]
  __int64 v47; // [rsp+70h] [rbp-78h] BYREF
  __int128 v48; // [rsp+78h] [rbp-70h]
  _BYTE *v49; // [rsp+90h] [rbp-58h] BYREF
  __int128 v50; // [rsp+98h] [rbp-50h]
  unsigned __int64 v51; // [rsp+A8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 258) & 4) != 0 || (v2 = 0, (getinf(3) & 0x1006) == 0x1002) )
  {
    v2 = sub_3D560((_QWORD *)a1);
    if ( !(_BYTE)v2 )
    {
      v4 = *(_QWORD *)(a1 + 616);
      v44 = 0;
      src = 0;
      v2 = sub_3AC40(v4, (__int64 *)&src, a1 + 224);
      if ( !(_BYTE)v2 )
      {
LABEL_44:
        if ( src )
        {
          *(_QWORD *)&v44 = 0;
          qfree((__int64)src);
        }
        return v2;
      }
      v5 = *(_WORD *)(a1 + 248);
      v42 = *(_WORD *)(a1 + 160LL * (v5 != 26) + 270);
      v6 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * v42);
      *(_OWORD *)n = 0;
      v45 = 0;
      if ( v6 )
      {
        v7 = strlen(v6);
        v8 = v7 + 1;
        v9 = v7;
        v45 = (void *)qvector_reserve((__int64)&v45, 0, v7 + 1, 1);
        n[0] = v8;
        memmove(v45, v6, v9);
        *((_BYTE *)v45 + v9) = 0;
        v5 = *(_WORD *)(a1 + 248);
      }
      switch ( v5 )
      {
        case 27:
          v50 = 0;
          v49 = 0;
          v49 = (_BYTE *)qvector_reserve((__int64)&v49, 0, 1, 1);
          *(_QWORD *)&v50 = 1;
          *v49 = 0;
          sub_38E40((_QWORD *)a1, (__int64)&src, (__int64)&v45, &v49);
          v35 = (__int64)v49;
          if ( !v49 )
            goto LABEL_42;
          break;
        case 26:
          v50 = 0;
          v49 = 0;
          v49 = (_BYTE *)qvector_reserve((__int64)&v49, 0, 1, 1);
          *(_QWORD *)&v50 = 1;
          *v49 = 0;
          sub_38E40((_QWORD *)a1, (__int64)&v45, (__int64)&src, &v49);
          v35 = (__int64)v49;
          if ( !v49 )
          {
LABEL_42:
            if ( v45 )
            {
              n[0] = 0;
              qfree((__int64)v45);
            }
            goto LABEL_44;
          }
          break;
        case 535:
          v10 = v44;
          v47 = 0;
          v48 = 0;
          if ( (_QWORD)v44 )
          {
            v11 = (const char *)src;
            v12 = 0;
            v38 = (char *)src + v44 - 1;
            if ( src >= v38 )
              goto LABEL_26;
            v13 = 0;
            for ( i = 0; ; i = v48 )
            {
              v20 = strchr(v11, 32);
              v21 = v38;
              v22 = i + 1;
              v34 = v20;
              if ( v20 )
                v21 = v20;
              v33 = v21 - v11;
              if ( v13 < v22 )
              {
                v37 = v20;
                v39 = v33;
                v47 = qvector_reserve((__int64)&v47, (__int64)v12, v22, 24);
                i = v48;
                v12 = (_QWORD *)v47;
                v33 = v39;
                v34 = v37;
              }
              v15 = (__int64)&v12[3 * i];
              v16 = v33;
              *(_OWORD *)(v15 + 8) = 0;
              *(_QWORD *)v15 = 0;
              *(_QWORD *)&v48 = v48 + 1;
              v17 = *(_QWORD *)(v15 + 8);
              if ( v17 )
              {
                --v17;
                v16 = v33 + v17;
              }
              v18 = *(_QWORD *)v15;
              v19 = v16 + 1;
              if ( v16 != -1 )
              {
                v41 = v33;
                v40 = v34;
                v32 = qvector_reserve(v15, v18, v19, 1);
                v33 = v41;
                v34 = v40;
                *(_QWORD *)v15 = v32;
                v18 = v32;
                v19 = v16 + 1;
              }
              *(_QWORD *)(v15 + 8) = v19;
              *(_BYTE *)(v18 + v16) = 0;
              v36 = v34;
              memmove((void *)(v17 + *(_QWORD *)v15), v11, v33);
              v12 = (_QWORD *)v47;
              if ( !v36 )
                break;
              v11 = v36 + 1;
              if ( v36 + 1 >= v38 )
                break;
              v13 = *((_QWORD *)&v48 + 1);
            }
            v10 = v44;
            if ( (_QWORD)v44 )
            {
LABEL_26:
              if ( v10 != 1 && *((char *)src + v10 - 2) == 32 )
              {
                v23 = v48;
                if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
                {
                  v47 = qvector_reserve((__int64)&v47, (__int64)v12, v48 + 1, 24);
                  v12 = (_QWORD *)v47;
                  v23 = v48;
                }
                v24 = &v12[3 * v23];
                *v24 = 0;
                v12 = (_QWORD *)v47;
                *(_OWORD *)(v24 + 1) = 0;
                *(_QWORD *)&v48 = v48 + 1;
              }
            }
          }
          else
          {
            v12 = 0;
          }
          v49 = 0;
          v50 = 0;
          if ( v42 == 160 )
          {
            v49 = (_BYTE *)qvector_reserve((__int64)&v49, 0, 1, 1);
            *(_QWORD *)&v50 = 1;
            *v49 = 0;
            v26 = (_QWORD *)v47;
          }
          else
          {
            v25 = n[0];
            v26 = v12;
            if ( n[0] )
            {
              v49 = (_BYTE *)qalloc_or_throw();
              *((_QWORD *)&v50 + 1) = v25;
              memcpy(v49, v45, v25);
              *(_QWORD *)&v50 = v25;
              v26 = (_QWORD *)v47;
            }
          }
          sub_38E40((_QWORD *)a1, (__int64)(v26 + 3), (__int64)&v49, v12);
          if ( v49 )
          {
            *(_QWORD *)&v50 = 0;
            qfree((__int64)v49);
          }
          v27 = v47;
          if ( v47 )
          {
            v28 = v48;
            if ( (_QWORD)v48 )
            {
              v29 = 0;
              do
              {
                v30 = (__int64 *)(v27 + 24 * v29);
                v31 = *v30;
                if ( *v30 )
                {
                  v30[1] = 0;
                  qfree(v31);
                  v27 = v47;
                }
                ++v29;
              }
              while ( v28 != v29 );
            }
            *(_QWORD *)&v48 = 0;
            qfree(v27);
          }
          goto LABEL_42;
        default:
          if ( !under_debugger )
            interr(10500);
          BUG();
      }
      *(_QWORD *)&v50 = 0;
      qfree(v35);
      goto LABEL_42;
    }
  }
  return v2;
}
