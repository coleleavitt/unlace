/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80756E0
// Address: 0x080756E0

//----- (080756E0) --------------------------------------------------------
int __cdecl sub_80756E0(int a1)
{
  int v1; // eax
  int v2; // eax
  char *v3; // edx
  char *v4; // eax
  int v6; // [esp-Ch] [ebp-64h]
  int v7; // [esp-8h] [ebp-60h]
  int v8; // [esp-4h] [ebp-5Ch]
  __int64 v9; // [esp+0h] [ebp-58h]
  unsigned __int8 v10[4]; // [esp+10h] [ebp-48h] BYREF
  __m128i v11; // [esp+14h] [ebp-44h] BYREF
  unsigned __int8 v12[4]; // [esp+28h] [ebp-30h] BYREF
  __int128 v13; // [esp+2Ch] [ebp-2Ch]
  unsigned int v14; // [esp+3Ch] [ebp-1Ch]

  v14 = __readgsdword(0x14u);
  v1 = *(unsigned __int16 *)(a1 + 32);
  v10[0] = 2;
  v11 = 0;
  switch ( v1 )
  {
    case 3:
    case 5:
      v11.m128i_i32[0] = *(_DWORD *)(a1 + 36);
      break;
    case 4:
      sub_8089430((int)v10);
      v10[0] = 7;
      v11.m128i_i64[0] = 0;
      v11.m128i_i32[2] = 0;
      sub_80754D0((void **)&v11, (char **)(a1 + 20));
      break;
    case 7:
      sub_8089430((int)v10);
      v10[0] = 3;
      v11 = _mm_loadu_si128((const __m128i *)(a1 + 44));
      break;
    case 8:
      v9 = *(_QWORD *)(a1 + 44);
      sub_8089430((int)v10);
      v10[0] = 9;
      v11.m128i_i64[0] = v9;
      break;
    default:
      if ( !byte_811F8A1 )
      {
        if ( v14 == __readgsdword(0x14u) )
          sub_80CFF40(1438, v6, v7, v8);
        sub_80D7AB0();
      }
      JUMPOUT(0x804D692);
  }
  v12[0] = 2;
  v13 = 0;
  sub_8089810(v12, v10);
  v2 = *(_DWORD *)(a1 + 232);
  v3 = *(char **)(a1 + 228);
  if ( *(_DWORD *)(a1 + 236) < (unsigned int)(v2 + 1) )
  {
    v3 = (char *)sub_80CF920(a1 + 228, v3, v2 + 1, 0x14u);
    *(_DWORD *)(a1 + 228) = v3;
    v2 = *(_DWORD *)(a1 + 232);
  }
  v4 = &v3[20 * v2];
  *v4 = 2;
  *(_OWORD *)(v4 + 4) = 0;
  sub_8089810((unsigned __int8 *)v4, v12);
  ++*(_DWORD *)(a1 + 232);
  sub_8089430((int)v12);
  sub_8089430((int)v10);
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80758C5: control flows out of bounds to 804D692
// 80758E7: variable 'v6' is possibly undefined
// 80758E7: variable 'v7' is possibly undefined
// 80758E7: variable 'v8' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
