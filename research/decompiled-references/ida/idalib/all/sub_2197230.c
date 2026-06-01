__int64 __fastcall sub_2197230(__int64 a1, unsigned int a2)
{
  unsigned __int8 (*v2)(void); // rax
  __m128i *v3; // rax
  char v4; // dl
  __m128i v6[3]; // [rsp+10h] [rbp-58h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 != (char *)sub_2195C40 )
  {
    if ( v2() )
      goto LABEL_3;
LABEL_6:
    v3 = sub_2196C60(v6, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
    v4 = v7;
    goto LABEL_4;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) > 1 )
    goto LABEL_6;
LABEL_3:
  v3 = sub_2196710(v6, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
  v4 = v8;
LABEL_4:
  LOBYTE(v3) = v4 == 1;
  return (v4 == 12) | (unsigned int)v3;
}
