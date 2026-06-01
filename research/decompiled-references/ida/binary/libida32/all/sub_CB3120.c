__int64 __fastcall sub_CB3120(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 i; // r15
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // [rsp+8h] [rbp-50h]
  unsigned __int8 v18; // [rsp+Fh] [rbp-49h]
  _QWORD v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v18 = *(_BYTE *)(a1 + 1360);
  if ( !v18 )
  {
    v3 = *(_QWORD *)(a1 + 1272);
    v4 = sub_C715F0(a2);
    v5 = sub_E05EB0(v3, v4);
    if ( !v5 )
      return v18;
    v6 = *(_QWORD *)(v5 + 280);
    v7 = (unsigned __int64 *)(a2 + 32);
    v8 = v6 + 24LL * *(unsigned int *)(v5 + 288);
    if ( v6 != v8 )
    {
      for ( i = *(_QWORD *)(v5 + 280); v8 != i; i += 24 )
      {
        v11 = *v7;
        if ( !*v7 || (*(_DWORD *)v11 & 0x40000) != 0 )
          continue;
        ++v7;
        v12 = 13;
        if ( (*(_BYTE *)(v11 + 1) & 6) == 0 )
        {
          v13 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v11 + 8));
          if ( !BYTE4(v13) )
          {
            v19[0] = a2 | 4;
            if ( !(unsigned __int8)sub_CE2540(a1, *(unsigned int *)(i + 8), v19) )
              return v18;
            if ( !(unsigned __int8)sub_CB2E50(a1, v11, v14, v15, v16) )
              return v18;
            v19[0] = a2 | 4;
            if ( !(unsigned __int8)sub_CE3FA0(a1, v19) )
              return v18;
            continue;
          }
          v12 = v13;
        }
        v17 = v12;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v11) )
          return v18;
        v19[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D02F80(a1, v17, *(unsigned int *)(i + 8), v19, v10) )
          return v18;
      }
    }
  }
  return 1;
}

