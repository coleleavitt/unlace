__int64 __fastcall sub_5A8C5A(int a1, _WORD *a2)
{
  __int64 result; // rax
  int v3; // [rsp+Ch] [rbp-34h] BYREF
  int v4; // [rsp+14h] [rbp-2Ch] BYREF
  _WORD *v5; // [rsp+18h] [rbp-28h] BYREF
  int *v6; // [rsp+20h] [rbp-20h] BYREF
  int v7; // [rsp+2Ch] [rbp-14h]
  _WORD *v8; // [rsp+30h] [rbp-10h]
  int *v9; // [rsp+38h] [rbp-8h]

  v3 = a1;
  v6 = &v3;
  v9 = &v4;
  v5 = a2;
  v8 = a2 + 2;
  a2[1] = 0;
  *a2 = a2[1];
  result = sub_5AF1FA(&v6, v9, &v5, v8, 0);
  v7 = result;
  if ( (_DWORD)result )
  {
    a2[1] = 0;
    *a2 = a2[1];
    return (__int64)a2;
  }
  return result;
}
