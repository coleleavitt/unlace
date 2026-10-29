__int64 __fastcall sub_11C000(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  _BYTE *v8; // rbx
  _BYTE *v9; // rsi
  __m128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  char v18; // bl
  _BYTE *v19; // [rsp+0h] [rbp-1038h] BYREF
  __int128 v20; // [rsp+8h] [rbp-1030h]
  _BYTE v21[4104]; // [rsp+20h] [rbp-1018h] BYREF
  unsigned __int64 v22; // [rsp+1028h] [rbp-10h]

  v22 = __readfsqword(0x28u);
  if ( !(unsigned __int8)reload_file() )
  {
    sub_F9540(976, 0);
    return 1;
  }
  v8 = v21;
  v9 = v21;
  if ( getinf_buf() <= 0 )
  {
    v10 = 0;
    v19 = nullptr;
    v20 = 0;
    v8 = nullptr;
    if ( (unsigned __int8)qfileexist() )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)qfileexist() )
  {
    v10 = 0;
    v19 = nullptr;
    v8 = (_BYTE *)qbasename();
    v20 = 0;
    if ( (unsigned __int8)qfileexist() )
      goto LABEL_11;
    goto LABEL_9;
  }
  v10 = 0;
  v19 = nullptr;
  v20 = 0;
  if ( !(unsigned __int8)qfileexist() )
  {
LABEL_9:
    v9 = nullptr;
    if ( (unsigned __int8)sub_17A9B0((unsigned int)&v19, 0, (_DWORD)v8, 975, v11, v12, (char)v19) )
      v8 = v19;
LABEL_11:
    if ( !v8 )
      goto LABEL_4;
  }
  sub_10E0D0(
    (__int64)"Reloading the input file",
    (__int64)v9,
    v14,
    v15,
    v11,
    v12,
    v10,
    a2,
    a3,
    a4,
    v16,
    v17,
    a7,
    a8,
    (char)v19);
  v18 = reload_file();
  sub_10DB30();
  if ( v18 )
    sub_922D0((__int64)"AUTOHIDE NONE\nThe input file has been reloaded", 0);
  else
    sub_92200((__int64)"AUTOHIDE NONE\nReloading the input file failed", 0);
LABEL_4:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return 1;
}

