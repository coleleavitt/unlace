__int64 __fastcall sub_CEC40(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  void *v5; // rdi
  int v7; // ecx

  if ( a1 )
  {
    v2 = qword_252590;
    v3 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
    if ( qword_252590 != v3 )
    {
      while ( a1 != *(_DWORD *)v2 )
      {
        v2 += 256;
        if ( v3 == v2 )
          goto LABEL_9;
      }
      if ( v2 )
      {
        v4 = *(_QWORD *)(v2 + 200);
        if ( v4 )
        {
          v7 = *(_DWORD *)(*(_QWORD *)(v2 + 192) + 4 * v4 - 4);
          *(_QWORD *)(v2 + 200) = v4 - 1;
          *(_DWORD *)(v2 + 216) = v7;
        }
      }
    }
  }
LABEL_9:
  if ( (_QWORD)xmmword_252778 )
  {
    copy_debug_event();
    if ( (_QWORD)xmmword_252778 )
    {
      *(_QWORD *)&xmmword_252778 = xmmword_252778 - 1;
      free_debug_event();
    }
    copy_debug_event();
    free_debug_event();
  }
  v5 = qword_252758;
  *(_DWORD *)qword_252758 = a1;
  return sub_CDCF0((__int64)v5, 22);
}

