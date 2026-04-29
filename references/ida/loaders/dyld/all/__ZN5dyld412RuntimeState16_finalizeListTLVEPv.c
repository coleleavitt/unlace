__int64 __fastcall dyld4::RuntimeState::_finalizeListTLV(dyld4::RuntimeState *this, void *a2)
{
  _QWORD v5[5]; // [xsp+0h] [xbp-70h] BYREF
  _QWORD v6[5]; // [xsp+28h] [xbp-48h] BYREF

  v6[0] = _NSConcreteStackBlock;
  v6[1] = 0x40000000;
  v6[2] = ___ZN5dyld412RuntimeState16_finalizeListTLVEPv_block_invoke;
  v6[3] = &__block_descriptor_tmp_87;
  v6[4] = this;
  dyld4::RuntimeState::TLV_TerminatorList::reverseWalkChain(a2, v6);
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZN5dyld412RuntimeState16_finalizeListTLVEPv_block_invoke_2;
  v5[3] = &__block_descriptor_tmp_88;
  v5[4] = this;
  return dyld4::RuntimeState::TLV_TerminatorList::reverseWalkChain(a2, v5);
}
