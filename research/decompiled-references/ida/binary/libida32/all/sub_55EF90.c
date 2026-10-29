__int64 __fastcall sub_55EF90(_QWORD *a1, unsigned int *a2, unsigned int a3, int a4)
{
  unsigned int v6; // esi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // esi
  __int64 result; // rax
  char refinfo; // dl
  _DWORD v14[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v6 = a2[2];
  v15 = __readfsqword(0x28u);
  v8 = sub_3B9AA0((__int64)a1, v6, 0);
  if ( (unsigned __int8)is_off(v8, a3) )
  {
    refinfo = get_refinfo(v14, a2[2], a3);
    result = 0xFFFFFFF;
    if ( refinfo )
      return v14[1] >> 4;
  }
  else
  {
    v9 = a1[2];
    if ( a4 == *(_DWORD *)(v9 + 80) )
    {
      return *a2;
    }
    else
    {
      if ( a4 == -1 )
        a4 = *(_DWORD *)(v9 + 84);
      v10 = sub_500AC0(a1, a2[2], a4, nullptr);
      v11 = sub_40EC70((__int64)a1, v10);
      return sub_4F8800((__int64)a1, v11);
    }
  }
  return result;
}

