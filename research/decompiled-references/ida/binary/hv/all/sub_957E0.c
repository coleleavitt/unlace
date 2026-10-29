FILE *sub_957E0()
{
  FILE *result; // rax

  result = tmpfile64();
  if ( !result )
  {
    sub_8F860(1u);
    return nullptr;
  }
  return result;
}

