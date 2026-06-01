void __fastcall sub_174D90(__int64 a1, TView *a2)
{
  if ( a2 )
  {
    if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)a2) )
      message(a2, 0x100u, 4u, a2);
  }
}

