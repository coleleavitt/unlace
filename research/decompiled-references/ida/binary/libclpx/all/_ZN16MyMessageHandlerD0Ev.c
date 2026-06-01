void __fastcall MyMessageHandler::~MyMessageHandler(MyMessageHandler *this)
{
  MyMessageHandler::~MyMessageHandler(this);
  operator delete(this);
}

