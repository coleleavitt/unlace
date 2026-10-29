__int64 __fastcall serialize_json(__int64 *a1, double *a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // eax
  _QWORD **v7; // rbx
  unsigned int v8; // ebp
  void *v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+8h] [rbp-50h] BYREF
  void *v13; // [rsp+10h] [rbp-48h]
  int v14[2]; // [rsp+18h] [rbp-40h]
  int v15[2]; // [rsp+20h] [rbp-38h]
  int v16[2]; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+30h] [rbp-28h]
  int v18[2]; // [rsp+38h] [rbp-20h]

  *(_QWORD *)v18 = __readfsqword(0x28u);
  v17 = a3;
  v12 = 0;
  v13 = nullptr;
  *(_QWORD *)v14 = &v12;
  *(_QWORD *)v15 = &v12;
  *(_QWORD *)v16 = 0;
  v6 = sub_7ABD60(a1, a2, 0, &v11, a5, a6);
  v7 = (_QWORD **)v13;
  v8 = v6;
  if ( v13 )
  {
    do
    {
      sub_7AA070(v7[3]);
      v9 = v7;
      v7 = (_QWORD **)v7[2];
      operator delete(v9, 0x28u);
    }
    while ( v7 );
  }
  return v8;
}
