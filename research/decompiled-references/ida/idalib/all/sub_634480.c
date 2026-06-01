unsigned __int64 __fastcall sub_634480(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  _QWORD *v5; // rbp
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v1 = switch_dbctx(*(int *)(a1 + 16));
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 1032);
  v4 = v3 + 8LL * *(_QWORD *)(v2 + 1040);
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD **)v3;
      if ( *(_DWORD *)(*(_QWORD *)v3 + 12LL) )
        goto LABEL_4;
      if ( v5[11] <= 1u )
      {
        v5[6] = *(_QWORD *)(v1 + 1520);
LABEL_4:
        v3 += 8;
        if ( v4 == v3 )
          return v8 - __readfsqword(0x28u);
      }
      else
      {
        v3 += 8;
        netnode_check(&v7, v5[10], 0, 0);
        v5[6] = v7;
        if ( v4 == v3 )
          return v8 - __readfsqword(0x28u);
      }
    }
  }
  return v8 - __readfsqword(0x28u);
}
