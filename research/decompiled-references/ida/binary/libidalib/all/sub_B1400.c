unsigned __int64 __fastcall sub_B1400(signed int *a1, unsigned __int64 *a2)
{
  unsigned __int64 that; // rbx
  unsigned __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // [rsp+0h] [rbp-1C8h]
  __int128 v11; // [rsp+8h] [rbp-1C0h]
  char v12; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v13; // [rsp+188h] [rbp-40h] BYREF

  v13 = __readfsqword(0x28u);
  if ( (dword_251B1C & 1) != 0 )
  {
    v10 = 0;
    v11 = 0;
    that = prev_that();
    v5 = (unsigned __int64 *)&v12;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 5;
      *((_WORD *)v5 - 19) = 0;
      *((_WORD *)v5 - 18) = 0;
      *((_DWORD *)v5 - 2) = 0;
      *((_WORD *)v5 - 17) = 0;
      *((_OWORD *)v5 - 2) = 0;
      *(v5 - 2) = 0;
    }
    while ( &v13 != v5 );
    while ( that != -1 && that >= *a2 && that < a2[1] && ((int)decode_insn() <= 0 || !(unsigned __int8)is_call_insn()) )
    {
      v6 = v11;
      v7 = v10;
      if ( *((_QWORD *)&v11 + 1) < (unsigned __int64)(v11 + 1) )
      {
        v10 = qvector_reserve();
        v7 = v10;
        v6 = v11;
      }
      *(_QWORD *)(v7 + 8 * v6) = that;
      *(_QWORD *)&v11 = v11 + 1;
      that = prev_that();
    }
    v8 = (unsigned int)(v11 - 1);
    v9 = 8 * v8;
    if ( (int)v8 >= 0 )
    {
      do
      {
        sub_B11C0(xmmword_251F20, a1, *(_QWORD *)(v10 + v9), 2);
        LODWORD(v8) = v8 - 1;
        v9 -= 8;
      }
      while ( (_DWORD)v8 != -1 );
    }
    if ( v10 )
      qfree();
  }
  return v13 - __readfsqword(0x28u);
}

