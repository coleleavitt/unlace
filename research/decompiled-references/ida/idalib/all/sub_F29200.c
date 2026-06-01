__int64 __fastcall sub_F29200(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  size_t v4; // rax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a2 + 40);
  v3 = *(_QWORD *)(a1 + 1096);
  if ( v2 == 1 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " NonNullError");
    v3 = *(_QWORD *)(a1 + 1096);
  }
  else if ( v2 )
  {
    if ( v2 == 2 )
    {
      sub_995540(*(_QWORD *)(a1 + 1096), " ZeroArgument");
      v3 = *(_QWORD *)(a1 + 1096);
    }
    else if ( v2 == 3 )
    {
      sub_995540(*(_QWORD *)(a1 + 1096), " NonZeroArgument");
      v3 = *(_QWORD *)(a1 + 1096);
    }
  }
  else
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " None");
    v3 = *(_QWORD *)(a1 + 1096);
  }
  v4 = j__strlen(" ");
  v5 = sub_9954E0(v3, " ", v4);
  return sub_227B910(v5, *(unsigned int *)(a2 + 44));
}
