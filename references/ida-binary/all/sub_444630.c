unsigned __int64 __fastcall sub_444630(__int64 a1, const char *a2, __int64 a3, char a4, __int64 a5, char a6)
{
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // [rsp+8h] [rbp-C0h]
  int v38; // [rsp+Ch] [rbp-BCh]
  __int64 v41; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-A0h]
  __int64 v43; // [rsp+38h] [rbp-90h]
  __int64 v44; // [rsp+40h] [rbp-88h]
  __int64 v45; // [rsp+50h] [rbp-78h]
  __int64 v46; // [rsp+58h] [rbp-70h]
  __int64 v47; // [rsp+68h] [rbp-60h]
  __int64 v48; // [rsp+70h] [rbp-58h]
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  sub_42ACB0((__int64)&v41, 432);
  sub_197020(&v41, "Name", 32, 0, nullptr);
  v9 = a6 & 2;
  if ( (a6 & 2) != 0 )
    sub_197020(&v41, "Last changed", 20, 0, nullptr);
  v37 = a6 & 4;
  if ( (a6 & 4) != 0 )
    sub_197020(&v41, "Size", 0xFFFFFFFFLL, 196608, nullptr);
  v38 = a6 & 8;
  if ( (a6 & 8) != 0 )
    sub_197020(&v41, "Description", 0xFFFFFFFFLL, 0, nullptr);
  sub_42F6D0(a1, (__int64)a2, a3, (__int64)&v41, a5, 1);
  if ( v47 )
  {
    v48 = 0;
    qfree(v47, a2);
  }
  if ( v45 )
  {
    v46 = 0;
    qfree(v45, a2);
  }
  v10 = v43;
  if ( v43 )
  {
    v11 = v44;
    if ( v44 )
    {
      v12 = 0;
      do
      {
        v13 = (__int64 *)(v10 + 24 * v12);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, a2);
          v10 = v43;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    v44 = 0;
    qfree(v10, a2);
  }
  v15 = v41;
  if ( v41 )
  {
    v16 = v42;
    if ( v42 )
    {
      v17 = 0;
      do
      {
        v18 = (__int64 *)(v15 + 24 * v17);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, a2);
          v15 = v41;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    v42 = 0;
    qfree(v15, a2);
  }
  *(_BYTE *)(a1 + 472) = a4;
  *(_QWORD *)a1 = &worklists_item_model_t___vtable;
  *(_QWORD *)(a1 + 448) = a1 + 432;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 456) = a1 + 432;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 488) = 0;
  v20 = qvector_reserve(a1 + 480, 0, 1, 4);
  v21 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 480) = v20;
  *(_DWORD *)(v20 + 4 * v21) = 1;
  v22 = *(_QWORD *)(a1 + 488);
  v23 = v22 + 1;
  *(_QWORD *)(a1 + 488) = v22 + 1;
  if ( v9 )
  {
    v31 = *(_QWORD *)(a1 + 496);
    v32 = v22 + 2;
    LODWORD(v41) = 2;
    v33 = *(_QWORD *)(a1 + 480);
    if ( v31 < v32 )
    {
      v35 = qvector_reserve(a1 + 480, v33, v32, 4);
      *(_QWORD *)(a1 + 480) = v35;
      v23 = *(_QWORD *)(a1 + 488);
      v33 = v35;
    }
    *(_DWORD *)(v33 + 4 * v23) = 2;
    ++*(_QWORD *)(a1 + 488);
  }
  if ( v37 )
  {
    v28 = *(_QWORD *)(a1 + 488);
    v29 = *(_QWORD *)(a1 + 496);
    LODWORD(v41) = 4;
    v30 = *(_QWORD *)(a1 + 480);
    if ( v29 < v28 + 1 )
    {
      v36 = qvector_reserve(a1 + 480, v30, v28 + 1, 4);
      *(_QWORD *)(a1 + 480) = v36;
      v30 = v36;
      v28 = *(_QWORD *)(a1 + 488);
    }
    *(_DWORD *)(v30 + 4 * v28) = 4;
    ++*(_QWORD *)(a1 + 488);
  }
  if ( v38 )
  {
    v25 = *(_QWORD *)(a1 + 488);
    v26 = *(_QWORD *)(a1 + 496);
    LODWORD(v41) = 8;
    v27 = *(_QWORD *)(a1 + 480);
    if ( v26 < v25 + 1 )
    {
      v34 = qvector_reserve(a1 + 480, v27, v25 + 1, 4);
      *(_QWORD *)(a1 + 480) = v34;
      v27 = v34;
      v25 = *(_QWORD *)(a1 + 488);
    }
    *(_DWORD *)(v27 + 4 * v25) = 8;
    ++*(_QWORD *)(a1 + 488);
  }
  return v49 - __readfsqword(0x28u);
}
