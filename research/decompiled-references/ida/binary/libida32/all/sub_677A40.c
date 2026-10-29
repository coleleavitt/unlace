unsigned __int64 __fastcall sub_677A40(__int64 a1)
{
  int user_idadir; // eax
  int v3; // r9d
  FILE *v4; // rbp
  char *v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  char *v8; // rax
  __int64 v9; // r12
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rdx
  char *v13; // rax
  char *v14; // rax
  char v15; // [rsp+0h] [rbp-1088h]
  unsigned __int64 v16; // [rsp+28h] [rbp-1060h]
  __int64 v17; // [rsp+40h] [rbp-1048h]
  __m128i v18; // [rsp+50h] [rbp-1038h] BYREF
  char filename[4104]; // [rsp+60h] [rbp-1028h] BYREF
  unsigned __int64 v20; // [rsp+1068h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 440) )
  {
    user_idadir = get_user_idadir();
    qmakepath((int)filename, 4096, user_idadir, (int)"trusted_idb_list.bin", 0, v3, v15);
    if ( (unsigned int)qstat(filename) )
    {
      v4 = (FILE *)fopenRB(filename);
      if ( !v4 )
        return v20 - __readfsqword(0x28u);
      v5 = (char *)dest;
      if ( (_QWORD)xmmword_2CA24E8 )
      {
        v8 = (char *)dest;
        v6 = 0;
LABEL_21:
        *(_QWORD *)&xmmword_2CA24E8 = v6;
        v5 = v8;
      }
    }
    else
    {
      if ( v17 == qword_2CA24D0 )
        return v20 - __readfsqword(0x28u);
      v4 = (FILE *)fopenRB(filename);
      if ( !v4 )
        return v20 - __readfsqword(0x28u);
      v5 = (char *)dest;
      v6 = *(_QWORD *)(a1 + 440);
      v7 = xmmword_2CA24E8;
      if ( v16 >> 4 <= v6 )
        v6 = v16 >> 4;
      v8 = (char *)dest;
      if ( v6 != (_QWORD)xmmword_2CA24E8 )
      {
        v18 = 0;
        v9 = 16 * v6;
        if ( v6 >= (unsigned __int64)xmmword_2CA24E8 )
        {
          if ( &v18 < dest || &v18 >= (__m128i *)((char *)dest + 16 * *((_QWORD *)&xmmword_2CA24E8 + 1)) )
          {
            if ( *((_QWORD *)&xmmword_2CA24E8 + 1) < v6 )
            {
              v13 = (char *)qvector_reserve(&dest, dest, v6, 16);
              v7 = xmmword_2CA24E8;
              dest = v13;
              v5 = v13;
            }
            if ( v7 < v6 )
            {
              v12 = 16 * v7;
              do
              {
                *(__m128i *)&v5[v12] = _mm_load_si128(&v18);
                v12 += 16;
                v5 = (char *)dest;
              }
              while ( v12 != v9 );
            }
          }
          else
          {
            v10 = 0;
            if ( *((_QWORD *)&xmmword_2CA24E8 + 1) < v6 )
            {
              v14 = (char *)qvector_reserve(&dest, dest, v6, 16);
              v7 = xmmword_2CA24E8;
              v10 = 0;
              dest = v14;
              v5 = v14;
            }
            if ( v7 < v6 )
            {
              v11 = 16 * v7;
              do
              {
                *(_OWORD *)&v5[v11] = v10;
                v11 += 16;
                v5 = (char *)dest;
              }
              while ( v11 != v9 );
            }
          }
          *(_QWORD *)&xmmword_2CA24E8 = v6;
          goto LABEL_22;
        }
        goto LABEL_21;
      }
    }
LABEL_22:
    qfread(v4, v5);
    qfclose(v4);
    qword_2CA24D0 = v17;
  }
  return v20 - __readfsqword(0x28u);
}

