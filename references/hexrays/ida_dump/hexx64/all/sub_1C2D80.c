__int64 __fastcall sub_1C2D80(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  unsigned int tinfo_size; // eax
  unsigned int v7; // r15d
  int v8[4]; // [rsp+0h] [rbp-88h] BYREF
  int v9[4]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  __int128 v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+40h] [rbp-48h]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v13 = -1;
  v11 = 0;
  v10 = 0;
  v12 = 0;
  v4 = calc_tinfo_gaps(&v10, *a3);
  if ( (_BYTE)v4 )
  {
    v4 = 0;
    if ( (_QWORD)v11 )
    {
      tinfo_size = get_tinfo_size(0, *a3, 0);
      v8[0] = 0;
      v7 = tinfo_size;
      copy_argloc(v8, a1);
      if ( (unsigned int)sub_1C2C50((__int64)v8, (__int64)&v10, v7) )
      {
        v9[0] = 0;
        copy_argloc(v9, a2);
        if ( v9[0] == 2 )
          sub_1C2280((__int64)v9, v7);
        if ( v8[0] == 2 )
          sub_1C2280((__int64)v8, v7);
        LOBYTE(v4) = (unsigned int)sub_1C2AD0(v8, v9) == 0;
        cleanup_argloc(v9);
        cleanup_argloc(v8);
      }
      else
      {
        cleanup_argloc(v8);
      }
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v4;
}
