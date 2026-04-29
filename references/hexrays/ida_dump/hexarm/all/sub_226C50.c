unsigned __int64 __fastcall sub_226C50(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 i; // r12
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // esi
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  sub_226670(a1);
  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v1 + 480) != -1 )
    goto LABEL_2;
  if ( sub_21EDC0(a1) )
  {
    v9 = sub_21D900(a1, (_QWORD *)(a1 + 136));
    if ( v9 == -1 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) |= 0x200u;
      v9 = sub_2260F0(a1, -1, (_BYTE *)(a1 + 136), (_DWORD *)(a1 + 120), 0, 0, *(_DWORD *)(a1 + 144), 0);
    }
    if ( (unsigned __int8)sub_21E350(*(_QWORD *)(a1 + 16), v9, *(_DWORD *)(a1 + 148), v8, v10, v11) )
    {
      v1 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v1 + 480) == -1 )
      {
        if ( !under_debugger )
          sub_3835A0(52861);
        BUG();
      }
LABEL_2:
      v2 = *(_QWORD *)(a1 + 24);
      for ( i = v2 + 56LL * *(_QWORD *)(a1 + 32); i != v2; v1 = *(_QWORD *)(a1 + 16) )
      {
        if ( !*(_QWORD *)(v1 + 800) || !(unsigned __int8)sub_21DEB0(a1, v2) )
          sub_226340(a1, v2);
        v2 += 56;
      }
      if ( (*(_BYTE *)(v1 + 5) & 2) == 0 )
        return v15 - __readfsqword(0x28u);
      v5 = *(_QWORD *)(v1 + 1440);
      v6 = *(_DWORD *)(a1 + 144);
      v12[0] = 0;
      v12[1] = 0;
      v13 = 0;
      v14 = 0;
      sub_1C2BF0(a1 + 120, v12, v6, v5, nullptr);
      if ( (unsigned __int8)sub_64220(v12, (_QWORD *)(a1 + 48)) && (unsigned __int8)sub_318300(a1 + 64, &v13) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) &= ~0x200u;
        v7 = v13;
        if ( !v13 )
          goto LABEL_12;
      }
      else
      {
        v7 = v13;
        if ( !v13 )
        {
LABEL_12:
          qfree(v12[0]);
          return v15 - __readfsqword(0x28u);
        }
      }
      *(_QWORD *)&v14 = 0;
      qfree(v7);
      goto LABEL_12;
    }
  }
  return v15 - __readfsqword(0x28u);
}
