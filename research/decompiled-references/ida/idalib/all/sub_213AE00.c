__int64 __fastcall sub_213AE00(__int64 a1, void **a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r12
  const char *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v12[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v13; // [rsp+20h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 320);
  if ( *(_QWORD *)(a1 + 312) != v6 && *(_BYTE *)(v6 - 3) )
  {
    sub_21319B0(a1, a2, a3, a4, a5, a6);
    return 0;
  }
  if ( (unsigned __int8)sub_2154640(a1, 9) )
  {
    v8 = 41;
    v9 = ".warning directive invoked in source file";
LABEL_7:
    v12[0] = v9;
    v12[1] = v8;
    v13 = 261;
    return sub_212CE20(a1, (__int64)a2, (__int64)v12, nullptr, 0);
  }
  if ( **(_DWORD **)(a1 + 48) != 3 )
  {
    v13 = 259;
    v12[0] = ".warning argument must be a string";
    return sub_21543E0(a1, v12, 0, 0);
  }
  v10 = sub_2153C00(a1);
  v9 = (const char *)sub_212C8F0(v10);
  v8 = v11;
  sub_2132C70(a1, (__m128 *)byte_9);
  result = sub_21544B0(a1);
  if ( !(_BYTE)result )
    goto LABEL_7;
  return result;
}
