__int64 __fastcall ClpNode::way(ClpNode *this)
{
  __int64 result; // rax

  result = *((_BYTE *)this + 112) & 1;
  if ( (*((_BYTE *)this + 112) & 6) != 0 )
    result = (unsigned int)(1 - result);
  if ( !(_DWORD)result )
    return 0xFFFFFFFFLL;
  return result;
}

