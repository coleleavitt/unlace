__int64 __fastcall sub_850330(__int64 *a1, __m128 a2)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // r12
  __int64 *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  _DWORD *v14; // r14
  int v15; // r13d
  _DWORD *v16; // r12
  int v17; // eax
  int v18; // edx
  unsigned int *v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // r15
  __m128 *v24; // rcx
  __int64 v25; // rdi
  int v26; // r14d
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // r15
  void (***v31)(void); // rdi
  __int64 v32; // rdi
  __int64 *v33; // r12
  _DWORD *v34; // rcx
  __int64 v35; // rdi
  _QWORD *v37; // rax
  _QWORD *v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 *v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rdi
  void *v44; // r14
  void *v45; // r14
  __int64 *v46; // [rsp+8h] [rbp-58h]
  _QWORD *ptr; // [rsp+10h] [rbp-50h]
  int v48; // [rsp+18h] [rbp-48h]
  _QWORD *v49; // [rsp+18h] [rbp-48h]
  unsigned int *v50; // [rsp+18h] [rbp-48h]
  unsigned int v51; // [rsp+18h] [rbp-48h]
  int v52; // [rsp+18h] [rbp-48h]
  _DWORD v53[14]; // [rsp+28h] [rbp-38h] BYREF

  v3 = (_DWORD *)a1[22];
  v46 = a1 + 22;
  if ( v3 )
  {
    v48 = v3[4];
    v3[4] = v48 - 1;
    if ( v48 == 1 )
    {
      v44 = v3;
      (**(void (__fastcall ***)(_DWORD *))v3)(v3);
      sub_186B220(v44);
    }
  }
  a1[22] = 0;
  sub_791E60(*a1, v46);
  v4 = (_QWORD *)a1[34];
  v49 = v4;
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = &v4[6 * v5];
      do
      {
        v7 = v49[3];
        if ( v7 )
        {
          v8 = v49[4];
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v8, v7);
        }
        v10 = (__int64 *)v49[2];
        if ( v10 )
        {
          v11 = &v10[*((unsigned int *)v10 - 1)];
          if ( v10 >= v11 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v12 = *v10;
              if ( *v10 )
              {
                v13 = v49[1];
                v9 = (*(_DWORD *)(v12 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v10 >= v11 )
                goto LABEL_17;
            }
            sub_15D7BC0(v13, v12);
            ++v10;
          }
          while ( v10 < v11 );
LABEL_17:
          v10 = (__int64 *)v49[2];
          if ( v10 )
LABEL_18:
            sub_186B220(v10 - 1);
        }
        v49 += 6;
      }
      while ( v49 != v6 );
      v49 = (_QWORD *)a1[34];
    }
    *((_DWORD *)v49 - 1) = 0;
    v14 = *(_DWORD **)(a1[1] + 3112);
    if ( !v14 )
    {
      v21 = *a1;
      v15 = 1;
      *((_DWORD *)a1 + 60) += *(_DWORD *)(*a1 + 1048);
      goto LABEL_38;
    }
  }
  else
  {
    v14 = *(_DWORD **)(a1[1] + 3112);
    if ( !v14 )
    {
      v35 = *a1;
      *((_DWORD *)a1 + 60) += *(_DWORD *)(*a1 + 1048);
      goto LABEL_78;
    }
  }
  v15 = 1;
  v16 = &v14[*(v14 - 1)];
  if ( v16 == v14 )
  {
    v21 = *a1;
    *((_DWORD *)a1 + 60) += *(_DWORD *)(*a1 + 1048);
    v35 = v21;
    if ( !v49 )
      goto LABEL_78;
LABEL_38:
    v22 = *((unsigned int *)v49 - 1);
    ptr = &v49[6 * v22];
    if ( ptr != v49 )
    {
      v23 = v49;
      while ( 1 )
      {
        v26 = *(_DWORD *)(v21 + 2280);
        v27 = v23[3];
        *(_DWORD *)(v21 + 2280) = *(_DWORD *)v23 + 1;
        v51 = sub_79C480(v21, v27) ^ 1;
        v24 = *(__m128 **)(*a1 + 24);
        if ( v24 )
        {
          if ( v24[22].m128_i8[0] )
          {
            sub_7A4170(*a1);
            v28 = v23[2];
            if ( v28 )
              v29 = *(_DWORD *)(v28 - 4);
            else
              v29 = 0;
            v24 = (__m128 *)sub_7D49E0(*a1, a1 + 33, *(_DWORD *)v23, *((_DWORD *)v23 + 10) ^ 1u, v51, v29, v23[2]);
          }
          else
          {
            v24 = nullptr;
          }
        }
        sub_7E5400(a1[1], *((_DWORD *)v23 + 10) ^ 1, v51, v24);
        v25 = a1[1];
        v53[0] = *((_DWORD *)v23 + 10) ^ 1;
        v53[1] = v51;
        sub_7D4840(v25, 2u, (__int64)v53, 0);
        *(_DWORD *)(v21 + 2280) = v26;
        v23 += 6;
        if ( ptr == v23 )
          break;
        v21 = *a1;
      }
      v37 = (_QWORD *)a1[34];
      v49 = v37;
      if ( !v37 )
        goto LABEL_57;
      v22 = *((unsigned int *)v37 - 1);
    }
    if ( (_DWORD)v22 )
    {
      v38 = &v49[6 * v22];
      do
      {
        v39 = v49[3];
        if ( v39 )
        {
          v40 = v49[4];
          v9 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v40, v39);
        }
        v33 = (__int64 *)v49[2];
        if ( v33 )
        {
          v41 = &v33[*((unsigned int *)v33 - 1)];
          if ( v33 >= v41 )
            goto LABEL_53;
          do
          {
            v42 = *v33;
            if ( *v33 )
            {
              v43 = v49[1];
              v9 = (*(_DWORD *)(v42 + 8))-- == 1;
              if ( v9 )
                sub_15D7BC0(v43, v42);
            }
            ++v33;
          }
          while ( v33 < v41 );
          v33 = (__int64 *)v49[2];
          if ( v33 )
LABEL_53:
            sub_186B220(v33 - 1);
        }
        v49 += 6;
      }
      while ( v49 != v38 );
      v49 = (_QWORD *)a1[34];
    }
    *((_DWORD *)v49 - 1) = 0;
    goto LABEL_57;
  }
  do
  {
    while ( 1 )
    {
      v19 = *(unsigned int **)(*a1 + 2328);
      v20 = *v14 >> 1;
      v50 = v19;
      if ( v19 )
      {
        if ( v20 < *(v19 - 1) )
          v50 = *(unsigned int **)&v19[2 * v20];
        else
          v50 = nullptr;
      }
      if ( !(unsigned __int8)sub_7CB810(*a1, v20) )
        goto LABEL_32;
      if ( !a1[22] )
      {
        v30 = sub_186B270(0xA0u);
        sub_1373200(v30, a1[2]);
        v31 = (void (***)(void))a1[22];
        ++*(_DWORD *)(v30 + 16);
        if ( v31 )
        {
          v9 = (*((_DWORD *)v31 + 4))-- == 1;
          if ( v9 )
          {
            (**v31)();
            sub_186B220(v31);
          }
        }
        v32 = *a1;
        a1[22] = v30;
        sub_794C80(v32, (void (****)(void))v46, 0);
      }
      v17 = sub_84FF00((__int64)a1, v50, a2);
      if ( v17 == -1 )
        break;
      v18 = 0;
      if ( v15 <= 0 )
        v18 = v15;
      if ( !v17 )
        v15 = v18;
LABEL_32:
      if ( v16 == ++v14 )
        goto LABEL_37;
    }
    ++v14;
    v15 = -1;
  }
  while ( v16 != v14 );
LABEL_37:
  v21 = *a1;
  v49 = (_QWORD *)a1[34];
  *((_DWORD *)a1 + 60) += *(_DWORD *)(*a1 + 1048);
  if ( v49 )
    goto LABEL_38;
LABEL_57:
  if ( v15 == 1 )
  {
    v35 = *a1;
LABEL_78:
    v15 = 1;
    goto LABEL_62;
  }
  v34 = (_DWORD *)a1[22];
  if ( v34 )
  {
    v52 = v34[4];
    v34[4] = v52 - 1;
    if ( v52 == 1 )
    {
      v45 = v34;
      (**(void (__fastcall ***)(_DWORD *))v34)(v34);
      sub_186B220(v45);
    }
  }
  a1[22] = 0;
  v35 = *a1;
LABEL_62:
  sub_791E60(v35, v46);
  return (unsigned int)v15;
}

