__int64 __fastcall btoa128(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  char *v9; // [rsp+0h] [rbp-108h]
  int v10; // [rsp+8h] [rbp-100h]
  unsigned int v11; // [rsp+Ch] [rbp-FCh] BYREF
  _BYTE v12[48]; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE s[136]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+C8h] [rbp-40h]

  v11 = a5;
  v14 = __readfsqword(0x28u);
  result = 0;
  if ( a2 > 1 )
  {
    v11 = sub_816B50(a5);
    if ( !a4 || v11 == 16 && (*(_DWORD *)(qword_2CA1698 + 904) & 0xE00) == 0xA00 )
    {
      return btoa64(a1, a2, a3, v11);
    }
    else
    {
      v8 = qword_2CA1698 + 904;
      v9 = sub_56F3D0((int *)(qword_2CA1698 + 904), 0x22Bu, (int *)&v11, (__int64)v12);
      v10 = v11;
      num2str_uint128(s);
      return sub_56ED90(v8, a1, a2, (__int64)v9, (__int64)s, v10);
    }
  }
  return result;
}

