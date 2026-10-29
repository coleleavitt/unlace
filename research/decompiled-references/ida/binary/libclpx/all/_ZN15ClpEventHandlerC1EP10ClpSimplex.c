// Alternative name is '_ZN15ClpEventHandlerC2EP10ClpSimplex'
void __fastcall ClpEventHandler::ClpEventHandler(ClpEventHandler *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = off_4D0458;
}

