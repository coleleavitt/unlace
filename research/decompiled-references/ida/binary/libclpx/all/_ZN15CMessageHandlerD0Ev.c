void __fastcall CMessageHandler::~CMessageHandler(CMessageHandler *this)
{
  CMessageHandler::~CMessageHandler(this);
  operator delete(this);
}

