__int64 __fastcall sub_3AFCD0(__int64 a1, const char *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 **v15; // rax
  __int64 *v16; // rcx
  __int64 *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 i; // r13
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 j; // r13
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rax
  char *v34; // rbx
  __int64 v35; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  const char *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v43; // [rsp+8h] [rbp-1A0h]
  __int64 v44; // [rsp+10h] [rbp-198h]
  __int64 v45; // [rsp+18h] [rbp-190h]
  int v46; // [rsp+20h] [rbp-188h] BYREF
  int v47; // [rsp+24h] [rbp-184h]
  _QWORD v48[7]; // [rsp+50h] [rbp-158h] BYREF
  char v49; // [rsp+88h] [rbp-120h] BYREF
  char v50; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+108h] [rbp-A0h]
  __int64 v52; // [rsp+110h] [rbp-98h]
  __int64 v53; // [rsp+118h] [rbp-90h]
  __int64 v54; // [rsp+128h] [rbp-80h]
  __int64 v55; // [rsp+130h] [rbp-78h]
  __int64 v56; // [rsp+140h] [rbp-68h]
  __int64 v57; // [rsp+148h] [rbp-60h]
  unsigned __int64 v58; // [rsp+168h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  sub_3AF6B0((__int64)v48, a1, a3, a4, a2);
  v42 = a5;
  v9 = &v42;
  v43 = *a6;
  LODWORD(v44) = *((_DWORD *)a6 + 2);
  if ( a5 == -1 )
    v9 = *(__int64 **)(v51 + 1400);
  v10 = callui(16, 0, v48, v9, &callui, v8, v42, v43, v44, v45);
  v11 = 0;
  if ( v10 >= 0 && v55 )
  {
    v37 = v54 + 48LL * (int)v10;
    **(_QWORD **)(v51 + 1400) = **(_QWORD **)v37;
    v38 = *(_QWORD *)(v51 + 1400);
    *(_QWORD *)(v38 + 8) = *(_QWORD *)(v37 + 24);
    *(_DWORD *)(v38 + 16) = *(_DWORD *)(v37 + 32);
    sub_390F70((__int64)&v46, *(_QWORD *)(*(_QWORD *)v37 + 8LL) + 8LL, (__int64 *)(v37 + 24));
    if ( !v47 )
    {
      v39 = s1;
      v40 = *(_QWORD *)(*(_QWORD *)v37 + 128LL) + 32LL * v46;
      if ( *(_QWORD *)(v40 + 8) )
        v39 = *(const char **)v40;
      v41 = tag_skipcodes(v39);
      v47 = skip_spaces(v41) - v41;
    }
    sub_395DD0((__int64)&v46, 1u, 0, 0);
    v11 = 1;
  }
  v48[0] = off_4E1A10;
  if ( v56 )
  {
    v57 = 0;
    qfree(v56);
  }
  v12 = v54;
  if ( v54 )
  {
    v13 = v55;
    if ( v55 )
    {
      v14 = 0;
      do
      {
        v15 = (__int64 **)(v12 + 48 * v14);
        v16 = *v15;
        if ( *v15 )
        {
          if ( (*((_DWORD *)v16 + 26))-- == 1 )
          {
            v18 = *v15;
            if ( *v15 )
            {
              sub_258D30(*v15);
              v19 = v18[23];
              if ( v19 )
              {
                v20 = v18[24];
                if ( v20 )
                {
                  for ( i = 0; i != v20; ++i )
                  {
                    v22 = (__int64 *)(v19 + 24 * i);
                    v23 = *v22;
                    if ( *v22 )
                    {
                      v22[1] = 0;
                      qfree(v23);
                      v19 = v18[23];
                    }
                  }
                }
                v18[24] = 0;
                qfree(v19);
              }
              v24 = v18[20];
              if ( v24 )
              {
                v18[21] = 0;
                qfree(v24);
              }
              v25 = v18[16];
              if ( v25 )
              {
                v26 = v18[17];
                if ( v26 )
                {
                  for ( j = 0; j != v26; ++j )
                  {
                    v28 = (__int64 *)(v25 + 32 * j);
                    v29 = *v28;
                    if ( *v28 )
                    {
                      v28[1] = 0;
                      qfree(v29);
                      v25 = v18[16];
                    }
                  }
                }
                v18[17] = 0;
                qfree(v25);
              }
              sub_255410((__int64)(v18 + 2));
              j__qfree(v18);
            }
          }
          v12 = v54;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    v55 = 0;
    qfree(v12);
  }
  v30 = v52;
  if ( v52 )
  {
    v31 = v53;
    if ( v53 )
    {
      v32 = 0;
      do
      {
        v33 = 3 * v32++;
        clear_tinfo_t(v30 + 8 * v33 + 8);
        v30 = v52;
      }
      while ( v31 != v32 );
    }
    v53 = 0;
    qfree(v30);
  }
  v34 = &v50;
  v48[0] = &unk_4E7D28;
  do
  {
    v35 = *(_QWORD *)v34;
    if ( *(_QWORD *)v34 )
    {
      *((_QWORD *)v34 + 1) = 0;
      qfree(v35);
    }
    v34 -= 24;
  }
  while ( v34 != &v49 );
  return v11;
}
