// Alternative name is '_ZN18ClpDisasterHandlerC1EP10ClpSimplex'
void __fastcall ClpDisasterHandler::ClpDisasterHandler(ClpDisasterHandler *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &off_4D0490;
}

