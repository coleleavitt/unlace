__int64 __fastcall sub_384140(
        __int64 a1,
        unsigned int a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  _DWORD *v13; // rax
  __int64 v14; // rcx
  __m128 v15; // xmm0
  bool v16; // zf
  __int64 v17; // r12
  char *v18; // rsi
  char *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // r15
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  int v25; // ebx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 bpt_kernel_interface; // rax
  __int64 v30; // rdx
  char v31; // [rsp+0h] [rbp-68h]
  __int64 v32; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v13 = sub_234FE0(dword_8CC428);
  if ( v13 )
  {
    v15 = 0;
    v16 = *(_QWORD *)(a1 + 64) == 0;
    v17 = (__int64)v13;
    v32 = 0;
    v33 = 0;
    v18 = (char *)&s1;
    if ( !v16 )
      v18 = *(char **)(a1 + 56);
    v22 = sub_255FF0(&v32, v18, a2, v14, 0.0);
    if ( v22 )
    {
      v27 = operator new(0x80u);
      v15 = 0;
      *(_QWORD *)(v27 + 8) = 0;
      v28 = v27;
      *(_QWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = 96;
      *(_QWORD *)(v27 + 32) = 0;
      *(_QWORD *)(v27 + 56) = -1;
      *(_QWORD *)(v27 + 64) = 0;
      *(_OWORD *)(v27 + 40) = 0;
      *(_QWORD *)(v27 + 80) = -1;
      *(_QWORD *)(v27 + 72) = 0xFFFFFFFFLL;
      *(_QWORD *)(v27 + 88) = 4;
      *(_QWORD *)(v27 + 104) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v27 + 96) = 9;
      *(_QWORD *)(v27 + 112) = 0;
      *(_QWORD *)v27 = srcdbg_run_to;
      *(_DWORD *)(v27 + 120) = sub_2396E0(&v32);
      bpt_kernel_interface = get_bpt_kernel_interface(&v32, v18);
      *(double *)v15.m128_u64 = (*(double (__fastcall **)(__int64, __int64, void *, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 136LL))(
                                  bpt_kernel_interface,
                                  v28 + 24,
                                  &unk_5C2F25,
                                  *(unsigned int *)(v28 + 120),
                                  0);
      *(_DWORD *)(v28 + 96) &= ~1u;
      v18 = (char *)v28;
      v25 = sub_236A00(v17, v28, 2, *(double *)v15.m128_u64);
      if ( v25 > 0 )
      {
        v18 = nullptr;
        v25 = sub_243000(
                a3,
                nullptr,
                v15,
                a5,
                a6,
                a7,
                *(double *)v23.m128_u64,
                *(double *)v24.m128_u64,
                a10,
                a11,
                v30,
                v19);
        v22 = v25 <= 0;
      }
    }
    else
    {
      v22 = 1;
      v25 = 0;
    }
    if ( a3 != 1 && v22 )
    {
      v18 = (char *)&s1;
      if ( *(_QWORD *)(a1 + 64) )
        v18 = *(char **)(a1 + 56);
      sub_169700(
        (int)"Failed to set source bpt %s:%d\n",
        (__int64)v18,
        a2,
        (__int64)v19,
        v20,
        v21,
        v15,
        a5,
        a6,
        a7,
        v23,
        v24,
        a10,
        a11,
        v31);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32, v18);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v25;
}
