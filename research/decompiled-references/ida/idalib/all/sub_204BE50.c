void __fastcall sub_204BE50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  *(_QWORD *)(a2 + 40) = 0;
  if ( (*(_BYTE *)(a2 + 7) & 0x10) != 0 && a1 != 48 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 112);
      if ( v3 )
      {
        v4 = sub_20CBB10(a2);
        sub_20CDE20(v3, v4, v5, v6, v7, v8);
      }
    }
  }
}
