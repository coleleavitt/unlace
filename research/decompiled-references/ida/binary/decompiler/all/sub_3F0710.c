__int64 __fastcall sub_3F0710(__int64 a1, int a2, int a3, char a4)
{
  char v6; // al
  unsigned __int8 v7; // bl
  unsigned int v8; // ebx
  _DWORD v10[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v6 = sub_3EF830(a1, a1 + 40LL * a2 + 64);
  if ( v6 == 17 )
    v6 = 16;
  v7 = v6;
  v10[0] = 1;
  v10[2] = a3;
  v10[1] = get_dtype_size();
  v8 = sub_3F0370(a1, 0, a2, (__int64)v10, v7, a4);
  sub_11A960((__int64)v10);
  return v8;
}
