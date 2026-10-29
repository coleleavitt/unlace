__int64 __fastcall sub_E667B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  const char *v5; // rsi
  size_t v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+0h] [rbp-88h] BYREF
  __int16 *v15; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+18h] [rbp-70h]
  int v17; // [rsp+20h] [rbp-68h]
  __int16 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+48h] [rbp-40h]

  sub_E5B230(a1, a2);
  result = *(_QWORD *)(a2 + 72);
  if ( (result & 0x20000000000LL) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 128);
    v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (v7 & 4) != 0 )
      {
        v12 = *v8;
        v13 = *(_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0LL);
        if ( !(*(_QWORD *)(v13 + 8) & 7LL | (*(__int64 *)(v13 + 8) >> 3) & 1) )
        {
          v8 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_10;
        }
        v7 = sub_F64F00(v12);
      }
      v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    }
LABEL_10:
    sub_E63A60((__int64)&v15, a1, (__int64)v8, 1);
    v18 = 7;
    v9 = (__int64)v15;
    v15 = nullptr;
    v19 = v9;
    v10 = v16;
    v16 = 0;
    v20 = v10;
    LODWORD(v10) = v17;
    v17 = 0;
    v21 = v10;
    v11 = j__strlen("fixedUnderlyingType");
    v14[0] = &v18;
    v14[1] = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"fixedUnderlyingType", v11, (__int64)sub_E58580, v14);
    sub_222B2A0(&v18);
    sub_E5D2E0((__int64 *)&v15);
    result = *(_QWORD *)(a2 + 72);
  }
  if ( (result & 0x8000000000LL) != 0 )
  {
    v4 = a1 + 1048;
    v5 = "class";
    if ( (result & 0x10000000000LL) == 0 )
      v5 = "struct";
    sub_E598C0((__int64)&v18, v5);
    v6 = j__strlen("scopedEnumTag");
    v15 = &v18;
    v16 = v4;
    sub_E585D0(v4, (__int64)"scopedEnumTag", v6, (__int64)sub_E58580, &v15);
    return sub_222B2A0(&v18);
  }
  return result;
}
