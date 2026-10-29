__int64 __fastcall copy_named_type(__int64 a1, __int64 a2, char *a3, double a4, double a5)
{
  unsigned int v5; // eax
  _QWORD *v6; // rbx
  unsigned int v7; // r12d
  _QWORD *v8; // rbp
  void *v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+8h] [rbp-50h] BYREF
  void *v13; // [rsp+10h] [rbp-48h]
  int *v14; // [rsp+18h] [rbp-40h]
  int *v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v12 = 0;
  v13 = nullptr;
  v14 = &v12;
  v15 = &v12;
  v16 = 0;
  v5 = sub_639FD0(a1, a2, a3, &v11, 0, a4, a5);
  v6 = v13;
  v7 = v5;
  if ( v13 )
  {
    do
    {
      v8 = v6;
      sub_62BCF0((_QWORD *)v6[3]);
      v9 = (void *)v6[4];
      v6 = (_QWORD *)v6[2];
      if ( v9 )
      {
        v8[5] = 0;
        qfree(v9);
      }
      operator delete(v8, 0x40u);
    }
    while ( v6 );
  }
  return v7;
}

