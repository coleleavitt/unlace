_BOOL8 __fastcall sub_8C9F10(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-130h]
  __int64 v19; // [rsp+10h] [rbp-128h]
  __int64 v20; // [rsp+10h] [rbp-128h]
  bool v21; // [rsp+1Bh] [rbp-11Dh]
  unsigned int v22; // [rsp+1Ch] [rbp-11Ch]
  unsigned int v23; // [rsp+24h] [rbp-114h] BYREF
  char *v24; // [rsp+28h] [rbp-110h] BYREF
  __int64 v25; // [rsp+30h] [rbp-108h] BYREF
  __int128 v26; // [rsp+38h] [rbp-100h]
  __int64 v27; // [rsp+48h] [rbp-F0h] BYREF
  __int128 v28; // [rsp+50h] [rbp-E8h]
  __int64 v29; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-D0h]
  __int128 v31; // [rsp+78h] [rbp-C0h]
  __int64 v32; // [rsp+88h] [rbp-B0h]
  void *v33; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-88h]
  __int64 v37; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v38; // [rsp+C8h] [rbp-70h]
  __int128 v39; // [rsp+D8h] [rbp-60h]
  __int16 v40; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+F8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v24 = *a2;
  v3 = &v24[a3];
  if ( !__CFADD__(a3, v24) )
  {
    v21 = sub_7BFDB0(&v23, (unsigned __int64 *)&v24);
    if ( v21 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      v22 = v23;
      v18 = v23;
      if ( v23 != v7 )
      {
        v32 = 0;
        v31 = 0;
        v25 = 0;
        v27 = 0;
        v29 = 0;
        v26 = 0;
        v28 = 0;
        v30 = 0;
        if ( v23 < v7 )
        {
          v10 = v23;
          do
          {
            v11 = *(_QWORD *)(a1 + 16) + 96 * v10;
            v12 = *(void **)(v11 + 48);
            if ( v12 )
            {
              *(_QWORD *)(v11 + 56) = 0;
              v19 = v11;
              qfree(v12);
              v11 = v19;
            }
            v13 = *(void **)(v11 + 24);
            if ( v13 )
            {
              *(_QWORD *)(v11 + 32) = 0;
              v20 = v11;
              qfree(v13);
              v11 = v20;
            }
            v14 = *(void **)v11;
            if ( *(_QWORD *)v11 )
            {
              *(_QWORD *)(v11 + 8) = 0;
              qfree(v14);
            }
            ++v10;
          }
          while ( v10 < v7 );
          *(_QWORD *)(a1 + 24) = v18;
        }
        else
        {
          v8 = *(_QWORD *)(a1 + 16);
          v9 = *(_QWORD *)(a1 + 32);
          if ( (unsigned __int64)&v25 < v8 || (unsigned __int64)&v25 >= v8 + 96 * v9 )
          {
            if ( v9 >= v23
              || (v17 = qvector_reserve(a1 + 16, v8, v23, 96),
                  v7 = *(_QWORD *)(a1 + 24),
                  *(_QWORD *)(a1 + 16) = v17,
                  v8 = v17,
                  v7 < v18) )
            {
              while ( 1 )
              {
                v16 = v8 + 96 * v7;
                *(_QWORD *)v16 = 0;
                *(_OWORD *)(v16 + 8) = 0;
                sub_8B2290((_QWORD *)v16, (__int64)&v25);
                *(_QWORD *)(v16 + 24) = 0;
                *(_OWORD *)(v16 + 32) = 0;
                sub_8B2290((_QWORD *)(v16 + 24), (__int64)&v27);
                *(_QWORD *)(v16 + 48) = 0;
                *(_OWORD *)(v16 + 56) = 0;
                sub_8B2290((_QWORD *)(v16 + 48), (__int64)&v29);
                ++v7;
                *(_WORD *)(v16 + 88) = 0;
                *(_OWORD *)(v16 + 72) = 0;
                if ( v7 >= v18 )
                  break;
                v8 = *(_QWORD *)(a1 + 16);
              }
            }
            *(_QWORD *)(a1 + 24) = v18;
            sub_8C0260((__int64)&v25);
LABEL_21:
            v15 = 0;
            while ( sub_8C7220(v15 + *(_QWORD *)(a1 + 16), &v24, v3 - v24) )
            {
              v15 += 96;
              if ( v15 == 96 * v18 )
                goto LABEL_24;
            }
            return 0;
          }
          v33 = nullptr;
          v34 = 0;
          sub_8B2290(&v33, (__int64)&v25);
          ptr = nullptr;
          v36 = 0;
          sub_8B2290(&ptr, (__int64)&v27);
          v37 = 0;
          v38 = 0;
          sub_8B2290(&v37, (__int64)&v29);
          v40 = 0;
          v39 = 0;
          sub_8C9D70((const char **)(a1 + 16), (const char *)v18, (__int64)&v33);
          sub_8C0260((__int64)&v33);
        }
        sub_8C0260((__int64)&v25);
      }
      if ( !v22 )
      {
LABEL_24:
        *a2 = v24;
        return v21;
      }
      goto LABEL_21;
    }
  }
  return 0;
}

