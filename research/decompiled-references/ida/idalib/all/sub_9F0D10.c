__int64 __fastcall sub_9F0D10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // r15d
  int v9; // r13d
  __int64 v10; // r12
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ebp
  size_t v14; // rax
  __int64 v15; // r15
  _DWORD v16[2]; // [rsp+0h] [rbp-1C8h] BYREF
  char v17; // [rsp+8h] [rbp-1C0h]
  __int64 v18; // [rsp+Ch] [rbp-1BCh]
  char v19; // [rsp+14h] [rbp-1B4h]
  void *v20; // [rsp+18h] [rbp-1B0h]
  __int64 v21; // [rsp+20h] [rbp-1A8h]
  _BYTE v22[24]; // [rsp+28h] [rbp-1A0h] BYREF
  _BYTE v23[24]; // [rsp+40h] [rbp-188h] BYREF
  void *v24; // [rsp+58h] [rbp-170h]
  __int64 v25; // [rsp+68h] [rbp-160h] BYREF
  __int64 *v26; // [rsp+80h] [rbp-148h] BYREF
  __int64 v27; // [rsp+88h] [rbp-140h]
  __int64 v28; // [rsp+90h] [rbp-138h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  if ( (unsigned int)sub_9EF070(a3, v3) == 1
    && ((v5 = sub_B8C330(v3), v6 = *(_QWORD *)(v5 + 2312), v7 = *(_QWORD *)(a2 + 24), *(_BYTE *)(v7 + 2) <= 0xFu)
      ? (v15 = *(_QWORD *)(v7 + 16), v9 = sub_EEB7E0(v15) + 1, v8 = sub_EEB7E0(v15))
      : (v8 = *(_DWORD *)(v7 + 4), v9 = v8 + 1),
        v10 = *(_QWORD *)(v5 + 2320),
        v11 = sub_BF7FE0(*(_QWORD *)(a2 + 16)),
        (v12 = sub_13DC060(v11, 0, v6, v10)) != 0) )
  {
    v13 = v12;
    v16[0] = v8;
    v16[1] = v9;
    v18 = 0;
    v19 = 0;
    v20 = v22;
    v21 = 0;
    v22[0] = 0;
    v22[16] = 0;
    v17 = 0;
    v14 = j__strlen("[0]");
    sub_9EC740((__int64)v23, v13, "[0]", v14, 0);
    v26 = &v28;
    v27 = 0x400000000LL;
    sub_9EEBE0((__int64)&v26, (__int64)v16, (__int64)&v26);
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    *(_QWORD *)a1 = a1 + 16;
    if ( (_DWORD)v27 )
      sub_9F0880(a1, (__int64)&v26);
    *(_BYTE *)(a1 + 272) = 1;
    sub_9ED140((__int64)&v26);
    if ( v24 != &v25 )
      operator delete(v24);
    if ( v20 != v22 )
      operator delete(v20);
  }
  else
  {
    *(_BYTE *)(a1 + 272) = 0;
  }
  return a1;
}
