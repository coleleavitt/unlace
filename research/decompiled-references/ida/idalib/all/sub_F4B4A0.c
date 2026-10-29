__int64 __fastcall sub_F4B4A0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rbx
  const char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  const char *v13; // rax
  __int64 v14; // rax

  v2 = *(_BYTE *)(a1 + 1104);
  v3 = *(_QWORD *)(a1 + 1096);
  if ( a2 )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 24LL))(*(_QWORD *)(a1 + 1096), 2, 1, 0);
      v12 = *(_QWORD *)(a1 + 1096);
      v13 = (const char *)sub_B88090(a2);
      v14 = sub_995540(v12, v13);
      sub_995540(v14, "Decl");
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    }
    else
    {
      v4 = (const char *)sub_B88090(a2);
      v5 = sub_995540(v3, v4);
      sub_995540(v5, "Decl");
    }
    sub_F29AE0(a1, a2);
    v6 = *(_QWORD *)(a2 + 16);
    if ( (v6 & 4) != 0 && *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL) != *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 8) )
    {
      v7 = sub_995540(*(_QWORD *)(a1 + 1096), " parent ");
      v8 = *(_QWORD *)(a2 + 16);
      v9 = v7;
      if ( (v8 & 4) != 0 )
        v10 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = sub_B8C1B0(v10);
      sub_227B9B0(v9, v11);
    }
    __asm { jmp     rax }
  }
  if ( !v2 )
    return sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 0, 0);
  sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
}
