void __fastcall sub_F06F30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = sub_971800(*(_QWORD *)(a1 + 1096), " \"");
  v3 = sub_9717A0(v2, *(const void **)(a2 + 56), *(unsigned int *)(a2 + 48));
  sub_971800(v3, "\"");
  v4 = *(_DWORD *)(a2 + 64);
  if ( v4 )
  {
    if ( v4 == 1 )
      sub_971800(*(_QWORD *)(a1 + 1096), " DS_warning");
  }
  else
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " DS_error");
  }
  v5 = sub_971800(*(_QWORD *)(a1 + 1096), " \"");
  v6 = sub_9717A0(v5, *(const void **)(a2 + 72), *(unsigned int *)(a2 + 68));
  sub_971800(v6, "\"");
  if ( *(_BYTE *)(a2 + 80) )
    sub_971800(*(_QWORD *)(a1 + 1096), " ArgDependent");
  sub_971800(*(_QWORD *)(a1 + 1096), " ");
  sub_F06990(a1, *(_QWORD *)(a2 + 88));
}

