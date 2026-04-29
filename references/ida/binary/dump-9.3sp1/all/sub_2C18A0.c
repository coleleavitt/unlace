__int64 __fastcall sub_2C18A0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 func; // rax
  __int64 v19; // rsi
  __int64 **v20; // r15
  __int64 *v21; // rdx
  __int64 *v23; // r14
  __int64 v24; // rdx
  __int64 i; // r12
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 j; // r12
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  _QWORD *v39; // r15
  __int64 v40; // rdx
  _QWORD *v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // r15
  __int64 v47; // rdx
  _QWORD *v48; // r14
  __int64 v49; // rax
  _QWORD *v50; // rdi
  __int64 v51; // [rsp+8h] [rbp-90h]
  __int64 v52; // [rsp+8h] [rbp-90h]
  __int64 v53; // [rsp+10h] [rbp-88h]
  __int64 v54; // [rsp+10h] [rbp-88h]
  int v55; // [rsp+24h] [rbp-74h] BYREF
  __int64 *v56; // [rsp+28h] [rbp-70h] BYREF
  __int64 v57; // [rsp+30h] [rbp-68h] BYREF
  __int64 v58; // [rsp+38h] [rbp-60h]
  __int128 v59; // [rsp+40h] [rbp-58h]
  unsigned __int64 v60; // [rsp+58h] [rbp-40h]

  v5 = a5;
  v60 = __readfsqword(0x28u);
  v9 = a1[8];
  v55 = -1;
  if ( !v9 )
  {
    v10 = a1[7];
    v11 = a1[9];
    v12 = (__int64)(a1 + 7);
    v56 = nullptr;
    if ( (unsigned __int64)&v56 < v10 || (unsigned __int64)&v56 >= v10 + 8 * v11 )
    {
      if ( v11 > 2 )
        goto LABEL_4;
      v36 = qvector_reserve(v12, 0, 3, 8);
      v37 = a1[9];
      v38 = a1[8];
      a1[9] = v11;
      v53 = v36;
      v39 = (_QWORD *)a1[7];
      v40 = v38 - 1;
      if ( v40 >= 0 )
      {
        v41 = (_QWORD *)v36;
        do
        {
          v42 = *v39;
          *v41 = *v39;
          if ( v42 )
            ++*(_DWORD *)(v42 + 104);
          v43 = v39;
          v51 = v40;
          ++v39;
          ++v41;
          sub_140140(v43, v37);
          v40 = v51 - 1;
        }
        while ( v51 );
        v39 = (_QWORD *)a1[7];
      }
      qfree((__int64)v39);
      v10 = v53;
      a1[9] = v37;
      v9 = a1[8];
      a1[7] = v53;
      if ( v9 <= 2 )
      {
LABEL_4:
        v13 = 8 * v9;
        while ( 1 )
        {
          *(_QWORD *)(v10 + v13) = 0;
          v13 += 8;
          if ( v13 == 24 )
            break;
          v10 = a1[7];
        }
      }
      a1[8] = 3;
    }
    else
    {
      v57 = 0;
      if ( v11 > 2 )
        goto LABEL_15;
      v44 = qvector_reserve(v12, 0, 3, 8);
      a2 = a1[9];
      v45 = a1[8];
      a1[9] = v11;
      v54 = v44;
      v46 = (_QWORD *)a1[7];
      v47 = v45 - 1;
      if ( v47 >= 0 )
      {
        v48 = (_QWORD *)v44;
        do
        {
          v49 = *v46;
          *v48 = *v46;
          if ( v49 )
            ++*(_DWORD *)(v49 + 104);
          v50 = v46;
          v52 = v47;
          ++v46;
          ++v48;
          sub_140140(v50, a2);
          v47 = v52 - 1;
        }
        while ( v52 );
        v46 = (_QWORD *)a1[7];
      }
      qfree((__int64)v46);
      v10 = v54;
      a1[9] = a2;
      v9 = a1[8];
      a1[7] = v54;
      if ( v9 <= 2 )
      {
LABEL_15:
        v17 = 8 * v9;
        while ( 1 )
        {
          *(_QWORD *)(v10 + v17) = 0;
          v17 += 8;
          if ( v17 == 24 )
            break;
          v10 = a1[7];
        }
      }
      a1[8] = 3;
      sub_140140(&v57, a2);
    }
  }
  switch_dbctx();
  v14 = *(_QWORD *)(a1[7] + 8 * v5);
  if ( v14 )
  {
LABEL_9:
    if ( (a3 & 0x3F) == 0 )
    {
      v15 = a1[5] + (a3 >> 6);
      if ( v15 != -1 )
      {
        ++*(_DWORD *)(v14 + 104);
        v57 = v14;
        sub_2C07C0(v14, v15, 0, (__int64)&v55);
        sub_140140(&v57, v15);
      }
    }
    return v55;
  }
  func = get_func();
  if ( !func )
  {
LABEL_46:
    v14 = *(_QWORD *)(a1[7] + 8 * v5);
    if ( !v14 )
      return v55;
    goto LABEL_9;
  }
  v19 = *(_QWORD *)(a4 + 112);
  v57 = func;
  v58 = 0;
  v59 = 0;
  sub_14CDC0((__int64 *)&v56, v19, &v57, nullptr, 1);
  v20 = (__int64 **)(a1[7] + 8 * v5);
  v21 = *v20;
  if ( *v20 )
  {
    if ( (*((_DWORD *)v21 + 26))-- == 1 )
    {
      v23 = *v20;
      if ( *v20 )
      {
        sub_258970(*v20);
        v24 = v23[23];
        if ( v24 )
        {
          v19 = v23[24];
          if ( v19 )
          {
            for ( i = 0; i != v19; ++i )
            {
              v26 = (__int64 *)(v24 + 24 * i);
              v27 = *v26;
              if ( *v26 )
              {
                v26[1] = 0;
                qfree(v27);
                v24 = v23[23];
              }
            }
          }
          v23[24] = 0;
          qfree(v24);
        }
        v28 = v23[20];
        if ( v28 )
        {
          v23[21] = 0;
          qfree(v28);
        }
        v29 = v23[16];
        if ( v29 )
        {
          v19 = v23[17];
          if ( v19 )
          {
            for ( j = 0; j != v19; ++j )
            {
              v31 = (__int64 *)(v29 + 32 * j);
              v32 = *v31;
              if ( *v31 )
              {
                v31[1] = 0;
                qfree(v32);
                v29 = v23[16];
              }
            }
          }
          v23[17] = 0;
          qfree(v29);
        }
        sub_255050((__int64)(v23 + 2));
        j__qfree((__int64)v23);
      }
    }
  }
  v33 = (__int64)v56;
  *v20 = v56;
  if ( v33 )
    ++*(_DWORD *)(v33 + 104);
  sub_140140(&v56, v19);
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  v35 = *(_QWORD *)(a1[7] + 8 * v5);
  if ( v35 )
  {
    sub_2581E0(v35, v19, v34);
    goto LABEL_46;
  }
  return v55;
}
