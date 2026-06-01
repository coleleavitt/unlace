/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36DE0
// Address: 0x0000000000036DE0

//----- (0000000000036DE0) ----------------------------------------------------
__int64 __fastcall sub_36DE0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r15
  __int64 v3; // r14
  __pid_t v4; // r12d
  int v5; // eax
  unsigned int v6; // eax
  size_t v7; // rbx
  void *v8; // rax
  int v9; // eax
  const char *v10; // rbx
  size_t v11; // rbp
  void *v12; // rax
  FILE *v13; // rax
  FILE *v14; // rbx
  int v15; // r13d
  int v16; // r13d
  int i; // r15d
  size_t v18; // rbp
  __int64 v19; // rbx
  _BYTE *v20; // rax
  size_t v21; // r12
  __int64 v22; // rbx
  _BYTE *v23; // rax
  unsigned __int64 v24; // rbp
  int v25; // ebx
  size_t v26; // rbx
  __int64 v27; // rbp
  _BYTE *v28; // rax
  size_t v29; // r14
  __int64 v30; // rbx
  _BYTE *v31; // rax
  unsigned __int64 v32; // rbp
  __int64 v33; // rbx
  __pid_t v35; // [rsp+4h] [rbp-54E4h]
  unsigned int v36; // [rsp+18h] [rbp-54D0h] BYREF
  __int128 dest; // [rsp+20h] [rbp-54C8h] BYREF
  unsigned __int64 v38; // [rsp+30h] [rbp-54B8h]
  int v39; // [rsp+38h] [rbp-54B0h]
  __int128 v40; // [rsp+40h] [rbp-54A8h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-5498h]
  void *ptr; // [rsp+58h] [rbp-5490h] BYREF
  __int64 v43; // [rsp+60h] [rbp-5488h]
  __int64 v44; // [rsp+68h] [rbp-5480h]
  _BYTE src[1024]; // [rsp+70h] [rbp-5478h] BYREF
  char v46[4]; // [rsp+470h] [rbp-5078h] BYREF
  char nptr[8228]; // [rsp+474h] [rbp-5074h] BYREF
  __int64 v48; // [rsp+2498h] [rbp-3050h]
  int v49; // [rsp+24A4h] [rbp-3044h]
  char v50[4096]; // [rsp+44B0h] [rbp-1038h] BYREF
  unsigned __int64 v51; // [rsp+54B0h] [rbp-38h]

  v2 = a2;
  v3 = a1;
  v51 = __readfsqword(0x28u);
  v4 = getpid();
  if ( *a2 )
  {
    sub_38980(a2, 0);
    qfree((void *)*a2);
    *a2 = 0;
    a2[2] = 0;
  }
  v48 = 0;
  v49 = 0;
  v5 = qfindfirst((__int64)"/proc/*", (__int64)v46, 0x4000);
  v35 = v4;
  while ( !v5 )
  {
    if ( nptr[0] >= 0 && (unsigned int)(unsigned __int8)nptr[0] - 48 <= 9 )
    {
      dest = 0;
      v38 = 0;
      v40 = 0;
      v41 = 0;
      v6 = atoi(nptr);
      v36 = v6;
      if ( v6 != v4 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64))(*(_QWORD *)v3 + 624LL))(
               v3,
               v6,
               src,
               1024) )
        {
          v7 = __strlen_chk(src, 1024);
          if ( v7 )
          {
            v8 = (void *)dest;
            if ( v38 < v7 + 1 )
            {
              v8 = qvector_reserve((__int64)&dest, (char *)dest, v7 + 1, 1u);
              *(_QWORD *)&dest = v8;
            }
            *((_QWORD *)&dest + 1) = v7 + 1;
            memmove(v8, src, v7);
            *(_BYTE *)(dest + v7) = 0;
          }
          else
          {
            *((_QWORD *)&dest + 1) = 0;
          }
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 632LL))(v3, v36);
          v10 = "[x]";
          if ( v9 == 4 )
            v10 = "[32]";
          v39 = v9;
          if ( v9 == 8 )
            v10 = "[64]";
          v11 = __strlen_chk(v10, 5);
          if ( v11 )
          {
            v12 = (void *)v40;
            if ( v41 < v11 + 1 )
            {
              v12 = qvector_reserve((__int64)&v40, (char *)v40, v11 + 1, 1u);
              *(_QWORD *)&v40 = v12;
            }
            *((_QWORD *)&v40 + 1) = v11 + 1;
            memmove(v12, v10, v11);
            *(_BYTE *)(v40 + v11) = 0;
          }
          else
          {
            *((_QWORD *)&v40 + 1) = 0;
          }
          qsnprintf(v50, 4096, "/proc/%u/cmdline", v36);
          v13 = qfopen(v50, (__int64)"r");
          v14 = v13;
          if ( v13 && (v15 = qfread(v13, v50, 4096)) != 0 )
          {
            v50[v15] = 0;
            qfclose(v14);
            for ( ; v15 >= 0; --v15 )
            {
              if ( v50[v15] )
                break;
            }
            v16 = v15 + 1;
            if ( v16 > 0 )
            {
              for ( i = 0; i < v16; i += v25 + 1 )
              {
                sub_37F60((__int64)&ptr, &v50[i]);
                quote_cmdline_arg((__int64)&ptr);
                v18 = __strlen_chk(" ", 2);
                v19 = *((_QWORD *)&v40 + 1) - 1LL;
                if ( !*((_QWORD *)&v40 + 1) )
                  v19 = 0;
                v20 = (_BYTE *)v40;
                if ( v41 < v19 + v18 + 1 )
                {
                  v20 = qvector_reserve((__int64)&v40, (char *)v40, v19 + v18 + 1, 1u);
                  *(_QWORD *)&v40 = v20;
                }
                *((_QWORD *)&v40 + 1) = v19 + v18 + 1;
                v20[v19 + v18] = 0;
                memmove((void *)(v40 + v19), " ", v18);
                if ( v43 )
                {
                  v21 = v43 - 1;
                  if ( v43 != 1 )
                  {
                    v22 = *((_QWORD *)&v40 + 1) - 1LL;
                    if ( !*((_QWORD *)&v40 + 1) )
                      v22 = 0;
                    v23 = (_BYTE *)v40;
                    v24 = v22 + v43;
                    if ( v41 < v22 + v43 )
                    {
                      v23 = qvector_reserve((__int64)&v40, (char *)v40, v24, 1u);
                      *(_QWORD *)&v40 = v23;
                    }
                    *((_QWORD *)&v40 + 1) = v24;
                    v23[v22 + v21] = 0;
                    memcpy((void *)(v40 + v22), ptr, v21);
                  }
                }
                v25 = strlen(&v50[i]);
                if ( ptr )
                {
                  v43 = 0;
                  qfree(ptr);
                  ptr = nullptr;
                  v44 = 0;
                }
              }
            }
          }
          else
          {
            v26 = __strlen_chk(" ", 2);
            v27 = *((_QWORD *)&v40 + 1) - 1LL;
            if ( !*((_QWORD *)&v40 + 1) )
              v27 = 0;
            v28 = (_BYTE *)v40;
            if ( v41 < v26 + v27 + 1 )
            {
              v28 = qvector_reserve((__int64)&v40, (char *)v40, v26 + v27 + 1, 1u);
              *(_QWORD *)&v40 = v28;
            }
            *((_QWORD *)&v40 + 1) = v26 + v27 + 1;
            v28[v27 + v26] = 0;
            memmove((void *)(v40 + v27), " ", v26);
            if ( *((_QWORD *)&dest + 1) )
            {
              v29 = *((_QWORD *)&dest + 1) - 1LL;
              if ( *((_QWORD *)&dest + 1) != 1 )
              {
                v30 = *((_QWORD *)&v40 + 1) - 1LL;
                if ( !*((_QWORD *)&v40 + 1) )
                  v30 = 0;
                v31 = (_BYTE *)v40;
                v32 = v30 + *((_QWORD *)&dest + 1);
                if ( v41 < v30 + *((_QWORD *)&dest + 1) )
                {
                  v31 = qvector_reserve((__int64)&v40, (char *)v40, v32, 1u);
                  *(_QWORD *)&v40 = v31;
                }
                *((_QWORD *)&v40 + 1) = v32;
                v31[v30 + v29] = 0;
                memcpy((void *)(v40 + v30), (const void *)dest, v29);
              }
            }
          }
          v2 = a2;
          sub_374D0((char **)a2, (int *)&v36);
          v3 = a1;
          v4 = v35;
        }
        if ( (_QWORD)v40 )
        {
          *((_QWORD *)&v40 + 1) = 0;
          qfree((void *)v40);
          *(_QWORD *)&v40 = 0;
          v41 = 0;
        }
      }
      if ( (_QWORD)dest )
      {
        *((_QWORD *)&dest + 1) = 0;
        qfree((void *)dest);
        *(_QWORD *)&dest = 0;
        v38 = 0;
      }
    }
    v5 = qfindnext((__int64)v46);
  }
  v33 = v2[1];
  qfindclose((__int64)v46);
  return (unsigned int)v33;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
