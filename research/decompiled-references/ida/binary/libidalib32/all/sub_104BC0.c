__int64 __fastcall sub_104BC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a2 + 224);
  if ( v2
    && ((unsigned __int8)sub_15E860(*(_QWORD *)(a2 + 224))
     || (v4 = sub_15BC00(v2 + 592)) != 0 && *(_QWORD *)(v4 + 16) > 1u) )
  {
    return 3;
  }
  else
  {
    return 7;
  }
}

