__int64 __fastcall sub_158D70(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // r15d
  _DWORD *v8; // r15
  unsigned __int8 *v9; // r13
  unsigned __int8 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+10h] [rbp-80h]
  __int64 v18; // [rsp+20h] [rbp-70h] BYREF
  __int64 v19; // [rsp+28h] [rbp-68h] BYREF
  char v20[4]; // [rsp+30h] [rbp-60h] BYREF
  int v21; // [rsp+34h] [rbp-5Ch]
  char v22[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v4 = sub_11C8E0(a3, &v18, 12);
  if ( !v4 )
    return 0;
  v5 = sub_11C8E0(v4, &v19, 9);
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 32) != 4 )
    return 0;
  v8 = *(_DWORD **)(v5 + 40);
  if ( *v8 != 25 )
    return 0;
  v9 = (unsigned __int8 *)(v8 + 8);
  if ( !(unsigned __int8)sub_130BC0(a1, a2, (__int64)(v8 + 8), a2, v18, 0)
    || (v10 = (unsigned __int8 *)(v8 + 12), !(unsigned __int8)sub_130BC0(a1, a2, (__int64)(v8 + 12), a2, v19, 0)) )
  {
    if ( !(unsigned __int8)sub_130BC0(a1, a2, (__int64)(v8 + 8), a2, v19, 0) )
      return 0;
    v10 = (unsigned __int8 *)(v8 + 12);
    if ( !(unsigned __int8)sub_130BC0(a1, a2, (__int64)(v8 + 12), a2, v18, 0) )
      return 0;
    v11 = v19;
    v19 = v18;
    v18 = v11;
  }
  v17 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( (unsigned __int8)sub_157240((__int64)a1, (__int64)(v8 + 8), v18) )
  {
    v6 = sub_157240((__int64)a1, (__int64)v10, v19);
    if ( (_BYTE)v6 )
    {
      sub_123A40((__int64)v20, v9, v12, v13);
      sub_123A40((__int64)v22, v10, v14, v15);
      sub_B1520((__int64)a1, a2, (__int64)v20, a2, (__int64)v20, a2, v18, 0);
      sub_B1520((__int64)a1, a2, (__int64)v22, a2, (__int64)v22, a2, v19, 0);
      sub_11CA10((char *)(a3 + 32), v20);
      sub_11CA10((char *)(a3 + 48), v22);
      sub_12B6F0(a3, v17, 11, -1, 1);
      v16 = 2 * v21;
      *(_DWORD *)(*(_QWORD *)(a3 + 40) + 68LL) = 2 * v21;
      *(_DWORD *)(a3 + 36) = v16;
      sub_11CDA0((__int64)v22);
      sub_11CDA0((__int64)v20);
      return v6;
    }
  }
  return 0;
}
