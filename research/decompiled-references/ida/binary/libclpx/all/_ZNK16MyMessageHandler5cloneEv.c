MyMessageHandler *__fastcall MyMessageHandler::clone(MyMessageHandler *this)
{
  MyMessageHandler *v1; // rbx

  v1 = (MyMessageHandler *)operator new(0x6A0u);
  MyMessageHandler::MyMessageHandler(v1, this);
  return v1;
}

