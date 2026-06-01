__int64 __fastcall sub_60C8F0(int a1, __int64 a2, int a3, int a4, int a5)
{
  char *v5; // rax
  char v7; // [rsp+70h] [rbp-C8h] BYREF
  _DWORD v8[2]; // [rsp+D0h] [rbp-68h] BYREF
  void *v9; // [rsp+D8h] [rbp-60h]
  __int128 v10; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v11; // [rsp+F8h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = &v7;
    do
    {
      *(_QWORD *)v5 = 0;
      v5 += 24;
      *((_OWORD *)v5 - 1) = 0;
    }
    while ( v5 != (char *)v8 );
    v8[0] = 0;
    v8[1] = a5;
    v9 = nullptr;
    v10 = 0;
    sub_387AC0();
  }
  return 0;
}
