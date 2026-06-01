__int64 __fastcall sub_633A60(__int64 a1, __int64 a2, __m128i *a3, int a4, __int64 a5, int a6)
{
  unsigned int v6; // eax
  _QWORD *v7; // rbx
  unsigned int v8; // r12d
  _QWORD *v9; // rbp
  void *v10; // rdi
  _QWORD v12[4]; // [rsp+0h] [rbp-88h] BYREF
  int v13; // [rsp+20h] [rbp-68h]
  char v14; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+38h] [rbp-50h] BYREF
  void *v16; // [rsp+40h] [rbp-48h]
  int *v17; // [rsp+48h] [rbp-40h]
  int *v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  unsigned __int64 v20; // [rsp+68h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v13 = a4;
  v17 = &v15;
  v18 = &v15;
  v12[1] = a1;
  v12[3] = &v14;
  v15 = 0;
  v16 = nullptr;
  v19 = 0;
  v12[0] = off_2B0D228;
  v12[2] = a2;
  v6 = sub_6336F0(a2, (__int64)v12, a3, nullptr, 0, a6);
  v7 = v16;
  v8 = v6;
  if ( v16 )
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

