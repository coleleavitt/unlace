__int64 __fastcall sub_D155A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( result )
    return sub_18183E0(a2, "rewriter.steps", *(unsigned int *)(result + 24));
  return result;
}

