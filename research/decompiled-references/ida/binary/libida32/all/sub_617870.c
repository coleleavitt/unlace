unsigned __int64 __fastcall sub_617870(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rbp
  int v7; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v1 = switch_dbctx(*(int *)(a1 + 16));
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(__int64 **)(v2 + 1032);
  v4 = &v3[*(_QWORD *)(v2 + 1040)];
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( *(_DWORD *)(*v3 + 12) )
        goto LABEL_4;
      if ( *(_QWORD *)(v5 + 88) <= 1u )
      {
        *(_DWORD *)(v5 + 48) = *(_DWORD *)(v1 + 1332);
LABEL_4:
        if ( v4 == ++v3 )
          return v8 - __readfsqword(0x28u);
      }
      else
      {
        ++v3;
        netnode_check(&v7, *(_QWORD *)(v5 + 80), 0, 0);
        *(_DWORD *)(v5 + 48) = v7;
        if ( v4 == v3 )
          return v8 - __readfsqword(0x28u);
      }
    }
  }
  return v8 - __readfsqword(0x28u);
}

