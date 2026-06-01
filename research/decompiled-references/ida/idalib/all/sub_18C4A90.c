char __fastcall sub_18C4A90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rdi
  _QWORD *v21; // rsi
  __int64 v22; // rax

  v6 = sub_B9ACA0(a2);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v8 = v6;
    v6 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) != 0 )
      v6 = *(_QWORD *)v6;
    if ( *(_QWORD *)(a1 + 544) != v6 )
    {
      v9 = *(_BYTE *)(v6 + 8) & 0x7F;
      if ( v9 > 0x12u )
      {
        if ( ((v9 + 94) & 0x7Fu) > 5 )
          return v6;
      }
      else
      {
        v6 = 1LL << v9;
        if ( ((1LL << v9) & 0x40182) == 0 )
          return v6;
      }
      LOBYTE(v6) = sub_9B48E0(v8);
      if ( (_BYTE)v6 )
      {
        v6 = sub_15F2610(a1, 1, v10, v11, v12, v13);
        v18 = v6;
        if ( v6 )
        {
          v19 = *(_QWORD *)(v6 + 1592);
          if ( !v19 )
            goto LABEL_21;
          v20 = v19 + 72;
          v21 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v21 = (_QWORD *)*v21;
          LOBYTE(v6) = sub_B91990(v20, (__int64)v21, v14, v15, v16, v17);
          if ( !(_BYTE)v6 )
          {
LABEL_21:
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 > 1
              || (LOBYTE(v6) = sub_B7D2B0(v8, *(_QWORD *)(a1 + 248)), !(_BYTE)v6) )
            {
              v22 = sub_BFB9F0(a3);
              LOBYTE(v6) = sub_14B7B40(v18 + 1664, v22);
            }
          }
        }
      }
    }
  }
  return v6;
}
