__int64 __fastcall ClpSimplex::setFlagged(ClpSimplex *this, int a2)
{
  __int64 result; // rax
  _DWORD v3[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v3[0] = a2;
  *(_BYTE *)(*((_QWORD *)this + 33) + a2) |= 0x40u;
  (*(void (__fastcall **)(_QWORD, ClpSimplex *, __int64, _DWORD *))(**((_QWORD **)this + 24) + 320LL))(
    *((_QWORD *)this + 24),
    this,
    7,
    v3);
  result = *((unsigned int *)this + 77);
  *((_DWORD *)this + 333) = result;
  return result;
}

