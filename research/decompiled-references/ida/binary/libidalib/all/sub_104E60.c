__int64 __fastcall sub_104E60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a2 + 232);
  if ( v2
    && ((unsigned __int8)sub_15F1A0(*(_QWORD *)(a2 + 232))
     || (v4 = sub_15C4C0(v2 + 592)) != 0 && *(_QWORD *)(v4 + 16) > 1u) )
  {
    return 3;
  }
  else
  {
    return 7;
  }
}

