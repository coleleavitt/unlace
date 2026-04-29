dyld4::RuntimeState *__fastcall dyld4::Loader::interpose(
        dyld4::Loader *this,
        dyld4::RuntimeState *a2,
        dyld4::Loader *a3,
        const dyld4::Loader *a4)
{
  dyld4::RuntimeState *v4; // x19
  __int64 v6; // x8
  dyld4::RuntimeState **v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x9
  __int64 v14; // x9
  __int64 v15; // x9
  dyld4::RuntimeState *v16; // x22
  const char *v17; // x0

  v4 = a2;
  if ( a2 )
  {
    v6 = *((_QWORD *)this + 26);
    if ( v6 )
    {
      v7 = *((dyld4::RuntimeState ***)this + 25);
      v8 = 16 * v6;
      while ( v7[1] != a2 )
      {
        v7 += 2;
        v8 -= 16;
        if ( !v8 )
          goto LABEL_6;
      }
      goto LABEL_21;
    }
LABEL_6:
    v9 = *((_QWORD *)this + 34);
    if ( v9 )
    {
      v7 = *((dyld4::RuntimeState ***)this + 33);
      v10 = 16 * v9;
      while ( v7[1] != a2 )
      {
        v7 += 2;
        v10 -= 16;
        if ( !v10 )
          goto LABEL_10;
      }
LABEL_21:
      v11 = *((_QWORD *)this + 1);
      goto LABEL_22;
    }
LABEL_10:
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 175) )
    {
      v12 = *((_QWORD *)this + 22);
      if ( v12 )
      {
        v7 = (dyld4::RuntimeState **)(*((_QWORD *)this + 21) + 8LL);
        v13 = 24 * v12;
        while ( v7[1] != a2 || *(v7 - 1) != a3 )
        {
          v7 += 3;
          v13 -= 24;
          if ( !v13 )
            goto LABEL_16;
        }
        if ( !*(_BYTE *)(v11 + 186) )
          return *v7;
        v16 = *v7;
        goto LABEL_24;
      }
LABEL_16:
      v14 = *((_QWORD *)this + 18);
      if ( v14 )
      {
        v7 = *((dyld4::RuntimeState ***)this + 17);
        v15 = 16 * v14;
        while ( v7[1] != a2 )
        {
          v7 += 2;
          v15 -= 16;
          if ( !v15 )
            return v4;
        }
LABEL_22:
        if ( !*(_BYTE *)(v11 + 186) )
          return *v7;
        v16 = *v7;
        if ( !a3 )
        {
          v17 = "dlsym";
          goto LABEL_26;
        }
LABEL_24:
        v17 = (const char *)dyld4::Loader::path(a3);
LABEL_26:
        dyld4::RuntimeState::log(this, "  interpose replaced 0x%08lX with 0x%08lX in %s\n", v4, v16, v17);
        return *v7;
      }
    }
  }
  return v4;
}
