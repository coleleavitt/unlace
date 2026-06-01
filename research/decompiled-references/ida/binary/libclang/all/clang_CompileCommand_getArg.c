__int64 __fastcall clang_CompileCommand_getArg(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1
    && (a3 = *(_QWORD *)(a1 + 64),
        a2 = (unsigned int)a2,
        (unsigned int)a2 < (unsigned __int64)((*(_QWORD *)(a1 + 72) - a3) >> 5)) )
  {
    return sub_6904A0(*(_QWORD *)(a3 + 32LL * (unsigned int)a2));
  }
  else
  {
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  }
}

