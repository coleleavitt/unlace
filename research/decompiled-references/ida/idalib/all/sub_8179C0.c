__int64 __fastcall sub_8179C0(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), 4, 1);
  if ( !result )
    *(_QWORD *)(a1 + 64) = "out of memory";
  return result;
}
