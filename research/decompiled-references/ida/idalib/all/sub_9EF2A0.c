__int64 __fastcall sub_9EF2A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  _QWORD v20[2]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v21; // [rsp+10h] [rbp-128h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5) )
    v8 = *(_QWORD *)(v7 + 16);
  else
    v8 = *(_QWORD *)(v7 + 24);
  v9 = sub_BFB840(v8);
  if ( (*(_WORD *)v9 & 0x1FF) != 0x47 )
    goto LABEL_7;
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_7;
  v11 = sub_9EF070(a3, v10);
  if ( v11 == 1 )
  {
    v13 = sub_B8C330(v10);
    v14 = *(_QWORD *)(a2 + 16);
    v15 = v13;
    if ( sub_9ECBA0(v14, v10, v16, v17, v18) )
      v19 = *(_QWORD *)(v14 + 24);
    else
      v19 = *(_QWORD *)(v14 + 16);
    if ( !(unsigned __int8)sub_9ED020(v19, v15) )
      goto LABEL_7;
LABEL_13:
    *(_BYTE *)(a1 + 272) = 1;
    *(_QWORD *)a1 = a1 + 16;
    v20[0] = &v21;
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    v20[1] = 0x400000000LL;
    sub_9ED140((__int64)v20);
    return a1;
  }
  if ( v11 == 3 )
    goto LABEL_13;
LABEL_7:
  *(_BYTE *)(a1 + 272) = 0;
  return a1;
}
