__int64 __fastcall sub_2453C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r12d
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+0h] [rbp-58h]
  __int64 tinfo_size; // [rsp+8h] [rbp-50h]
  _BYTE v20[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 8) != 2 )
  {
    if ( !under_debugger )
      sub_383060(50400);
    BUG();
  }
  v2 = 0;
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) != dword_42B8C0[v2] )
  {
    v2 += 2;
    if ( v2 == 26 )
      return 0;
  }
  v4 = dword_42B8C0[(int)v2 + 1];
  if ( !v4 || (unsigned __int8)sub_256590(*(_QWORD *)(a1 + 24), a2, dword_42B8C0) )
    return 0;
  if ( !(unsigned __int8)sub_244600(
                           a2,
                           *(_QWORD *)(a1 + 32),
                           *(_QWORD *)(a1 + 24),
                           *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL)) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = *(unsigned int *)(v5 + 8);
    if ( (unsigned int)v6 <= 0x28 )
    {
      v7 = 0x14100000000LL;
      if ( _bittest64(&v7, v6) )
      {
        v8 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v8 + 8) == 51 && *(_DWORD *)(*(_QWORD *)(v8 + 24) + 8LL) == 48 )
        {
          v9 = *(_QWORD *)(v8 + 48);
          if ( (v9 & 0xE) == 0 && (v9 & 0x30) != 0 )
          {
            v10 = *(_QWORD *)(v5 + 24);
            if ( *(_DWORD *)(v10 + 8) == 48 )
            {
              v18 = *(_QWORD *)(a2 + 112);
              if ( !(unsigned int)sub_259AA0(*(_QWORD *)(v10 + 24), *(_QWORD *)(a1 + 24))
                && (unsigned int)get_tinfo_property(*(_QWORD *)(v10 + 48), 3) == 1 )
              {
                tinfo_size = get_tinfo_size(0, *(_QWORD *)(v10 + 48), 0);
                if ( tinfo_size == get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0) )
                {
                  sub_32C540(v20, v18, v10 + 48);
                  copy_tinfo_t(*(_QWORD *)(v8 + 24) + 48LL, v20);
                  clear_tinfo_t(v20);
                  v11 = *(_QWORD *)(v8 + 24);
                  v12 = *(_DWORD *)(v11 + 56) & 0xFFFFFFDF;
                  if ( (*(_BYTE *)(v10 + 56) & 0x20) != 0 )
                    v12 = *(_DWORD *)(v11 + 56) | 0x20;
                  *(_DWORD *)(v11 + 56) = v12;
                  copy_tinfo_t(v8 + 48, v10 + 48);
                  v13 = *(_QWORD *)(v5 + 24);
                  if ( v13 )
                  {
                    sub_255630(*(_QWORD *)(v5 + 24));
                    clear_tinfo_t(v13 + 48);
                    j__qfree(v13);
                  }
                  sub_255850(v5, *(_QWORD *)(v5 + 32));
                  goto LABEL_24;
                }
              }
            }
          }
        }
      }
    }
    return 0;
  }
LABEL_24:
  *(_DWORD *)(a1 + 8) = v4;
  sub_2441C0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a2 + 112), 0);
  v14 = *(_QWORD *)(a2 + 112);
  sub_2441C0(a1, v14, 0);
  sub_245060(a1, v14, v15, v16, v17);
  return 1;
}
