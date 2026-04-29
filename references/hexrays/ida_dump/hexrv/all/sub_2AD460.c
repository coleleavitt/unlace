void __fastcall sub_2AD460(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int8 (*v5)(void); // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v4 = *(_QWORD *)(a1 + 40) + 264 * a3;
    v5 = **(unsigned __int8 (***)(void))v4;
    if ( (char *)v5 == (char *)sub_2AA440 )
    {
      if ( *(_DWORD *)(v4 + 120) == *(_DWORD *)(v4 + 248) && !(unsigned int)sub_1332E0(v4 + 8, v4 + 136) )
        return;
    }
    else if ( !v5() )
    {
      return;
    }
    switch_dbctx(*(int *)(a1 + 8));
  }
}
