void __usercall metadata_visitor::SwiftVisitor::findTextSection(
        __int64 *__return_ptr a1@<X8>,
        metadata_visitor::SwiftVisitor *this@<X0>)
{
  __int64 v4; // x8
  __int64 *v5; // x8
  __int128 v6; // q1
  __int64 v7; // [xsp+40h] [xbp-60h] BYREF
  __int64 *v8; // [xsp+48h] [xbp-58h]
  __int64 v9; // [xsp+50h] [xbp-50h]
  __int64 (__fastcall *v10)(); // [xsp+58h] [xbp-48h]
  __int64 (__fastcall *v11)(); // [xsp+60h] [xbp-40h]
  char v12; // [xsp+68h] [xbp-38h]
  char v13; // [xsp+88h] [xbp-18h]

  v4 = *((_QWORD *)this + 1);
  v7 = 0;
  v8 = &v7;
  v9 = 0x5002000000LL;
  v10 = __Block_byref_object_copy__0;
  v11 = __Block_byref_object_dispose__0;
  v12 = 0;
  v13 = 0;
  dyld3::MachOFile::forEachSection(v4);
  v5 = v8;
  v6 = *(_OWORD *)(v8 + 7);
  *(_OWORD *)a1 = *(_OWORD *)(v8 + 5);
  *((_OWORD *)a1 + 1) = v6;
  a1[4] = v5[9];
  _Block_object_dispose(&v7, 8);
}
