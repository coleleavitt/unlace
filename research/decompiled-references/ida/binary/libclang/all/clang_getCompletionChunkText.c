__int64 __fastcall clang_getCompletionChunkText(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rsi

  if ( !a1 || (unsigned int)a2 >= *a1 )
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  v5 = 8LL * (unsigned int)a2;
  if ( *(_DWORD *)&a1[v5 + 16] == 2 )
    return sub_690460(a5);
  else
    return sub_6904A0(*(_QWORD *)&a1[v5 + 20]);
}

