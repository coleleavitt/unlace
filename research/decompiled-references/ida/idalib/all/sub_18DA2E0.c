__int64 __fastcall sub_18DA2E0(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned __int16 *a5, double a6)
{
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 *v11; // [rsp+8h] [rbp-30h] BYREF

  v8 = sub_1E5F010(a3, &v11);
  v9 = v11;
  if ( !v11 )
  {
    v9 = sub_A81910(*(_QWORD **)(a1 + 248), v8, 0);
    v11 = v9;
  }
  return sub_18D9980(a1, a2, v9, a4, a5, a6);
}
