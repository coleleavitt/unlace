unsigned __int64 __fastcall sub_15B0C0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rbp
  __int64 *v12; // r8
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 *v24; // [rsp+0h] [rbp-90h]
  __int64 v25; // [rsp+10h] [rbp-80h] BYREF
  __int64 v26; // [rsp+18h] [rbp-78h]
  __int128 v27; // [rsp+20h] [rbp-70h]
  __int128 v28; // [rsp+38h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)&v28 = 0;
  *((_QWORD *)&v28 + 1) = a3;
  v5 = sub_15B020(a2, &v28);
  v27 = 0;
  v26 = 0;
  if ( v5 )
  {
    v6 = (_QWORD *)v5;
    v7 = *(_QWORD *)(v5 + 8);
    if ( (int)v7 <= 0 )
      return v29 - __readfsqword(0x28u);
    v8 = (unsigned int)(v7 - 1);
    v9 = 0;
    v10 = 0;
    v11 = nullptr;
    v12 = &v25;
    v13 = 16 * (v8 + 1);
    do
    {
      while ( 1 )
      {
        v14 = v9 + *v6;
        if ( !*(_BYTE *)v14 )
          break;
        v9 += 16;
        if ( v13 == v9 )
          goto LABEL_9;
      }
      v15 = *(_QWORD *)(v14 + 8);
      v25 = v15;
      if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v10 + 1) )
      {
        v24 = v12;
        v26 = qvector_reserve();
        v11 = (_QWORD *)v26;
        v12 = v24;
        v10 = v27;
      }
      v11[v10] = v15;
      v9 += 16;
      v11 = (_QWORD *)v26;
      v10 = v27 + 1;
      *(_QWORD *)&v27 = v27 + 1;
    }
    while ( v13 != v9 );
  }
  else
  {
    v26 = qvector_reserve();
    *(_QWORD *)(v26 + 8 * v27) = a3;
    v11 = (_QWORD *)v26;
    v10 = v27 + 1;
    *(_QWORD *)&v27 = v27 + 1;
  }
LABEL_9:
  if ( 8 * v10 )
  {
    do
    {
      v16 = *v11;
      v17 = (_QWORD *)(qword_2532E0 + 8 * xmmword_2532E8);
      if ( (_QWORD *)qword_2532E0 == v17 )
        goto LABEL_19;
      v18 = (_QWORD *)qword_2532E0;
      while ( v16 != *v18 )
      {
        if ( v17 == ++v18 )
          goto LABEL_19;
      }
      if ( v17 == v18 )
      {
LABEL_19:
        if ( *((_QWORD *)&xmmword_2532E8 + 1) < (unsigned __int64)(xmmword_2532E8 + 1) )
        {
          qword_2532E0 = qvector_reserve();
          v17 = (_QWORD *)(qword_2532E0 + 8 * xmmword_2532E8);
        }
        *v17 = v16;
        v21 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&xmmword_2532E8 = xmmword_2532E8 + 1;
        v22 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v21 + 1) )
        {
          v23 = qvector_reserve();
          *(_QWORD *)a1 = v23;
          v21 = *(_QWORD *)(a1 + 8);
          v22 = v23;
        }
        *(_QWORD *)(v22 + 8 * v21) = v16;
        ++*(_QWORD *)(a1 + 8);
      }
      v19 = (_QWORD *)v26;
      ++v11;
    }
    while ( v11 != (_QWORD *)(v26 + 8 * v27) );
  }
  else
  {
    v19 = v11;
  }
  if ( v19 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return v29 - __readfsqword(0x28u);
}

