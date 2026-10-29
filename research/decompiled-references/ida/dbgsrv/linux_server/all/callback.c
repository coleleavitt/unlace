/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: callback
// Address: 0x0000000000412B80

//----- (0000000000412B80) ----------------------------------------------------
__int64 __fastcall callback(
        const td_thrhandle_t *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  td_err_e info; // eax
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char **v19; // rbx
  char *v20; // rdx
  char *v21; // rax
  const char *v22; // rdx
  td_thrinfo_t v23; // [rsp+0h] [rbp-328h] BYREF
  _BYTE v24[384]; // [rsp+180h] [rbp-1A8h] BYREF
  unsigned __int64 v25; // [rsp+308h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  info = td_thr_get_info(a1, &v23);
  if ( info )
  {
    v22 = sub_40D5E0(info);
    sub_410DF0("%s: %s\n", "td_thr_get_info", v22);
  }
  if ( (v23.ti_state & 0xFFFFFFFB) != 1 )
  {
    v15 = *(_QWORD *)(*a2 + 1224);
    if ( !v15 )
      goto LABEL_11;
    v16 = *a2 + 1216;
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v15 + 16);
        v18 = *(_QWORD *)(v15 + 24);
        if ( v23.ti_lid <= *(_DWORD *)(v15 + 32) )
          break;
        v15 = *(_QWORD *)(v15 + 24);
        if ( !v18 )
          goto LABEL_9;
      }
      v16 = v15;
      v15 = *(_QWORD *)(v15 + 16);
    }
    while ( v17 );
LABEL_9:
    if ( *a2 + 1216 == v16 || v23.ti_lid < *(_DWORD *)(v16 + 32) )
    {
LABEL_11:
      sub_412AC0(a3, a4, a5, a6, v12, v13, a9, a10, *a2, (__int64)&v23, a1);
      v19 = (char **)a2[1];
      v20 = v19[1];
      v21 = *v19;
      qmemcpy(v24, &v23, sizeof(v24));
      if ( v19[2] < v20 + 1 )
      {
        v21 = (char *)sub_481540((__int64)v19, v21, (unsigned __int64)(v20 + 1), 0x180u);
        v20 = v19[1];
        *v19 = v21;
      }
      qmemcpy(&v21[384 * (_QWORD)v20], v24, 0x180u);
      ++v19[1];
    }
  }
  return 0;
}
// 412C57: variable 'v12' is possibly undefined
// 412C57: variable 'v13' is possibly undefined
