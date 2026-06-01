bool __fastcall dyld4::PrebuiltLoader::recordedCdHashIs(dyld4::PrebuiltLoader *this, const unsigned __int8 *a2)
{
  _BOOL8 result; // x0
  char *v4; // x8

  result = 0;
  if ( this && *((_WORD *)this + 9) )
  {
    v4 = (char *)this + *((unsigned __int16 *)this + 9);
    return v4[61]
        && (*((_QWORD *)v4 + 3) ^ *(_QWORD *)a2
          | *((_QWORD *)v4 + 4) ^ *((_QWORD *)a2 + 1)
          | (unsigned int)(*((_DWORD *)v4 + 10) ^ *((_DWORD *)a2 + 4))) == 0;
  }
  return result;
}
