unsigned __int64 __fastcall sub_A787C0(__int64 a1, unsigned __int64 a2, _BYTE *a3, __int64 a4, _BYTE *a5, char a6)
{
  __int64 *v6; // r12
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 result; // rax
  __int64 v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  bool v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rax
  bool v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v34; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v38; // [rsp+28h] [rbp-70h]
  _BYTE v39[104]; // [rsp+30h] [rbp-68h] BYREF

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  *a5 = 0;
  v9 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(v9 + 16);
  if ( (_BYTE)v10 == 37 )
    return sub_A785F0(a1, *(_QWORD *)(v9 + 40), (__int64)a3, a4);
  if ( a6 != 1 || (_BYTE)v10 != 34 )
  {
    if ( (unsigned int)(v10 - 35) <= 1 )
      return sub_A750A0(
               a1,
               *(_QWORD *)(v9 + 24),
               (_QWORD *)(v9 + 48),
               (*(_WORD *)(v9 + 18) >> 3) & 0x7F,
               a3,
               a4,
               *(_DWORD *)(v9 + 20) & 1);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1 )
      return sub_A750A0(a1, a2, nullptr, 0, a3, a4, 0);
    v15 = sub_9C7DB0(v9, a2, (__int64)a3, a4, (__int64)a5);
    v17 = a4;
    v18 = (__int64)a5;
    if ( v15 )
    {
      v19 = *v6;
      if ( *(_BYTE *)(*v6 + 16) != 34 )
      {
        v20 = sub_F63050(v19, a2, v16, a4);
        v17 = a4;
        v19 = v20;
      }
      v35 = v17;
      v21 = sub_A5E7C0(v19, a2, v16, v17, v18);
      v22 = sub_F66020(v21);
      v23 = *(_QWORD *)(a1 + 19136);
    }
    else
    {
      v25 = sub_A5EA70(*v6, a2, v16, a4, (__int64)a5);
      v27 = (__int64)a5;
      if ( !v25 )
      {
        *a5 = 1;
        return a2;
      }
      v28 = *v6;
      v29 = a4;
      if ( *(_BYTE *)(*v6 + 16) != 34 )
      {
        v30 = sub_F63050(v28, a2, v26, a4);
        v29 = a4;
        v28 = v30;
      }
      v35 = v29;
      v31 = sub_A5E7C0(v28, a2, v26, v29, v27);
      v22 = sub_F66020(v31);
      v23 = *(_QWORD *)(a1 + 19144);
    }
    v24 = sub_A750A0(a1, v23, nullptr, 0, a3, v35, v22);
    return sub_A74EC0(a1, v24);
  }
  ptr = v39;
  v12 = sub_A5E7C0(v9, a2, (__int64)a3, a4, (__int64)a5);
  v38 = 0x800000000LL;
  v13 = (*(_WORD *)(v12 + 18) & 0x3F8) + 48LL;
  sub_A6A770((__int64)&ptr, (_BYTE *)(v12 + v13), (_BYTE *)(v12 + v13 + 8LL * (*(_BYTE *)(v12 + 19) >> 2)));
  sub_A6A770((__int64)&ptr, a3, &a3[8 * a4]);
  v14 = sub_A750A0(
          a1,
          *(_QWORD *)(v12 + 24),
          (_QWORD *)(v12 + 48),
          (*(_WORD *)(v12 + 18) >> 3) & 0x7F,
          ptr,
          (unsigned int)v38,
          *(_BYTE *)(v12 + 20) & 1);
  result = sub_A74EC0(a1, v14);
  if ( ptr != v39 )
  {
    v34 = result;
    free(ptr);
    return v34;
  }
  return result;
}
