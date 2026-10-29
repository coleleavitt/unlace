__int64 __fastcall sub_2ECBD0(__int64 a1, void (__fastcall ***a2)(_QWORD))
{
  void (__fastcall ***v2)(_QWORD); // r12
  __int64 result; // rax

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 248);
  if ( a2 != v2 )
  {
    if ( v2 )
    {
      (**v2)(*(_QWORD *)(a1 + 248));
      result = sub_186B220(v2);
    }
    *(_QWORD *)(a1 + 248) = a2;
  }
  *(_BYTE *)(a1 + 256) = a2 != nullptr;
  return result;
}

