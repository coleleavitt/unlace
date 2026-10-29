__int64 __fastcall sub_2287FA0(__int64 a1, int a2)
{
  char *v3; // rbp
  size_t v4; // rax
  char v5[2024]; // [rsp+0h] [rbp-7E8h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( a2 )
  {
    v5[0] = 0;
    v3 = strerror_r(a2, v5, 0x7CFu);
    v4 = strlen(v3);
    sub_99BDC0((_QWORD *)a1, 0, *(_QWORD *)(a1 + 8), v3, v4);
  }
  return a1;
}
