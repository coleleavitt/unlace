// attributes: thunk
void __fastcall dyld4::JustInTimeLoader::runInitializers(dyld4::Loader *this, dyld4::RuntimeState *a2)
{
  dyld4::Loader::findAndRunAllInitializers(this, a2);
}
