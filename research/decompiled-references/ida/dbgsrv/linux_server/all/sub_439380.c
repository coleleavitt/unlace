/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439380
// Address: 0x0000000000439380

//----- (0000000000439380) ----------------------------------------------------
unsigned __int64 __fastcall sub_439380(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  unsigned __int64 *v6; // rbp
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 *v12; // rax
  unsigned __int64 *v14; // rax
  __int64 v15; // r12
  __int64 *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rcx
  bool v20; // cf
  unsigned __int64 *v21; // rax
  __int64 v22; // r15
  __int64 *v23; // rdi
  __int64 v24; // rax
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v5 = a1[15];
  v6 = (unsigned __int64 *)a1[14];
  v28 = __readfsqword(0x28u);
  if ( v5 && (v8 = &v6[v5 - 1], *(_DWORD *)v8 == a2) )
  {
    *((_DWORD *)v8 + 1) = a3;
  }
  else
  {
    v27 = __PAIR64__(a3, a2);
    v9 = a1[16];
    v10 = (__int64)(a1 + 14);
    v11 = v5 + 1;
    if ( &v27 < v6 || &v27 >= &v6[v9] )
    {
      if ( v9 < v11 )
      {
        v14 = (unsigned __int64 *)sub_481540(v10, nullptr, v5 + 1, 8u);
        v15 = a1[16];
        v16 = (__int64 *)a1[14];
        a1[16] = v9;
        v6 = v14;
        v17 = a1[15] - 1LL;
        if ( v17 >= 0 )
        {
          v18 = v6;
          do
          {
            v19 = *v16;
            ++v18;
            ++v16;
            *(v18 - 1) = v19;
            v20 = v17-- == 0;
          }
          while ( !v20 );
          v16 = (__int64 *)a1[14];
        }
        j__free(v16);
        a1[14] = v6;
        v5 = a1[15];
        a1[16] = v15;
      }
      v6[v5] = v27;
    }
    else
    {
      if ( v9 < v11 )
      {
        v21 = (unsigned __int64 *)sub_481540(v10, nullptr, v5 + 1, 8u);
        v22 = a1[16];
        v23 = (__int64 *)a1[14];
        a1[16] = v9;
        v6 = v21;
        v24 = a1[15] - 1LL;
        if ( v24 >= 0 )
        {
          v25 = v6;
          do
          {
            v26 = *v23;
            ++v25;
            ++v23;
            *(v25 - 1) = v26;
            v20 = v24-- == 0;
          }
          while ( !v20 );
          v23 = (__int64 *)a1[14];
        }
        j__free(v23);
        a1[14] = v6;
        v5 = a1[15];
        a1[16] = v22;
      }
      v12 = &v6[v5];
      *(_DWORD *)v12 = a2;
      *((_DWORD *)v12 + 1) = a3;
    }
    ++a1[15];
  }
  return v28 - __readfsqword(0x28u);
}
