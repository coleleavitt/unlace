__int64 __fastcall sub_E400E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  size_t v4; // rax
  __int64 v5; // r12
  size_t v6; // rax
  __int64 v7; // r12
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // rax
  __int64 v11; // r12
  size_t v12; // rax
  __int64 v13; // r12
  size_t v14; // rax
  __int64 v15; // r12
  size_t v16; // rax
  __int64 result; // rax
  const char *v18; // rsi
  size_t v19; // rax
  _QWORD v20[2]; // [rsp+0h] [rbp-98h] BYREF
  __int16 *v21; // [rsp+10h] [rbp-88h] BYREF
  __int64 v22; // [rsp+18h] [rbp-80h]
  int v23; // [rsp+20h] [rbp-78h]
  __int16 v24; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+48h] [rbp-50h]

  sub_E3FD20((__int64)&v21, a1, *(_QWORD *)(a2[2] + 48), 1);
  v24 = 7;
  v2 = (__int64)v21;
  v21 = nullptr;
  v25 = v2;
  v3 = v22;
  v22 = 0;
  v26 = v3;
  LODWORD(v3) = v23;
  v23 = 0;
  v27 = v3;
  v4 = j__strlen("ctorType");
  v20[0] = &v24;
  v20[1] = a1 + 1048;
  sub_E34890(a1 + 1048, (__int64)"ctorType", v4, (__int64)sub_E34840, v20);
  sub_2207560(&v24);
  sub_E395A0((__int64 *)&v21);
  v5 = *a2;
  v6 = j__strlen("elidable");
  sub_E35E50(a1, (__int64)"elidable", v6, (v5 & 0x80000) != 0);
  v7 = *a2;
  v8 = j__strlen("list");
  sub_E35E50(a1, (__int64)"list", v8, (v7 & 0x200000) != 0);
  v9 = *a2;
  v10 = j__strlen("initializer_list");
  sub_E35E50(a1, (__int64)"initializer_list", v10, (v9 & 0x400000) != 0);
  v11 = *a2;
  v12 = j__strlen("zeroing");
  sub_E35E50(a1, (__int64)"zeroing", v12, BYTE2(v11) >> 7);
  v13 = *a2;
  v14 = j__strlen("hadMultipleCandidates");
  sub_E35E50(a1, (__int64)"hadMultipleCandidates", v14, (v13 & 0x100000) != 0);
  v15 = *a2;
  v16 = j__strlen("isImmediateEscalating");
  sub_E35E50(a1, (__int64)"isImmediateEscalating", v16, (v15 & 0x8000000) != 0);
  result = *((_BYTE *)a2 + 3) & 7;
  if ( (_BYTE)result == 1 )
  {
    v18 = "non-virtual base";
  }
  else if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 2 )
    {
      v18 = "virtual base";
    }
    else
    {
      if ( (_BYTE)result != 3 )
        return result;
      v18 = "delegating";
    }
  }
  else
  {
    v18 = "complete";
  }
  sub_E35B80((__int64)&v24, v18);
  v19 = j__strlen("constructionKind");
  v21 = &v24;
  v22 = a1 + 1048;
  sub_E34890(a1 + 1048, (__int64)"constructionKind", v19, (__int64)sub_E34840, &v21);
  return sub_2207560(&v24);
}

