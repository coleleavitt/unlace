__int64 __fastcall sub_367BB0(unsigned int *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int16 v6[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+4h] [rbp-24h]
  int v8; // [rsp+8h] [rbp-20h]
  unsigned int v9; // [rsp+Ch] [rbp-1Ch]
  unsigned int v10; // [rsp+10h] [rbp-18h]
  unsigned int v11; // [rsp+14h] [rbp-14h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v1 = a1[10];
  v12 = __readfsqword(0x28u);
  v2 = a1[18];
  v8 = 0;
  v6[0] = v1;
  v7 = v2;
  v9 = a1[26];
  v10 = a1[34];
  v3 = a1[42];
  v4 = a1[2];
  v11 = v3;
  ((void (__fastcall *)(__int64, __int16 *))set_fixup)(v4, v6);
  return 0;
}

