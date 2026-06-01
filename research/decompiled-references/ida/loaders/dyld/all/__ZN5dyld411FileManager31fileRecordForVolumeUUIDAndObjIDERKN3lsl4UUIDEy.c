double __usercall dyld4::FileManager::fileRecordForVolumeUUIDAndObjID@<D0>(
        dyld4::FileManager *this@<X0>,
        const UUID *a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X8>)
{
  double result; // d0

  *(_QWORD *)a4 = this;
  *(_QWORD *)(a4 + 8) = a3;
  *(_QWORD *)(a4 + 16) = 0;
  *(_OWORD *)(a4 + 24) = *(_OWORD *)a2;
  *(_QWORD *)(a4 + 48) = 0;
  *(_QWORD *)(a4 + 56) = 0;
  *(_QWORD *)(a4 + 40) = 0;
  *(_QWORD *)(a4 + 64) = 0x1FFFFFFFFLL;
  *(_WORD *)(a4 + 72) = 0;
  *(_BYTE *)(a4 + 74) = 1;
  *(_QWORD *)&result = 0x1FFFFFFFFLL;
  return result;
}
