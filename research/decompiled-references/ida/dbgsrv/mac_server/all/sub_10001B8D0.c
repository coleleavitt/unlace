/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B8D0
// Address: 0x000000010001B8D0

//----- (000000010001B8D0) ----------------------------------------------------
__int64 __fastcall sub_10001B8D0(__int64 a1, __int128 *a2)
{
  __int64 v3; // r12
  __int128 v4; // xmm0
  char **v5; // r15
  __int64 v6; // r13
  char *v7; // rax
  char *v8; // rcx
  __int64 v9; // rcx
  __int128 v10; // xmm1
  void **v11; // r15
  int v12; // r12d
  void *v13; // rax
  unsigned __int64 v14; // rsi
  void *v15; // rcx
  unsigned __int64 v16; // rdx
  __int128 v18; // [rsp+0h] [rbp-80h] BYREF
  __int128 v19; // [rsp+10h] [rbp-70h]
  __int64 v20; // [rsp+20h] [rbp-60h]
  __int128 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 48) )
  {
    v22 = *((_QWORD *)a2 + 2);
    v21 = *a2;
    v3 = *((_QWORD *)a2 + 3);
    v20 = *((_QWORD *)a2 + 8);
    v4 = a2[2];
    v19 = a2[3];
    v18 = v4;
    v5 = *(char ***)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *v5;
    v8 = v5[1];
    if ( v5[2] < v8 + 1 )
    {
      v7 = (char *)qvector_reserve(*(_QWORD *)(a1 + 24), v7, (unsigned __int64)(v8 + 1), 0x48u);
      *v5 = v7;
      v8 = v5[1];
    }
    v9 = 9LL * (_QWORD)v8;
    *(_QWORD *)&v7[8 * v9 + 16] = v22;
    *(_OWORD *)&v7[8 * v9] = v21;
    *(_QWORD *)&v7[8 * v9 + 24] = v3 + v6;
    v10 = v19;
    *(_OWORD *)&v7[8 * v9 + 32] = v18;
    *(_OWORD *)&v7[8 * v9 + 48] = v10;
    *(_QWORD *)&v7[8 * v9 + 64] = v20;
    ++v5[1];
    v11 = *(void ***)(a1 + 32);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    LODWORD(v18) = v12;
    v13 = *v11;
    v14 = (unsigned __int64)v11[2];
    v15 = v11[1];
    v16 = (unsigned __int64)v15 + 1;
    if ( *v11 <= &v18 && (char *)*v11 + 4 * v14 > (char *)&v18 )
    {
      if ( v14 < v16 )
      {
        v13 = qvector_reserve((__int64)v11, v13, v16, 4u);
        *v11 = v13;
        v15 = v11[1];
      }
    }
    else if ( v14 < v16 )
    {
      v13 = qvector_reserve((__int64)v11, v13, v16, 4u);
      *v11 = v13;
      v15 = v11[1];
      v12 = v18;
    }
    *((_DWORD *)v13 + (_QWORD)v15) = v12;
    v11[1] = (char *)v11[1] + 1;
    *(_DWORD *)(a1 + 52) = *((_DWORD *)a2 + 16);
  }
  else
  {
    sub_100010070((int)"Found a 64-bit segment in 32-bit program, ignoring it");
  }
  return 0;
}
