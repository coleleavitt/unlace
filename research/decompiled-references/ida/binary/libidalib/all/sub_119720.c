__int64 __fastcall sub_119720(__int64 a1)
{
  void *v2; // rsi
  __int64 v3; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( (unsigned __int8)reg_str_get() )
    return a1;
  v2 = *(void **)a1;
  if ( *(_QWORD *)(a1 + 16) <= 0xBu )
  {
    v3 = qvector_reserve();
    *(_QWORD *)a1 = v3;
    v2 = (void *)v3;
  }
  *(_QWORD *)(a1 + 8) = 12;
  qmemcpy(v2, "notepad.exe", 11);
  *(_BYTE *)(*(_QWORD *)a1 + 11LL) = 0;
  return a1;
}

