__int64 __fastcall Z3_solver_translate(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r13
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  _DWORD *v11; // r15

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29D620(a1, a2, a3);
  v6 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( v6 )
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, *(_QWORD *)(a3 + 232));
  v7 = sub_186B270(0x80u);
  sub_2518F0(v7, a3);
  *(_QWORD *)(v7 + 24) = v6;
  *(_QWORD *)v7 = &off_1C4CC50;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  sub_1857380(v7 + 48);
  v8 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v7 + 112) = 0;
  *(_OWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 120) = 0;
  *(_OWORD *)(v7 + 80) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  *(_OWORD *)(v7 + 96) = 0;
  if ( !v8 )
  {
    sub_2A74C0(a1, a2);
    v8 = *(_QWORD *)(a2 + 32);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 80LL))(v8, *(_QWORD *)(a3 + 232), a2 + 40);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 48);
  v11 = *(_DWORD **)(v7 + 32);
  if ( v11 )
  {
    if ( v11[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v11)(v11);
      sub_186B220(v11);
    }
  }
  *(_QWORD *)(v7 + 32) = v10;
  sub_24FBE0(a3, v7);
  sub_2AF8D0(a3, v7);
  if ( v5 )
  {
    sub_2BB620(v7);
    byte_1C7EBA0 = 1;
  }
  return v7;
}

