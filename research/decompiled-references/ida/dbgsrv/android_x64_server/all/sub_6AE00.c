/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AE00
// Address: 0x000000000006AE00

//----- (000000000006AE00) ----------------------------------------------------
__int64 __fastcall sub_6AE00(__int64 a1, char *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *idc_filename; // rbp
  __int64 v10; // r14
  char *file_ext; // rax
  const char *v12; // r15
  pthread_mutex_t *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r12
  const char *v18; // rsi
  unsigned __int8 (__fastcall *v19)(char *, _QWORD, void **); // rcx
  const char *v20; // rsi
  __int128 v21; // xmm0
  pthread_mutex_t *v23; // [rsp+0h] [rbp-1088h]
  __int64 v24; // [rsp+10h] [rbp-1078h]
  __int64 v25; // [rsp+18h] [rbp-1070h]
  __int64 v26; // [rsp+20h] [rbp-1068h]
  void *ptr[2]; // [rsp+30h] [rbp-1058h] BYREF
  __int64 v29; // [rsp+40h] [rbp-1048h]
  char v30[4096]; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v31; // [rsp+1050h] [rbp-38h]

  idc_filename = a2;
  v10 = a1;
  v31 = __readfsqword(0x28u);
  if ( qfileexist(a2) || !qisabspath(a2) && (idc_filename = get_idc_filename(v30, 4096, (__int64)a2)) != nullptr )
  {
    v24 = a4;
    v25 = a5;
    v26 = a6;
    file_ext = get_file_ext(idc_filename);
    v12 = "idc";
    if ( file_ext )
      v12 = file_ext;
    v13 = (pthread_mutex_t *)qword_1557C0;
    qmutex_lock((pthread_mutex_t *)qword_1557C0);
    v14 = 8LL * *((_QWORD *)&xmmword_1557C8 + 1);
    if ( 8LL * *((_QWORD *)&xmmword_1557C8 + 1) )
    {
      v23 = v13;
      v15 = xmmword_1557C8;
      v16 = 0;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v15 + v16);
        if ( v17 )
        {
          v18 = *(const char **)(v17 + 24);
          if ( v18 )
          {
            if ( !strcasecmp(v12, v18) )
              break;
          }
        }
        v16 += 8;
        if ( v14 == v16 )
        {
          v17 = 0;
          goto LABEL_16;
        }
      }
      ++*(_DWORD *)(v17 + 12);
LABEL_16:
      v10 = a1;
      v13 = v23;
    }
    else
    {
      v17 = 0;
    }
    qmutex_unlock(v13);
    if ( v17 )
    {
      v19 = *(unsigned __int8 (__fastcall **)(char *, _QWORD, void **))(v17 + 48);
      if ( !v19 )
      {
        sub_37F60(v10, "cannot compile script");
        goto LABEL_30;
      }
      *(_OWORD *)ptr = 0;
      v29 = 0;
      if ( v19(idc_filename, 0, ptr) )
      {
        v20 = a3;
        if ( !a3 )
        {
          if ( (*(_BYTE *)(v17 + 8) & 1) == 0 )
          {
LABEL_24:
            *(_OWORD *)v10 = 0;
            *(_QWORD *)(v10 + 16) = 0;
            if ( !ptr[0] )
            {
LABEL_30:
              --*(_DWORD *)(v17 + 12);
              return v10;
            }
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
LABEL_28:
            v29 = 0;
            goto LABEL_30;
          }
          v20 = "main";
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, const char *, __int64, __int64, void **))(v17 + 56))(
               v24,
               v20,
               v25,
               v26,
               ptr) )
        {
          goto LABEL_24;
        }
      }
      v21 = *(_OWORD *)ptr;
      ptr[0] = nullptr;
      *(_OWORD *)v10 = v21;
      ptr[1] = nullptr;
      *(_QWORD *)(v10 + 16) = v29;
      goto LABEL_28;
    }
    sub_37F60(v10, "unknown file extension");
  }
  else
  {
    sub_37F60(a1, "could not locate file");
  }
  return v10;
}
// 1557C0: using guessed type __int64 qword_1557C0;
// 1557C8: using guessed type __int128 xmmword_1557C8;
