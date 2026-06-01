__int64 __fastcall sub_21966B0(_DWORD *a1, const __m128i *a2)
{
  unsigned __int8 (*v2)(void); // rax
  __int64 v3; // rdx
  unsigned int v5; // edx

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_2195C40 )
  {
    if ( (unsigned int)(a1[2] - 19) <= 1 )
    {
LABEL_3:
      sub_21965F0((__int64)a1, a2);
      return v3;
    }
  }
  else if ( v2() )
  {
    goto LABEL_3;
  }
  sub_2195D00((__int64)a1, (unsigned __int64)a2);
  return v5;
}
