__int64 __fastcall sub_1BEAA10(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int64 *a6,
        double a7)
{
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbp
  _QWORD *v15; // r14
  _QWORD *v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // r15
  __int64 (__fastcall *v19)(_QWORD *); // rax
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // [rsp+8h] [rbp-40h]
  char v32; // [rsp+8h] [rbp-40h]

  v10 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 33
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
    && (v32 = a5, v24 = sub_F63050(v10, a2, a3, a4), a5 = v32, (v10 = v24) != 0) )
  {
    v11 = *(_QWORD *)(a1 + 248);
    if ( (unsigned int)sub_BFE6E0(a2, v11, (unsigned int)(a5 != 0) + 1, a7) )
    {
      v22 = 1;
      *a6 = a4;
      return v22;
    }
    v14 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v15 = (_QWORD *)*v14;
    if ( *(_BYTE *)(*v14 + 16LL) == 33
      || *(_BYTE *)(*(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
      && (v15 = (_QWORD *)sub_F63050(*v14, v11, v12, v13)) != nullptr )
    {
      if ( (v16 = sub_F61C10((__int64)v15), v17 = sub_F61C10(v10), v18 = (__int64)v17, !v16)
        || !v17
        || v16 != v17
        && ((v19 = *(__int64 (__fastcall **)(_QWORD *))(*v16 + 32LL), (char *)v19 != (char *)sub_A01140)
          ? (v31 = v19(v16))
          : (v31 = sub_B70A60((__int64)v16)),
            (v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL), v20 != sub_A01140)
          ? (v21 = v20(v18))
          : (v21 = sub_B70A60(v18)),
            v31 != v21) )
      {
        v25 = sub_EEB7E0(a2, v11, a7);
        v22 = sub_183BB70(a1, v25, v18, (__int64)v16, v26, v27);
        if ( (_BYTE)v22 )
        {
          *a6 = sub_ABBA20(*(_QWORD **)(a1 + 248), v15[4], v15[5], v18, v28, v29);
          return v22;
        }
      }
    }
  }
  return 0;
}
