__int64 __fastcall sub_3D7660(_QWORD *a1, int a2, int a3, char a4, double a5)
{
  __int64 v6; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // cf
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+8h] [rbp-50h] BYREF
  __int64 v34; // [rsp+10h] [rbp-48h]
  unsigned __int64 v35; // [rsp+18h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( a2 < 0 )
    return 0;
  v6 = a1[8];
  if ( a2 >= *(_DWORD *)(v6 + 64) )
    return 0;
  if ( (unsigned int)a2 >= *(_DWORD *)(v6 + 64) )
    sub_3CF000(a5);
  v9 = sub_3D2B60((__int64)a1, a2, a3);
  v10 = v9;
  if ( !v11 || !v9 )
    return 0;
  v12 = operator new(0x38u);
  *(_QWORD *)v12 = 0;
  v13 = v12;
  *(_QWORD *)(v12 + 24) = -1;
  *(_DWORD *)(v12 + 32) = 0;
  *(_OWORD *)(v12 + 8) = 0;
  *(_BYTE *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 36) = 0xFFFFFFFF00000000LL;
  LODWORD(v12) = *(_DWORD *)v10;
  v14 = *(_QWORD *)(v10 + 24);
  *(_DWORD *)(v13 + 36) = a3;
  *(_DWORD *)(v13 + 32) = v12;
  v15 = a1[11];
  v16 = a1[12];
  *(_DWORD *)(v13 + 40) = a2;
  *(_QWORD *)(v13 + 24) = v14;
  v17 = a1[13];
  *(_BYTE *)(v13 + 48) = a4;
  v18 = v16 + 1;
  v33 = v13;
  if ( (unsigned __int64)&v33 < v15 || (unsigned __int64)&v33 >= v15 + 8 * v17 )
  {
    if ( v17 < v18 )
    {
      v15 = qvector_reserve();
      v20 = a1[12];
      v21 = a1[13];
      a1[13] = v17;
      v22 = (__int64 *)a1[11];
      v23 = v20 - 1;
      if ( v23 >= 0 )
      {
        v24 = v15;
        do
        {
          v25 = *v22;
          v24 += 8LL;
          ++v22;
          *(_QWORD *)(v24 - 8) = v25;
          v26 = v23-- == 0;
        }
        while ( !v26 );
      }
      qfree();
      a1[11] = v15;
      v16 = a1[12];
      a1[13] = v21;
    }
    *(_QWORD *)(v15 + 8 * v16) = v33;
  }
  else
  {
    v34 = v13;
    v33 = 0;
    if ( v17 < v18 )
    {
      v15 = qvector_reserve();
      v27 = a1[12];
      v28 = a1[13];
      a1[13] = v17;
      v29 = (__int64 *)a1[11];
      v30 = v27 - 1;
      if ( v30 >= 0 )
      {
        v31 = v15;
        do
        {
          v32 = *v29;
          v31 += 8LL;
          ++v29;
          *(_QWORD *)(v31 - 8) = v32;
          v26 = v30-- == 0;
        }
        while ( !v26 );
      }
      qfree();
      a1[11] = v15;
      v16 = a1[12];
      a1[13] = v28;
    }
    *(_QWORD *)(v15 + 8 * v16) = v34;
  }
  ++a1[12];
  return v13;
}
