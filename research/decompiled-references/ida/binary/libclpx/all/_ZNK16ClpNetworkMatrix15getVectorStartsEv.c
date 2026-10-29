__int64 __fastcall ClpNetworkMatrix::getVectorStarts(ClpNetworkMatrix *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 11);
  if ( v1 )
    return *(_QWORD *)(v1 + 48);
  (**(void (***)(void))this)();
  return *(_QWORD *)(*((_QWORD *)this + 11) + 48LL);
}

