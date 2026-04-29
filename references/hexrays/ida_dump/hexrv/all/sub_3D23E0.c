__int64 __fastcall sub_3D23E0(_QWORD *a1, __int64 a2, int a3, char a4, double a5)
{
  __int64 v6; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 *v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // cf
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // [rsp+8h] [rbp-50h] BYREF
  __int64 v35; // [rsp+10h] [rbp-48h]
  unsigned __int64 v36; // [rsp+18h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( (int)a2 < 0 )
    return 0;
  v6 = a1[8];
  if ( (int)a2 >= *(_DWORD *)(v6 + 64) )
    return 0;
  if ( (unsigned int)a2 >= *(_DWORD *)(v6 + 64) )
    sub_3C9D80(a5, (__int64)a1, a2);
  v9 = sub_3CD8E0((__int64)a1, a2, a3);
  v10 = v9;
  if ( !v11 || !v9 )
    return 0;
  v12 = operator new(0x38u);
  v13 = a1 + 11;
  *(_QWORD *)v12 = 0;
  v14 = v12;
  *(_QWORD *)(v12 + 24) = -1;
  *(_DWORD *)(v12 + 32) = 0;
  *(_OWORD *)(v12 + 8) = 0;
  *(_BYTE *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 36) = 0xFFFFFFFF00000000LL;
  LODWORD(v12) = *(_DWORD *)v10;
  v15 = *(_QWORD *)(v10 + 24);
  *(_DWORD *)(v14 + 36) = a3;
  *(_DWORD *)(v14 + 32) = v12;
  v16 = a1[11];
  v17 = a1[12];
  *(_DWORD *)(v14 + 40) = a2;
  *(_QWORD *)(v14 + 24) = v15;
  v18 = a1[13];
  *(_BYTE *)(v14 + 48) = a4;
  v19 = v17 + 1;
  v34 = v14;
  if ( (unsigned __int64)&v34 < v16 || (unsigned __int64)&v34 >= v16 + 8 * v18 )
  {
    if ( v18 < v19 )
    {
      v16 = qvector_reserve(v13, 0, v19, 8);
      v21 = a1[12];
      v22 = a1[13];
      a1[13] = v18;
      v23 = (__int64 *)a1[11];
      v24 = v21 - 1;
      if ( v24 >= 0 )
      {
        v25 = v16;
        do
        {
          v26 = *v23;
          v25 += 8LL;
          ++v23;
          *(_QWORD *)(v25 - 8) = v26;
          v27 = v24-- == 0;
        }
        while ( !v27 );
        v23 = (__int64 *)a1[11];
      }
      qfree(v23);
      a1[11] = v16;
      v17 = a1[12];
      a1[13] = v22;
    }
    *(_QWORD *)(v16 + 8 * v17) = v34;
  }
  else
  {
    v35 = v14;
    v34 = 0;
    if ( v18 < v19 )
    {
      v16 = qvector_reserve(v13, 0, v19, 8);
      v28 = a1[12];
      v29 = a1[13];
      a1[13] = v18;
      v30 = (__int64 *)a1[11];
      v31 = v28 - 1;
      if ( v31 >= 0 )
      {
        v32 = v16;
        do
        {
          v33 = *v30;
          v32 += 8LL;
          ++v30;
          *(_QWORD *)(v32 - 8) = v33;
          v27 = v31-- == 0;
        }
        while ( !v27 );
        v30 = (__int64 *)a1[11];
      }
      qfree(v30);
      a1[11] = v16;
      v17 = a1[12];
      a1[13] = v29;
    }
    *(_QWORD *)(v16 + 8 * v17) = v35;
  }
  ++a1[12];
  return v14;
}
