__int64 __fastcall sub_E4E120(__int64 a1)
{
  __int64 v1; // rdi
  __int64 (*v2)(void); // rax
  __int64 v3; // rdi
  __int64 (*v4)(void); // rdx

  if ( *(_BYTE *)(a1 + 98) )
    v1 = *(_QWORD *)(a1 + 104);
  else
    v1 = *(_QWORD *)(a1 + 112);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 40LL);
  if ( v2 != sub_E4E120 )
    return v2();
  if ( !*(_BYTE *)(v1 + 98) )
  {
    v3 = *(_QWORD *)(v1 + 112);
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 40LL);
    if ( v4 == v2 )
      goto LABEL_6;
    return v4();
  }
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 40LL);
  if ( v4 != v2 )
    return v4();
LABEL_6:
  if ( *(_BYTE *)(v3 + 98) )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 104) + 40LL))(*(_QWORD *)(v3 + 104));
  else
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 112) + 40LL))(*(_QWORD *)(v3 + 112));
}

