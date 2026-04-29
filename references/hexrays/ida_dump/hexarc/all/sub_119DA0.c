__int64 __fastcall sub_119DA0(_BYTE *a1, __int64 *a2)
{
  int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD v8[6]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-58h] BYREF
  char v10; // [rsp+58h] [rbp-30h]
  _QWORD *v11; // [rsp+60h] [rbp-28h]
  unsigned __int64 v12; // [rsp+68h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v8[0] = &off_4AA030;
  v3 = *(_DWORD *)a1;
  memset(&v8[1], 0, 24);
  v8[5] = a2;
  v8[4] = a1;
  if ( (unsigned int)(v3 - 56) <= 1 )
  {
    v5 = a2[1];
    v6 = *a2;
    if ( a2[2] < (unsigned __int64)(v5 + 1) )
    {
      v7 = qvector_reserve(a2, v6, v5 + 1, 8);
      *a2 = v7;
      v6 = v7;
      v5 = a2[1];
    }
    *(_QWORD *)(v6 + 8 * v5) = a1;
    ++a2[1];
  }
  memset(&v9[1], 0, 32);
  v10 = 0;
  v9[0] = &off_4A9F18;
  v11 = v8;
  sub_118240(a1, (__int64)v9);
  return *((unsigned int *)a2 + 2);
}
