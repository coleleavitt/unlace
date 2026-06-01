unsigned __int64 __fastcall struc_stroff_data_t__::vfunc_5(__int64 a1, char *a2, _DWORD *a3, __int64 a4, int a5)
{
  const char *v6; // r14
  double v8; // xmm0_8
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rbp
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rdi
  int v34; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+8h] [rbp-E0h]
  __int128 v36; // [rsp+10h] [rbp-D8h]
  __int64 v37; // [rsp+20h] [rbp-C8h]
  __int128 v38; // [rsp+28h] [rbp-C0h]
  char v39; // [rsp+38h] [rbp-B0h]
  __int64 v40; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+48h] [rbp-A0h]
  __int64 v42; // [rsp+58h] [rbp-90h]
  __int128 v43; // [rsp+60h] [rbp-88h]
  __int64 v44; // [rsp+70h] [rbp-78h]
  __int128 v45; // [rsp+78h] [rbp-70h]
  __int64 v46; // [rsp+88h] [rbp-60h]
  __int128 v47; // [rsp+90h] [rbp-58h]
  int v48; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v49; // [rsp+B8h] [rbp-30h]

  v6 = *(const char **)(a4 + 16);
  v49 = __readfsqword(0x28u);
  v41 = 0;
  v43 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v45 = 0;
  v47 = 0;
  sub_2D1510((__int64)&v40, a2);
  v8 = 0.0;
  v34 = a5;
  v35 = 0;
  v37 = 0;
  v39 = 1;
  v36 = 0;
  v38 = 0;
  sub_2D4CE0((__int64)&v40, v6, &v34, -1, 0);
  sub_2D17F0((__int64)&v40, (__int64 *)a2, 1, v9, 0.0);
  v10 = v37;
  *a3 = v48;
  if ( v10 )
  {
    *(_QWORD *)&v38 = 0;
    v8 = qfree(v10, a2);
  }
  v11 = v35;
  if ( v35 )
  {
    v12 = v36;
    if ( (_QWORD)v36 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 80 * v13);
        v15 = v14[4];
        if ( v15 )
        {
          v14[5] = 0;
          v8 = qfree(v15, a2, v8);
        }
        v16 = v14[1];
        if ( v16 )
        {
          v14[2] = 0;
          v8 = qfree(v16, a2, v8);
        }
        ++v13;
        v11 = v35;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v36 = 0;
    v8 = qfree(v11, a2, v8);
  }
  v17 = v46;
  if ( v46 )
  {
    v18 = v47;
    if ( (_QWORD)v47 )
    {
      v19 = 0;
      do
      {
        v20 = (_QWORD *)(v17 + 80 * v19);
        v21 = v20[4];
        if ( v21 )
        {
          v20[5] = 0;
          v8 = qfree(v21, a2, v8);
        }
        v22 = v20[1];
        if ( v22 )
        {
          v20[2] = 0;
          v8 = qfree(v22, a2, v8);
        }
        ++v19;
        v17 = v46;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v47 = 0;
    v8 = qfree(v17, a2, v8);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    v8 = qfree(v44, a2, v8);
  }
  v23 = v42;
  if ( v42 )
  {
    v24 = v43;
    if ( (_QWORD)v43 )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v23 + 24 * v25);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          v8 = qfree(v27, a2, v8);
          v23 = v42;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v43 = 0;
    v8 = qfree(v23, a2, v8);
  }
  v28 = v40;
  if ( v40 )
  {
    v29 = v41;
    if ( (_QWORD)v41 )
    {
      v30 = 0;
      do
      {
        v31 = (__int64 *)(v28 + 24 * v30);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          v8 = qfree(v32, a2, v8);
          v28 = v40;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v28, a2, v8);
  }
  return v49 - __readfsqword(0x28u);
}
