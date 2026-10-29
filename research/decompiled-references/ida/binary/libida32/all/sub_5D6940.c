__int64 __fastcall sub_5D6940(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int16 v5; // dx
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  __int16 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 384);
  v9 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 392);
  v3 = v1 + 16 * v2 - 16;
  v4 = *(_QWORD *)v3;
  v5 = *(_WORD *)(v3 + 8);
  if ( v2 )
    *(_QWORD *)(a1 + 392) = v2 - 1;
  v8 = v5;
  v7 = v4;
  return sub_5D6770(a1, &v7);
}

