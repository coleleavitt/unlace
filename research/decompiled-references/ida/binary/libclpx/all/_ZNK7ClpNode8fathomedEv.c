bool __fastcall ClpNode::fathomed(ClpNode *this)
{
  return (*((_BYTE *)this + 112) & 6) != 0;
}

