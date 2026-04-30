__int64 __fastcall sub_17E3A0(char a1)
{
  __int64 (__fastcall *v1)(); // rsi

  v1 = sub_17FDF0;
  if ( !a1 )
    v1 = nullptr;
  return register_undo_handler(0, v1, 0, 1);
}
