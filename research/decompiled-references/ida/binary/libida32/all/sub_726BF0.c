void __fastcall sub_726BF0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __m128i *v7; // rdi
  __int64 v8; // rcx
  char *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // r15d
  int i; // r13d
  unsigned int v16; // edx

  v7 = *((__m128i **)a1 + 1);
  if ( v7 )
  {
    v8 = a1[6];
    if ( (_DWORD)v8 )
    {
      v10 = sub_7188E0(v7, 0, 1, v8, a5, a6);
      v11 = *((_QWORD *)a1 + 1);
      qword_2CA26D0 = v10;
      sub_7180A0(v11, (__int64)v10);
      sub_7185A0(*((_QWORD *)a1 + 1), qword_2CA26D0);
      sub_726970((unsigned __int64)a1, a2, a1[9], a3);
      if ( dword_2CA27E0 )
      {
        v13 = a1[8];
        qword_2CA2E10 = 0;
        sub_726970((unsigned __int64)a1, a2, v13, a3);
        v12 = *((_QWORD *)a1 + 1);
        if ( !dword_2CA27E0 )
          goto LABEL_5;
        v14 = *(_QWORD *)(v12 + 560) / (unsigned __int64)*a1;
        if ( v14 <= 1 )
          goto LABEL_5;
        for ( i = 1; i != v14; ++i )
        {
          v16 = i;
          qword_2CA2E10 = 0;
          sub_726970((unsigned __int64)a1, a2, v16, a3);
        }
      }
      v12 = *((_QWORD *)a1 + 1);
LABEL_5:
      sub_7180B0(v12, qword_2CA26D0);
    }
  }
}

