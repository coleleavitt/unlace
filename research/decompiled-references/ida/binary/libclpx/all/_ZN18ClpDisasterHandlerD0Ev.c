void __fastcall ClpDisasterHandler::~ClpDisasterHandler(ClpDisasterHandler *this)
{
  ClpDisasterHandler::~ClpDisasterHandler(this);
  operator delete(this);
}

