__int64 __fastcall sub_3CD0A0(_QWORD *a1, int a2, int a3, char a4)
{
  __int64 v4; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rax
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
  v4 = a1[8];
  if ( a2 >= *(_DWORD *)(v4 + 64) )
    return 0;
  if ( (unsigned int)a2 >= *(_DWORD *)(v4 + 64) )
    sub_3C5320(a1);
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * a2);
  v9 = sub_3C8680((__int64)a1, a2, a3);
  v10 = v9;
  if ( !v8 || !v9 )
    return 0;
  v11 = operator new(0x38u);
  *(_OWORD *)(v11 + 8) = 0;
  v12 = v11;
  *(_QWORD *)v11 = 0;
  *(_OWORD *)(v11 + 24) = -1;
  *(_QWORD *)(v11 + 40) = -4294967223LL;
  *(_BYTE *)(v11 + 48) = 0;
  v13 = *(_QWORD *)(v8 + 32);
  *(_BYTE *)(v12 + 48) = a4;
  v14 = a1[13];
  *(_QWORD *)(v12 + 24) = v13;
  v15 = *(_QWORD *)(v10 + 24);
  v33 = v12;
  *(_QWORD *)(v12 + 32) = v15;
  LODWORD(v15) = *(_DWORD *)v10;
  v16 = a1[11];
  *(_DWORD *)(v12 + 44) = a3 + 1;
  *(_DWORD *)(v12 + 40) = v15;
  v17 = a1[12];
  v18 = v17 + 1;
  if ( (unsigned __int64)&v33 < v16 || (unsigned __int64)&v33 >= v16 + 8 * v14 )
  {
    if ( v14 < v18 )
    {
      v16 = qvector_reserve();
      v20 = a1[12];
      v21 = a1[13];
      a1[13] = v14;
      v22 = (__int64 *)a1[11];
      v23 = v20 - 1;
      if ( v23 >= 0 )
      {
        v24 = v16;
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
      a1[11] = v16;
      v17 = a1[12];
      a1[13] = v21;
    }
    *(_QWORD *)(v16 + 8 * v17) = v33;
  }
  else
  {
    v34 = v12;
    v33 = 0;
    if ( v14 < v18 )
    {
      v16 = qvector_reserve();
      v27 = a1[12];
      v28 = a1[13];
      a1[13] = v14;
      v29 = (__int64 *)a1[11];
      v30 = v27 - 1;
      if ( v30 >= 0 )
      {
        v31 = v16;
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
      a1[11] = v16;
      v17 = a1[12];
      a1[13] = v28;
    }
    *(_QWORD *)(v16 + 8 * v17) = v34;
  }
  ++a1[12];
  return v12;
}
