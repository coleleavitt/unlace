__int64 __fastcall sub_5ADA10(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  int v5; // esi
  int v7; // eax
  __int64 v8; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v4 = *(int *)(a2 + 20);
  v5 = *(_DWORD *)a2;
  v14 = __readfsqword(0x28u);
  if ( v4 )
  {
    v10 = sub_3B90A0(a1, v5);
    v11 = *(_QWORD *)(a2 + 24);
    v12 = *a1;
    v13 = v10;
    sub_79BB40(&v13, v12, v11, 4 * v4, 28672, 83);
    if ( !a3 )
      return 1;
  }
  else
  {
    v7 = sub_3B90A0(a1, v5);
    v8 = *a1;
    v13 = v7;
    sub_79BB90(&v13, v8, 28672, 83);
    if ( !a3 )
      return 1;
  }
  return sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
}

