unsigned __int64 __fastcall sub_697840(__int64 a1)
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
  unsigned __int64 v15; // [rsp+28h] [rbp-1060h]
  __int64 v16; // [rsp+40h] [rbp-1048h]
  __m128i v17; // [rsp+50h] [rbp-1038h] BYREF
  char filename[4104]; // [rsp+60h] [rbp-1028h] BYREF
  unsigned __int64 v19; // [rsp+1068h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 448) )
  {
    user_idadir = get_user_idadir();
    qmakepath((unsigned int)filename, 4096, user_idadir, (unsigned int)"trusted_i64_list.bin", 0, v3);
    if ( (unsigned int)qstat(filename) )
    {
      v4 = (FILE *)fopenRB(filename);
      if ( !v4 )
        return v19 - __readfsqword(0x28u);
      v5 = (char *)qword_2CCC3E0;
      if ( (_QWORD)xmmword_2CCC3E8 )
      {
        v8 = (char *)qword_2CCC3E0;
        v6 = 0;
LABEL_21:
        *(_QWORD *)&xmmword_2CCC3E8 = v6;
        v5 = v8;
      }
    }
    else
    {
      if ( v16 == qword_2CCC3D0 )
        return v19 - __readfsqword(0x28u);
      v4 = (FILE *)fopenRB(filename);
      if ( !v4 )
        return v19 - __readfsqword(0x28u);
      v5 = (char *)qword_2CCC3E0;
      v6 = *(_QWORD *)(a1 + 448);
      v7 = xmmword_2CCC3E8;
      if ( v15 >> 4 <= v6 )
        v6 = v15 >> 4;
      v8 = (char *)qword_2CCC3E0;
      if ( v6 != (_QWORD)xmmword_2CCC3E8 )
      {
        v17 = 0;
        v9 = 16 * v6;
        if ( v6 >= (unsigned __int64)xmmword_2CCC3E8 )
        {
          if ( &v17 < qword_2CCC3E0
            || &v17 >= (__m128i *)((char *)qword_2CCC3E0 + 16 * *((_QWORD *)&xmmword_2CCC3E8 + 1)) )
          {
            if ( *((_QWORD *)&xmmword_2CCC3E8 + 1) < v6 )
            {
              v13 = (char *)qvector_reserve(&qword_2CCC3E0, qword_2CCC3E0, v6, 16);
              v7 = xmmword_2CCC3E8;
              qword_2CCC3E0 = v13;
              v5 = v13;
            }
            if ( v7 < v6 )
            {
              v12 = 16 * v7;
              do
              {
                *(__m128i *)&v5[v12] = _mm_load_si128(&v17);
                v12 += 16;
                v5 = (char *)qword_2CCC3E0;
              }
              while ( v12 != v9 );
            }
          }
          else
          {
            v10 = 0;
            if ( *((_QWORD *)&xmmword_2CCC3E8 + 1) < v6 )
            {
              v14 = (char *)qvector_reserve(&qword_2CCC3E0, qword_2CCC3E0, v6, 16);
              v7 = xmmword_2CCC3E8;
              v10 = 0;
              qword_2CCC3E0 = v14;
              v5 = v14;
            }
            if ( v7 < v6 )
            {
              v11 = 16 * v7;
              do
              {
                *(_OWORD *)&v5[v11] = v10;
                v11 += 16;
                v5 = (char *)qword_2CCC3E0;
              }
              while ( v11 != v9 );
            }
          }
          *(_QWORD *)&xmmword_2CCC3E8 = v6;
          goto LABEL_22;
        }
        goto LABEL_21;
      }
    }
LABEL_22:
    qfread(v4, v5);
    qfclose(v4);
    qword_2CCC3D0 = v16;
  }
  return v19 - __readfsqword(0x28u);
}
