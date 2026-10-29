/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400100B0
// Address: 0x00000001400100B0

//----- (00000001400100B0) ----------------------------------------------------
__int64 __fastcall sub_1400100B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r15
  _QWORD *v4; // rbx
  size_t v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 **v10; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm6
  size_t v18; // rbx
  void *v19; // r13
  void *v20; // r15
  size_t v21; // rdi
  __int64 *v22; // r10
  unsigned __int64 v23; // r8
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 v29; // [rsp+28h] [rbp-99h] BYREF
  __int128 Src_8; // [rsp+38h] [rbp-89h]
  void *Block[2]; // [rsp+48h] [rbp-79h]
  size_t Size[2]; // [rsp+58h] [rbp-69h]
  __int64 v33; // [rsp+68h] [rbp-59h]
  __int16 v34; // [rsp+70h] [rbp-51h]
  __int64 v35; // [rsp+78h] [rbp-49h]
  __int128 v36; // [rsp+88h] [rbp-39h]
  __int128 v37; // [rsp+98h] [rbp-29h]
  size_t v38; // [rsp+A8h] [rbp-19h]
  void *v39; // [rsp+B0h] [rbp-11h]
  __int128 v40; // [rsp+B8h] [rbp-9h]
  __int64 v41; // [rsp+C8h] [rbp+7h]
  __int128 v42; // [rsp+D0h] [rbp+Fh]
  char v43; // [rsp+128h] [rbp+67h]
  char v45; // [rsp+140h] [rbp+7Fh]

  v2 = (__int64 *)a2;
  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  v4 = *(_QWORD **)(a1 + 960);
  sub_140009860(a1 + 960, a1 + 960, v4[1]);
  v4[1] = v4;
  *v4 = v4;
  v4[2] = v4;
  v5 = 0;
  *(_QWORD *)(a1 + 968) = 0;
  v6 = *(_QWORD **)(a1 + 976);
  sub_140009860(a1 + 976, a1 + 976, v6[1]);
  v6[1] = v6;
  *v6 = v6;
  v6[2] = v6;
  *(_QWORD *)(a1 + 984) = 0;
  v7 = *(_QWORD **)(a1 + 992);
  sub_140009860(a1 + 992, a1 + 992, v7[1]);
  v7[1] = v7;
  *v7 = v7;
  v7[2] = v7;
  *(_QWORD *)(a1 + 1000) = 0;
  v8 = *(_QWORD **)(a1 + 1088);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 != v8 )
  {
    do
    {
      sub_14000DBB0(a1, *((_DWORD *)v9 + 8), (_QWORD *)(a1 + 976), (_QWORD *)(a1 + 992));
      v10 = (__int64 **)v9[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = v9[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v9 != *(_QWORD **)(i + 16) )
            break;
          v9 = (_QWORD *)i;
        }
        v9 = (_QWORD *)i;
      }
      else
      {
        v9 = (_QWORD *)v9[2];
        for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v9 = j;
      }
    }
    while ( v9 != *(_QWORD **)(a1 + 1088) );
  }
  if ( *(_QWORD *)(a1 + 792) != -1 )
  {
    v13 = 0;
    if ( *(_QWORD *)(a1 + 24) )
    {
      do
      {
        v29 = 0u;
        Src_8 = 0;
        *(_OWORD *)Block = 0;
        *(_OWORD *)Size = 0;
        v33 = 0;
        v34 = 0;
        v14 = sub_140014CE0(a1, v13, (__int64)&v29);
        v13 = v14;
        v15 = *(_QWORD *)(a1 + 24);
        if ( v14 == v15 )
          v14 = -1;
        if ( v14 != -1 )
        {
          v16 = v29;
          if ( (_QWORD)v29 == v15 )
            v16 = -1;
          if ( v16 != -1 )
          {
            v17 = v29;
            v36 = v29;
            v37 = 0;
            v38 = 0;
            v18 = *((_QWORD *)&Src_8 + 1);
            if ( *((_QWORD *)&Src_8 + 1) )
            {
              v19 = sub_14005AAA0(*((signed __int64 *)&Src_8 + 1));
              *(_QWORD *)&v37 = v19;
              v5 = v18;
              v38 = v18;
              memcpy(v19, (const void *)Src_8, v18);
              *((_QWORD *)&v37 + 1) = v18;
            }
            else
            {
              v18 = *((_QWORD *)&v37 + 1);
              v19 = (void *)v37;
            }
            v20 = nullptr;
            v39 = nullptr;
            v40 = 0;
            v21 = Size[0];
            if ( Size[0] )
            {
              v20 = sub_14005AAA0(Size[0]);
              v39 = v20;
              *((_QWORD *)&v40 + 1) = v21;
              memcpy(v20, Block[1], v21);
              *(_QWORD *)&v40 = v21;
            }
            else
            {
              v21 = *((_QWORD *)&v40 + 1);
            }
            v35 = v33;
            v41 = v33;
            v43 = v34;
            LOWORD(v42) = v34;
            v45 = HIBYTE(v34);
            v22 = (__int64 *)a2;
            v23 = *(_QWORD *)(a2 + 8) + 1LL;
            if ( v23 > *(_QWORD *)(a2 + 16) )
            {
              v24 = sub_14005ABE0(a2, *(void **)a2, v23, 0x50u);
              v22 = (__int64 *)a2;
              *(_QWORD *)a2 = v24;
            }
            v25 = 10 * v22[1];
            v26 = *v22;
            *(_OWORD *)(v26 + 8 * v25) = v17;
            *(_QWORD *)(v26 + 8 * v25 + 16) = v19;
            *(_QWORD *)(v26 + 8 * v25 + 24) = v18;
            *(_QWORD *)(v26 + 8 * v25 + 32) = v5;
            *(_QWORD *)(v26 + 8 * v25 + 40) = v20;
            *(_QWORD *)(v26 + 8 * v25 + 48) = v40;
            *(_QWORD *)(v26 + 8 * v25 + 56) = v21;
            *(_QWORD *)(v26 + 8 * v25 + 64) = v35;
            *(_BYTE *)(v26 + 8 * v25 + 72) = v43;
            *(_BYTE *)(v26 + 8 * v25 + 73) = v45;
            ++v22[1];
            v5 = 0;
          }
        }
        if ( Block[1] )
        {
          Size[0] = 0;
          j_free(Block[1]);
          Block[1] = nullptr;
          Size[1] = 0;
        }
        if ( (_QWORD)Src_8 )
        {
          *((_QWORD *)&Src_8 + 1) = 0;
          j_free((void *)Src_8);
        }
        v27 = v13;
        if ( v13 == *(_QWORD *)(a1 + 24) )
          v27 = -1;
      }
      while ( v27 != -1 );
      v2 = (__int64 *)a2;
    }
    sub_140043750((_QWORD *)a1, 1u);
  }
  if ( sub_140044670(a1, v2) )
    return 4294967290LL;
  sub_140044790(a1, v2);
  return 1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
