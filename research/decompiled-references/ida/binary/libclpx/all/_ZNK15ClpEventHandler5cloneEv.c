ClpEventHandler *__fastcall ClpEventHandler::clone(ClpEventHandler *this)
{
  ClpEventHandler *v1; // rbx

  v1 = (ClpEventHandler *)operator new(0x10u);
  ClpEventHandler::ClpEventHandler(v1, this);
  return v1;
}

