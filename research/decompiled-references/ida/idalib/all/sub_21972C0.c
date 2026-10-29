__int64 __fastcall sub_21972C0(__int64 a1, unsigned int a2)
{
  unsigned __int8 (*v2)(void); // rax
  int v3; // edx
  __int64 result; // rax
  __m128i v5[3]; // [rsp+10h] [rbp-58h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_2195C40 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) <= 1 )
    {
LABEL_3:
      sub_2196710(v5, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
      v3 = v7;
      goto LABEL_4;
    }
  }
  else if ( v2() )
  {
    goto LABEL_3;
  }
  sub_2196C60(v5, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
  v3 = v6;
LABEL_4:
  result = 0;
  if ( v3 >= 0 )
    return ((unsigned __int8)v3 != 12) & (unsigned __int8)((unsigned __int8)v3 != 1);
  return result;
}
