__int64 __fastcall ClpNodeStuff::maximumNodes(ClpNodeStuff *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 40);
  result = 0;
  if ( v1 != -1 )
    return (unsigned int)(~v1 + *((_DWORD *)this + 37));
  return result;
}

