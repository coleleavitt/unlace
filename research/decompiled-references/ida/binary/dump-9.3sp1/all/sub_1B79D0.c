unsigned __int64 __fastcall sub_1B79D0(__int64 a1, char a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // [rsp+0h] [rbp-1080h] BYREF
  __int128 v12; // [rsp+8h] [rbp-1078h]
  __int64 v13; // [rsp+18h] [rbp-1068h]
  __int64 (__fastcall **v14)(int, int, int, int, int, int, char); // [rsp+20h] [rbp-1060h] BYREF
  __int64 v15; // [rsp+28h] [rbp-1058h]
  __int128 v16; // [rsp+30h] [rbp-1050h]
  int v17; // [rsp+40h] [rbp-1040h]
  __int64 v18; // [rsp+48h] [rbp-1038h]
  char v19[4104]; // [rsp+50h] [rbp-1030h] BYREF
  unsigned __int64 v20; // [rsp+1058h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  v12 = 0;
  v11 = 0;
  sub_6B7A0(&v11);
  v5 = &under_debugger;
  v6 = *(_QWORD *)(a1 + 1496);
  if ( !under_debugger && !*(_BYTE *)(v6 + 1424) )
    goto LABEL_3;
  v9 = *(_QWORD *)(v6 + 1024);
  if ( *(_QWORD *)(v9 + 120) <= 1u )
    goto LABEL_3;
  ++*(_DWORD *)(v9 + 140);
  qsnprintf();
  v10 = fopenWT();
  if ( !v10 )
  {
    sub_6D0A0((__int64)"Cannot open output file %s\n", v19);
    v7 = v11;
    if ( !v11 )
      return v20 - __readfsqword(0x28u);
    goto LABEL_5;
  }
  sub_66AC0();
  v15 = 0;
  v18 = v10;
  v17 = 0;
  v14 = &off_4E3650;
  v16 = 0;
  sub_1AF540(a1, (void (***)(_QWORD, _QWORD, const char *, ...))&v14);
  qfclose();
  v14 = &off_4E3638;
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
    if ( !a2 )
      goto LABEL_4;
  }
  else
  {
LABEL_3:
    if ( !a2 )
      goto LABEL_4;
  }
  sub_321ED0(a1, 0, (_DWORD)v5, v2, v3, v4, v11, v12, DWORD2(v12), v13);
LABEL_4:
  v7 = v11;
  if ( v11 )
  {
LABEL_5:
    *(_QWORD *)&v12 = 0;
    qfree(v7);
  }
  return v20 - __readfsqword(0x28u);
}
