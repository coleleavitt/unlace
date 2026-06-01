unsigned __int64 __fastcall sub_B80EE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = sub_B8C330(a1);
  if ( (unsigned int)sub_B74100(a1, v1) != 1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(v5 + 72);
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 1) != 0 )
    goto LABEL_3;
  v14 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v6 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_3;
  v15 = v6 & 2;
  v8 = (unsigned __int64)v14;
  if ( (_DWORD)v15 )
  {
    v7 = sub_6E2500(v14, v5, v15, v2, v3, v4) & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v5 + 72) = v7 | 1;
LABEL_3:
    v16[0] = v7;
    v8 = sub_B7BB70(v16);
  }
  if ( v8 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = sub_B8C330(v8);
      v11 = sub_B74100(v8, v10);
      if ( v11 == 2 )
        break;
      if ( v11 == 1 && !v9 )
        v9 = v8;
      v12 = *(_QWORD *)(v8 + 72);
      if ( (v12 & 3) == 0 )
      {
        v8 = v12 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v8 )
          continue;
      }
      return v9;
    }
  }
  return 0;
}
