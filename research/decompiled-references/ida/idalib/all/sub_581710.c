__int64 __fastcall sub_581710(int a1, int a2, char **a3, int a4, int a5)
{
  char *v7; // r15
  int v9; // r9d
  __int64 v10; // rcx
  unsigned int v11; // r13d
  int v13[2]; // [rsp+10h] [rbp-118h] BYREF
  int v14; // [rsp+18h] [rbp-110h]
  int v15; // [rsp+20h] [rbp-108h]
  int v16; // [rsp+28h] [rbp-100h]
  int v17; // [rsp+30h] [rbp-F8h]
  void *v18; // [rsp+38h] [rbp-F0h]
  __int64 v19; // [rsp+40h] [rbp-E8h]
  int v20; // [rsp+48h] [rbp-E0h]
  __int128 v21; // [rsp+50h] [rbp-D8h]
  void *v22; // [rsp+60h] [rbp-C8h]
  __int128 v23; // [rsp+68h] [rbp-C0h]
  void *ptr; // [rsp+78h] [rbp-B0h]
  __int128 v25; // [rsp+80h] [rbp-A8h]
  _OWORD v26[3]; // [rsp+90h] [rbp-98h] BYREF
  char *v27; // [rsp+C0h] [rbp-68h]
  int v28; // [rsp+C8h] [rbp-60h]
  __int64 v29; // [rsp+D0h] [rbp-58h]
  char v30; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+E8h] [rbp-40h]

  v7 = *a3;
  v31 = __readfsqword(0x28u);
  v18 = (char *)&dword_0 + 1;
  *(_QWORD *)v13 = 0;
  LODWORD(v19) = -1;
  if ( (unsigned __int8)sub_6B3810(a3, v13) )
  {
    v10 = 2304;
    v11 = 0;
    if ( _bittest64(&v10, v13[0] & 0xF) )
      v11 = sub_6A71C0(a1, a2, (int)a3, a4, a5, v9, a1, a2, v13[0], v14, v15, v16, v17, v18, v19, v20, v21);
    *a3 = v7;
    v22 = nullptr;
    ptr = nullptr;
    v27 = (char *)&dword_0 + 1;
    v28 = -1;
    v29 = 0;
    v30 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v26[0] = 0;
    sub_581390((__int64 *)v26 + 1, a3);
    clear_tinfo_t(v26);
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      qfree(ptr);
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
  }
  else
  {
    return 0;
  }
  return v11;
}
