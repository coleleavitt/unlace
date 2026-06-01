__int64 __fastcall save_database(const char *a1, int a2, _QWORD *a3, __int64 a4, double a5, double a6)
{
  __int64 license_manager; // rbp
  unsigned __int8 (__fastcall *v9)(__int64, time_t, int *); // r13
  time_t v10; // rax
  unsigned int updated; // r14d
  __int64 v12; // rbp
  __int64 v13; // r13
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  double v19; // xmm0_8
  __int64 v21; // rax
  size_t v22; // r14
  void *src; // [rsp+10h] [rbp-F8h]
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v25[136]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+C8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  license_manager = get_license_manager();
  v9 = *(unsigned __int8 (__fastcall **)(__int64, time_t, int *))(*(_QWORD *)license_manager + 96LL);
  v10 = time(nullptr);
  if ( !v9(license_manager, v10, &v24) || (unsigned int)(v24 - 1) <= 4 || (updated = sub_395DC0(), (_BYTE)updated) )
  {
    v12 = qword_2CCB598;
    v13 = *(_QWORD *)(qword_2CCB598 + 1544);
    if ( a3 != nullptr && a4 != 0 )
    {
      src = nullptr;
      v21 = *(_QWORD *)(v13 + 224);
      if ( v21 )
      {
        v22 = 8 * v21;
        src = (void *)qalloc_or_throw(8 * v21);
        memcpy(src, *(const void **)(v13 + 216), v22);
      }
      qstrncpy(v25, v13 + 88, 128);
    }
    else
    {
      src = nullptr;
    }
    updated = update_snapshot_attributes(nullptr, a3, a4, 7);
    if ( (_BYTE)updated )
    {
      if ( a2 )
      {
        v14 = *(_DWORD *)(v12 + 72) & 0xFFFFFFFB;
        if ( (a2 & 4) != 0 )
          v14 = *(_DWORD *)(v12 + 72) | 4;
        v15 = v14;
        v16 = v14 & 0xFFFFFFF7;
        v17 = v15 | 8;
        if ( (a2 & 8) != 0 )
          v16 = v17;
        if ( (a2 & 1) != 0 )
          v18 = v16 | 1;
        else
          v18 = v16 & 0xFFFFFFFE;
        *(_DWORD *)(v12 + 72) = v18;
      }
      flush_buffers(0);
      v19 = sub_7BA230(v12, 0);
      sub_5976A0(*(_QWORD **)(v12 + 1544), a1, v19, a6);
    }
    if ( src )
      qfree(src);
  }
  return updated;
}
