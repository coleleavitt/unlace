__int64 __fastcall sub_F28760(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rax

  v3 = *(_DWORD *)(a2 + 40);
  v4 = *(_QWORD *)(a1 + 1096);
  if ( v3 == 1 )
  {
    sub_995540(v4, " MT_Enter");
    v4 = *(_QWORD *)(a1 + 1096);
  }
  else if ( v3 )
  {
    if ( v3 == 2 )
    {
      sub_995540(v4, " MT_Link");
      v4 = *(_QWORD *)(a1 + 1096);
    }
  }
  else
  {
    sub_995540(v4, " MT_To");
    v4 = *(_QWORD *)(a1 + 1096);
  }
  v5 = *(_DWORD *)(a2 + 44);
  if ( v5 == 1 )
  {
    sub_995540(v4, " DT_NoHost");
    v4 = *(_QWORD *)(a1 + 1096);
  }
  else if ( v5 )
  {
    if ( v5 == 2 )
    {
      sub_995540(v4, " DT_Any");
      v4 = *(_QWORD *)(a1 + 1096);
    }
  }
  else
  {
    sub_995540(v4, " DT_Host");
    v4 = *(_QWORD *)(a1 + 1096);
  }
  if ( *(_BYTE *)(a2 + 56) )
  {
    sub_995540(v4, " Indirect");
    v4 = *(_QWORD *)(a1 + 1096);
  }
  v6 = sub_995540(v4, " ");
  return sub_227B910(v6, *(unsigned int *)(a2 + 60));
}
