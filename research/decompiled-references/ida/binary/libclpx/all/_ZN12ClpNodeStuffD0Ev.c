void __fastcall ClpNodeStuff::~ClpNodeStuff(ClpNodeStuff *this)
{
  ClpNodeStuff::~ClpNodeStuff(this);
  operator delete(this);
}

