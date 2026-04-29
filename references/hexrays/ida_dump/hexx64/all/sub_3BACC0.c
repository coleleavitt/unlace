__int64 __fastcall sub_3BACC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // eax
  char v5; // dl
  __int64 v6; // [rsp-10h] [rbp-60h]
  unsigned int v7; // [rsp+Ch] [rbp-44h]
  __int64 v8; // [rsp+18h] [rbp-38h] BYREF
  unsigned int *v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+28h] [rbp-28h]
  unsigned __int64 v11; // [rsp+38h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  if ( a2 )
    return (unsigned __int8)sub_3AFB70(a2);
  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 == 10 )
  {
    v10 = 0;
    v9 = nullptr;
    v8 = 0;
    v5 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64 *, unsigned int **))callui)(
           204,
           1,
           1,
           -1,
           1,
           a3,
           &v8,
           &v9);
    result = 0;
    if ( v5 )
      result = (unsigned __int8)sub_3AFFA0(*(__int64 **)(a1 + 16), v8, &v9, v6);
    if ( v9 )
    {
      v7 = result;
      *(_QWORD *)&v10 = 0;
      qfree(v9);
      return v7;
    }
  }
  else if ( v4 == 58 )
  {
    return (unsigned __int8)sub_3AFC60(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 208));
  }
  else
  {
    return 0;
  }
  return result;
}
