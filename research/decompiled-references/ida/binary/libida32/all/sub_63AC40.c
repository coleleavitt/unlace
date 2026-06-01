__int64 __fastcall sub_63AC40(double a1, double a2, __int64 a3, __int64 a4, __int64 a5, char *a6)
{
  unsigned int v6; // eax
  _QWORD *v7; // rbx
  unsigned int v8; // r12d
  _QWORD *v9; // rbp
  void *v10; // rdi
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+8h] [rbp-50h] BYREF
  void *v14; // [rsp+10h] [rbp-48h]
  int *v15; // [rsp+18h] [rbp-40h]
  int *v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v13 = 0;
  v14 = nullptr;
  v15 = &v13;
  v16 = &v13;
  v17 = 0;
  v6 = sub_639FD0(a4, a5, a6, &v12, 0, a1, a2);
  v7 = v14;
  v8 = v6;
  if ( v14 )
  {
    do
    {
      v9 = v7;
      sub_62BCF0((_QWORD *)v7[3]);
      v10 = (void *)v7[4];
      v7 = (_QWORD *)v7[2];
      if ( v10 )
      {
        v9[5] = 0;
        qfree(v10);
      }
      operator delete(v9, 0x40u);
    }
    while ( v7 );
  }
  return v8;
}

