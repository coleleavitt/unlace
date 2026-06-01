unsigned __int64 __fastcall sub_104DA0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+Ch] [rbp-3Ch] BYREF
  int v13; // [rsp+14h] [rbp-34h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( !*(_DWORD *)(a1 + 196) && a2[1] == *a2 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    if ( a5 > 8 && *(_DWORD *)(a1 + 28) == v9 && v9 == (_DWORD)a4 - *(_DWORD *)(a1 + 8) )
    {
      v12 = *(_QWORD *)a3;
      v13 = *(_DWORD *)(a3 + 8);
      sub_F9D00(a1, (__int64)a2, (__int64)&v12, a4, a5, 0);
      sub_AB160(a2);
      v10 = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 8) -= a5;
      v11 = a5 + v10;
      *(_DWORD *)(a1 + 24) = v11;
      *(_DWORD *)(a1 + 28) = v11;
      *(_DWORD *)(a1 + 44) = v11;
    }
  }
  return sub_F9D00(a1, (__int64)a2, a3, a4, a5, 0);
}

