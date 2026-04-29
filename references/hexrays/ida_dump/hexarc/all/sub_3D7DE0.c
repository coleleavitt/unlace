__int64 __fastcall sub_3D7DE0(__int64 a1, __int64 a2, _QWORD *a3, int a4, double a5, double a6, double a7, __m128 a8)
{
  __int64 v10; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rdx
  char *v15; // rax
  int v16; // edx
  __int64 v17; // rax
  unsigned __int64 *func; // rax
  unsigned __int64 *v19; // r14
  unsigned __int64 *v20; // r13
  __int64 *v21; // rax
  __int64 *v22; // rdx
  int v23; // r11d
  __m128i v24; // xmm0
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rax
  __int64 v28; // rdx
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v10 = *a3;
  v30 = __readfsqword(0x28u);
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(v10 + 128))(a3);
  v13 = v12;
  if ( dword_4BA948 == (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 112LL))(a3) )
    v13 = a3[5];
  v15 = (char *)&unk_4070C0;
  if ( v13 == -1 )
  {
    *(_DWORD *)a2 = -2;
    sub_652F0((__int64 *)(a2 + 16), (__int64)"Bad address", v14, "$ mbui.view_id");
    return 0;
  }
  while ( 1 )
  {
    v16 = *(_DWORD *)v15;
    if ( *(_DWORD *)v15 >= a4 )
      break;
    v15 += 4;
    if ( v15 == "$ mbui.view_id" )
    {
      v16 = 1;
      break;
    }
  }
  *(_DWORD *)(a2 + 64) = v16;
  v17 = *(_QWORD *)(a1 + 64);
  if ( !v17 || *(_DWORD *)(v17 + 56) != v16 || !*(_QWORD *)(v17 + 24) || !rangeset_t_find_range(v17 + 16, v12) )
  {
LABEL_9:
    func = (unsigned __int64 *)get_func(v13);
    v19 = func;
    if ( func )
    {
      v20 = *(unsigned __int64 **)(a1 + 48);
      v21 = (__int64 *)sub_3CCB40((__int64)v20, *func);
      if ( v22 == v21 )
      {
LABEL_18:
        v25 = *(volatile signed __int32 **)(a2 + 48);
        v24.m128i_i64[0] = 0;
        *(_OWORD *)(a2 + 40) = 0;
        if ( !v25 )
          return sub_3D7C30(a1, a2, (__int64)a3, v19, *(double *)v24.m128i_i64, a6, a7, a8);
      }
      else
      {
        while ( v23 != *(_DWORD *)(*v21 + 56) )
        {
          if ( v22 == ++v21 )
            goto LABEL_18;
        }
        sub_3D7530(&v29, *v21, *v20, a5, a6, a7, a8);
        v24 = _mm_load_si128(&v29);
        v25 = *(volatile signed __int32 **)(a2 + 48);
        v26 = v24.m128i_i64[0];
        *(__m128i *)(a2 + 40) = v24;
        if ( !v25 )
        {
LABEL_16:
          if ( v26 )
            return sub_3D1380(a1, a2, (__int64)a3);
          return sub_3D7C30(a1, a2, (__int64)a3, v19, *(double *)v24.m128i_i64, a6, a7, a8);
        }
      }
      sub_3CDDE0(v25);
      v26 = *(_QWORD *)(a2 + 40);
      goto LABEL_16;
    }
    *(_DWORD *)a2 = -2;
    *(_QWORD *)(a2 + 8) = v12;
    sub_652F0((__int64 *)(a2 + 16), (__int64)"Could not find function by %08llX containing %08llX", v13, v12);
    return 0;
  }
  v28 = *(_QWORD *)(a1 + 64);
  if ( (unsigned int)(*(_DWORD *)(v28 + 60) - 1) > 1 )
  {
    v13 = *(_QWORD *)(v28 + 8);
    goto LABEL_9;
  }
  return sub_3D1CE0(a1, a2, (__int64)a3);
}
