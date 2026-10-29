__int64 __fastcall sub_E42C30(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rax
  size_t v6; // rax
  __int64 v7; // r12
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // rax
  __int64 v11; // r12
  size_t v12; // rax
  char v13; // cl
  char v14; // r12
  size_t v15; // rax
  char v16; // r12
  size_t v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r12
  size_t v21; // rax
  char v22; // r12
  size_t v23; // rax
  __int64 result; // rax
  const char *v25; // rsi
  size_t v26; // rax
  size_t v27; // rax
  char *v28; // rax
  size_t v29; // rax
  _QWORD v30[2]; // [rsp+0h] [rbp-98h] BYREF
  __int16 *v31; // [rsp+10h] [rbp-88h] BYREF
  __int64 v32; // [rsp+18h] [rbp-80h]
  int v33; // [rsp+20h] [rbp-78h]
  __int16 v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  int v37; // [rsp+48h] [rbp-50h]

  v3 = a1 + 1048;
  sub_E374F0(a1, a2);
  sub_E3FD20((__int64)&v31, a1, *(_QWORD *)(a2 + 48), 1);
  v34 = 7;
  v4 = (__int64)v31;
  v31 = nullptr;
  v35 = v4;
  v5 = v32;
  v32 = 0;
  v36 = v5;
  LODWORD(v5) = v33;
  v33 = 0;
  v37 = v5;
  v6 = j__strlen("type");
  v30[0] = &v34;
  v30[1] = a1 + 1048;
  sub_E34890(a1 + 1048, (__int64)"type", v6, (__int64)sub_E34840, v30);
  sub_2207560(&v34);
  sub_E395A0((__int64 *)&v31);
  if ( *(_BYTE *)(a2 + 81) >> 5 )
  {
    v28 = sub_B4F380(*(_BYTE *)(a2 + 81) >> 5);
    sub_E35B80((__int64)&v34, v28);
    v29 = j__strlen("storageClass");
    v31 = &v34;
    v32 = a1 + 1048;
    sub_E34890(v3, (__int64)"storageClass", v29, (__int64)sub_E34840, &v31);
    sub_2207560(&v34);
  }
  v7 = *(_QWORD *)(a2 + 80);
  v8 = j__strlen("inline");
  sub_E35E50(a1, (__int64)"inline", v8, (v7 & 0x20000) != 0);
  v9 = *(_QWORD *)(a2 + 80);
  v10 = j__strlen("virtual");
  sub_E35E50(a1, (__int64)"virtual", v10, (v9 & 0x40000) != 0);
  v11 = *(_QWORD *)(a2 + 80);
  v12 = j__strlen("pure");
  v13 = (v11 & 0x80000) != 0;
  v14 = 0;
  sub_E35E50(a1, (__int64)"pure", v12, v13);
  if ( (*(_BYTE *)(a2 + 82) & 0x40) != 0 )
    v14 = (*(_BYTE *)(a2 + 83) & 2) == 0;
  v15 = j__strlen("explicitlyDeleted");
  sub_E35E50(a1, (__int64)"explicitlyDeleted", v15, v14);
  v16 = (*(_BYTE *)(a2 + 84) & 3) != 0;
  v17 = j__strlen("constexpr");
  sub_E35E50(a1, (__int64)"constexpr", v17, v16);
  v20 = sub_B50B60(a2, (__int64)"constexpr", v18, v19);
  v21 = j__strlen("variadic");
  sub_E35E50(a1, (__int64)"variadic", v21, v20);
  v22 = sub_B59AB0(a2);
  v23 = j__strlen("immediate");
  sub_E35E50(a1, (__int64)"immediate", v23, v22);
  result = *(_QWORD *)(a2 + 80);
  if ( (result & 0x2000000) != 0 )
  {
    v25 = "deleted";
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 82) & 0x40) == 0 )
      v25 = "default";
    sub_E35B80((__int64)&v34, v25);
    v26 = j__strlen("explicitlyDefaulted");
    v31 = &v34;
    v32 = a1 + 1048;
    sub_E34890(v3, (__int64)"explicitlyDefaulted", v26, (__int64)sub_E34840, &v31);
    sub_2207560(&v34);
    result = *(_QWORD *)(a2 + 80);
  }
  if ( (result & 0x8000000) != 0 )
  {
    result = *(_QWORD *)(a2 + 128);
    if ( *(_BYTE *)(result + 4) )
    {
      result = *(_QWORD *)(result + 8LL * *(unsigned int *)result + 8);
      if ( result )
      {
        sub_E35AF0(
          (__int64)&v34,
          result + 4LL * *(unsigned int *)(result + 4) + 20,
          *(_DWORD *)(result + 16) * ((*(_WORD *)(result + 2) >> 6) & 7u));
        v27 = j__strlen("deletedMessage");
        v31 = &v34;
        v32 = a1 + 1048;
        sub_E34890(v3, (__int64)"deletedMessage", v27, (__int64)sub_E34840, &v31);
        return sub_2207560(&v34);
      }
    }
  }
  return result;
}

