__int64 __fastcall sub_F2C780(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  const char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // r12
  const char *v9; // rax
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  if ( *(_BYTE *)(a1 + 1104) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 1096), 2, 1, 0);
    v3 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
    v4 = (const char *)sub_B88090(*(_QWORD *)(a2 + 16));
    v5 = sub_995540(v3, v4);
    sub_995540(v5, "Decl");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  else
  {
    v8 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
    v9 = (const char *)sub_B88090(*(_QWORD *)(a2 + 16));
    v10 = sub_995540(v8, v9);
    sub_995540(v10, "Decl");
  }
  v6 = sub_995540(*(_QWORD *)(a1 + 1096), "='");
  sub_B72CF0(*(_QWORD *)(a2 + 16), v6);
  sub_995540(v6, "'");
  result = sub_F29AE0(a1, *(_QWORD *)(a2 + 16));
  if ( (*(_BYTE *)(a2 + 40) & 2) != 0 )
    return sub_995540(*(_QWORD *)(a1 + 1096), " isFreeIvar");
  return result;
}
