/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4165C0
// Address: 0x004165C0

//----- (004165C0) --------------------------------------------------------
char __userpurge sub_4165C0@<al>(int a1@<ecx>, __m128i a2@<xmm0>, DWORD a3, LPVOID lpBaseAddress)
{
  SIZE_T v6; // esi
  const __m128i *v7; // eax
  __m128i v8; // xmm0
  __int32 v9; // eax
  int v10; // esi
  _DWORD *v11; // eax
  SIZE_T v12; // esi
  signed int v13; // eax
  _DWORD *v14; // [esp-Ch] [ebp-60h]
  int v15; // [esp-8h] [ebp-5Ch]
  double v16; // [esp-8h] [ebp-5Ch]
  int v17; // [esp+0h] [ebp-54h]
  _DWORD v18[3]; // [esp+10h] [ebp-44h] BYREF
  __int64 v19; // [esp+1Ch] [ebp-38h] BYREF
  int v20; // [esp+24h] [ebp-30h]
  LPVOID v21; // [esp+28h] [ebp-2Ch] BYREF
  unsigned int v22; // [esp+2Ch] [ebp-28h]
  int v23; // [esp+30h] [ebp-24h]
  int v24; // [esp+34h] [ebp-20h]
  unsigned int v25; // [esp+38h] [ebp-1Ch] BYREF
  unsigned int v26; // [esp+3Ch] [ebp-18h]
  int Buffer; // [esp+40h] [ebp-14h] BYREF
  int v28; // [esp+50h] [ebp-4h]

  sub_40FBF0(a1, a2, a3, -1);
  *(_DWORD *)(a3 + 24) = lpBaseAddress;
  v25 = (unsigned int)lpBaseAddress;
  sub_408C10((int *)(a1 + 596), &v19, &v25);
  if ( !*(_BYTE *)(v20 + 13) && (unsigned int)lpBaseAddress >= *(_DWORD *)(v20 + 16) && v20 != *(_DWORD *)(a1 + 596) )
  {
    ++*(_DWORD *)(v20 + 20);
    return 1;
  }
  v6 = *(_DWORD *)(a1 + 208);
  v26 = 1;
  if ( sub_40C190(a1, a2, lpBaseAddress, &Buffer, v6, 0, 0) == v6 )
  {
    v25 = v26;
    v22 = v26;
    v24 = Buffer;
    v23 = Buffer;
    v21 = lpBaseAddress;
    v7 = (const __m128i *)sub_408C10((int *)(a1 + 596), v18, (unsigned int *)&v21);
    v8 = _mm_loadl_epi64(v7);
    v9 = v7->m128i_i32[2];
    v19 = v8.m128i_i64[0];
    if ( *(_BYTE *)(v9 + 13) || (unsigned int)lpBaseAddress < *(_DWORD *)(v9 + 16) )
    {
      if ( *(_DWORD *)(a1 + 600) == 153391689 )
        sub_403E20();
      v10 = *(_DWORD *)(a1 + 596);
      v22 = a1 + 596;
      v28 = 0;
      v23 = 0;
      v11 = sub_4627C2(0x1Cu);
      v28 = -1;
      v11[4] = lpBaseAddress;
      v11[5] = v25;
      v11[6] = v24;
      v15 = HIDWORD(v19);
      *v11 = v10;
      v14 = (_DWORD *)v19;
      v11[1] = v10;
      v11[2] = v10;
      *((_WORD *)v11 + 6) = 0;
      sub_403C10((_DWORD *)(a1 + 596), v14, v15, (int)v11);
    }
    v12 = *(_DWORD *)(a1 + 208);
    v13 = sub_40C190(a1, v8, *(LPVOID *)(a3 + 24), *(void **)(a1 + 204), v12, 1u, 0);
    if ( v13 > 0 )
    {
      if ( v13 == v12 )
        return 1;
      sub_416110(a1, v8, *(LPVOID *)(a3 + 24), 0);
    }
  }
  HIDWORD(v16) = *(_DWORD *)(a3 + 16);
  LODWORD(v16) = *(_DWORD *)(a3 + 24);
  sub_43C900(a1, (int)"%a: set_thread_bpt() failed to pause thread %d\n", v16, v17);
  *(_DWORD *)(a3 + 24) = -1;
  return 0;
}
// 41674A: variable 'v17' is possibly undefined
