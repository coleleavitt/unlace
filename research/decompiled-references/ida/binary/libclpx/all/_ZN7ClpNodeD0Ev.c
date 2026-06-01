void __fastcall ClpNode::~ClpNode(ClpNode *this)
{
  ClpNode::~ClpNode(this);
  operator delete(this);
}

