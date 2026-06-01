bool *__fastcall dyld4::Loader::InitialOptions::InitialOptions(bool *this, const dyld4::Loader *a2)
{
  *this = (*((_BYTE *)a2 + 4) & 2) != 0;
  *(this + 1) = (*((_BYTE *)a2 + 4) & 4) != 0;
  *(this + 2) = (*((_BYTE *)a2 + 4) & 8) != 0;
  *(this + 3) = (*((_BYTE *)a2 + 4) & 0x10) != 0;
  *(this + 4) = (*((_BYTE *)a2 + 4) & 0x20) != 0;
  *(this + 5) = (*((_BYTE *)a2 + 4) & 0x40) != 0;
  *(this + 6) = *((_BYTE *)a2 + 4) >> 7;
  *(this + 7) = *((_BYTE *)a2 + 5) & 1;
  return this;
}
