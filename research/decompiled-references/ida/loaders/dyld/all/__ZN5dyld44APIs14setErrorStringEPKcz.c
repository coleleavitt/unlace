__int64 dyld4::APIs::setErrorString(__int64 this, char *a2, ...)
{
  __int64 v3; // x20
  vm_address_t v4; // x19
  const char *v5; // x0
  size_t v6; // x22
  size_t *v7; // x0
  __int64 v8; // x21
  const char *v9; // x0

  if ( *(_QWORD *)(this + 808) )
  {
    if ( *((_BYTE *)&dword_18 + (_QWORD)gProcessInfo + 1) )
    {
      v3 = this;
      this = _simple_salloc();
      if ( this )
      {
        v4 = this;
        _simple_vsprintf(this, a2);
        v5 = (const char *)_simple_string(v4);
        v6 = _platform_strlen(v5) + 17;
        v7 = (size_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 120) + 64LL))(
                         *(_QWORD *)(v3 + 120),
                         *(_QWORD *)(v3 + 808));
        if ( v7 )
        {
          v8 = (__int64)v7;
          if ( *v7 >= v6 )
          {
LABEL_10:
            v9 = (const char *)_simple_string(v4);
            strcpy((char *)(v8 + 9), v9);
            *(_BYTE *)(v8 + 8) = 1;
            return _simple_sfree(v4);
          }
          (*(void (__fastcall **)(_QWORD, size_t *))(**(_QWORD **)(v3 + 120) + 16LL))(*(_QWORD *)(v3 + 120), v7);
        }
        if ( v6 <= 0x100 )
          v6 = 256;
        v8 = (*(__int64 (__fastcall **)(_QWORD, size_t))(**(_QWORD **)(v3 + 120) + 8LL))(*(_QWORD *)(v3 + 120), v6);
        *(_QWORD *)v8 = v6;
        *(_BYTE *)(v8 + 8) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v3 + 120) + 72LL))(
          *(_QWORD *)(v3 + 120),
          *(_QWORD *)(v3 + 808),
          v8);
        goto LABEL_10;
      }
    }
  }
  return this;
}
