__int64 __fastcall sub_226FF0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rdi
  __int64 v5; // rax

  if ( !a3 )
    return 0;
  if ( *(_QWORD *)(a3 + 24) && (v4 = *(_BYTE **)(a3 + 16), *v4) )
  {
    v5 = qbasename(v4);
    qstrncpy(a1, v5, a2);
    return a1;
  }
  else
  {
    qsnprintf(a1, a2, "debug%03d", ++dword_8CC06C);
    return a1;
  }
}
