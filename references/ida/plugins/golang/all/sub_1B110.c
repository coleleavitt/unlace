__int64 __fastcall sub_1B110(__int64 *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // eax
  _QWORD **v5; // rbx
  unsigned int v6; // ebp
  void *v7; // rdi
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  int v10; // [rsp+8h] [rbp-50h] BYREF
  void *v11; // [rsp+10h] [rbp-48h]
  int *v12; // [rsp+18h] [rbp-40h]
  int *v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v10 = 0;
  v11 = nullptr;
  v12 = &v10;
  v13 = &v10;
  v14 = 0;
  v4 = sub_1AD20(a1, a2, a3, a4, &v9);
  v5 = (_QWORD **)v11;
  v6 = v4;
  if ( v11 )
  {
    do
    {
      sub_5970(v5[3]);
      v7 = v5;
      v5 = (_QWORD **)v5[2];
      operator delete(v7, 0x28u);
    }
    while ( v5 );
  }
  return v6;
}
