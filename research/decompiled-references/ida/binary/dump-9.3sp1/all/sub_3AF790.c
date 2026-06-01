__int64 __fastcall sub_3AF790(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
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
  char *v33; // rbx
  __int64 v34; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v40; // [rsp+8h] [rbp-1A0h]
  __int64 v41; // [rsp+10h] [rbp-198h]
  __int64 v42; // [rsp+18h] [rbp-190h]
  int v43; // [rsp+20h] [rbp-188h] BYREF
  int v44; // [rsp+24h] [rbp-184h]
  _QWORD v45[7]; // [rsp+50h] [rbp-158h] BYREF
  char v46; // [rsp+88h] [rbp-120h] BYREF
  char v47; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+108h] [rbp-A0h]
  __int64 v49; // [rsp+110h] [rbp-98h]
  __int64 v50; // [rsp+118h] [rbp-90h]
  __int64 v51; // [rsp+128h] [rbp-80h]
  __int64 v52; // [rsp+130h] [rbp-78h]
  __int64 v53; // [rsp+140h] [rbp-68h]
  __int64 v54; // [rsp+148h] [rbp-60h]
  unsigned __int64 v55; // [rsp+168h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  sub_3AF170((__int64)v45, a1, a3, a4);
  v39 = a5;
  v9 = &v39;
  v40 = *a6;
  LODWORD(v41) = *((_DWORD *)a6 + 2);
  if ( a5 == -1 )
    v9 = *(__int64 **)(v48 + 1400);
  v10 = callui(16, 0, v45, v9, &callui, v8, v39, v40, v41, v42);
  v11 = 0;
  if ( v10 >= 0 && v52 )
  {
    v36 = v51 + 48LL * (int)v10;
    **(_QWORD **)(v48 + 1400) = **(_QWORD **)v36;
    v37 = *(_QWORD *)(v48 + 1400);
    *(_QWORD *)(v37 + 8) = *(_QWORD *)(v36 + 24);
    *(_DWORD *)(v37 + 16) = *(_DWORD *)(v36 + 32);
    sub_390A30((__int64)&v43, *(_QWORD *)(*(_QWORD *)v36 + 8LL) + 8LL, (__int64 *)(v36 + 24));
    if ( !v44 )
    {
      v38 = tag_skipcodes();
      v44 = skip_spaces() - v38;
    }
    sub_395890((__int64)&v43, 1u, 0, 0);
    v11 = 1;
  }
  v45[0] = off_4E7350;
  if ( v53 )
  {
    v54 = 0;
    qfree(v53);
  }
  v12 = v51;
  if ( v51 )
  {
    v13 = v52;
    if ( v52 )
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
              sub_258970(*v15);
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
              sub_255050((__int64)(v18 + 2));
              j__qfree((__int64)v18);
            }
          }
          v12 = v51;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    v52 = 0;
    qfree(v12);
  }
  v30 = v49;
  if ( v49 )
  {
    v31 = v50;
    if ( v50 )
    {
      v32 = 0;
      do
      {
        ++v32;
        clear_tinfo_t();
        v30 = v49;
      }
      while ( v31 != v32 );
    }
    v50 = 0;
    qfree(v30);
  }
  v33 = &v47;
  v45[0] = &unk_4EBE48;
  do
  {
    v34 = *(_QWORD *)v33;
    if ( *(_QWORD *)v33 )
    {
      *((_QWORD *)v33 + 1) = 0;
      qfree(v34);
    }
    v33 -= 24;
  }
  while ( v33 != &v46 );
  return v11;
}
