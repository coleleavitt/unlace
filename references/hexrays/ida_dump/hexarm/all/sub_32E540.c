__int64 __fastcall sub_32E540(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-70h]
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-60h]
  __int128 v13; // [rsp+30h] [rbp-58h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int128 v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+58h] [rbp-30h]
  unsigned __int64 v17; // [rsp+68h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v9[2] = a2;
  v9[0] = off_4DDD50;
  v9[1] = 4;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v16 = 0;
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v6 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64 *, _QWORD, _QWORD, __int64))visit_subtypes)(
         v9,
         &v11,
         a1,
         0,
         0,
         a6);
  if ( v6 )
  {
    v6 = -1;
  }
  else if ( (v16 & 1) != 0 )
  {
    v7 = *a1;
    v6 = v10;
    *a1 = v11;
    v11 = v7;
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  clear_tinfo_t(&v11);
  return v6;
}
