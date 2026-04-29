__int64 __fastcall sub_37A40(__int64 a1, _QWORD *a2, _WORD *a3, char *a4, __int64 a5, __int64 a6)
{
  char v8; // al
  char v9; // cl
  int v10; // eax
  unsigned int v11; // edx
  __int64 v13; // [rsp+0h] [rbp-18h]
  __int64 v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

  v8 = getinf_flag(3, 4, (__int64)a3, (__int64)a4, a5, a6, v13, v14, v15);
  v9 = 1;
  if ( !v8 )
    v9 = (getinf(3) & 0x1006) == 4098;
  v10 = sub_36610(a4, 1, a3, v9);
  v11 = 0;
  if ( v10 != -1 )
  {
    v11 = 1;
    *a2 = *(&off_A0000 + v10);
  }
  return v11;
}
