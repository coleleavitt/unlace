/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_swap
// Address: 0x00000000000CAE10

//----- (00000000000CAE10) ----------------------------------------------------
unsigned __int64 __fastcall rangeset_t_swap(__int64 a1, __int128 **a2)
{
  int v2; // eax
  char v3; // al
  __int128 *v4; // rbx
  unsigned __int64 v5; // rbp
  __int128 *v6; // rbx
  __int128 *v7; // rbp
  __int128 *v8; // rax
  __int128 v9; // xmm0
  __int128 *v10; // rax
  void *ptr[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h]
  int v14; // [rsp+18h] [rbp-60h]
  char v15; // [rsp+1Ch] [rbp-5Ch]
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  char v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v18; // [rsp+40h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 32);
  *(_OWORD *)ptr = 0;
  v13 = 0;
  v14 = v2;
  if ( v2 == -1 )
    v3 = 0;
  else
    v3 = must_journal();
  v15 = v3;
  if ( v3 )
  {
    v4 = *(__int128 **)a1;
    v5 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 < v5 )
    {
      do
      {
        v16 = *v4;
        v17 = 1;
        sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v16);
        ++v4;
      }
      while ( (unsigned __int64)v4 < v5 );
      v3 = v15;
    }
  }
  v6 = *a2;
  if ( v3 )
  {
    v7 = &v6[(_QWORD)a2[1]];
    if ( v6 < v7 )
    {
      do
      {
        v16 = *v6;
        v17 = 0;
        sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v16);
        ++v6;
      }
      while ( v6 < v7 );
      v6 = *a2;
    }
  }
  v8 = *(__int128 **)a1;
  v9 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_QWORD *)(a1 + 16) = a2[2];
  *a2 = v8;
  *(_OWORD *)(a2 + 1) = v9;
  v10 = *(__int128 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = a2[3];
  a2[3] = v10;
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v13 = 0;
  }
  return __readfsqword(0x28u);
}
