std::string *__fastcall sub_1C540(std::string *this, char *a2)
{
  size_t v2; // rdx

  v2 = 0;
  if ( a2 )
    v2 = strlen(a2);
  std::string::append(this, a2, v2);
  return this;
}

