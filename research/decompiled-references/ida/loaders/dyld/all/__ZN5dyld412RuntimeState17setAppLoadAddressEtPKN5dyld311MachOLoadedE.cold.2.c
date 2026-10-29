void __noreturn dyld4::RuntimeState::setAppLoadAddress()
{
  __assert_rtn("setAppLoadAddress", "DyldRuntimeState.cpp", 218, "index < _processPrebuiltLoaderSet->loaderCount()");
}
