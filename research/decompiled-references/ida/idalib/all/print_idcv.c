__int64 __fastcall print_idcv(__int64 *a1, char *a2, const char *a3, int a4)
{
  _QWORD **v4; // rbx
  void *v5; // rdi
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+8h] [rbp-40h] BYREF
  void *v9; // [rsp+10h] [rbp-38h]
  int *v10; // [rsp+18h] [rbp-30h]
  int *v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  unsigned __int64 v13; // [rsp+38h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v8 = 0;
  v9 = nullptr;
  v10 = &v8;
  v11 = &v8;
  v12 = 0;
  sub_79A240(a1, a2, a3, a4, &v7);
  v4 = (_QWORD **)v9;
  if ( v9 )
  {
    do
    {
      sub_7912A0(v4[3]);
      v5 = v4;
      v4 = (_QWORD **)v4[2];
      operator delete(v5, 0x28u);
    }
    while ( v4 );
  }
  return 1;
}
