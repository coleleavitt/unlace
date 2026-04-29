unsigned __int64 __fastcall sub_1B3F90(__int64 a1, char a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // rax
  int v14; // r9d
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r12
  const char *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  const char *v23; // [rsp+0h] [rbp-1080h] BYREF
  __int128 v24; // [rsp+8h] [rbp-1078h]
  __int64 v25; // [rsp+18h] [rbp-1068h]
  __int64 (__fastcall **v26)(int, int, int, int, int, int, char); // [rsp+20h] [rbp-1060h] BYREF
  __int64 v27; // [rsp+28h] [rbp-1058h]
  __int128 v28; // [rsp+30h] [rbp-1050h]
  int v29; // [rsp+40h] [rbp-1040h]
  __int64 v30; // [rsp+48h] [rbp-1038h]
  char v31[4104]; // [rsp+50h] [rbp-1030h] BYREF
  unsigned __int64 v32; // [rsp+1058h] [rbp-28h]

  v32 = __readfsqword(0x28u);
  v24 = 0;
  v23 = nullptr;
  sub_67D60((__int64 *)&v23, a3, a4, (__int64)a4, a5, a6);
  v9 = &under_debugger;
  v10 = *(_QWORD *)(a1 + 1496);
  if ( !under_debugger && !*(_BYTE *)(v10 + 1424) )
    goto LABEL_3;
  v13 = *(_QWORD *)(v10 + 1024);
  if ( *(_QWORD *)(v13 + 120) <= 1u )
    goto LABEL_3;
  v14 = *(_DWORD *)(v13 + 140);
  v15 = *(const char **)(v13 + 112);
  *(_DWORD *)(v13 + 140) = v14 + 1;
  qsnprintf(v31, 4096, "%s%cb%05dd%03d.dmp", v15, 47, v14, -1);
  v16 = ((__int64 (__fastcall *)(char *))fopenWT)(v31);
  v17 = v16;
  if ( !v16 )
  {
    sub_69660((__int64)"Cannot open output file %s\n", v31);
    v11 = (__int64)v23;
    if ( !v23 )
      return v32 - __readfsqword(0x28u);
    goto LABEL_5;
  }
  v18 = s1;
  if ( (_QWORD)v24 )
    v18 = v23;
  sub_63080(v16, (__int64)"%s\n", v18);
  v27 = 0;
  v30 = v17;
  v29 = 0;
  v26 = &off_4D0750;
  v28 = 0;
  sub_1ABB00(a1, (void (***)(_QWORD, _QWORD, const char *, ...))&v26, v19, v20, v21, v22);
  qfclose(v17);
  v26 = &off_4D0738;
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
    if ( !a2 )
      goto LABEL_4;
  }
  else
  {
LABEL_3:
    if ( !a2 )
      goto LABEL_4;
  }
  sub_31DD50(a1, 0, (_DWORD)v9, v6, v7, v8, (_DWORD)v23, v24, DWORD2(v24), v25);
LABEL_4:
  v11 = (__int64)v23;
  if ( v23 )
  {
LABEL_5:
    *(_QWORD *)&v24 = 0;
    qfree(v11);
  }
  return v32 - __readfsqword(0x28u);
}
