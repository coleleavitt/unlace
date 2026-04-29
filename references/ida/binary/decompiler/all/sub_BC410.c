__int64 __fastcall sub_BC410(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD **v6; // rbx
  unsigned int v7; // ebp
  void *v8; // rdi
  _QWORD v10[5]; // [rsp+0h] [rbp-88h] BYREF
  char v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+30h] [rbp-58h]
  int v13; // [rsp+40h] [rbp-48h] BYREF
  void *v14; // [rsp+48h] [rbp-40h]
  int *v15; // [rsp+50h] [rbp-38h]
  int *v16; // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h]
  unsigned __int64 v18; // [rsp+68h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v12 = a1 + 64;
  memset(&v10[1], 0, 32);
  v11 = 0;
  v10[0] = off_4DB840;
  v13 = 0;
  v14 = 0;
  v15 = &v13;
  v16 = &v13;
  v17 = 0;
  sub_11C4C0(a2, v10, a3, a4, a5, a6);
  v10[0] = off_4DB840;
  v6 = (_QWORD **)v14;
  v7 = v17;
  if ( v14 )
  {
    do
    {
      sub_B8680(v6[3]);
      v8 = v6;
      v6 = (_QWORD **)v6[2];
      operator delete(v8, 0x28u);
    }
    while ( v6 );
  }
  return v7;
}
