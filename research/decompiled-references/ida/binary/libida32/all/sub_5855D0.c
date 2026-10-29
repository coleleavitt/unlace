unsigned __int64 __fastcall sub_5855D0(__int64 *a1, int a2, int a3)
{
  unsigned int v3; // r14d
  int v5; // esi
  _QWORD *v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r12
  unsigned int v9; // r13d
  unsigned int i; // ebx
  _QWORD v12[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = a2;
  v13 = __readfsqword(0x28u);
  if ( a2 )
    v3 = sub_3B90A0(a1, a2);
  v5 = a3;
  v6 = a1 + 289;
  v7 = sub_3B90A0(a1, v5);
  v8 = *a1;
  v9 = v7;
  v12[2] = a1;
  v12[0] = &off_2B05158;
  v12[1] = a1 + 289;
  for ( i = sub_79B770(a1 + 289, v8, v3, 80); i < v9; i = sub_79B840(v6, v8, i, 80) )
  {
    sub_79B3A0(v6, v8, i, 65);
    sub_57FD40((__int64)v12, i);
  }
  return v13 - __readfsqword(0x28u);
}

