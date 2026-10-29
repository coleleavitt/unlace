void __fastcall ClpEventHandler::~ClpEventHandler(ClpEventHandler *this)
{
  ClpEventHandler::~ClpEventHandler(this);
  operator delete(this);
}

