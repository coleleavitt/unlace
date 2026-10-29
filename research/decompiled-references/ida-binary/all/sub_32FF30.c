__int64 __fastcall sub_32FF30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12

  v2 = sub_32FE70(a1, a2, -1);
  if ( (unsigned int)sub_32F3B0(
                       a1,
                       v2,
                       (__int64)"ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to data?",
                       a2,
                       nullptr,
                       nullptr) == 1 )
    return create_data(a1, a2, v2, -1);
  else
    return 0;
}
