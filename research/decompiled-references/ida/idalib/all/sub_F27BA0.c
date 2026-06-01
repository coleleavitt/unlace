__int64 __fastcall sub_F27BA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = sub_995540(*(_QWORD *)(a1 + 1096), " \"");
  v4 = sub_9954E0(v3, *(const void **)(a2 + 48), *(unsigned int *)(a2 + 40));
  sub_995540(v4, "\"");
  v5 = sub_995540(*(_QWORD *)(a1 + 1096), " \"");
  v6 = sub_9954E0(v5, *(const void **)(a2 + 64), *(unsigned int *)(a2 + 56));
  sub_995540(v6, "\"");
  if ( *(_BYTE *)(a2 + 72) )
    sub_995540(*(_QWORD *)(a1 + 1096), " GeneratedDeclaration");
  v7 = sub_995540(*(_QWORD *)(a1 + 1096), " \"");
  v8 = sub_9954E0(v7, *(const void **)(a2 + 80), *(unsigned int *)(a2 + 76));
  return sub_995540(v8, "\"");
}
