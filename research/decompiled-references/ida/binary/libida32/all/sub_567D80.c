__int64 __fastcall sub_567D80(int a1, int a2, char **a3, int a4, int a5)
{
  char *v7; // r15
  int v9; // r9d
  __int64 v10; // rcx
  unsigned int v11; // r13d
  int v13[2]; // [rsp+10h] [rbp-F8h] BYREF
  int v14; // [rsp+18h] [rbp-F0h]
  int v15; // [rsp+20h] [rbp-E8h]
  int v16[2]; // [rsp+28h] [rbp-E0h]
  int v17; // [rsp+30h] [rbp-D8h]
  void *v18; // [rsp+38h] [rbp-D0h]
  __int128 v19; // [rsp+40h] [rbp-C8h]
  void *v20; // [rsp+50h] [rbp-B8h]
  __int128 v21; // [rsp+58h] [rbp-B0h]
  void *ptr; // [rsp+68h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-98h]
  _OWORD v24[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  char v28; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+C8h] [rbp-40h]

  v7 = *a3;
  v29 = __readfsqword(0x28u);
  *(_QWORD *)v16 = 1;
  *(_QWORD *)v13 = 0;
  v17 = -1;
  if ( (unsigned __int8)sub_693090(a3, v13) )
  {
    v10 = 2304;
    v11 = 0;
    if ( _bittest64(&v10, v13[0] & 0xF) )
      v11 = sub_686A80(
              a1,
              a2,
              (int)a3,
              a4,
              a5,
              v9,
              a1,
              a2,
              v13[0],
              v14,
              v15,
              v16[0],
              v17,
              v18,
              v19,
              SDWORD2(v19),
              (__int64)v20);
    *a3 = v7;
    v20 = nullptr;
    ptr = nullptr;
    v25 = 1;
    v26 = -1;
    v27 = 0;
    v28 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v24[0] = 0;
    sub_567A90((__int64 *)v24 + 1, a3);
    clear_tinfo_t(v24);
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
  }
  else
  {
    return 0;
  }
  return v11;
}

