__int64 __fastcall sub_2266B90(__int64 a1, const char **a2, __int64 a3)
{
  unsigned int v5; // eax
  _BYTE *v6; // rdi
  unsigned int v7; // r12d
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // rdi
  unsigned int (__fastcall *v12)(__int64, void **, __int64); // rax
  int v13; // edx
  void *v14; // rdx
  __int64 v15; // rax
  std::_V2 *v16; // rdi
  __int64 (__fastcall *v17)(std::_V2 *, void **, __int64); // rcx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // r15d
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, void **, __int64); // rax
  __int64 v23; // rbp
  unsigned int v24; // r15d
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, void **, __int64); // rcx
  __int64 v27; // rsi
  void *v28; // [rsp+0h] [rbp-2E8h]
  unsigned int v29; // [rsp+Ch] [rbp-2DCh]
  void *v30; // [rsp+10h] [rbp-2D8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-2D0h]
  __int16 v32; // [rsp+30h] [rbp-2B8h]
  void *ptr; // [rsp+40h] [rbp-2A8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-2A0h]
  _BYTE v35[264]; // [rsp+58h] [rbp-290h] BYREF
  void *v36; // [rsp+160h] [rbp-188h] BYREF
  __int64 v37; // [rsp+168h] [rbp-180h]
  __int16 v38; // [rsp+180h] [rbp-168h]
  __int64 v39; // [rsp+270h] [rbp-78h]
  void *v40; // [rsp+278h] [rbp-70h]
  __int64 v41; // [rsp+280h] [rbp-68h]
  char v42; // [rsp+2A0h] [rbp-48h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v35;
  sub_22538C0(a2, (__int64)&ptr);
  v5 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 112LL))(a1, &ptr);
  if ( v5 )
  {
    v6 = ptr;
    v7 = v5;
    goto LABEL_3;
  }
  v9 = si128.m128i_i64[0];
  v10 = ptr;
  if ( *(_DWORD *)(a1 + 120) == 1 )
  {
    v11 = *(_QWORD *)(a1 + 72);
    v12 = *(unsigned int (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v11 + 88LL);
    v36 = ptr;
    v37 = si128.m128i_i64[0];
    v38 = 261;
    if ( !v12(v11, &v36, a3) )
    {
      v6 = ptr;
      v7 = 0;
      goto LABEL_3;
    }
    v10 = ptr;
    v9 = si128.m128i_i64[0];
  }
  sub_22668A0((__int64)&v36, a1, v10, v9);
  if ( (v42 & 1) != 0 )
  {
    v23 = v37;
    v24 = (unsigned int)v36;
    v6 = ptr;
    if ( *(_DWORD *)(a1 + 120) || (v28 = ptr, v6 = ptr, std::_V2::generic_category((std::_V2 *)ptr) != v23) || v24 != 2 )
    {
      v7 = v24;
      goto LABEL_3;
    }
    v25 = *(_QWORD *)(a1 + 72);
    v26 = *(__int64 (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v25 + 88LL);
    v30 = v28;
    v32 = 261;
    v31 = si128.m128i_i64[0];
    v7 = v26(v25, &v30, a3);
  }
  else
  {
    v13 = *(_DWORD *)(v39 + 8);
    if ( v13 == 1 )
    {
      v14 = v40;
      v15 = v41;
LABEL_14:
      v16 = *(std::_V2 **)(a1 + 72);
      v17 = *(__int64 (__fastcall **)(std::_V2 *, void **, __int64))(*(_QWORD *)v16 + 88LL);
      v32 = 261;
      v30 = v14;
      v31 = v15;
      v19 = v17(v16, &v30, a3);
      v20 = v19;
      if ( v19
        && !*(_DWORD *)(a1 + 120)
        && (!v39 || *(_DWORD *)(v39 + 8) == 1)
        && (v29 = v19, std::_V2::generic_category(v16) == v18)
        && v29 == 2 )
      {
        v21 = *(_QWORD *)(a1 + 72);
        v22 = *(__int64 (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v21 + 88LL);
        v30 = ptr;
        v32 = 261;
        v31 = si128.m128i_i64[0];
        v7 = v22(v21, &v30, a3);
      }
      else
      {
        v7 = v20;
      }
      goto LABEL_26;
    }
    if ( v13 == 2 )
    {
      v14 = *(void **)(v39 + 48);
      v15 = *(_QWORD *)(v39 + 56);
      goto LABEL_14;
    }
    if ( *(_DWORD *)(a1 + 120) )
    {
      v7 = 22;
      std::_V2::generic_category((std::_V2 *)&v36);
      goto LABEL_30;
    }
    v27 = a3;
    v7 = 0;
    sub_225BD10((__int64)&v36, v27);
    std::_V2::system_category((std::_V2 *)&v36);
  }
LABEL_26:
  if ( (v42 & 1) == 0 )
LABEL_30:
    sub_225BE70((__int64)&v36);
  v6 = ptr;
LABEL_3:
  if ( v6 != v35 )
    free(v6);
  return v7;
}
