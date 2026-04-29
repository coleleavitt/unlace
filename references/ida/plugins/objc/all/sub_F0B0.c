__int64 __fastcall sub_F0B0(__int64 *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // edx
  unsigned int v9; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *a1;
  v11[1] = __readfsqword(0x28u);
  v9 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned int *))(v3 + 472))(a1, &v9) )
    return 0;
  v5 = *a1;
  v11[0] = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v5 + 448))(a1, v11, a3) )
    return 0;
  v6 = *a1;
  v10 = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, unsigned int *, _QWORD))(v6 + 416))(a1, &v10, v11[0]);
  if ( !(_BYTE)result )
    return 0;
  v8 = v10 - v9;
  if ( v9 >= v10 )
    v8 = 0;
  *a2 = v8;
  return result;
}
