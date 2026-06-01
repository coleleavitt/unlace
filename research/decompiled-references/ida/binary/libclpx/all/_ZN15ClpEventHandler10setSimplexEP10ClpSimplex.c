void __fastcall ClpEventHandler::setSimplex(ClpEventHandler *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 1) = a2;
}

