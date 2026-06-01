_WORD *__fastcall dyld4::PrebuiltLoader::recursiveMarkBeingValidated(_WORD *this, const dyld4::RuntimeState *a2)
{
  __int16 v2; // w9
  char *v3; // x8
  __int64 v4; // x8
  __int64 v5; // x9
  _WORD *v6; // x20
  char v8; // w23
  unsigned int v9; // w21
  _WORD *v10; // x22
  __int16 v11; // w8
  char *v12; // x9
  __int16 v13; // w8
  char *v14; // x9

  v2 = *(this + 3);
  if ( v2 >= 0 )
    v3 = (char *)a2 + 664;
  else
    v3 = (char *)a2 + 688;
  v4 = *(_QWORD *)v3;
  v5 = v2 & 0x7FFF;
  if ( !*(_BYTE *)(v4 + v5) )
  {
    v6 = this;
    *(_BYTE *)(v4 + v5) = 1;
    if ( *(this + 12) )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        this = (_WORD *)dyld4::PrebuiltLoader::dependent(v6, a2, v9, nullptr);
        if ( this )
        {
          v10 = this;
          if ( (*(this + 2) & 1) == 0 )
            dyld4::PrebuiltLoader::recursiveMarkBeingValidated();
          this = (_WORD *)dyld4::PrebuiltLoader::recursiveMarkBeingValidated((dyld4::PrebuiltLoader *)this, a2);
          v11 = v10[3];
          if ( v11 >= 0 )
            v12 = (char *)a2 + 664;
          else
            v12 = (char *)a2 + 688;
          v8 |= *(unsigned __int8 *)(*(_QWORD *)v12 + (v11 & 0x7FFF)) == 255;
        }
        ++v9;
      }
      while ( v9 < (unsigned __int16)v6[12] );
      if ( (v8 & 1) != 0 )
      {
        v13 = v6[3];
        if ( v13 >= 0 )
          v14 = (char *)a2 + 664;
        else
          v14 = (char *)a2 + 688;
        *(_BYTE *)(*(_QWORD *)v14 + (v13 & 0x7FFF)) = -1;
      }
    }
  }
  return this;
}
