unsigned __int64 __fastcall sub_5EB40(__int64 a1, __int64 *a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  _DWORD *v16; // r12
  unsigned __int16 *v17; // r12
  unsigned __int16 *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rsi
  const char *v21; // rdx
  __int64 v22; // r12
  const char *v23; // rsi
  unsigned __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdi
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // edx
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int16 *v50; // [rsp+8h] [rbp-70h]
  __int128 v51; // [rsp+10h] [rbp-68h]
  __int128 v52; // [rsp+20h] [rbp-58h]
  __int64 v53; // [rsp+30h] [rbp-48h]
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( a3 == 115 )
  {
    v51 = 0;
    v49 = 56;
    v50 = nullptr;
    v53 = -1;
    v52 = -1;
    v8 = node2ea(a4);
    if ( (unsigned __int8)sub_54AC0((__int64)&v49, a5, v8) )
    {
      if ( (_QWORD)v51 )
      {
        v9 = a2[1];
        v10 = *a2;
        if ( a2[2] < (unsigned __int64)(v9 + 1) )
        {
          v46 = qvector_reserve(a2, v10, v9 + 1, 24);
          *a2 = v46;
          v9 = a2[1];
          v10 = v46;
        }
        v11 = v10 + 24 * v9;
        *(_OWORD *)(v11 + 8) = 0;
        *(_QWORD *)v11 = 0;
        ++a2[1];
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
        {
          v13 = v12 + 6;
          v14 = v12 + 7;
          --v12;
        }
        else
        {
          v14 = 8;
          v13 = 7;
        }
        v15 = *(_QWORD *)v11;
        if ( *(_QWORD *)(v11 + 16) < v14 )
        {
          v47 = qvector_reserve(v11, v15, v14, 1);
          *(_QWORD *)v11 = v47;
          v15 = v47;
        }
        *(_QWORD *)(v11 + 8) = v14;
        *(_BYTE *)(v15 + v13) = 0;
        v16 = (_DWORD *)(*(_QWORD *)v11 + v12);
        *v16 = 1734701683;
        *(_DWORD *)((char *)v16 + 3) = 540701543;
        v17 = v50;
        v18 = &v50[v51];
        if ( v50 != v18 )
        {
          do
          {
            v19 = *(_QWORD *)(a5 + 16);
            v20 = *v17;
            v21 = "UNK";
            if ( (int)v20 < *(_DWORD *)(v19 + 64) )
              v21 = *(const char **)(*(_QWORD *)(v19 + 56) + 8 * v20);
            sub_5E740((__int64 *)v11, (__int64)"%s,", v21);
            ++v17;
          }
          while ( v18 != v17 );
        }
        v22 = *(_QWORD *)(v11 + 8);
        v23 = *(const char **)v11;
        v24 = v22 - 1;
        if ( v22 - 1 <= 1 )
        {
          if ( v23 )
          {
            *(_QWORD *)(v11 + 8) = 0;
            qfree(v23, v23);
            *(_QWORD *)v11 = 0;
            *(_QWORD *)(v11 + 16) = 0;
          }
        }
        else
        {
          if ( *(_QWORD *)(v11 + 16) < v24 )
          {
            v48 = qvector_reserve(v11, v23, v22 - 1, 1);
            *(_QWORD *)v11 = v48;
            v23 = (const char *)v48;
          }
          *(_QWORD *)(v11 + 8) = v24;
          v23[v22 - 2] = 0;
        }
      }
      v25 = a2[1];
      v26 = *a2;
      if ( a2[2] < (unsigned __int64)(v25 + 1) )
      {
        v45 = qvector_reserve(a2, v26, v25 + 1, 24);
        *a2 = v45;
        v25 = a2[1];
        v26 = v45;
      }
      v27 = v26 + 24 * v25;
      *(_QWORD *)v27 = 0;
      *(_OWORD *)(v27 + 8) = 0;
      v28 = v52;
      ++a2[1];
      sub_47050((__int64 *)v27, (__int64)"lr_frame_ofs: %lld", v28);
      v29 = a2[1];
      v30 = *a2;
      if ( a2[2] < (unsigned __int64)(v29 + 1) )
      {
        v44 = qvector_reserve(a2, v30, v29 + 1, 24);
        *a2 = v44;
        v29 = a2[1];
        v30 = v44;
      }
      v31 = v30 + 24 * v29;
      *(_QWORD *)v31 = 0;
      *(_OWORD *)(v31 + 8) = 0;
      v32 = *((_QWORD *)&v52 + 1);
      ++a2[1];
      sub_47050((__int64 *)v31, (__int64)"reg_save_area: %lld", v32);
      v33 = a2[1];
      v34 = *a2;
      if ( a2[2] < (unsigned __int64)(v33 + 1) )
      {
        v43 = qvector_reserve(a2, v34, v33 + 1, 24);
        *a2 = v43;
        v33 = a2[1];
        v34 = v43;
      }
      v35 = v34 + 24 * v33;
      *(_QWORD *)v35 = 0;
      *(_OWORD *)(v35 + 8) = 0;
      v36 = v53;
      ++a2[1];
      sub_47050((__int64 *)v35, (__int64)"nfixed_gp: %d", v36);
      v37 = a2[1];
      v38 = *a2;
      if ( a2[2] < (unsigned __int64)(v37 + 1) )
      {
        v42 = qvector_reserve(a2, v38, v37 + 1, 24);
        *a2 = v42;
        v37 = a2[1];
        v38 = v42;
      }
      v39 = v38 + 24 * v37;
      *(_QWORD *)v39 = 0;
      *(_OWORD *)(v39 + 8) = 0;
      v40 = HIDWORD(v53);
      ++a2[1];
      sub_47050((__int64 *)v39, (__int64)"nfixed_fp: %d", v40);
      if ( v50 )
      {
        *(_QWORD *)&v51 = 0;
        qfree(v50, "nfixed_fp: %d", v41);
      }
    }
    else if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v50, (const char *)a5);
    }
  }
  return v54 - __readfsqword(0x28u);
}
