unsigned __int64 __fastcall sub_226890(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 i; // r12
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // esi
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  __int128 v17; // [rsp+18h] [rbp-30h]
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  sub_2262B0(a1);
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v4 + 480) != -1 )
    goto LABEL_2;
  if ( sub_21EA00(a1, a2, v2, v3) )
  {
    v12 = sub_21D540(a1, (_BYTE *)(a1 + 136));
    if ( v12 == -1 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) |= 0x200u;
      v12 = sub_225D30(a1, -1, (_BYTE *)(a1 + 136), (_DWORD *)(a1 + 120), 0, 0, *(_DWORD *)(a1 + 144), 0);
    }
    if ( (unsigned __int8)sub_21DF90(*(_QWORD *)(a1 + 16), v12, *(_DWORD *)(a1 + 148), v11, v13, v14) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v4 + 480) == -1 )
      {
        if ( !under_debugger )
          sub_383060(52861);
        BUG();
      }
LABEL_2:
      v5 = *(_QWORD *)(a1 + 24);
      for ( i = v5 + 56LL * *(_QWORD *)(a1 + 32); i != v5; v4 = *(_QWORD *)(a1 + 16) )
      {
        if ( !*(_QWORD *)(v4 + 800) || !(unsigned __int8)sub_21DAF0(a1, v5) )
          sub_225F80(a1, v5);
        v5 += 56;
      }
      if ( (*(_BYTE *)(v4 + 5) & 2) == 0 )
        return v18 - __readfsqword(0x28u);
      v8 = *(_QWORD *)(v4 + 1440);
      v9 = *(_DWORD *)(a1 + 144);
      v15[0] = 0;
      v15[1] = 0;
      v16 = 0;
      v17 = 0;
      sub_1C31B0(a1 + 120, (__int64)v15, v9, v8, 0);
      if ( (unsigned __int8)sub_64820(v15, (_QWORD *)(a1 + 48)) && (unsigned __int8)sub_317F40(a1 + 64, &v16) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) &= ~0x200u;
        v10 = v16;
        if ( !v16 )
          goto LABEL_12;
      }
      else
      {
        v10 = v16;
        if ( !v16 )
        {
LABEL_12:
          qfree(v15[0]);
          return v18 - __readfsqword(0x28u);
        }
      }
      *(_QWORD *)&v17 = 0;
      qfree(v10);
      goto LABEL_12;
    }
  }
  return v18 - __readfsqword(0x28u);
}
