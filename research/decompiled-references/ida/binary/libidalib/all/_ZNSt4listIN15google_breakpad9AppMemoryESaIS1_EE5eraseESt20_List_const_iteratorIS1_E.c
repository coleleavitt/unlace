__int64 __fastcall std::list<google_breakpad::AppMemory>::erase(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // [rsp+0h] [rbp-20h] BYREF
  __int64 v5; // [rsp+8h] [rbp-18h]
  __int64 v6; // [rsp+18h] [rbp-8h] BYREF

  v5 = a1;
  v4 = a2;
  std::_List_iterator<google_breakpad::AppMemory>::_List_iterator(&v6, *a2);
  v2 = std::_List_const_iterator<google_breakpad::AppMemory>::_M_const_cast(&v4);
  std::list<google_breakpad::AppMemory>::_M_erase(v5, v2);
  return v6;
}

