unsigned __int64 __fastcall sub_15B7950(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rdi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  void *v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *a1;
  if ( (v3 & 6) == 0 )
    v2 = *(_QWORD *)(a2 + 16);
  v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_E90000(v5);
    if ( v7 )
    {
      if ( v7 == 3 && ((*(__int64 *)(v6 + 8) >> 1) & 3) == 2 )
        v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      else
        v6 = 0;
    }
    else
    {
      v6 = sub_15B7950(a1, v6);
    }
  }
  v8 = v6;
  v9 = 0;
  sub_15B7680((__int64)v20, (__int64)a1, v8, v2);
  v13 = v20[0];
  if ( (char *)((char *)v20[1] - (char *)v20[0]) != byte_8 )
  {
LABEL_9:
    if ( !v13 )
      return v9;
    goto LABEL_13;
  }
  v15 = *(_QWORD *)v20[0];
  v16 = *(_BYTE *)(*(_QWORD *)v20[0] + 28LL) & 0x7F;
  v17 = (unsigned int)(v16 - 58);
  if ( (unsigned int)v17 <= 9 )
  {
    v18 = *(_QWORD *)(v15 + 48);
    if ( v18 )
    {
      v9 = v18 & 0xFFFFFFFFFFFFFFF0LL;
      operator delete(v20[0]);
      return v9;
    }
    v19 = sub_A7AA70(v4, v15, v17, v10, v11, v12);
    v13 = v20[0];
    v9 = v19;
    goto LABEL_9;
  }
  v9 = 0;
  if ( (unsigned int)(v16 - 26) <= 0x1A )
    v9 = *(_QWORD *)(v15 + 48);
LABEL_13:
  operator delete(v13);
  return v9;
}
