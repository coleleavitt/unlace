unsigned __int64 __fastcall sub_4E26C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r13
  __int64 v8; // rax
  __int64 *v9; // r15
  __int64 *v10; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  char *v20; // rdi
  char *v21; // rbx
  __int64 v22; // rdx
  char *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  bool v33; // cf
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 *v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // [rsp+0h] [rbp-58h]
  __int64 v44; // [rsp+0h] [rbp-58h]
  _QWORD *v45; // [rsp+8h] [rbp-50h]
  __int64 v46; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+18h] [rbp-40h]

  v4 = *(__int64 **)(a1 + 160);
  v47 = __readfsqword(0x28u);
  v6 = *v4;
  v7 = *(_QWORD **)(*v4 + 48 * a2 + 32);
  if ( !v7 )
  {
    if ( !under_debugger )
      interr(2883);
    BUG();
  }
  v8 = v7[4];
  if ( v8 )
  {
    v9 = (__int64 *)v7[3];
    v10 = &v9[v8];
    if ( v9 != v10 )
    {
      do
      {
        v13 = *v9;
        v14 = *(_QWORD *)(a1 + 168);
        ++v9;
        v46 = v13;
        v15 = sub_4E2610(v14, (unsigned int *)&v46);
        *(_DWORD *)(v15 + 48) += a4;
        *(_QWORD *)(v15 + 40) = a3;
      }
      while ( v10 != v9 );
      v6 = **(_QWORD **)(a1 + 160);
    }
    v16 = *(_QWORD **)(v6 + 48 * a3 + 32);
    if ( v16 )
    {
      v17 = v16[5];
      v45 = v16 + 3;
      v18 = v7[4];
      v19 = v18 + v16[4];
      if ( v17 < v19 )
      {
        v35 = qvector_reserve(v45, 0, v19, 8);
        v36 = v16[4];
        v37 = v16[5];
        v16[5] = v17;
        v38 = (__int64 *)v16[3];
        v39 = v35;
        v40 = v36 - 1;
        if ( v40 >= 0 )
        {
          v41 = v35;
          do
          {
            v42 = *v38;
            v41 += 8;
            ++v38;
            *(_QWORD *)(v41 - 8) = v42;
            v33 = v40-- == 0;
          }
          while ( !v33 );
          v38 = (__int64 *)v16[3];
        }
        qfree(v38);
        v16[3] = v39;
        v16[5] = v37;
        v18 = v7[4];
      }
      v20 = (char *)v7[3];
      v21 = &v20[8 * v18];
      if ( v21 == v20 )
        goto LABEL_19;
      v22 = v16[4];
      v23 = (char *)v7[3];
      do
      {
        v25 = *(_QWORD *)v23;
        if ( v16[5] >= (unsigned __int64)(v22 + 1) )
        {
          v24 = v16[3];
        }
        else
        {
          v43 = v16[5];
          v26 = qvector_reserve(v45, 0, v22 + 1, 8);
          v27 = v16[4];
          v24 = v26;
          v28 = (__int64 *)v16[3];
          v29 = v16[5];
          v16[5] = v43;
          v30 = v27 - 1;
          if ( v30 >= 0 )
          {
            v31 = v24;
            do
            {
              v32 = *v28;
              v31 += 8;
              ++v28;
              *(_QWORD *)(v31 - 8) = v32;
              v33 = v30-- == 0;
            }
            while ( !v33 );
            v28 = (__int64 *)v16[3];
          }
          v44 = v29;
          qfree(v28);
          v16[3] = v24;
          v22 = v16[4];
          v16[5] = v44;
        }
        *(_QWORD *)(v24 + 8 * v22) = v25;
        v23 += 8;
        v22 = v16[4] + 1LL;
        v16[4] = v22;
      }
      while ( v21 != v23 );
    }
    v20 = (char *)v7[3];
LABEL_19:
    if ( v20 )
    {
      v7[4] = 0;
      qfree(v20);
      v7[3] = 0;
      v7[5] = 0;
    }
  }
  return v47 - __readfsqword(0x28u);
}

