__int64 __fastcall sub_88A010(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int64 a4, char a5)
{
  int v7; // eax
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  const __m128i *v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]

  if ( a5 || (result = sub_835900(a2, a4, a3), (_BYTE)result) )
  {
    if ( (*(_BYTE *)(a4 + 1) & 6) == 0 )
    {
      v10 = *(_QWORD *)(a4 + 8);
      v7 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL);
      if ( (unsigned __int8)(v7 - 2) <= 4u )
      {
        v11 = a2;
        v12 = a3;
        v13 = a1;
        return sub_8A19A0(&v11, a4);
      }
      if ( (_BYTE)v7 == 47 )
      {
        v11 = a2;
        v12 = a3;
        v13 = a1;
        return sub_887F40(&v11, a4, (__int64 *)(unsigned int)(v7 - 2), a4);
      }
      if ( (_BYTE)v7 == 7 )
      {
        v9 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_B0D180(&v10) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL);
        if ( (unsigned __int8)(v9 - 2) <= 4u || (_BYTE)v9 == 47 )
        {
          v11 = a2;
          v12 = a3;
          v13 = a1;
          return sub_8B3670(&v11, a4, (unsigned int)(v9 - 2));
        }
      }
    }
    return sub_856400(a1, a2, a4);
  }
  return result;
}

