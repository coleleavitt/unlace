/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4467F0
// Address: 0x004467F0

//----- (004467F0) --------------------------------------------------------
char __userpurge sub_4467F0@<al>(int a1@<ecx>, int a2, __m128i a3)
{
  unsigned int v3; // edx
  char result; // al
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // edx
  int v9; // edx
  int v10; // esi
  int v11; // edi
  unsigned int v12; // edx
  signed __int64 v13; // kr08_8
  __m128i *v14; // eax
  __m128i *v15; // edi
  int v16; // eax
  __int32 v17; // eax
  int v18; // [esp+0h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 68);
  result = 0;
  if ( v3 )
  {
    v5 = *(_DWORD *)(a1 + 72);
    v6 = a3.m128i_i32[0];
    v7 = (v3 + (unsigned __int64)(unsigned int)(18 * v5)) >> 32;
    if ( v3 + (unsigned __int64)(unsigned int)(18 * v5)
      && (sub_45C810(a3.m128i_i32[0], v7, a3.m128i_i32[0], __SPAIR64__(v7, v3 + 18 * v5), 0) != v3 + 18 * v5 || v8 != v7)
      || sub_45C7E0(v6, &a3, 4) != 4
      || a3.m128i_i32[0] <= 4u )
    {
      return 0;
    }
    sub_45C810(v6, v7, v6, -4, 1u);
    v18 = sub_45C810(v6, v7, v6, 0, 1u);
    v10 = v9;
    v11 = sub_45C8B0(v6, v7, v6);
    v13 = __PAIR64__(v12, v11) - __PAIR64__(v10, v18);
    if ( v10 >= 0 && v13 >= 0 && (!a3.m128i_i32[0] || 0xFFFFFFFF / a3.m128i_i32[0]) && v13 >= a3.m128i_u32[0] )
    {
      v14 = (__m128i *)sub_453990(a3.m128i_i32[0] + 1);
      v15 = v14;
      if ( v14 )
      {
        v16 = sub_45C7E0(v6, v14, a3.m128i_i32[0]);
        if ( v16 == a3.m128i_i32[0] )
        {
          v15->m128i_i8[a3.m128i_i32[0]] = 0;
          sub_40D190((void **)a2);
          v17 = a3.m128i_i32[0] + 1;
          *(_DWORD *)a2 = v15;
          *(_DWORD *)(a2 + 8) = v17;
          *(_DWORD *)(a2 + 4) = v17;
          return 1;
        }
        sub_453A20(v15);
      }
    }
    return 0;
  }
  return result;
}
// 4468AA: conditional instruction was optimized away because ebp.4>=0
// 44682C: variable 'v8' is possibly undefined
// 44686D: variable 'v9' is possibly undefined
// 44687E: variable 'v12' is possibly undefined
