__int64 __fastcall sub_22C91D0(__int64 a1, __int16 a2, __int64 a3, __int64 a4, char *a5, __int64 a6)
{
  void *v8; // r8
  const char *v9; // rax
  __int64 result; // rax
  int v11; // edx
  bool v12; // zf
  int v13; // [rsp+Ch] [rbp-8Ch] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-88h] BYREF
  char *v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+28h] [rbp-70h]
  __int16 v17; // [rsp+30h] [rbp-68h]
  _QWORD v18[4]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v19; // [rsp+60h] [rbp-38h]

  v13 = 0;
  if ( !sub_2247970(a5, a6, 0, v18) && v18[0] == LODWORD(v18[0]) )
  {
    v11 = v18[0];
    v13 = v18[0];
    if ( v18[0] <= 0xFFu )
      goto LABEL_6;
    v15 = a5;
    v8 = sub_227D6D0();
    v17 = 1283;
    v14[0] = "'";
    v18[0] = v14;
    v9 = "' value must be in the range [0, 255]!";
    v16 = a6;
  }
  else
  {
    v15 = a5;
    v8 = sub_227D6D0();
    v17 = 1283;
    v16 = a6;
    v14[0] = "'";
    v18[0] = v14;
    v9 = "' value invalid for uint argument!";
  }
  v18[2] = v9;
  v19 = 770;
  result = sub_22116C0(a1, (__int64)v18, 0, 0, (__int64)v8);
  if ( (_BYTE)result )
    return result;
  v11 = v13;
LABEL_6:
  v12 = *(_QWORD *)(a1 + 168) == 0;
  *(_DWORD *)(a1 + 120) = v11;
  *(_WORD *)(a1 + 12) = a2;
  if ( v12 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, int *))(a1 + 176))(a1 + 152, &v13);
  return 0;
}
