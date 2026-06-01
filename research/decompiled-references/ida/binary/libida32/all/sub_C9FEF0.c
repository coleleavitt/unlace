__int64 __fastcall sub_C9FEF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 i; // r15
  unsigned __int64 v10; // r14
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+8h] [rbp-50h]
  unsigned __int8 v17; // [rsp+Fh] [rbp-49h]
  __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v17 = *(_BYTE *)(a1 + 584);
  if ( !v17 )
  {
    v3 = *(_QWORD *)(a1 + 496);
    v4 = sub_C715F0(a2);
    v5 = sub_E05EB0(v3, v4);
    if ( !v5 )
      return v17;
    v6 = *(_QWORD *)(v5 + 280);
    v7 = (unsigned __int64 *)(a2 + 32);
    v8 = v6 + 24LL * *(unsigned int *)(v5 + 288);
    if ( v6 != v8 )
    {
      for ( i = *(_QWORD *)(v5 + 280); v8 != i; i += 24 )
      {
        v10 = *v7;
        if ( !*v7 || (*(_DWORD *)v10 & 0x40000) != 0 )
          continue;
        ++v7;
        v11 = 13;
        if ( (*(_BYTE *)(v10 + 1) & 6) == 0 )
        {
          v12 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(v10 + 8));
          if ( !BYTE4(v12) )
          {
            v18[0] = a2 | 4;
            if ( !(unsigned __int8)sub_C80DD0(a1, *(_DWORD *)(i + 8), v18) )
              return v17;
            if ( !(unsigned __int8)sub_C9FC20(a1, v10, v13, v14, v15) )
              return v17;
            v18[0] = a2 | 4;
            if ( !(unsigned __int8)sub_C7EAC0(a1, v18) )
              return v17;
            continue;
          }
          v11 = v12;
        }
        v16 = v11;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v10) )
          return v17;
        v18[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C81290(a1, v16, *(_DWORD *)(i + 8), v18) )
          return v17;
      }
    }
  }
  return 1;
}

