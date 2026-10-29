__int64 __fastcall sub_4830A0(__int64 a1, const char *a2, const char *a3, int a4, int a5)
{
  unsigned int v7; // ebx
  void *v9; // [rsp+0h] [rbp-108h] BYREF
  __int128 v10; // [rsp+8h] [rbp-100h]
  char *s1; // [rsp+18h] [rbp-F0h]
  __int128 v12; // [rsp+20h] [rbp-E8h]
  void *v13; // [rsp+30h] [rbp-D8h]
  __int128 v14; // [rsp+38h] [rbp-D0h]
  void *v15; // [rsp+48h] [rbp-C0h]
  __int128 v16; // [rsp+50h] [rbp-B8h]
  int v17; // [rsp+60h] [rbp-A8h]
  void *v18; // [rsp+70h] [rbp-98h] BYREF
  __int128 v19; // [rsp+78h] [rbp-90h]
  char *s2; // [rsp+88h] [rbp-80h]
  __int128 v21; // [rsp+90h] [rbp-78h]
  void *v22; // [rsp+A0h] [rbp-68h]
  __int128 v23; // [rsp+A8h] [rbp-60h]
  void *ptr; // [rsp+B8h] [rbp-50h]
  __int128 v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v27; // [rsp+D8h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v9 = nullptr;
  s1 = nullptr;
  v13 = nullptr;
  v15 = nullptr;
  v17 = a4;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  v16 = 0;
  sub_480C80((__int64)&v9, a1, a2);
  v26 = a5;
  v18 = nullptr;
  s2 = nullptr;
  v22 = nullptr;
  ptr = nullptr;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  sub_480C80((__int64)&v18, a1, a3);
  if ( (unsigned __int64)v10 <= 1 )
  {
    v7 = (unsigned __int64)v19 > 1;
  }
  else if ( (unsigned __int64)v19 <= 1 )
  {
    v7 = -1;
  }
  else
  {
    if ( (unsigned __int64)v12 <= 1 || (unsigned __int64)v21 <= 1 )
      sub_47DEB0();
    v7 = strcmp(s1, s2);
  }
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
  if ( s2 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(s2);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  if ( s1 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(s1);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v7;
}

