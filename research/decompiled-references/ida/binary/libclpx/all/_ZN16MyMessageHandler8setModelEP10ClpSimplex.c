void __fastcall MyMessageHandler::setModel(MyMessageHandler *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 200) = a2;
}

