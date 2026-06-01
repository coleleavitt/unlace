__int64 __fastcall sub_55DA00(__int64 a1, const char *a2, unsigned int a3, __int64 a4, int *a5, _QWORD *a6)
{
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  __int64 frame_var; // rbx
  __int64 v15; // rdx
  int v17; // eax
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(get_ph(a1, a2) + 10) & 0x40) != 0 )
  {
    v17 = sub_375980(0x3Du);
    if ( !v17 )
      sub_375320((__int64)"Request ph.get_stkvar_scale_factor should be implemented");
    if ( v17 <= 0 )
      sub_375320((__int64)"Invalid return code from ph.get_stkvar_scale_factor request");
    a3 *= v17;
  }
  v10 = a1 + 212;
  if ( a5 )
  {
    v11 = sub_375980(0x2Eu, v18, v10, a2);
    v10 = a1 + 212;
    v12 = v11;
    v13 = 1;
    if ( v12 )
      v13 = v18[0];
    *a5 = v13;
  }
  v18[0] = 0;
  frame_var = get_frame_var(v18, a4, v10, a2, a3);
  if ( frame_var != -1 && a6 )
  {
    v15 = v18[0];
    v18[0] = *a6;
    *a6 = v15;
  }
  clear_tinfo_t(v18);
  return frame_var;
}

