__int64 __fastcall sub_CD690(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  void *v5; // rdi
  int v7; // ecx

  if ( a1 )
  {
    v2 = qword_251410;
    v3 = qword_251410 + 232 * xmmword_251418;
    if ( qword_251410 != v3 )
    {
      while ( a1 != *(_DWORD *)v2 )
      {
        v2 += 232;
        if ( v3 == v2 )
          goto LABEL_9;
      }
      if ( v2 )
      {
        v4 = *(_QWORD *)(v2 + 184);
        if ( v4 )
        {
          v7 = *(_DWORD *)(*(_QWORD *)(v2 + 176) + 4 * v4 - 4);
          *(_QWORD *)(v2 + 184) = v4 - 1;
          *(_DWORD *)(v2 + 200) = v7;
        }
      }
    }
  }
LABEL_9:
  if ( (_QWORD)xmmword_2515D8 )
  {
    copy_debug_event();
    if ( (_QWORD)xmmword_2515D8 )
    {
      *(_QWORD *)&xmmword_2515D8 = xmmword_2515D8 - 1;
      free_debug_event();
    }
    copy_debug_event();
    free_debug_event();
  }
  v5 = qword_2515B0;
  *(_DWORD *)qword_2515B0 = a1;
  return sub_CC780((__int64)v5, 22);
}

