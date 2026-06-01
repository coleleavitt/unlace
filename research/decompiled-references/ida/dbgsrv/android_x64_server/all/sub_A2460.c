/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2460
// Address: 0x00000000000A2460

//----- (00000000000A2460) ----------------------------------------------------
__int64 __fastcall sub_A2460(__int64 a1, int a2, unsigned __int64 a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v7; // rbx
  char v8; // bp
  __int64 v9; // rbx
  bool v10; // bp
  unsigned int qerrno; // ebx
  const char *error_data; // rbp
  const char *error_string; // rax
  char v15[32]; // [rsp+0h] [rbp-68h] BYREF
  char v16[8]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-30h]
  unsigned __int64 v19; // [rsp+40h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 336);
  if ( !v5 )
    return 0;
  v7 = a1 + 336;
  do
  {
    if ( *(_QWORD *)(v5 + 32) >= a3 )
      v7 = v5;
    v5 = *(_QWORD *)(v5 + 8LL * (*(_QWORD *)(v5 + 32) < a3));
  }
  while ( v5 );
  if ( v7 == a1 + 336 || *(_QWORD *)(v7 + 32) > a3 )
    return 0;
  v16[0] = 2;
  v17 = 0;
  v18 = 0;
  qsnprintf(v15, 32, "__lc%a", 0.0);
  sub_A40E0();
  sub_A4100(a1, a2);
  if ( *(_BYTE *)(v7 + 464) )
    goto LABEL_11;
  if ( (unsigned __int8)compile_idc_snippet(v15, *(_BYTE **)(v7 + 48), 0, 0, 1, 0.0, a5) )
  {
    *(_BYTE *)(v7 + 464) = 1;
LABEL_11:
    v8 = call_idc_func(v16, v15, nullptr, 0, 0, 0, 0.0, a5);
    goto LABEL_12;
  }
  v8 = 0;
LABEL_12:
  sub_A40F0();
  if ( v8 )
  {
    idcv_int64((__int64)v16, 0.0, a5);
    v9 = v7 + 40;
    v10 = (_QWORD)v17 != 0;
  }
  else
  {
    qerrno = get_qerrno();
    error_data = (const char *)get_error_data(0);
    error_string = (const char *)get_error_string(0);
    sub_92470(*(_QWORD *)(a1 + 400), a3, qerrno, error_data, error_string);
    v9 = 0;
    v10 = 0;
  }
  free_idcv(v16, 0.0, a5);
  if ( v10 )
    return 0;
  return v9;
}
