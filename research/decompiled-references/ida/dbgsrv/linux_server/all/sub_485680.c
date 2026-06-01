/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485680
// Address: 0x0000000000485680

//----- (0000000000485680) ----------------------------------------------------
__int64 __fastcall sub_485680(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  unsigned int *v17; // rsi
  void *v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  unsigned int v23; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  int v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int128 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+40h] [rbp-38h]
  __int128 v30; // [rsp+48h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-20h]
  unsigned __int64 v32; // [rsp+68h] [rbp-10h]

  v32 = __readfsqword(0x28u);
  v28 = -1;
  v10 = 0;
  v24 = 80;
  v26 = 0;
  v29 = -1;
  v31 = 0;
  v25 = 136;
  v27 = a1;
  v23 = -1;
  v30 = 0;
  if ( sub_482DD0() )
    *(double *)v10.m128_u64 = off_4C7FB0(5, a2, (unsigned int)&off_4C7FB0, v12, v13, v14);
  LODWORD(v17) = 0;
  v18 = sub_483900((__int64)&v24, 0, v10, a4, a5, a6, v15, v16, a9, a10, v11, v12, v13, v14);
  if ( v18 )
  {
    v17 = &v23;
    sub_483630((__pid_t)v18, (int *)&v23, -1);
  }
  if ( sub_482DD0() )
    off_4C7FB0(6, (_DWORD)v17, (unsigned int)&off_4C7FB0, v19, v20, v21);
  return v23;
}
// 4856F6: variable 'v12' is possibly undefined
// 4856F6: variable 'v13' is possibly undefined
// 4856F6: variable 'v14' is possibly undefined
// 4856FF: variable 'v15' is possibly undefined
// 4856FF: variable 'v16' is possibly undefined
// 4856FF: variable 'v11' is possibly undefined
// 485732: variable 'v19' is possibly undefined
// 485732: variable 'v20' is possibly undefined
// 485732: variable 'v21' is possibly undefined
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
