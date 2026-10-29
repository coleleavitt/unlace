unsigned __int64 __fastcall sub_2196FC0(__int64 a1, unsigned int a2)
{
  unsigned __int8 (*v2)(void); // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rbp
  int v5; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __m128i v9[2]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-44h]
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]
  unsigned int v12; // [rsp+40h] [rbp-38h]
  unsigned __int8 v13; // [rsp+48h] [rbp-30h]
  unsigned __int8 v14; // [rsp+50h] [rbp-28h]

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 != (char *)sub_2195C40 )
  {
    if ( v2() )
      goto LABEL_3;
LABEL_11:
    sub_2196C60(v9, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
    v3 = (unsigned int)v11;
    v4 = v10;
    v5 = v13;
    goto LABEL_4;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) > 1 )
    goto LABEL_11;
LABEL_3:
  sub_2196710(v9, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
  v3 = v12;
  v4 = v11;
  v5 = v14;
LABEL_4:
  if ( v5 == 1 || v5 == 12 )
    return v4;
  sub_215DEC0(a1);
  if ( v3 <= v6 )
  {
    v7 = v6 - v3;
    if ( v4 > v7 )
      return v7;
    return v4;
  }
  return 0;
}
