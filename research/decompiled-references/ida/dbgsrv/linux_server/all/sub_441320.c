/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441320
// Address: 0x0000000000441320

//----- (0000000000441320) ----------------------------------------------------
void __fastcall sub_441320(
        _DWORD *a1,
        unsigned __int8 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  int v11; // ebp
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rax
  char *v17; // rsi
  char *v18; // rdi
  double v19; // xmm4_8
  double v20; // xmm5_8
  double v21; // xmm4_8
  double v22; // xmm5_8
  double v23; // xmm4_8
  double v24; // xmm5_8
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rbx
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  unsigned int v31; // r15d
  _DWORD *v32; // rsi
  int v33; // ebx
  _QWORD v34[3]; // [rsp+0h] [rbp-108h] BYREF
  char *v35; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v36; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v37; // [rsp+28h] [rbp-E0h]
  _DWORD *v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v41[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+C8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v10 = a1[12] - 1;
  a1[12] = v10;
  if ( !v10 )
  {
    v11 = a1[13];
    if ( v11 )
    {
      while ( 1 )
      {
        v26 = sub_439CD0(v11);
        v11 = *(_DWORD *)(v26 + 48);
        v27 = v26;
        if ( *(_DWORD *)(v26 + 88) != -1 )
        {
          a1[12] += 32;
          sub_442B60((__int64)v34, 0, 1u);
          v30 = v39;
          v31 = *(_DWORD *)(v27 + 88);
          v32 = v38;
          v33 = v36;
          if ( v40 < v39 + 1 )
          {
            v38 = sub_481540((__int64)&v38, v38, v39 + 1, 4u);
            v32 = v38;
            v30 = v39;
          }
          v32[v30] = v33;
          ++v39;
          v41[0] = 2;
          v43 = 0;
          v42 = 0;
          sub_4418C0(v41, a2, 0.0, a4, a5, a6, v28, v29, a9, a10);
          v16 = v36;
          v17 = v35;
          if ( v37 < v36 + 1 )
          {
            v35 = (char *)sub_481540((__int64)&v35, v35, v36 + 1, 0x20u);
            v17 = v35;
            v16 = v36;
          }
          a3 = 0.0;
          v18 = &v17[32 * v16];
          *v18 = 2;
          *((_QWORD *)v18 + 3) = 0;
          *(_OWORD *)(v18 + 8) = 0;
          sub_4418C0((unsigned __int8 *)v18, v41, 0.0, a4, a5, a6, v14, v15, a9, a10);
          ++v36;
          sub_441540((__int64)v41, 0.0, a4, a5, a6, v19, v20, a9, a10);
          sub_4411E0(v34, nullptr, nullptr, v31, 0.0, a4, a5, a6, v21, v22, a9, a10);
          sub_442CC0((__int64)v34, 0.0, a4, a5, a6, v23, v24, a9, a10);
          v25 = a1[12] == 32;
          a1[12] -= 32;
          if ( !v25 )
            break;
        }
        if ( !v11 )
        {
          v11 = a1[12];
          goto LABEL_12;
        }
      }
    }
    else
    {
LABEL_12:
      if ( a1 )
      {
        if ( !v11 )
        {
          sub_445BA0(*((_QWORD **)a1 + 2), a3, a4, a5, a6, a7, a8, a9, a10);
          operator delete(a1, 0x38u);
        }
      }
    }
  }
}
// 4413A7: variable 'v28' is possibly undefined
// 4413A7: variable 'v29' is possibly undefined
// 4413E3: variable 'v14' is possibly undefined
// 4413E3: variable 'v15' is possibly undefined
// 4413F1: variable 'v19' is possibly undefined
// 4413F1: variable 'v20' is possibly undefined
// 441400: variable 'v21' is possibly undefined
// 441400: variable 'v22' is possibly undefined
// 441408: variable 'v23' is possibly undefined
// 441408: variable 'v24' is possibly undefined
// 4414F5: variable 'a7' is possibly undefined
// 4414F5: variable 'a8' is possibly undefined
