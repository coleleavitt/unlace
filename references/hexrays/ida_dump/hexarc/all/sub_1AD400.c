unsigned __int64 __fastcall sub_1AD400(_QWORD *a1, __int64 *a2, __int64 a3, double a4, double a5)
{
  _QWORD *v5; // rbp
  __int64 *v6; // rbx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r12d
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v5 = a1;
  v6 = a2;
  v17 = __readfsqword(0x28u);
  v8 = sub_1A7F30(a3, (__int64)a2, (unsigned __int64)a1);
  sub_5E7F0((__int64)a1, (__int64)a2, a3);
  if ( a1[3] )
  {
    if ( !(unsigned __int8)sub_5E300(a1) )
    {
      v13 = a2[1];
      v14 = 2;
      if ( v13 )
        v14 = v13-- + 1;
      v15 = *a2;
      if ( v6[2] < v14 )
      {
        v16 = qvector_reserve(v6, v15, v14, 1);
        *v6 = v16;
        v15 = v16;
      }
      v6[1] = v14;
      *(_BYTE *)(v15 + v13) = 44;
      *(_BYTE *)(*v6 + v13 + 1) = 0;
    }
    a1 += 2;
    a2 = v6;
    sub_1AD1D0((__int64)(v5 + 2), v6, a4, a5);
  }
  if ( v8 != -1 )
  {
    v11 = v8 & 7;
    if ( v11 > 2 )
      sub_1A77D0(a1, a2, v9, v10);
    sub_3235B0(v6, (unsigned int)(v11 + 41));
  }
  return v17 - __readfsqword(0x28u);
}
