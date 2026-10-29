__int64 __fastcall ClpNode::changeState(ClpNode *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = (2 * (*((_BYTE *)this + 112) >> 1) + 2) & 6;
  result = v1 | *((_BYTE *)this + 112) & 0xF9u;
  *((_BYTE *)this + 112) = v1 | *((_BYTE *)this + 112) & 0xF9;
  return result;
}

