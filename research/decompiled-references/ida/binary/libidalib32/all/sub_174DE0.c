__int64 __fastcall sub_174DE0(__int64 a1, TView *a2, char a3)
{
  TView *v4; // rbx
  __int64 Key; // rdx
  __int64 result; // rax

  v4 = a2;
  Key = TFileList::getKey((TFileList *)TProgram::application, (const char *)a2);
  result = 0;
  if ( Key && *((_QWORD *)a2 + 7) )
  {
    TView::select(a2);
    if ( a3 && *((_QWORD *)a2 + 7) )
    {
      do
      {
        TView::makeFirst(v4);
        v4 = *((TView **)v4 + 7);
      }
      while ( *((_QWORD *)v4 + 7) );
    }
    return 1;
  }
  return result;
}

