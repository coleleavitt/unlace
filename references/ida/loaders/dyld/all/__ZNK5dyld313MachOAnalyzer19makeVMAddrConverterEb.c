__int64 __usercall dyld3::MachOAnalyzer::makeVMAddrConverter@<X0>(
        dyld3::MachOAnalyzer *this@<X0>,
        char a2@<W1>,
        __int64 a3@<X8>)
{
  __int64 result; // x0

  *(_QWORD *)a3 = dyld3::MachOFile::preferredLoadAddress(this);
  *(_QWORD *)(a3 + 8) = dyld3::MachOLoaded::getSlide(this);
  result = dyld3::MachOFile::hasChainedFixups(this);
  if ( (_DWORD)result )
    result = dyld3::MachOAnalyzer::chainedPointerFormat(this);
  *(_WORD *)(a3 + 16) = result;
  *(_BYTE *)(a3 + 18) = a2;
  return result;
}
