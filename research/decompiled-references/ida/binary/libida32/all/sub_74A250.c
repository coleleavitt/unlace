__int64 __fastcall sub_74A250(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char *v8; // rax
  int v9; // eax
  unsigned int v11; // [rsp+Ch] [rbp-2Ch] BYREF
  int i; // [rsp+10h] [rbp-28h] BYREF
  int v13; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v11 = sub_7499F0(a1, a2, a3, a4, a5);
  v8 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 != 95 )
  {
    for ( i = 0; ; sub_750750(&i) )
    {
      v9 = sub_747AD0(nullptr, (__int64)a2, v5, v6, v7);
      a2 = (unsigned int *)&v13;
      v13 = v9;
      sub_7506B0(&i, &v13);
      if ( *qword_2CAA5C0 == 95 )
        break;
    }
    v13 = sub_752B50(&i);
    sub_7506B0(&v11, &v13);
    v8 = qword_2CAA5C0;
  }
  qword_2CAA5C0 = v8 + 1;
  return v11;
}

