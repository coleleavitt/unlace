__int64 __fastcall dyld4::ObjCStringTable::getPotentialTarget(dyld4::ObjCStringTable *this, char *a2)
{
  unsigned int Index; // w0

  Index = dyld4::ObjCStringTable::getIndex(this, a2);
  if ( Index == -1 )
    return 0;
  if ( *(_DWORD *)this <= Index )
    dyld4::ObjCStringTable::getPotentialTarget();
  return *(_QWORD *)((char *)this + 8 * Index + *((unsigned int *)this + 4) + *((unsigned int *)this + 5) + 1056);
}
