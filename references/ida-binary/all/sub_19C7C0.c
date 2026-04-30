_BOOL8 __fastcall sub_19C7C0(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _BOOL4 v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 bpt_kernel_interface; // rax
  __int64 v27; // [rsp+0h] [rbp-98h] BYREF
  __int64 v28; // [rsp+8h] [rbp-90h] BYREF
  __int64 v29; // [rsp+10h] [rbp-88h] BYREF
  __int64 v30; // [rsp+18h] [rbp-80h]
  __int128 v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-50h]
  __int64 v36; // [rsp+50h] [rbp-48h]
  __int64 v37; // [rsp+58h] [rbp-40h]
  unsigned __int64 v38; // [rsp+60h] [rbp-38h]
  __int64 v39; // [rsp+68h] [rbp-30h]
  unsigned __int64 v40; // [rsp+78h] [rbp-20h]

  v40 = __readfsqword(0x28u);
  v10 = a2;
  v31 = 0;
  v34 = 0xFFFFFFFFLL;
  v29 = 96;
  v30 = 0;
  v32 = -1;
  v33 = 0;
  v35 = -1;
  v36 = 4;
  v37 = 9;
  v38 = 0xFFFFFFFF00000000LL;
  v39 = 0;
  sub_19A0D0((__int64)&v29);
  if ( a1 )
  {
    v24 = sub_3844D0(a1);
    a2 = &v29;
    sub_384060(a1, &v29, v24);
    goto LABEL_16;
  }
  if ( a2 != (__int64 *)-1LL )
  {
    v11 = a2;
LABEL_4:
    if ( (~((unsigned __int16)get_flags_ex(v11, 4) >> 8) & 6) != 0 )
    {
      v14 = sub_19B830(0, (__int64)a2, 0.0, a4, a5, a6, v12, v13, a9, a10);
LABEL_6:
      v18 = v14 != 0;
      goto LABEL_7;
    }
    bpt_kernel_interface = get_bpt_kernel_interface(v11, 4);
    a2 = &v29;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, __int64))(*(_QWORD *)bpt_kernel_interface + 128LL))(
      bpt_kernel_interface,
      &v29,
      v11,
      0,
      1);
LABEL_16:
    if ( v10 != (__int64 *)-1LL )
      goto LABEL_17;
    goto LABEL_12;
  }
  v20 = sub_384360();
  v21 = v20;
  if ( v20 )
  {
    v22 = sub_3844D0(v20);
    sub_384060(v21, &v29, v22);
LABEL_12:
    v23 = v38;
    goto LABEL_13;
  }
  v11 = (__int64 *)xmmword_8CC810;
  if ( !(unsigned __int8)sub_1F09E0(0, &v27, &v28) )
    goto LABEL_4;
  v25 = get_bpt_kernel_interface(0, &v27);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, _QWORD))(*(_QWORD *)v25 + 128LL))(v25, &v29, v27, 1, 0);
  v23 = v28 - v27;
  LODWORD(v38) = v28 - v27;
LABEL_13:
  a2 = (__int64 *)v35;
  if ( sub_19A750(v36, v35, v23) )
  {
LABEL_17:
    v14 = sub_19B410((__int64)&v29, 0.0, *(double *)a4.m128_u64, a5);
    goto LABEL_6;
  }
  v18 = 0;
LABEL_7:
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30, a2, v15, v16, v17);
  }
  return v18;
}
