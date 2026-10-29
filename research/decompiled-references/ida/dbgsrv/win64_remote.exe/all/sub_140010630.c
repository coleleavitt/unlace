/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140010630
// Address: 0x0000000140010630

//----- (0000000140010630) ----------------------------------------------------
__int64 __fastcall sub_140010630(__int64 a1)
{
  char v2; // r14
  void *v3; // rax
  unsigned int (*v4)(void); // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  char v7; // bp
  unsigned __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 *i; // rax
  __int64 **v11; // rcx
  __int64 j; // rax
  __int64 *k; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  void *m; // rdi
  __int64 **v18; // rcx
  __int64 n; // rax
  __int64 *ii; // rcx
  __int64 result; // rax
  void *Block[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v23; // [rsp+30h] [rbp-28h]

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  v2 = 1;
  v3 = sub_14001E600();
  if ( *((_BYTE *)v3 + 57) && (v4 = *((unsigned int (**)(void))v3 + 6)) != nullptr )
  {
    if ( *(_QWORD *)(a1 + 792) == -1 || !v4() )
      v2 = 0;
    if ( !*(_BYTE *)(a1 + 921) )
      *(_BYTE *)(a1 + 920) = v2;
  }
  else if ( *(_QWORD *)(a1 + 1096) )
  {
    sub_14001BC80(a1, 0);
    v5 = *(_QWORD **)(a1 + 1088);
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      do
      {
        v7 = v2;
        *(_OWORD *)Block = 0;
        v23 = 0;
        if ( sub_140019680(v6 + 5, (__int64)Block, 1) )
        {
          v8 = *(_QWORD *)(*((_QWORD *)&v23 + 1) + 248LL) - *(_QWORD *)(a1 + 392);
          v9 = *(__int64 **)(a1 + 408);
          for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
          {
            if ( i[4] >= v8 )
              v9 = i;
            else
              i += 2;
          }
          if ( *((_BYTE *)v9 + 25) || v8 < v9[4] || v9 == *(__int64 **)(a1 + 408) )
          {
            v2 = 0;
            if ( sub_14001B250(
                   a1,
                   (__int64)(v6 + 5),
                   (void *)(*(_QWORD *)(*((_QWORD *)&v23 + 1) + 248LL) & *(_QWORD *)(a1 + 24))) )
            {
              v2 = v7;
            }
            if ( Block[0] )
            {
              Block[1] = nullptr;
              j_free(Block[0]);
            }
          }
          else if ( Block[0] )
          {
            Block[1] = nullptr;
            j_free(Block[0]);
          }
        }
        else
        {
          v2 = 0;
          if ( Block[0] )
          {
            Block[1] = nullptr;
            j_free(Block[0]);
          }
        }
        v11 = (__int64 **)v6[2];
        if ( *((_BYTE *)v11 + 25) )
        {
          for ( j = v6[1]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 8) )
          {
            if ( v6 != *(_QWORD **)(j + 16) )
              break;
            v6 = (_QWORD *)j;
          }
          v6 = (_QWORD *)j;
        }
        else
        {
          v6 = (_QWORD *)v6[2];
          for ( k = *v11; !*((_BYTE *)k + 25); k = (__int64 *)*k )
            v6 = k;
        }
        v14 = *(_QWORD **)(a1 + 1088);
      }
      while ( v6 != v14 );
      v6 = (_QWORD *)*v14;
    }
    PostThreadMessageA(*((_DWORD *)v6 + 18), 0, 0, 0);
    v15 = *(_QWORD **)(a1 + 1088);
    v16 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 != v15 )
    {
      do
      {
        for ( m = (void *)v16[5]; *((int *)v16 + 19) > 0; --*((_DWORD *)v16 + 19) )
          ResumeThread(m);
        v18 = (__int64 **)v16[2];
        if ( *((_BYTE *)v18 + 25) )
        {
          for ( n = v16[1]; !*(_BYTE *)(n + 25); n = *(_QWORD *)(n + 8) )
          {
            if ( v16 != *(_QWORD **)(n + 16) )
              break;
            v16 = (_QWORD *)n;
          }
          v16 = (_QWORD *)n;
        }
        else
        {
          v16 = (_QWORD *)v16[2];
          for ( ii = *v18; !*((_BYTE *)ii + 25); ii = (__int64 *)*ii )
            v16 = ii;
        }
      }
      while ( v16 != *(_QWORD **)(a1 + 1088) );
    }
  }
  else
  {
    v2 = 0;
  }
  *(_BYTE *)(a1 + 1194) = 1;
  result = 0xFFFFFFFFLL;
  if ( v2 )
    return 1;
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
