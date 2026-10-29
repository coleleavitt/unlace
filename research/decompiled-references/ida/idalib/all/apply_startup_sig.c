__int64 __fastcall apply_startup_sig(unsigned __int64 a1, const char *a2)
{
  unsigned int v2; // eax
  _QWORD **v3; // rbx
  unsigned int v4; // ebp
  void *v5; // rdi
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  int v8; // [rsp+8h] [rbp-50h] BYREF
  void *v9; // [rsp+10h] [rbp-48h]
  int *v10; // [rsp+18h] [rbp-40h]
  int *v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v10 = &v8;
  v11 = &v8;
  v8 = 0;
  v9 = nullptr;
  v12 = 0;
  v2 = sub_68C680(*(__m128i **)(qword_2CCB598 + 1672), a1, a2, &v7);
  v3 = (_QWORD **)v9;
  v4 = v2;
  if ( v9 )
  {
    do
    {
      sub_687ED0(v3[3]);
      v5 = v3;
      v3 = (_QWORD **)v3[2];
      operator delete(v5, 0x28u);
    }
    while ( v3 );
  }
  return v4;
}
