__int64 __fastcall sub_2196EF0(__int64 a1, __int64 a2, unsigned int a3)
{
  bool (__fastcall *v3)(__int64); // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  bool v11; // al
  unsigned int v12; // [rsp+8h] [rbp-80h]
  __m128i v13[2]; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-54h]
  unsigned __int64 v15; // [rsp+38h] [rbp-50h]
  unsigned int v16; // [rsp+40h] [rbp-48h]

  v3 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v3 == sub_2195C40 )
  {
    if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 19) <= 1 )
    {
LABEL_3:
      sub_2196710(v13, a2, *(const __m128i **)(*(_QWORD *)(a2 + 80) + 8LL * a3));
      v4 = v16;
      v5 = v15;
      goto LABEL_4;
    }
  }
  else
  {
    v12 = a3;
    v11 = v3(a2);
    a3 = v12;
    if ( v11 )
      goto LABEL_3;
  }
  sub_2196C60(v13, a2, *(const __m128i **)(*(_QWORD *)(a2 + 80) + 8LL * a3));
  v4 = v15;
  v5 = v14;
LABEL_4:
  v6 = sub_215DEC0(a2);
  v8 = v4;
  if ( v4 > v7 )
    v8 = v7;
  *(_BYTE *)(a1 + 16) &= ~1u;
  v9 = v7 - v8;
  *(_QWORD *)a1 = v8 + v6;
  result = a1;
  if ( v9 > v5 )
    v9 = v5;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
