// local variable allocation has failed, the output may be wrong!
void __cdecl _Block_object_dispose(const void *a1, const int a2)
{
  if ( a2 != 8 )
    dyld4::halt((dyld4 *)"_Block_object_dispose()", *(const char **)&a2);
}
