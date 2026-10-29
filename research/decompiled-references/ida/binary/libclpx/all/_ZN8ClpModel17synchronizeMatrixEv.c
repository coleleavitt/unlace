void __fastcall ClpModel::synchronizeMatrix(ClpModel *this)
{
  __int64 v2; // rdi
  signed int v3; // eax
  unsigned int v4; // ebp
  unsigned int v5; // eax

  v2 = *((_QWORD *)this + 24);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    if ( *((_DWORD *)this + 26) >= v3 )
      v3 = *((_DWORD *)this + 26);
    v4 = v3;
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
    if ( *((_DWORD *)this + 27) >= (signed int)v5 )
      v5 = *((_DWORD *)this + 27);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 192LL))(*((_QWORD *)this + 24), v4, v5);
  }
}

