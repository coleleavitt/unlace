__int64 __fastcall sub_85E60(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        unsigned int a6,
        __int64 (__fastcall *a7)(const char *, __int64),
        __int64 a8,
        __int64 *a9)
{
  int v11; // eax
  __int16 v12; // cx
  unsigned int v13; // ebx
  __int64 v16; // [rsp+20h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+28h] [rbp-98h]
  __int64 v18; // [rsp+38h] [rbp-88h]
  int v19; // [rsp+40h] [rbp-80h]
  _BYTE v20[8]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v21; // [rsp+58h] [rbp-68h]
  int v22; // [rsp+60h] [rbp-60h]
  __int64 v23; // [rsp+68h] [rbp-58h]
  __int128 v24; // [rsp+70h] [rbp-50h]
  __int64 v25; // [rsp+80h] [rbp-40h]
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  v19 = 0;
  v16 = 1024;
  v18 = 0;
  v17 = 0;
  *(_WORD *)((char *)&v16 + 5) = (unsigned __int8)get_dtype_by_size();
  v11 = *(_DWORD *)(a2 + 28) & 0x1018;
  if ( v11 == 4096 || (v12 = 4, v11 == 8) )
    v12 = -1;
  HIWORD(v16) = v12;
  WORD1(v18) = 31;
  v25 = 0xFFFFFFFFLL;
  *((_QWORD *)&v17 + 1) = a3;
  v20[0] = 0;
  v21 = -1;
  v22 = -2;
  v23 = -1;
  v24 = 0;
  v13 = sub_770F0(a1, a2, (__int64)&v16, a6, a7, a8, (__int64)v20);
  if ( (_BYTE)v13 )
  {
    *a4 = v23;
    if ( a9 )
      *a9 = v21;
  }
  if ( v22 >= -1 && v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v13;
}
