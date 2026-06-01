__int64 __fastcall Z3_solver_add_simplifier(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  char v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rax
  _DWORD *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rbx
  bool v11; // zf

  v3 = a3;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_29CDA0(a1, a2, a3);
    v6 = *(_QWORD *)(a2 + 32);
    if ( v6 )
    {
LABEL_3:
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 80LL))(
             v6,
             *(_QWORD *)(a1 + 232),
             a2 + 40);
      v8 = (_DWORD *)v7;
      if ( v7 )
      {
        ++*(_DWORD *)(v7 + 48);
        goto LABEL_5;
      }
LABEL_18:
      sub_24EA30(a1, 3u, "unexpected empty solver state");
      if ( !v5 )
        return 0;
      sub_2BB620(0);
      goto LABEL_30;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 32);
    if ( v6 )
      goto LABEL_3;
  }
  sub_2A74C0(a1, a2);
  v8 = *(_DWORD **)(a2 + 32);
  if ( !v8 )
    goto LABEL_18;
  if ( !v8[12] )
  {
    (**(void (__fastcall ***)(_QWORD))v8)(*(_QWORD *)(a2 + 32));
    sub_186B220(v8);
  }
  *(_QWORD *)(a2 + 32) = 0;
LABEL_5:
  if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 232LL))(v8) )
  {
    sub_24EA30(a1, 3u, "adding a simplifier to a solver with assertions is not allowed.");
    if ( !v5 )
    {
      v11 = v8[12]-- == 1;
      if ( v11 )
      {
        v10 = 0;
        goto LABEL_23;
      }
      return 0;
    }
    sub_2BB620(0);
    v11 = v8[12]-- == 1;
    if ( v11 )
    {
      v10 = 0;
      goto LABEL_28;
    }
LABEL_30:
    v10 = 0;
    goto LABEL_25;
  }
  if ( v3 )
    v3 += 24;
  v9 = sub_E4FC20(v8, v3);
  v10 = sub_186B270(0x80u);
  sub_2518F0(v10, a1);
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)v10 = &off_1C4CC50;
  *(_QWORD *)(v10 + 32) = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 48);
  *(_QWORD *)(v10 + 40) = 0;
  sub_1857380(v10 + 48);
  *(_QWORD *)(v10 + 112) = 0;
  *(_QWORD *)(v10 + 120) = 0;
  *(_OWORD *)(v10 + 64) = 0;
  *(_OWORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 56) = 0;
  *(_OWORD *)(v10 + 96) = 0;
  sub_24FBE0(a1, v10);
  if ( v5 )
  {
    sub_2BB620(v10);
    v11 = v8[12]-- == 1;
    if ( !v11 )
    {
LABEL_25:
      byte_1C7EBA0 = 1;
      return v10;
    }
LABEL_28:
    (**(void (__fastcall ***)(_DWORD *))v8)(v8);
    sub_186B220(v8);
    goto LABEL_25;
  }
  v11 = v8[12]-- == 1;
  if ( v11 )
  {
LABEL_23:
    (**(void (__fastcall ***)(_DWORD *))v8)(v8);
    sub_186B220(v8);
  }
  return v10;
}

