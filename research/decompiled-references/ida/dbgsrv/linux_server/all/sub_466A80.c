/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466A80
// Address: 0x0000000000466A80

//----- (0000000000466A80) ----------------------------------------------------
unsigned __int64 __fastcall sub_466A80(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  _OWORD *v4; // rax
  size_t v5; // r12
  void *v6; // rbx
  size_t v7; // r14
  void *v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // rbx
  void *v12; // rdi
  void *v13; // rdi
  _OWORD v15[27]; // [rsp+0h] [rbp-3A8h] BYREF
  __int64 v16; // [rsp+1B0h] [rbp-1F8h] BYREF
  void *v17; // [rsp+1B8h] [rbp-1F0h]
  __int128 v18; // [rsp+1C0h] [rbp-1E8h]
  int v19; // [rsp+1D0h] [rbp-1D8h]
  void *v20; // [rsp+1D8h] [rbp-1D0h]
  __int128 v21; // [rsp+1E0h] [rbp-1C8h]
  _BYTE v22[364]; // [rsp+1F0h] [rbp-1B8h] BYREF
  int v23; // [rsp+35Ch] [rbp-4Ch]
  unsigned __int64 v24; // [rsp+368h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v24 = __readfsqword(0x28u);
  if ( v2 != a2 )
  {
    memset(v15, 0, sizeof(v15));
    v4 = (_OWORD *)((char *)&v15[6] + 8);
    memset(&v15[4], 255, 24);
    do
    {
      *(_WORD *)v4 = 0;
      v4 = (_OWORD *)((char *)v4 + 40);
      *((_WORD *)v4 - 19) = 0;
      *((_WORD *)v4 - 18) = 0;
      *((_DWORD *)v4 - 2) = 0;
      *((_WORD *)v4 - 17) = 0;
      *(v4 - 2) = 0;
      *((_QWORD *)v4 - 2) = 0;
    }
    while ( (_OWORD *)((char *)&v15[26] + 8) != v4 );
    if ( a2 < v2 )
    {
      v9 = a2;
      v10 = 432 * a2;
      do
      {
        v11 = (_QWORD *)(v10 + *(_QWORD *)a1);
        v12 = (void *)v11[5];
        if ( v12 )
        {
          v11[6] = 0;
          j__free(v12);
        }
        v13 = (void *)v11[1];
        if ( v13 )
        {
          v11[2] = 0;
          j__free(v13);
        }
        ++v9;
        v10 += 432;
      }
      while ( v2 != v9 );
      *(_QWORD *)(a1 + 8) = a2;
    }
    else if ( (unsigned __int64)v15 < *(_QWORD *)a1
           || (unsigned __int64)v15 >= 432LL * *(_QWORD *)(a1 + 16) + *(_QWORD *)a1 )
    {
      sub_4667E0((__m128i **)a1, a2, (__int64)v15);
    }
    else
    {
      v5 = *(_QWORD *)&v15[1];
      v6 = nullptr;
      v17 = nullptr;
      v18 = 0;
      v16 = *(_QWORD *)&v15[0];
      if ( *(_QWORD *)&v15[1] )
      {
        v6 = sub_4814F0(*(signed __int64 *)&v15[1]);
        v17 = v6;
        *((_QWORD *)&v18 + 1) = v5;
        memcpy(v6, *((const void **)&v15[0] + 1), v5);
        *(_QWORD *)&v18 = v5;
      }
      v7 = *(_QWORD *)&v15[3];
      v8 = nullptr;
      v20 = nullptr;
      v19 = v15[2];
      v21 = 0;
      if ( *(_QWORD *)&v15[3] )
      {
        v8 = sub_4814F0(*(signed __int64 *)&v15[3]);
        v20 = v8;
        *((_QWORD *)&v21 + 1) = v7;
        memcpy(v8, *((const void **)&v15[2] + 1), v7);
        *(_QWORD *)&v21 = v7;
      }
      qmemcpy(v22, &v15[4], 0x168u);
      v22[360] = BYTE8(v15[26]);
      v23 = HIDWORD(v15[26]);
      sub_4667E0((__m128i **)a1, a2, (__int64)&v16);
      if ( v8 )
        j__free(v8);
      if ( v6 )
        j__free(v6);
    }
    if ( *((_QWORD *)&v15[2] + 1) )
      j__free(*((void **)&v15[2] + 1));
    if ( *((_QWORD *)&v15[0] + 1) )
      j__free(*((void **)&v15[0] + 1));
  }
  return v24 - __readfsqword(0x28u);
}
