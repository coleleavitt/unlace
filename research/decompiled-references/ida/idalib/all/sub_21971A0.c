__int64 __fastcall sub_21971A0(__int64 a1, unsigned int a2)
{
  unsigned __int8 (*v2)(void); // rax
  __m128i v4[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v5; // [rsp+48h] [rbp-20h]
  unsigned int v6; // [rsp+50h] [rbp-18h]

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_2195C40 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) <= 1 )
    {
LABEL_3:
      sub_2196710(v4, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
      return v6 >> 31;
    }
  }
  else if ( v2() )
  {
    goto LABEL_3;
  }
  sub_2196C60(v4, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
  return v5 >> 31;
}
