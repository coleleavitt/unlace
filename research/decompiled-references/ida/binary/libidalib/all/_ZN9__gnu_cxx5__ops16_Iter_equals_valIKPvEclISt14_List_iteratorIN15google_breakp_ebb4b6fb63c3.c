__int64 __fastcall __gnu_cxx::__ops::_Iter_equals_val<void * const>::operator()<std::_List_iterator<google_breakpad::AppMemory>>(
        __int64 **a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD v5[4]; // [rsp+0h] [rbp-20h] BYREF

  v5[1] = a1;
  v5[0] = a2;
  v2 = **a1;
  v3 = std::_List_iterator<google_breakpad::AppMemory>::operator*(v5);
  return google_breakpad::AppMemory::operator==(v3, v2);
}

