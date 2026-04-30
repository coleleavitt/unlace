__int64 __fastcall snapman_t::restore_snapshot(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  bool v9; // zf
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  void (__fastcall *v17)(_BYTE *, _QWORD); // rax
  size_t v19; // rax
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebp
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  void (__fastcall *v29)(_QWORD, _QWORD); // rax
  __int64 v30; // rdx
  char *v31; // rcx
  double v32; // xmm4_8
  double v33; // xmm5_8
  char v34; // [rsp+0h] [rbp-458h]
  __int64 v35; // [rsp+8h] [rbp-450h] BYREF
  void *ptr[4]; // [rsp+10h] [rbp-448h] BYREF
  _BYTE v37[1032]; // [rsp+30h] [rbp-428h] BYREF
  unsigned __int64 v38; // [rsp+438h] [rbp-20h]

  v9 = *(_DWORD *)(a1 + 8) == 1;
  v38 = __readfsqword(0x28u);
  if ( v9 )
  {
    set_database_flag(1, 1);
    sub_308340(0, 1, v30, v31, a2, a3, a4, a5, v32, v33, a8, a9);
    ++*(_DWORD *)(a1 + 8);
    return 1;
  }
  else
  {
    sub_1C76F0((int)"HIDECANCEL\nRestoring snapshot, please wait...");
    v35 = 0;
    v10 = qcopyfile(a1 + 12, a1 + 4236, 1, sub_3181E0, &v35, 0);
    sub_1C78D0();
    if ( v10 )
      goto LABEL_3;
    v19 = strlen((const char *)(a1 + 4236));
    *(double *)a2.m128_u64 = QT::QString::fromUtf8(ptr, v19, (const char *)(a1 + 4236));
    v24 = (unsigned __int8)sub_30A6D0((QT::QString *)ptr, nullptr, a2, a3, a4, a5, v20, v21, a8, a9);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( !(_BYTE)v24 )
    {
LABEL_3:
      *(double *)a2.m128_u64 = qsnprintf(v37, 1024, "Failed to restore snapshot: %s\n", (const char *)(a1 + 4108));
      sub_169630((int)"ICON ERROR\n%s", (__int64)v37, v11, v12, v13, v14, a2, a3, a4, a5, v15, v16, a8, a9, v34);
      v17 = *(void (__fastcall **)(_BYTE *, _QWORD))(a1 + 8336);
      byte_8CD8D4 = 0;
      if ( v17 )
        v17(v37, *(_QWORD *)(a1 + 8344));
    }
    else
    {
      sub_169700(
        (int)"Database snapshot restored successfully: %s\n",
        a1 + 4108,
        v22,
        v23,
        v25,
        v26,
        a2,
        a3,
        a4,
        a5,
        v27,
        v28,
        a8,
        a9,
        v34);
      v29 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 8336);
      byte_8CD8D4 = 0;
      if ( v29 )
        v29(0, *(_QWORD *)(a1 + 8344));
    }
    return 0;
  }
}
