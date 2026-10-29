_QWORD *__fastcall Z3_mk_goal(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  char v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 v12; // [rsp+8h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29C400(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a4 && !*(_DWORD *)(*(_QWORD *)(a1 + 232) + 712LL) )
  {
    sub_24EA30(a1, 3u, "proofs are required, but proofs are not enabled on the context");
    if ( !v6 )
      return nullptr;
    sub_2BB620(0);
    v7 = nullptr;
LABEL_13:
    byte_1C7EBA0 = 1;
    return v7;
  }
  v7 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v7, a1);
  v7[3] = 0;
  *v7 = &off_1C4C8C0;
  v12 = sub_186B270(0x80u);
  sub_ED2A30(v12, *(_QWORD *)(a1 + 232), a4, a2, a3);
  v8 = v12;
  v9 = (_DWORD *)v7[3];
  ++*(_DWORD *)(v12 + 32);
  if ( v9 )
  {
    if ( v9[8]-- == 1 )
    {
      sub_ED44E0(v9);
      sub_186B220(v9);
      v8 = v12;
    }
  }
  v7[3] = v8;
  sub_24FBE0(a1, (__int64)v7);
  if ( v6 )
  {
    sub_2BB620(v7);
    goto LABEL_13;
  }
  return v7;
}

