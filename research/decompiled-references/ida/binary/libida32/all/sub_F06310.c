void __fastcall sub_F06310(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _BYTE *v3; // rax

  if ( *(_QWORD *)(a1 + 1136) )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " <");
    sub_F06060(a1, a2);
    if ( HIDWORD(a2) != (_DWORD)a2 )
    {
      sub_971800(*(_QWORD *)(a1 + 1096), ", ");
      sub_F06060(a1, SHIDWORD(a2));
    }
    v2 = *(_QWORD *)(a1 + 1096);
    v3 = *(_BYTE **)(v2 + 32);
    if ( *(_BYTE **)(v2 + 24) == v3 )
    {
      sub_22581D0(v2, ">", 1);
    }
    else
    {
      *v3 = 62;
      ++*(_QWORD *)(v2 + 32);
    }
  }
}

