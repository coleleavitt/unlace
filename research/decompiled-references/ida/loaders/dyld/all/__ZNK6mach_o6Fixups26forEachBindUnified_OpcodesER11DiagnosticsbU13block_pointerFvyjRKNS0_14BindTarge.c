void __fastcall mach_o::Fixups::forEachBindUnified_Opcodes(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  char v8; // w22
  _QWORD v9[8]; // [xsp+0h] [xbp-150h] BYREF
  _QWORD v10[8]; // [xsp+40h] [xbp-110h] BYREF
  char v11; // [xsp+80h] [xbp-D0h]
  __int64 v12; // [xsp+88h] [xbp-C8h] BYREF
  __int64 *v13; // [xsp+90h] [xbp-C0h]
  __int64 v14; // [xsp+98h] [xbp-B8h]
  __int64 (__fastcall *v15)(); // [xsp+A0h] [xbp-B0h]
  __int64 (__fastcall *v16)(); // [xsp+A8h] [xbp-A8h]
  __int64 v17; // [xsp+D0h] [xbp-80h] BYREF
  __int64 *v18; // [xsp+D8h] [xbp-78h]
  __int64 v19; // [xsp+E0h] [xbp-70h]
  int v20; // [xsp+E8h] [xbp-68h]

  v17 = 0;
  v18 = &v17;
  v19 = 0x2000000000LL;
  v20 = 0;
  v12 = 0;
  v13 = &v12;
  v14 = 0x4802000000LL;
  v15 = __Block_byref_object_copy__12;
  v16 = __Block_byref_object_dispose__12;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 0x40000000;
  v10[2] = ___ZNK6mach_o6Fixups26forEachBindUnified_OpcodesER11DiagnosticsbU13block_pointerFvyjRKNS0_14BindTargetInfoERbES8__block_invoke;
  v10[3] = &unk_97BC0;
  v10[6] = &v17;
  v10[7] = a1;
  v11 = a3;
  v10[4] = a4;
  v10[5] = &v12;
  if ( (mach_o::Fixups::forEachBind_OpcodesRegular() & 1) == 0 )
  {
    v8 = mach_o::Fixups::forEachBind_OpcodesLazy(a1, a2, v10);
    _Block_object_dispose(&v12, 8);
    _Block_object_dispose(&v17, 8);
    if ( (v8 & 1) != 0 )
      return;
    v17 = 0;
    v18 = &v17;
    v19 = 0x2000000000LL;
    v20 = 0;
    v12 = 0;
    v13 = &v12;
    v14 = 0x4802000000LL;
    v15 = __Block_byref_object_copy__12;
    v16 = __Block_byref_object_dispose__12;
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 0x40000000;
    v9[2] = ___ZNK6mach_o6Fixups26forEachBindUnified_OpcodesER11DiagnosticsbU13block_pointerFvyjRKNS0_14BindTargetInfoERbES8__block_invoke_2;
    v9[3] = &unk_97BE8;
    v9[6] = &v17;
    v9[7] = a1;
    v9[4] = a5;
    v9[5] = &v12;
    mach_o::Fixups::forEachBind_OpcodesWeak(a1, a2, v9, &__block_literal_global_2);
  }
  _Block_object_dispose(&v12, 8);
  _Block_object_dispose(&v17, 8);
}
