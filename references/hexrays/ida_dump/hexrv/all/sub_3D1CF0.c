__int64 __fastcall sub_3D1CF0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  unsigned int tinfo_details; // r12d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  size_t v17; // r10
  __int64 v18; // r8
  size_t v19; // r11
  __int64 v20; // rsi
  unsigned __int64 v21; // r8
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 *v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-120h]
  unsigned __int64 v31; // [rsp+8h] [rbp-120h]
  unsigned __int64 v32; // [rsp+10h] [rbp-118h]
  size_t v33; // [rsp+10h] [rbp-118h]
  size_t v34; // [rsp+18h] [rbp-110h]
  __int64 v35; // [rsp+20h] [rbp-108h]
  __int64 v36; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+48h] [rbp-E0h]
  __int64 v39; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v40; // [rsp+68h] [rbp-C0h]
  __int64 v41; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+88h] [rbp-A0h]
  __int64 v43; // [rsp+98h] [rbp-90h]
  __int64 v44; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-80h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-78h]
  __int64 v47; // [rsp+C0h] [rbp-68h]
  __int128 v48; // [rsp+C8h] [rbp-60h]
  char v49; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v50; // [rsp+E8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( a4 == -1 )
  {
    return 0;
  }
  else
  {
    v36 = 0;
    get_tinfo(&v36, a4);
    if ( (get_tinfo_property(v36, 2) & 0xF) == 0xC )
    {
      v41 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v47 = 0;
      v49 = 16;
      v42 = 0;
      v46 = 0;
      v48 = 0;
      tinfo_details = get_tinfo_details(v36, 12, &v41);
      if ( (_BYTE)tinfo_details )
      {
        v38 = 0;
        v37 = 0;
        tinfo_details = dump_func_type_data(&v37, &v41, 2);
        if ( (_BYTE)tinfo_details )
        {
          v39 = 0;
          v40 = 0;
          sub_3CC270(&v37, &v39, "\n", 1);
          v14 = v39;
          v15 = v39 + 24 * v40;
          if ( v15 != v39 )
          {
            do
            {
              v21 = a2[1];
              if ( v21 > 1 )
              {
                v22 = *a2;
                if ( *(_BYTE *)(*a2 + v21 - 2) != 10 )
                {
                  v23 = v21 + 1;
                  if ( a2[2] < v21 + 1 )
                  {
                    v32 = a2[1];
                    v30 = v21 + 1;
                    v24 = qvector_reserve(a2, v22, v23, 1);
                    v21 = v32;
                    v23 = v30;
                    *a2 = v24;
                    v22 = v24;
                  }
                  a2[1] = v23;
                  *(_BYTE *)(v22 + v21 - 1) = 10;
                  *(_BYTE *)(*a2 + v21) = 0;
                }
              }
              v16 = *(_QWORD *)(v14 + 8);
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v16 != 1 )
                {
                  v18 = a2[1];
                  v19 = v16 - 1;
                  if ( v18 )
                  {
                    --v18;
                    v19 = v17 + v18;
                    v16 += v18;
                  }
                  v20 = *a2;
                  if ( a2[2] < v16 )
                  {
                    v35 = v18;
                    v34 = v17;
                    v33 = v19;
                    v31 = v16;
                    v29 = qvector_reserve(a2, v20, v16, 1);
                    v18 = v35;
                    v17 = v34;
                    *a2 = v29;
                    v20 = v29;
                    v19 = v33;
                    v16 = v31;
                  }
                  a2[1] = v16;
                  *(_BYTE *)(v20 + v19) = 0;
                  memcpy((void *)(v18 + *a2), *(const void **)v14, v17);
                }
              }
              v14 += 24;
              ++*a3;
            }
            while ( v15 != v14 );
            v14 = v39;
          }
          if ( v14 )
          {
            v25 = v40;
            if ( (_QWORD)v40 )
            {
              v26 = 0;
              do
              {
                v27 = (__int64 *)(v14 + 24 * v26);
                v28 = *v27;
                if ( *v27 )
                {
                  v27[1] = 0;
                  qfree(v28);
                  v14 = v39;
                }
                ++v26;
              }
              while ( v25 != v26 );
            }
            *(_QWORD *)&v40 = 0;
            qfree(v14);
          }
        }
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
      }
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      cleanup_argloc(&v45);
      clear_tinfo_t(&v44);
      v8 = v41;
      if ( v41 )
      {
        v9 = v42;
        if ( (_QWORD)v42 )
        {
          v10 = 0;
          do
          {
            v11 = (_QWORD *)(v8 + 80 * v10);
            clear_tinfo_t(v11 + 8);
            v12 = v11[5];
            if ( v12 )
            {
              v11[6] = 0;
              qfree(v12);
            }
            v13 = v11[2];
            if ( v13 )
            {
              v11[3] = 0;
              qfree(v13);
            }
            ++v10;
            cleanup_argloc(v11);
            v8 = v41;
          }
          while ( v9 != v10 );
        }
        *(_QWORD *)&v42 = 0;
        qfree(v8);
      }
    }
    else
    {
      tinfo_details = 0;
    }
    clear_tinfo_t(&v36);
  }
  return tinfo_details;
}
