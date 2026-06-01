const char *__fastcall sub_202F6B0(int a1)
{
  if ( a1 == 1 )
    goto LABEL_5;
  if ( a1 == 2 )
  {
    j__strlen("unnamed_addr");
    return "unnamed_addr";
  }
  if ( a1 )
  {
LABEL_5:
    j__strlen("local_unnamed_addr");
    return "local_unnamed_addr";
  }
  else
  {
    j__strlen(&byte_22F0C30);
    return &byte_22F0C30;
  }
}
