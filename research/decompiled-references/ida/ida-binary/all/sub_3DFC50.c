__int64 __fastcall sub_3DFC50(__int64 a1, int *a2, __int64 a3, __int64 *a4, double a5)
{
  __int64 v8; // rdi
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rax
  int v11; // eax
  __int64 (*v12)(); // rcx
  __int64 result; // rax
  __int64 v14; // rbx
  int v15; // [rsp+0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a4 + 144LL))(*a4);
  v8 = *a4;
  v15 = 16;
  v9 = sub_2269E0;
  v16 = a3;
  v10 = *(__int64 (**)())(*(_QWORD *)v8 + 120LL);
  if ( v10 != sub_2269E0 )
    goto LABEL_6;
  do
  {
    if ( under_debugger )
      BUG();
    v8 = 40250;
    v10 = (__int64 (*)())interr(40250, a2, v9, a4, a5);
LABEL_6:
    a2 = &v15;
    v11 = ((__int64 (__fastcall *)(__int64, int *))v10)(v8, &v15);
    if ( v11 == 5 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a4 + 56LL))(*a4);
      cleanup_argloc(a1);
      *(_QWORD *)(a1 + 8) = v14;
      result = 1;
      *(_DWORD *)a1 = 6;
      return result;
    }
  }
  while ( v11 != 6 );
  v12 = *(__int64 (**)())(*(_QWORD *)*a4 + 136LL);
  result = 0;
  if ( v12 != sub_3DA7B0 )
    return ((__int64 (__fastcall *)(__int64, __int64, int *))v12)(*a4, a1, &v15);
  return result;
}
