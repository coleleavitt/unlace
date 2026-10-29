__int64 __fastcall save_database(const char *a1, int a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 license_manager; // rbp
  unsigned __int8 (__fastcall *v10)(__int64, const char *, int *); // r13
  const char *v11; // rsi
  unsigned int updated; // r14d
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  double v20; // xmm0_8
  __int64 v22; // rax
  size_t v23; // r14
  void *src; // [rsp+10h] [rbp-F8h]
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v26[136]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v27; // [rsp+C8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  license_manager = get_license_manager();
  v10 = *(unsigned __int8 (__fastcall **)(__int64, const char *, int *))(*(_QWORD *)license_manager + 96LL);
  v11 = (const char *)time(nullptr);
  if ( !v10(license_manager, v11, &v25) || (unsigned int)(v25 - 1) <= 4 || (updated = sub_390FF0(), (_BYTE)updated) )
  {
    v13 = qword_2CA1698;
    v14 = *(_QWORD *)(qword_2CA1698 + 1352);
    if ( a3 != 0 && a4 != 0 )
    {
      src = nullptr;
      v22 = *(_QWORD *)(v14 + 224);
      if ( v22 )
      {
        v23 = 8 * v22;
        src = (void *)qalloc_or_throw(8 * v22, v11);
        memcpy(src, *(const void **)(v14 + 216), v23);
      }
      qstrncpy(v26, v14 + 88, 128);
    }
    else
    {
      src = nullptr;
    }
    updated = update_snapshot_attributes(0, a3, a4, 7);
    if ( (_BYTE)updated )
    {
      if ( a2 )
      {
        v15 = *(_DWORD *)(v13 + 72) & 0xFFFFFFFB;
        if ( (a2 & 4) != 0 )
          v15 = *(_DWORD *)(v13 + 72) | 4;
        v16 = v15;
        v17 = v15 & 0xFFFFFFF7;
        v18 = v16 | 8;
        if ( (a2 & 8) != 0 )
          v17 = v18;
        if ( (a2 & 1) != 0 )
          v19 = v17 | 1;
        else
          v19 = v17 & 0xFFFFFFFE;
        *(_DWORD *)(v13 + 72) = v19;
      }
      flush_buffers(0);
      v20 = sub_7971D0(v13, 0);
      sub_57DDA0(*(_QWORD **)(v13 + 1352), a1, v20, a6);
    }
    if ( src )
      qfree(src);
  }
  return updated;
}

