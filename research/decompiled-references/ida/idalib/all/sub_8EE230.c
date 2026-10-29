__int64 __fastcall sub_8EE230(_QWORD *a1, char **a2, __int64 a3)
{
  char *v3; // rbp
  unsigned int v4; // r8d
  char **v7; // r15
  unsigned int v8; // eax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // r10d
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi
  char *v21; // r8
  __int64 v22; // r15
  __int64 i; // r14
  char *v24; // rax
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // [rsp+8h] [rbp-F0h]
  __int64 v29; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v30; // [rsp+8h] [rbp-F0h]
  unsigned int v31; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v32; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v33; // [rsp+10h] [rbp-E8h]
  char **v34; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v35; // [rsp+10h] [rbp-E8h]
  char v36; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v37; // [rsp+18h] [rbp-E0h]
  char *v38; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v39; // [rsp+18h] [rbp-E0h]
  char v40; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v41; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v43; // [rsp+28h] [rbp-D0h]
  unsigned int v44; // [rsp+44h] [rbp-B4h] BYREF
  char *v45; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+58h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-90h]
  __int128 v49; // [rsp+70h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-78h] BYREF
  __int128 v51; // [rsp+88h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-60h]
  __int128 v53; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v45 = *a2;
  v3 = &v45[a3];
  if ( !__CFADD__(a3, v45) )
  {
    v7 = a2;
    LOBYTE(v8) = sub_7E30F0(&v44, (unsigned __int64 *)&v45);
    v4 = v8;
    if ( (_BYTE)v8 )
    {
      v9 = v44;
      v10 = a1[3];
      v11 = v44;
      if ( v44 != v10 )
      {
        v46 = 0;
        v48 = 0;
        v47 = 0;
        v49 = 0;
        if ( v44 < v10 )
        {
          v31 = v44;
          v18 = v10;
          v35 = v44;
          v41 = v8;
          v38 = v3;
          v19 = v44;
          do
          {
            v20 = a1[2] + 48 * v19;
            v21 = *(char **)(v20 + 24);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v20 + 32);
              if ( v22 )
              {
                for ( i = 0; i != v22; ++i )
                {
                  v24 = &v21[24 * i];
                  v25 = *(void **)v24;
                  if ( *(_QWORD *)v24 )
                  {
                    *((_QWORD *)v24 + 1) = 0;
                    qfree(v25);
                    v21 = *(char **)(v20 + 24);
                  }
                }
              }
              *(_QWORD *)(v20 + 32) = 0;
              qfree(v21);
            }
            v26 = *(void **)v20;
            if ( *(_QWORD *)v20 )
            {
              *(_QWORD *)(v20 + 8) = 0;
              qfree(v26);
            }
            ++v19;
          }
          while ( v19 < v18 );
          v9 = v35;
          v11 = v31;
          v3 = v38;
          v4 = v41;
          v7 = a2;
          a1[3] = v35;
        }
        else
        {
          v12 = a1[2];
          v28 = v44;
          v13 = a1[4];
          if ( (unsigned __int64)&v46 < v12 || (unsigned __int64)&v46 >= v12 + 48 * v13 )
          {
            if ( v13 >= v44
              || (v36 = v8,
                  v32 = v44,
                  v27 = qvector_reserve(a1 + 2, v12, v44, 48),
                  v10 = a1[3],
                  v9 = v32,
                  a1[2] = v27,
                  v12 = v27,
                  LOBYTE(v4) = v36,
                  v10 < v32) )
            {
              v14 = 0;
              while ( 1 )
              {
                v40 = v4;
                v37 = v9;
                v15 = v12 + 48 * v10;
                v33 = v10;
                *(_QWORD *)v15 = 0;
                *(_OWORD *)(v15 + 8) = v14;
                v29 = v15;
                sub_8D5FD0((_QWORD *)v15, (__int64)&v46);
                v9 = v37;
                v14 = 0;
                LOBYTE(v4) = v40;
                v10 = v33 + 1;
                *(_QWORD *)(v29 + 24) = 0;
                *(_OWORD *)(v29 + 32) = 0;
                if ( v33 + 1 >= v37 )
                  break;
                v12 = a1[2];
              }
            }
            a1[3] = v9;
LABEL_13:
            v30 = v4;
            v34 = v7;
            v16 = 0;
            v17 = 48 * v9;
            while ( (unsigned __int8)sub_8E8DF0((__int64 *)(v16 + a1[2]), &v45, v3 - v45) )
            {
              v16 += 48;
              if ( v17 == v16 )
              {
                v4 = v30;
                v7 = v34;
                goto LABEL_17;
              }
            }
            return 0;
          }
          v43 = v8;
          v39 = v44;
          v50 = 0;
          v51 = 0;
          sub_8D5FD0(&v50, (__int64)&v46);
          v52 = 0;
          v53 = 0;
          sub_8EE040(a1 + 2, v39, (__int64)&v50);
          sub_8E3C70((__int64)&v50);
          v4 = v43;
          v9 = v39;
          v11 = v28;
        }
      }
      if ( !v11 )
      {
LABEL_17:
        *v7 = v45;
        return v4;
      }
      goto LABEL_13;
    }
  }
  return 0;
}
