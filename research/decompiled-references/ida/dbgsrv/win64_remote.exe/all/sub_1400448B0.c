/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400448B0
// Address: 0x00000001400448B0

//----- (00000001400448B0) ----------------------------------------------------
__int64 __fastcall sub_1400448B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8

  *(_QWORD *)a1 = &off_140096F38;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 4144) = -1;
  *(_QWORD *)(a1 + 4152) = a1 + 4152;
  *(_QWORD *)(a1 + 4160) = a1 + 4152;
  v7 = 0;
  *(_QWORD *)(a1 + 4168) = 0;
  *(_QWORD *)(a1 + 4176) = -1;
  v8 = a1 + 4184;
  *(_QWORD *)(a1 + 4184) = 0;
  *(_QWORD *)(a1 + 4192) = 0;
  *(_QWORD *)(a1 + 4200) = 0;
  v9 = a1 + 4208;
  *(_QWORD *)(a1 + 4208) = 0;
  *(_QWORD *)(a1 + 4216) = 0;
  *(_QWORD *)(a1 + 4224) = 0;
  v10 = *(_QWORD **)(a1 + 24);
  if ( v10[1] )
  {
    v11 = 0;
    do
    {
      if ( *(_QWORD *)(*v10 + v11 + 8) )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) == 0 || *(_QWORD *)(*v10 + v11 + 32) )
        {
          v13 = *(_QWORD *)(v9 + 8) + 1LL;
          if ( v13 > *(_QWORD *)(v9 + 16) )
            *(_QWORD *)v9 = sub_14005ABE0(v9, *(void **)v9, v13, 4u);
          *(_DWORD *)(*(_QWORD *)v9 + 4LL * (*(_QWORD *)(v9 + 8))++) = v7;
        }
        else
        {
          v12 = *(_QWORD *)(v8 + 8) + 1LL;
          if ( v12 > *(_QWORD *)(v8 + 16) )
            *(_QWORD *)v8 = sub_14005ABE0(v8, *(void **)v8, v12, 4u);
          *(_DWORD *)(*(_QWORD *)v8 + 4LL * (*(_QWORD *)(v8 + 8))++) = v7;
        }
      }
      ++v7;
      v11 += 80;
      v10 = *(_QWORD **)(a1 + 24);
    }
    while ( (unsigned __int64)v7 < v10[1] );
  }
  memset((void *)(a1 + 48), 0, 0x1000u);
  *(_DWORD *)(a1 + 4232) = sub_14005A7C0() >> 32;
  return a1;
}
// 140096F38: using guessed type __int64 (__fastcall *off_140096F38)(void *Block);
