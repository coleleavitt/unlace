__int64 __fastcall sub_BB9E50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  int v5; // eax
  __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 result; // rax
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+0h] [rbp-50h] BYREF
  void *v17[2]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  if ( !v2 )
    BUG();
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 4) == 0 )
  {
    v11 = *(_BYTE *)(v3 + 28) & 0x7F;
    if ( (unsigned int)v11 - 34 > 5 )
    {
      if ( v11 == 71 )
      {
        sub_995540(*a1, "friend ");
        sub_BB9A70((__int64)a1, v3, v12, v13, v14, v15);
      }
      else if ( v11 == 72 )
      {
        sub_995540(*a1, "friend ");
        sub_BB7960((__int64)a1, v3);
      }
    }
    else
    {
      sub_995540(*a1, "friend ");
      sub_BB7D90((__int64)a1, v3);
    }
LABEL_12:
    result = *(unsigned int *)(a2 + 60);
    if ( (_DWORD)result )
      return sub_995540(*a1, "...");
    return result;
  }
  if ( !v3 )
    BUG();
  v5 = *(_DWORD *)(a2 + 64) >> 1;
  if ( v5 )
  {
    v6 = (__int64 *)(a2 + 72);
    v7 = a2 + 8LL * (unsigned int)(v5 - 1) + 80;
    do
    {
      v8 = *v6++;
      sub_BB7B60((__int64)a1, v8, 0);
    }
    while ( (__int64 *)v7 != v6 );
  }
  sub_995540(*a1, "friend ");
  v9 = *a1;
  v16 = *(_QWORD *)v3;
  sub_F785A0(v17, &v16, a1 + 1);
  sub_227BF10(v9, v17[0], v17[1]);
  if ( v17[0] == &v18 )
    goto LABEL_12;
  operator delete(v17[0]);
  result = *(unsigned int *)(a2 + 60);
  if ( (_DWORD)result )
    return sub_995540(*a1, "...");
  return result;
}
