unsigned __int64 sub_A4490()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  deserialize_dynamic_register_set();
  return v1 - __readfsqword(0x28u);
}

