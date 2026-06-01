__int64 __fastcall sub_1C3E180(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // r12
  unsigned int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rax

  if ( !a2 || !a3 )
    return 1;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x9A )
    return sub_1A86060(*(_QWORD *)(a1 + 736), a2, a3);
  *(_QWORD *)(a2 + 64) = a3;
  sub_16C7120((__int64 *)a1, *(_DWORD *)(a2 + 84), a3, 0x1AD6u);
  if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) )
  {
    v5 = *(_QWORD *)(a1 + 264);
    v6 = *(_DWORD *)(a2 + 72);
    v7 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int8)sub_FD3830(v7, 0x1AF5u, v6, v5, v3, v4) != 1
      || (unsigned __int8)sub_FD3830(v7, 0x1AF7u, v6, v5, v8, v9) != 1
      || (unsigned __int8)sub_FD3830(v7, 0x1AF6u, v6, v5, v10, v11) != 1 )
    {
      v12 = sub_EF23C0(a2);
      v17 = v12;
      if ( v12 )
      {
        v18 = *(_QWORD *)(v12 + 48);
        if ( !sub_F62670(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v13, v14, v15, v16) )
        {
          v19 = sub_B73640(v17);
          if ( v19 )
          {
            if ( (int)sub_C00A40(v19, 0, v20, v21, v22) >= 0 )
            {
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 43 > 1 )
              {
                if ( (v18 & 1) != 0 || (byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
                  sub_1C3D080(a1, v17);
              }
              else
              {
                v23 = sub_EF2380(a2);
                sub_1C3DC80(a1, v17, *(_QWORD *)(v23 + 8));
              }
            }
          }
        }
      }
    }
  }
  return a2;
}
