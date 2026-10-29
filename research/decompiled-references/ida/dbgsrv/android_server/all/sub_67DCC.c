/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67DCC
// Address: 0x0000000000067DCC

//----- (0000000000067DCC) ----------------------------------------------------
void __usercall sub_67DCC(
        const char *a1@<X0>,
        const char *a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X3>,
        __int64 a5@<X4>,
        _QWORD *a6@<X8>)
{
  unsigned __int8 *idc_filename; // x24
  char *file_ext; // x0
  pthread_mutex_t *v13; // x25
  const char *v14; // x26
  __int64 v15; // x29
  __int64 *v16; // x20
  __int64 v17; // x28
  const char *v18; // x1
  __int64 (__fastcall *v19)(unsigned __int8 *, _QWORD, void **); // x8
  void *v20; // x0
  __int128 v21; // q0
  __int64 v22; // x8
  __int64 v23; // [xsp+8h] [xbp-1088h]
  void *ptr[2]; // [xsp+10h] [xbp-1080h] BYREF
  __int64 v25; // [xsp+20h] [xbp-1070h]
  _BYTE v26[4096]; // [xsp+28h] [xbp-1068h] BYREF
  __int64 v27; // [xsp+1028h] [xbp-68h]

  idc_filename = (unsigned __int8 *)a1;
  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !qfileexist(a1)
    && ((qisabspath(idc_filename) & 1) != 0
     || (idc_filename = (unsigned __int8 *)get_idc_filename((size_t)v26, 0x1000u, (__int64)idc_filename)) == nullptr) )
  {
    sub_39140(a6, "could not locate file");
    return;
  }
  v23 = a5;
  file_ext = get_file_ext(idc_filename);
  v13 = (pthread_mutex_t *)qword_166A80;
  if ( file_ext )
    v14 = file_ext;
  else
    v14 = "idc";
  qmutex_lock((pthread_mutex_t *)qword_166A80);
  v15 = 8 * qword_166A90;
  if ( 8 * qword_166A90 )
  {
    v16 = (__int64 *)qword_166A88;
    while ( 1 )
    {
      v17 = *v16;
      if ( *v16 )
      {
        v18 = *(const char **)(v17 + 24);
        if ( v18 )
        {
          if ( !strcasecmp(v14, v18) )
            break;
        }
      }
      v15 -= 8;
      ++v16;
      if ( !v15 )
        goto LABEL_13;
    }
    ++*(_DWORD *)(v17 + 12);
  }
  else
  {
LABEL_13:
    v17 = 0;
  }
  qmutex_unlock(v13);
  if ( !v17 )
  {
    sub_39140(a6, "unknown file extension");
    return;
  }
  v19 = *(__int64 (__fastcall **)(unsigned __int8 *, _QWORD, void **))(v17 + 48);
  if ( !v19 )
  {
    sub_39140(a6, "cannot compile script");
    goto LABEL_28;
  }
  ptr[0] = nullptr;
  ptr[1] = nullptr;
  v25 = 0;
  if ( (v19(idc_filename, 0, ptr) & 1) == 0 )
    goto LABEL_25;
  if ( !a2 )
  {
    if ( (*(_BYTE *)(v17 + 8) & 1) == 0 )
      goto LABEL_21;
    a2 = "main";
  }
  if ( ((*(__int64 (__fastcall **)(__int64, const char *, __int64, __int64, void **))(v17 + 56))(a3, a2, a4, v23, ptr)
      & 1) == 0 )
  {
LABEL_25:
    v21 = *(_OWORD *)ptr;
    v22 = v25;
    ptr[0] = nullptr;
    ptr[1] = nullptr;
    *(_OWORD *)a6 = v21;
    a6[2] = v22;
    goto LABEL_26;
  }
LABEL_21:
  v20 = ptr[0];
  a6[1] = 0;
  a6[2] = 0;
  *a6 = 0;
  if ( v20 )
  {
    ptr[1] = nullptr;
    qfree(v20);
    ptr[0] = nullptr;
LABEL_26:
    v25 = 0;
  }
LABEL_28:
  --*(_DWORD *)(v17 + 12);
}
// 166A80: using guessed type __int64 qword_166A80;
// 166A88: using guessed type __int64 qword_166A88;
// 166A90: using guessed type __int64 qword_166A90;
