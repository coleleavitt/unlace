__int64 __fastcall sub_592E30(__int64 a1, std::string *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v15[296]; // [rsp+30h] [rbp-270h] BYREF
  __int64 v16; // [rsp+158h] [rbp-148h]
  __int64 v17; // [rsp+160h] [rbp-140h]
  _QWORD v18[38]; // [rsp+170h] [rbp-130h] BYREF

  v18[0] = a4;
  v18[1] = a5;
  v18[4] = a6;
  v6 = (const char *)std::string::c_str(a2);
  strncpy((char *)&v18[5] + 1, v6, 0xFEu);
  HIBYTE(v18[36]) = 0;
  qmemcpy(v15, v18, sizeof(v15));
  v7 = a3[1];
  v16 = *a3;
  v17 = v7;
  return sub_593BE0(a1 + 136, v15, a1 + 136, 0, v8, v9, a6, a5, a4);
}
