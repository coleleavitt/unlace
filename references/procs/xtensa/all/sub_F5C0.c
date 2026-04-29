unsigned __int64 __fastcall sub_F5C0(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 func; // rax
  unsigned __int64 *v6; // r12
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 dword; // rax
  __int128 v12; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-198h]
  __int64 v14; // [rsp+48h] [rbp-190h]
  __int64 v15; // [rsp+50h] [rbp-188h]
  char v16; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int16 v17; // [rsp+5Eh] [rbp-17Ah]
  __int64 v18; // [rsp+88h] [rbp-150h]
  unsigned __int64 v19; // [rsp+198h] [rbp-40h] BYREF

  v19 = __readfsqword(0x28u);
  func = get_func();
  if ( func )
  {
    v6 = (unsigned __int64 *)func;
    do
    {
      v13 = -1;
      v7 = (unsigned __int64 *)&v16;
      v14 = 0;
      v15 = 0;
      v12 = -1;
      do
      {
        *(_WORD *)v7 = 0;
        v7 += 5;
        *((_WORD *)v7 - 19) = 0;
        *((_WORD *)v7 - 18) = 0;
        *((_DWORD *)v7 - 2) = 0;
        *((_WORD *)v7 - 17) = 0;
        *((_OWORD *)v7 - 2) = 0;
        *(v7 - 2) = 0;
      }
      while ( &v19 != v7 );
      v8 = decode_preceding_insn();
      v9 = v8;
      if ( v8 < *v6 || v8 == -1 )
        return -1;
      if ( (_WORD)v14 == 60 )
      {
        if ( v17 == a4 )
        {
          dword = (unsigned int)get_dword();
LABEL_14:
          *a2 = dword;
          if ( (unsigned __int64)(dword - 1) > 0xFFFFFFFFFFFFFFFDLL )
            return -1;
          return v9;
        }
      }
      else if ( (_WORD)v14 == 69 && v17 == a4 )
      {
        dword = v18;
        goto LABEL_14;
      }
    }
    while ( !(unsigned __int8)sub_F510(a1, (__int64)&v12, a4) );
  }
  return -1;
}
