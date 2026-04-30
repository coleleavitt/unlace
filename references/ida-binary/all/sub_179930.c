__int64 __fastcall sub_179930(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a2 + 232);
  if ( v2
    && ((unsigned __int8)sub_1EC200(*(_QWORD *)(a2 + 232))
     || (v4 = sub_1E8D00(v2 + 576)) != 0 && *(_QWORD *)(v4 + 16) > 1u) )
  {
    return 3;
  }
  else
  {
    return 7;
  }
}
