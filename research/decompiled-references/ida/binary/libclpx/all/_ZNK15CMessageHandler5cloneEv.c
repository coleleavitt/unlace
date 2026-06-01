CMessageHandler *__fastcall CMessageHandler::clone(CMessageHandler *this)
{
  CMessageHandler *v1; // rbx

  v1 = (CMessageHandler *)operator new(0x658u);
  CMessageHandler::CMessageHandler(v1, this);
  return v1;
}

