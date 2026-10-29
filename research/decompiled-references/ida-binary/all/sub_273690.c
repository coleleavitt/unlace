void __fastcall sub_273690(__int64 a1, int a2)
{
  bool v2; // si
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a2 != 1 )
  {
    v2 = a2 == 2;
    goto LABEL_3;
  }
  v4 = sub_277DF0();
  v2 = 0;
  if ( !v4 || (v5 = *(_QWORD *)(v4 + 112)) == 0 )
  {
LABEL_3:
    v3 = *(_QWORD *)(a1 + 56);
    if ( !v3 )
      return;
    goto LABEL_4;
  }
  v3 = *(_QWORD *)(a1 + 56);
  v2 = !(*(_BYTE *)(v5 + 49) & 1);
  if ( v3 )
LABEL_4:
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v3 + 104LL))(v3, v2);
}
