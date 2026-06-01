__int64 __fastcall sub_2F4150(
        unsigned int a1,
        char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r12d
  __int64 v12; // r8
  int v13; // r9d
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 server_connection2; // rax
  __int64 v17; // rbx
  const char *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 *v25; // rbx
  __int64 *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbp
  double v30; // xmm4_8
  double v31; // xmm5_8
  __int64 v32; // r13
  double v33; // xmm0_8
  void *v34; // rax
  const void *v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-D8h] BYREF
  int v37[4]; // [rsp+8h] [rbp-D0h]
  int v38; // [rsp+18h] [rbp-C0h]
  int v39[2]; // [rsp+20h] [rbp-B8h] BYREF
  int v40[4]; // [rsp+28h] [rbp-B0h]
  void *v41; // [rsp+40h] [rbp-98h] BYREF
  __int128 v42; // [rsp+48h] [rbp-90h]
  __int64 v43; // [rsp+60h] [rbp-78h] BYREF
  __int128 v44; // [rsp+68h] [rbp-70h]
  __int64 v45; // [rsp+78h] [rbp-60h]
  __int64 *v46; // [rsp+80h] [rbp-58h] BYREF
  __int128 v47; // [rsp+88h] [rbp-50h]
  char v48; // [rsp+98h] [rbp-40h]
  __int64 v49; // [rsp+9Ch] [rbp-3Ch]
  unsigned __int64 v50; // [rsp+A8h] [rbp-30h]

  v50 = __readfsqword(0x28u);
  if ( *((_DWORD *)a2 + 2) == 35
    && *((_QWORD *)a2 + 3)
    && (v10 = strcmp(*((const char **)a2 + 2), "Lumina Metadata History:3")) == 0 )
  {
    v46 = nullptr;
    v48 = 0;
    v49 = 0;
    v47 = 0;
    sub_17E750((__int64)&v46, (__int64 *)a2, 1, 0, 0.0, *(double *)a4.m128_u64, a5, a6, v14, v15, a9, a10, v12, v13);
    if ( (_QWORD)v47 )
    {
      server_connection2 = get_server_connection2(a1);
      v17 = server_connection2;
      if ( server_connection2 )
      {
        if ( (*(_BYTE *)(server_connection2 + 176) & 2) != 0 )
        {
          v36 = 0;
          *(_OWORD *)v37 = 0;
          sub_2F3FD0(&v36, &v46);
          v18 = &s1;
          if ( *(_QWORD *)v37 )
            v18 = (const char *)v36;
          a2 = "HIDECANCEL\nDo you want to delete the latest metadata for %s?";
          if ( (unsigned int)sub_1698A0(0, (int)"HIDECANCEL\nDo you want to delete the latest metadata for %s?", v18) == 1 )
          {
            a2 = (char *)v39;
            *(_QWORD *)v39 = 0;
            *(_OWORD *)v40 = 0;
            if ( (*(unsigned __int8 (__fastcall **)(__int64, int *, __int64 **))(*(_QWORD *)v17 + 96LL))(v17, v39, &v46) )
            {
              v25 = v46;
              v26 = &v46[v47];
              if ( v46 != v26 )
              {
                do
                  revert_metadata(*v25++);
                while ( v26 != v25 );
              }
              v27 = sub_4A0300(
                      (void *)"Lumina Metadata History:3",
                      v36,
                      v37[0],
                      v37[2],
                      v38,
                      v39[0],
                      v40[0],
                      *(__int64 *)&v40[2]);
              v28 = v27;
              if ( v27 )
              {
                v29 = *(_QWORD *)(v27 + 2392);
                if ( v29 )
                {
                  v44 = 0;
                  v43 = 0;
                  v45 = -1;
                  sub_4A6DB0(v27);
                  v32 = *(_QWORD *)(v29 + 192);
                  v33 = 0.0;
                  v41 = nullptr;
                  v42 = 0;
                  if ( v32 )
                  {
                    v34 = (void *)qalloc_or_throw(8 * v32);
                    v35 = *(const void **)(v29 + 184);
                    v41 = v34;
                    *((_QWORD *)&v42 + 1) = v32;
                    memcpy(v34, v35, 8 * v32);
                    *(_QWORD *)&v42 = v32;
                  }
                  sub_2EFD40((__int64)&v41, (__m128)0LL, a4, a5, a6, v30, v31, a9, a10);
                  a2 = (char *)&v43;
                  sub_4A8920(v28, &v43, 7);
                  if ( v41 )
                  {
                    *(_QWORD *)&v42 = 0;
                    v33 = qfree(v41, (const char *)&v43);
                  }
                  if ( v43 )
                  {
                    *(_QWORD *)&v44 = 0;
                    qfree(v43, (const char *)&v43, v33);
                  }
                }
              }
              v10 = 1;
            }
            else
            {
              a2 = (char *)&s1;
              if ( *(_QWORD *)v40 )
                a2 = *(char **)v39;
              sub_169700(
                (int)"lumina: %s\n",
                (__int64)a2,
                v19,
                v20,
                v21,
                v22,
                (__m128)0LL,
                a4,
                a5,
                a6,
                v23,
                v24,
                a9,
                a10,
                v36);
            }
            if ( *(_QWORD *)v39 )
            {
              *(_QWORD *)v40 = 0;
              qfree(*(_QWORD *)v39, a2);
            }
          }
          if ( v36 )
          {
            *(_QWORD *)v37 = 0;
            qfree(v36, a2);
          }
        }
      }
    }
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46, a2);
    }
  }
  else
  {
    return 0;
  }
  return v10;
}
