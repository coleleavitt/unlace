char __fastcall sub_2012A70(__int64 a1, __int64 a2, char a3)
{
  double v3; // xmm0_8
  char v4; // r8
  char result; // al
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-18h] BYREF
  int v7; // [rsp+8h] [rbp-10h]
  char v8; // [rsp+Ch] [rbp-Ch]

  *(_QWORD *)&v3 = *(unsigned int *)(a1 + 120);
  v4 = *(_BYTE *)(a1 + 140);
  if ( a3 )
    goto LABEL_6;
  result = 1;
  if ( *(float *)&v3 != *(float *)(a1 + 136) )
    result = a3;
  if ( !result || !v4 )
  {
LABEL_6:
    v7 = *(_DWORD *)(a1 + 136);
    v8 = v4;
    v6 = off_2C719C8;
    return sub_2212A50(a1 + 144, a1, &v6, a2, v3);
  }
  return result;
}
