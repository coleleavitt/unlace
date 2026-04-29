unsigned __int64 __fastcall sub_37D080(__int64 a1, int a2, __int64 a3, const __m128i *a4, double a5)
{
  __int64 v7; // rbx
  __int64 v9; // rbx
  char *path; // rax
  char v11; // dl
  char *v12; // rcx
  char v13; // si
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const char *v19; // rbp
  time_t v20; // rax
  __int64 v21; // rsi
  char v22; // r12
  __int64 v23; // rax
  _QWORD v24[6]; // [rsp+0h] [rbp-1078h] BYREF
  char v25[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v26; // [rsp+1038h] [rbp-40h]

  v7 = qword_4C2AD8;
  v26 = __readfsqword(0x28u);
  qmutex_lock(qword_4C2AD8);
  qmutex_unlock(v7);
  v9 = qword_4C2AC0[a2];
  if ( !v9 )
  {
    if ( a2 == 1 )
    {
      v22 = qfileexist("vd_stats.txt");
      v23 = qfopen("vd_stats.txt", "a");
      qword_4C2AC8 = v23;
      v9 = v23;
      if ( !v23 )
        return v26 - __readfsqword(0x28u);
      if ( !v22 )
        sub_62040(
          v23,
          (__int64)"                                  Time     Elapsed #func  #dc    #ok #fail %%   INS MEM BLK BSP PRO S"
                   "WI EXC HUG LVR 16B CAL FRM TYP IDB\n"
                   "                           ----------------- ----- ----- ----- ----- ---- ---- --- --- --- --- --- --"
                   "- --- --- --- --- --- --- --- ---\n");
    }
    else
    {
      qword_4C2AC0[0] = qfopen("vd_error.txt", "a");
      v9 = qword_4C2AC0[0];
      if ( !qword_4C2AC0[0] )
        return v26 - __readfsqword(0x28u);
    }
  }
  qgetcwd(v25, 4096);
  path = (char *)get_path(1);
  v11 = v25[0];
  v12 = v25;
  v13 = *path;
  if ( *path == v25[0] )
  {
    while ( v11 )
    {
      v11 = v12[1];
      v13 = path[1];
      ++v12;
      ++path;
      if ( v11 != v13 )
        goto LABEL_13;
    }
    if ( v13 == 47 )
      goto LABEL_12;
  }
  else
  {
LABEL_13:
    if ( v11 )
      goto LABEL_8;
    if ( v13 == 47 )
      goto LABEL_12;
  }
  if ( v13 == 92 )
  {
LABEL_12:
    v14 = (__int64)(path + 1);
    goto LABEL_9;
  }
LABEL_8:
  v14 = get_path(1);
LABEL_9:
  qstrncpy(v25, v14, 4096);
  strrpl(v25, 92, 47);
  sub_62040(v9, (__int64)"%-24s ", v25);
  if ( !a2 )
  {
    v19 = (const char *)*(int *)(a1 + 984);
    v20 = time(nullptr);
    qstrftime(v24, 40, "%d-%m-%Y %H:%M:%S", v20);
    sub_62040(v9, (__int64)"%08a %6llu %s ", a5, *(_QWORD *)(a1 + 408), v19);
    v21 = *(_QWORD *)(a1 + 416);
    if ( v21 == -1 )
      v21 = *(_QWORD *)(a1 + 408);
    sub_37CD80(1, v21, a3, a4);
  }
  qvfprintf(v9, a3, a4, v15, v16, v17, v24[0], v24[1], v24[2], v24[3]);
  qflush(v9);
  return v26 - __readfsqword(0x28u);
}
