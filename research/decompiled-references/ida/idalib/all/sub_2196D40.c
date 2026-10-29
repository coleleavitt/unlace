__int64 __fastcall sub_2196D40(__int64 a1, unsigned int a2)
{
  unsigned __int8 (*v2)(void); // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __m128i v6[3]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v7; // [rsp+44h] [rbp-34h]
  unsigned int v8; // [rsp+4Ch] [rbp-2Ch]

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 != (char *)sub_2195C40 )
  {
    if ( v2() )
      goto LABEL_3;
LABEL_6:
    v3 = a2;
    sub_2196C60(v6, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
    v4 = v7;
    return v3 | (v4 << 32);
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) > 1 )
    goto LABEL_6;
LABEL_3:
  v3 = a2;
  sub_2196710(v6, a1, *(const __m128i **)(*(_QWORD *)(a1 + 80) + 8LL * a2));
  v4 = v8;
  return v3 | (v4 << 32);
}
