__int64 __fastcall ClpPlusMinusOneMatrix::getElements(ClpPlusMinusOneMatrix *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 11);
  if ( v1 )
    return *(_QWORD *)(v1 + 32);
  (**(void (***)(void))this)();
  return *(_QWORD *)(*((_QWORD *)this + 11) + 32LL);
}

